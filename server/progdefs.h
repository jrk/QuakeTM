/*
QuakeTM
Transactional implementation of the original Quake game
Copyright (C) 2008 Barcelona Supercomputing Center
Author: Vladimir Gajinov
*/

// GAJA:
// n* are the int fields added for cache padding in cache granularity conflic management STM systems

/* file generated by qcc, do not modify */
#ifndef PROGDEFS
#define PROGDEFS


typedef struct
{	int	pad[28];
	int	self;
	int	other;
	int	world;
	float	time;
	float	frametime;
	int	newmis;
	float	force_retouch;
	string_t	mapname;
	float	serverflags;
	float	total_secrets;
	float	total_monsters;
	float	found_secrets;
	float	killed_monsters;
	float	parm1;
	float	parm2;
	float	parm3;
	float	parm4;
	float	parm5;
	float	parm6;
	float	parm7;
	float	parm8;
	float	parm9;
	float	parm10;
	float	parm11;
	float	parm12;
	float	parm13;
	float	parm14;
	float	parm15;
	float	parm16;
	vec3_t	v_forward;
	vec3_t	v_up;
	vec3_t	v_right;
	float	trace_allsolid;
	float	trace_startsolid;
	float	trace_fraction;
	vec3_t	trace_endpos;
	vec3_t	trace_plane_normal;
	float	trace_plane_dist;
	int	trace_ent;
	float	trace_inopen;
	float	trace_inwater;
	int	msg_entity;
	func_t	main;
	func_t	StartFrame;
	func_t	PlayerPreThink;
	func_t	PlayerPostThink;
	func_t	ClientKill;
	func_t	ClientConnect;
	func_t	PutClientInServer;
	func_t	ClientDisconnect;
	func_t	SetNewParms;
	func_t	SetChangeParms;
	func_t	respawn;
	func_t	TraceRespawn;
} globalvars_t;

typedef struct
{
	float	modelindex;
	vec3_t	n1;
	vec3_t	n2;
	vec3_t	n3;
	vec3_t	n4;
	vec3_t	n5;
	vec3_t	n6;
	vec3_t	absmin;
	vec3_t	absmax;
	vec3_t	n7;
	vec3_t	n8;
	vec3_t	n10;
	vec3_t	n11;
	vec3_t	n12;
	vec3_t	n13;
	float	ltime;
	float	lastruntime;
	vec3_t	n14;
	vec3_t	n15;
	vec3_t	n16;
	vec3_t	n17;
	vec3_t	n18;
	vec3_t	n19;
	float	movetype;
	vec3_t	n20;
	vec3_t	n21;
	vec3_t	n22;
	vec3_t	n23;
	vec3_t	n24;
	vec3_t	n25;
	float	solid;
	vec3_t	n26;
	vec3_t	n27;
	vec3_t	n28;
	vec3_t	n29;
	vec3_t	n30;
	vec3_t	n31;
	vec3_t	origin;
	vec3_t	oldorigin;
	vec3_t	velocity;
	vec3_t	n32;
	vec3_t	n33;
	vec3_t	n34;
	vec3_t	n35;
	vec3_t	n36;
	vec3_t	n37;
	vec3_t	angles;
	vec3_t	avelocity;
	vec3_t	n38;
	vec3_t	n39;
	vec3_t	n40;
	vec3_t	n41;
	vec3_t	n42;
	vec3_t	n43;
	string_t	classname;
	string_t	model;
	float	frame;
	float	skin;
	float	effects;
	vec3_t	n44;
	vec3_t	n45;
	vec3_t	n46;
	vec3_t	n47;
	vec3_t	n48;
	vec3_t	n49;
	vec3_t	mins;
	vec3_t	maxs;
	vec3_t	size;
	vec3_t	n50;
	vec3_t	n51;
	vec3_t	n52;
	vec3_t	n53;
	vec3_t	n54;
	vec3_t	n55;
	func_t	touch;
	func_t	use;
	func_t	think;
	func_t	blocked;
	float	nextthink;
	int	groundentity;
	float	health;
	float	frags;
	float	weapon;
	string_t	weaponmodel;
	float	weaponframe;
	float	currentammo;
	float	ammo_shells;
	float	ammo_nails;
	float	ammo_rockets;
	float	ammo_cells;
	float	items;
	float	takedamage;
	int	chain;
	float	deadflag;
	vec3_t	view_ofs;
	float	button0;
	float	button1;
	float	button2;
	float	impulse;
	vec3_t	n56;
	vec3_t	n57;
	vec3_t	n58;
	vec3_t	n59;
	vec3_t	n60;
	vec3_t	n61;
	float	fixangle;
	vec3_t	v_angle;
	vec3_t	n62;
	vec3_t	n63;
	vec3_t	n64;
	vec3_t	n65;
	vec3_t	n66;
	vec3_t	n67;
	string_t	netname;
	int	enemy;
	float	flags;
	float	colormap;
	float	team;
	float	max_health;
	float	teleport_time;
	float	armortype;
	float	armorvalue;
	float	waterlevel;
	float	watertype;
	float	ideal_yaw;
	float	yaw_speed;
	int	aiment;
	int	goalentity;
	float	spawnflags;
	string_t	target;
	string_t	targetname;
	float	dmg_take;
	float	dmg_save;
	int	dmg_inflictor;
	int	owner;
	vec3_t	movedir;
	string_t	message;
	float	sounds;
	string_t	noise;
	string_t	noise1;
	string_t	noise2;
	string_t	noise3;
	float	spawnspot;
	float	send_spawn_msg;
} entvars_t;

#define PROGHEADER_CRC 45129


#endif
