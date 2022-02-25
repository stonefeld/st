/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#3b4252",
	"#bf616a",
	"#a3be8c",
	"#ebcb8b",
	"#81a1c1",
	"#b48ead",
	"#88c0d0",
	"#e5e8f0",

	/* 8 bright colors */
	"#4c566a",
	"#bf616a",
	"#a3be8c",
	"#ebcb8b",
	"#81a1c1",
	"#b48ead",
	"#8fbcbb",
	"#eceff4",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#d8dee9",
	/* "#2e3440", */
	"#171421",
};
