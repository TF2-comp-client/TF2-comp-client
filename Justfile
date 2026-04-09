build:
	cd src/ && ./buildallprojects release

run:
	cd game/ && ./mod_tf_linux64

fix_compile_commands:
	cd src && sed 's?"directory": "\."?"directory": "'$(pwd)'"?g' -i compile_commands.json
