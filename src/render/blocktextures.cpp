/*
 * blocktextures.cpp
 *
 *  Created on: 12.10.2013
 *      Author: moritz
 */

#include "blocktextures.h"

#include <iostream>
#include <boost/filesystem.hpp>

namespace fs = boost::filesystem;

namespace mapcrafter {
namespace render {

// generated code by texture_code.py
BlockTextures::BlockTextures()
		: ANVIL_BASE("anvil_base"), ANVIL_TOP_DAMAGED_0("anvil_top_damaged_0"), ANVIL_TOP_DAMAGED_1(
				"anvil_top_damaged_1"), ANVIL_TOP_DAMAGED_2("anvil_top_damaged_2"), BEACON(
				"beacon"), BED_FEET_END("bed_feet_end"), BED_FEET_SIDE("bed_feet_side"), BED_FEET_TOP(
				"bed_feet_top"), BED_HEAD_END("bed_head_end"), BED_HEAD_SIDE(
				"bed_head_side"), BED_HEAD_TOP("bed_head_top"), BEDROCK("bedrock"), BOOKSHELF(
				"bookshelf"), BREWING_STAND("brewing_stand"), BREWING_STAND_BASE(
				"brewing_stand_base"), BRICK("brick"), CACTUS_BOTTOM("cactus_bottom"), CACTUS_SIDE(
				"cactus_side"), CACTUS_TOP("cactus_top"), CAKE_BOTTOM("cake_bottom"), CAKE_INNER(
				"cake_inner"), CAKE_SIDE("cake_side"), CAKE_TOP("cake_top"), CARROTS_STAGE_0(
				"carrots_stage_0"), CARROTS_STAGE_1("carrots_stage_1"), CARROTS_STAGE_2(
				"carrots_stage_2"), CARROTS_STAGE_3("carrots_stage_3"), CAULDRON_BOTTOM(
				"cauldron_bottom"), CAULDRON_INNER("cauldron_inner"), CAULDRON_SIDE(
				"cauldron_side"), CAULDRON_TOP("cauldron_top"), CLAY("clay"), COAL_BLOCK(
				"coal_block"), COAL_ORE("coal_ore"), COBBLESTONE("cobblestone"), COBBLESTONE_MOSSY(
				"cobblestone_mossy"), COCOA_STAGE_0("cocoa_stage_0"), COCOA_STAGE_1(
				"cocoa_stage_1"), COCOA_STAGE_2("cocoa_stage_2"), COMMAND_BLOCK(
				"command_block"), COMPARATOR_OFF("comparator_off"), COMPARATOR_ON(
				"comparator_on"), CRAFTING_TABLE_FRONT("crafting_table_front"), CRAFTING_TABLE_SIDE(
				"crafting_table_side"), CRAFTING_TABLE_TOP("crafting_table_top"), DAYLIGHT_DETECTOR_SIDE(
				"daylight_detector_side"), DAYLIGHT_DETECTOR_TOP("daylight_detector_top"), DEADBUSH(
				"deadbush"), DESTROY_STAGE_0("destroy_stage_0"), DESTROY_STAGE_1(
				"destroy_stage_1"), DESTROY_STAGE_2("destroy_stage_2"), DESTROY_STAGE_3(
				"destroy_stage_3"), DESTROY_STAGE_4("destroy_stage_4"), DESTROY_STAGE_5(
				"destroy_stage_5"), DESTROY_STAGE_6("destroy_stage_6"), DESTROY_STAGE_7(
				"destroy_stage_7"), DESTROY_STAGE_8("destroy_stage_8"), DESTROY_STAGE_9(
				"destroy_stage_9"), DIAMOND_BLOCK("diamond_block"), DIAMOND_ORE(
				"diamond_ore"), DIRT("dirt"), DIRT_PODZOL_SIDE("dirt_podzol_side"), DIRT_PODZOL_TOP(
				"dirt_podzol_top"), DISPENSER_FRONT_HORIZONTAL(
				"dispenser_front_horizontal"), DISPENSER_FRONT_VERTICAL(
				"dispenser_front_vertical"), DOOR_IRON_LOWER("door_iron_lower"), DOOR_IRON_UPPER(
				"door_iron_upper"), DOOR_WOOD_LOWER("door_wood_lower"), DOOR_WOOD_UPPER(
				"door_wood_upper"), DOUBLE_PLANT_FERN_BOTTOM("doublePlant_fern_bottom"), DOUBLE_PLANT_FERN_TOP(
				"doublePlant_fern_top"), DOUBLE_PLANT_GRASS_BOTTOM(
				"doublePlant_grass_bottom"), DOUBLE_PLANT_GRASS_TOP(
				"doublePlant_grass_top"), DOUBLE_PLANT_PAEONIA_BOTTOM(
				"doublePlant_paeonia_bottom"), DOUBLE_PLANT_PAEONIA_TOP(
				"doublePlant_paeonia_top"), DOUBLE_PLANT_ROSE_BOTTOM(
				"doublePlant_rose_bottom"), DOUBLE_PLANT_ROSE_TOP("doublePlant_rose_top"), DOUBLE_PLANT_SUNFLOWER_BACK(
				"doublePlant_sunflower_back"), DOUBLE_PLANT_SUNFLOWER_BOTTOM(
				"doublePlant_sunflower_bottom"), DOUBLE_PLANT_SUNFLOWER_FRONT(
				"doublePlant_sunflower_front"), DOUBLE_PLANT_SUNFLOWER_TOP(
				"doublePlant_sunflower_top"), DOUBLE_PLANT_SYRINGA_BOTTOM(
				"doublePlant_syringa_bottom"), DOUBLE_PLANT_SYRINGA_TOP(
				"doublePlant_syringa_top"), DRAGON_EGG("dragon_egg"), DROPPER_FRONT_HORIZONTAL(
				"dropper_front_horizontal"), DROPPER_FRONT_VERTICAL(
				"dropper_front_vertical"), EMERALD_BLOCK("emerald_block"), EMERALD_ORE(
				"emerald_ore"), ENCHANTING_TABLE_BOTTOM("enchanting_table_bottom"), ENCHANTING_TABLE_SIDE(
				"enchanting_table_side"), ENCHANTING_TABLE_TOP("enchanting_table_top"), END_STONE(
				"end_stone"), ENDFRAME_EYE("endframe_eye"), ENDFRAME_SIDE(
				"endframe_side"), ENDFRAME_TOP("endframe_top"), FARMLAND_DRY(
				"farmland_dry"), FARMLAND_WET("farmland_wet"), FERN("fern"), FIRE_LAYER_0(
				"fire_layer_0"), FIRE_LAYER_1("fire_layer_1"), FLOWER_ALLIUM(
				"flower_allium"), FLOWER_BLUE_ORCHID("flower_blue_orchid"), FLOWER_DANDELION(
				"flower_dandelion"), FLOWER_HOUSTONIA("flower_houstonia"), FLOWER_OXEYE_DAISY(
				"flower_oxeye_daisy"), FLOWER_PAEONIA("flower_paeonia"), FLOWER_POT(
				"flower_pot"), FLOWER_ROSE("flower_rose"), FLOWER_TULIP_ORANGE(
				"flower_tulip_orange"), FLOWER_TULIP_PINK("flower_tulip_pink"), FLOWER_TULIP_RED(
				"flower_tulip_red"), FLOWER_TULIP_WHITE("flower_tulip_white"), FURNACE_FRONT_OFF(
				"furnace_front_off"), FURNACE_FRONT_ON("furnace_front_on"), FURNACE_SIDE(
				"furnace_side"), FURNACE_TOP("furnace_top"), GLASS("glass"), GLASS_PANE_TOP(
				"glass_pane_top"), GLOWSTONE("glowstone"), GOLD_BLOCK("gold_block"), GOLD_ORE(
				"gold_ore"), GRASS_SIDE("grass_side"), GRASS_SIDE_OVERLAY(
				"grass_side_overlay"), GRASS_SIDE_SNOWED("grass_side_snowed"), GRASS_TOP(
				"grass_top"), GRAVEL("gravel"), HARDENED_CLAY("hardened_clay"), HARDENED_CLAY_STAINED_BLACK(
				"hardened_clay_stained_black"), HARDENED_CLAY_STAINED_BLUE(
				"hardened_clay_stained_blue"), HARDENED_CLAY_STAINED_BROWN(
				"hardened_clay_stained_brown"), HARDENED_CLAY_STAINED_CYAN(
				"hardened_clay_stained_cyan"), HARDENED_CLAY_STAINED_GRAY(
				"hardened_clay_stained_gray"), HARDENED_CLAY_STAINED_GREEN(
				"hardened_clay_stained_green"), HARDENED_CLAY_STAINED_LIGHT_BLUE(
				"hardened_clay_stained_light_blue"), HARDENED_CLAY_STAINED_LIME(
				"hardened_clay_stained_lime"), HARDENED_CLAY_STAINED_MAGENTA(
				"hardened_clay_stained_magenta"), HARDENED_CLAY_STAINED_ORANGE(
				"hardened_clay_stained_orange"), HARDENED_CLAY_STAINED_PINK(
				"hardened_clay_stained_pink"), HARDENED_CLAY_STAINED_PURPLE(
				"hardened_clay_stained_purple"), HARDENED_CLAY_STAINED_RED(
				"hardened_clay_stained_red"), HARDENED_CLAY_STAINED_SILVER(
				"hardened_clay_stained_silver"), HARDENED_CLAY_STAINED_WHITE(
				"hardened_clay_stained_white"), HARDENED_CLAY_STAINED_YELLOW(
				"hardened_clay_stained_yellow"), HAY_BLOCK_SIDE("hay_block_side"), HAY_BLOCK_TOP(
				"hay_block_top"), HOPPER_INSIDE("hopper_inside"), HOPPER_OUTSIDE(
				"hopper_outside"), HOPPER_TOP("hopper_top"), ICE("ice"), ICE_PACKED(
				"ice_packed"), IRON_BARS("iron_bars"), IRON_BLOCK("iron_block"), IRON_ORE(
				"iron_ore"), ITEMFRAME_BACKGROUND("itemframe_background"), JUKEBOX_SIDE(
				"jukebox_side"), JUKEBOX_TOP("jukebox_top"), LADDER("ladder"), LAPIS_BLOCK(
				"lapis_block"), LAPIS_ORE("lapis_ore"), LAVA_FLOW("lava_flow"), LAVA_STILL(
				"lava_still"), LEAVES_BIRCH("leaves_birch"), LEAVES_BIRCH_OPAQUE(
				"leaves_birch_opaque"), LEAVES_JUNGLE("leaves_jungle"), LEAVES_JUNGLE_OPAQUE(
				"leaves_jungle_opaque"), LEAVES_OAK("leaves_oak"), LEAVES_OAK_OPAQUE(
				"leaves_oak_opaque"), LEAVES_SPRUCE("leaves_spruce"), LEAVES_SPRUCE_OPAQUE(
				"leaves_spruce_opaque"), LEVER("lever"), LOG_BIRCH("log_birch"), LOG_BIRCH_TOP(
				"log_birch_top"), LOG_JUNGLE("log_jungle"), LOG_JUNGLE_TOP(
				"log_jungle_top"), LOG_OAK("log_oak"), LOG_OAK_TOP("log_oak_top"), LOG_SPRUCE(
				"log_spruce"), LOG_SPRUCE_TOP("log_spruce_top"), MELON_SIDE("melon_side"), MELON_STEM_CONNECTED(
				"melon_stem_connected"), MELON_STEM_DISCONNECTED(
				"melon_stem_disconnected"), MELON_TOP("melon_top"), MOB_SPAWNER(
				"mob_spawner"), MUSHROOM_BLOCK_INSIDE("mushroom_block_inside"), MUSHROOM_BLOCK_SKIN_BROWN(
				"mushroom_block_skin_brown"), MUSHROOM_BLOCK_SKIN_RED(
				"mushroom_block_skin_red"), MUSHROOM_BLOCK_SKIN_STEM(
				"mushroom_block_skin_stem"), MUSHROOM_BROWN("mushroom_brown"), MUSHROOM_RED(
				"mushroom_red"), MYCELIUM_SIDE("mycelium_side"), MYCELIUM_TOP(
				"mycelium_top"), NETHER_BRICK("nether_brick"), NETHER_WART_STAGE_0(
				"nether_wart_stage_0"), NETHER_WART_STAGE_1("nether_wart_stage_1"), NETHER_WART_STAGE_2(
				"nether_wart_stage_2"), NETHERRACK("netherrack"), NOTEBLOCK("noteblock"), OBSIDIAN(
				"obsidian"), PISTON_BOTTOM("piston_bottom"), PISTON_INNER("piston_inner"), PISTON_SIDE(
				"piston_side"), PISTON_TOP_NORMAL("piston_top_normal"), PISTON_TOP_STICKY(
				"piston_top_sticky"), PLANKS_BIRCH("planks_birch"), PLANKS_JUNGLE(
				"planks_jungle"), PLANKS_OAK("planks_oak"), PLANKS_SPRUCE(
				"planks_spruce"), PORTAL("portal"), POTATOES_STAGE_0("potatoes_stage_0"), POTATOES_STAGE_1(
				"potatoes_stage_1"), POTATOES_STAGE_2("potatoes_stage_2"), POTATOES_STAGE_3(
				"potatoes_stage_3"), PUMPKIN_FACE_OFF("pumpkin_face_off"), PUMPKIN_FACE_ON(
				"pumpkin_face_on"), PUMPKIN_SIDE("pumpkin_side"), PUMPKIN_STEM_CONNECTED(
				"pumpkin_stem_connected"), PUMPKIN_STEM_DISCONNECTED(
				"pumpkin_stem_disconnected"), PUMPKIN_TOP("pumpkin_top"), QUARTZ_BLOCK_BOTTOM(
				"quartz_block_bottom"), QUARTZ_BLOCK_CHISELED("quartz_block_chiseled"), QUARTZ_BLOCK_CHISELED_TOP(
				"quartz_block_chiseled_top"), QUARTZ_BLOCK_LINES("quartz_block_lines"), QUARTZ_BLOCK_LINES_TOP(
				"quartz_block_lines_top"), QUARTZ_BLOCK_SIDE("quartz_block_side"), QUARTZ_BLOCK_TOP(
				"quartz_block_top"), QUARTZ_ORE("quartz_ore"), RAIL_ACTIVATOR(
				"rail_activator"), RAIL_ACTIVATOR_POWERED("rail_activator_powered"), RAIL_DETECTOR(
				"rail_detector"), RAIL_DETECTOR_POWERED("rail_detector_powered"), RAIL_GOLDEN(
				"rail_golden"), RAIL_GOLDEN_POWERED("rail_golden_powered"), RAIL_NORMAL(
				"rail_normal"), RAIL_NORMAL_TURNED("rail_normal_turned"), REDSTONE_BLOCK(
				"redstone_block"), REDSTONE_DUST_CROSS("redstone_dust_cross"), REDSTONE_DUST_CROSS_OVERLAY(
				"redstone_dust_cross_overlay"), REDSTONE_DUST_LINE("redstone_dust_line"), REDSTONE_DUST_LINE_OVERLAY(
				"redstone_dust_line_overlay"), REDSTONE_LAMP_OFF("redstone_lamp_off"), REDSTONE_LAMP_ON(
				"redstone_lamp_on"), REDSTONE_ORE("redstone_ore"), REDSTONE_TORCH_OFF(
				"redstone_torch_off"), REDSTONE_TORCH_ON("redstone_torch_on"), REEDS(
				"reeds"), REPEATER_OFF("repeater_off"), REPEATER_ON("repeater_on"), SAND(
				"sand"), SANDSTONE_BOTTOM("sandstone_bottom"), SANDSTONE_CARVED(
				"sandstone_carved"), SANDSTONE_NORMAL("sandstone_normal"), SANDSTONE_SMOOTH(
				"sandstone_smooth"), SANDSTONE_TOP("sandstone_top"), SAPLING_BIRCH(
				"sapling_birch"), SAPLING_JUNGLE("sapling_jungle"), SAPLING_OAK(
				"sapling_oak"), SAPLING_SPRUCE("sapling_spruce"), SNOW("snow"), SOUL_SAND(
				"soul_sand"), SPONGE("sponge"), STONE("stone"), STONE_SLAB_SIDE(
				"stone_slab_side"), STONE_SLAB_TOP("stone_slab_top"), STONEBRICK(
				"stonebrick"), STONEBRICK_CARVED("stonebrick_carved"), STONEBRICK_CRACKED(
				"stonebrick_cracked"), STONEBRICK_MOSSY("stonebrick_mossy"), TALLGRASS(
				"tallgrass"), TNT_BOTTOM("tnt_bottom"), TNT_SIDE("tnt_side"), TNT_TOP(
				"tnt_top"), TORCH_ON("torch_on"), TRAPDOOR("trapdoor"), TRIP_WIRE(
				"trip_wire"), TRIP_WIRE_SOURCE("trip_wire_source"), VINE("vine"), WATER_FLOW(
				"water_flow"), WATER_STILL("water_still"), WATERLILY("waterlily"), WEB(
				"web"), WHEAT_STAGE_0("wheat_stage_0"), WHEAT_STAGE_1("wheat_stage_1"), WHEAT_STAGE_2(
				"wheat_stage_2"), WHEAT_STAGE_3("wheat_stage_3"), WHEAT_STAGE_4(
				"wheat_stage_4"), WHEAT_STAGE_5("wheat_stage_5"), WHEAT_STAGE_6(
				"wheat_stage_6"), WHEAT_STAGE_7("wheat_stage_7"), WOOL_COLORED_BLACK(
				"wool_colored_black"), WOOL_COLORED_BLUE("wool_colored_blue"), WOOL_COLORED_BROWN(
				"wool_colored_brown"), WOOL_COLORED_CYAN("wool_colored_cyan"), WOOL_COLORED_GRAY(
				"wool_colored_gray"), WOOL_COLORED_GREEN("wool_colored_green"), WOOL_COLORED_LIGHT_BLUE(
				"wool_colored_light_blue"), WOOL_COLORED_LIME("wool_colored_lime"), WOOL_COLORED_MAGENTA(
				"wool_colored_magenta"), WOOL_COLORED_ORANGE("wool_colored_orange"), WOOL_COLORED_PINK(
				"wool_colored_pink"), WOOL_COLORED_PURPLE("wool_colored_purple"), WOOL_COLORED_RED(
				"wool_colored_red"), WOOL_COLORED_SILVER("wool_colored_silver"), WOOL_COLORED_WHITE(
				"wool_colored_white"), WOOL_COLORED_YELLOW("wool_colored_yellow"), textures(
				{ &ANVIL_BASE, &ANVIL_TOP_DAMAGED_0, &ANVIL_TOP_DAMAGED_1,
						&ANVIL_TOP_DAMAGED_2, &BEACON, &BED_FEET_END, &BED_FEET_SIDE,
						&BED_FEET_TOP, &BED_HEAD_END, &BED_HEAD_SIDE, &BED_HEAD_TOP,
						&BEDROCK, &BOOKSHELF, &BREWING_STAND, &BREWING_STAND_BASE, &BRICK,
						&CACTUS_BOTTOM, &CACTUS_SIDE, &CACTUS_TOP, &CAKE_BOTTOM,
						&CAKE_INNER, &CAKE_SIDE, &CAKE_TOP, &CARROTS_STAGE_0,
						&CARROTS_STAGE_1, &CARROTS_STAGE_2, &CARROTS_STAGE_3,
						&CAULDRON_BOTTOM, &CAULDRON_INNER, &CAULDRON_SIDE, &CAULDRON_TOP,
						&CLAY, &COAL_BLOCK, &COAL_ORE, &COBBLESTONE, &COBBLESTONE_MOSSY,
						&COCOA_STAGE_0, &COCOA_STAGE_1, &COCOA_STAGE_2, &COMMAND_BLOCK,
						&COMPARATOR_OFF, &COMPARATOR_ON, &CRAFTING_TABLE_FRONT,
						&CRAFTING_TABLE_SIDE, &CRAFTING_TABLE_TOP,
						&DAYLIGHT_DETECTOR_SIDE, &DAYLIGHT_DETECTOR_TOP, &DEADBUSH,
						&DESTROY_STAGE_0, &DESTROY_STAGE_1, &DESTROY_STAGE_2,
						&DESTROY_STAGE_3, &DESTROY_STAGE_4, &DESTROY_STAGE_5,
						&DESTROY_STAGE_6, &DESTROY_STAGE_7, &DESTROY_STAGE_8,
						&DESTROY_STAGE_9, &DIAMOND_BLOCK, &DIAMOND_ORE, &DIRT,
						&DIRT_PODZOL_SIDE, &DIRT_PODZOL_TOP, &DISPENSER_FRONT_HORIZONTAL,
						&DISPENSER_FRONT_VERTICAL, &DOOR_IRON_LOWER, &DOOR_IRON_UPPER,
						&DOOR_WOOD_LOWER, &DOOR_WOOD_UPPER, &DOUBLE_PLANT_FERN_BOTTOM,
						&DOUBLE_PLANT_FERN_TOP, &DOUBLE_PLANT_GRASS_BOTTOM,
						&DOUBLE_PLANT_GRASS_TOP, &DOUBLE_PLANT_PAEONIA_BOTTOM,
						&DOUBLE_PLANT_PAEONIA_TOP, &DOUBLE_PLANT_ROSE_BOTTOM,
						&DOUBLE_PLANT_ROSE_TOP, &DOUBLE_PLANT_SUNFLOWER_BACK,
						&DOUBLE_PLANT_SUNFLOWER_BOTTOM, &DOUBLE_PLANT_SUNFLOWER_FRONT,
						&DOUBLE_PLANT_SUNFLOWER_TOP, &DOUBLE_PLANT_SYRINGA_BOTTOM,
						&DOUBLE_PLANT_SYRINGA_TOP, &DRAGON_EGG, &DROPPER_FRONT_HORIZONTAL,
						&DROPPER_FRONT_VERTICAL, &EMERALD_BLOCK, &EMERALD_ORE,
						&ENCHANTING_TABLE_BOTTOM, &ENCHANTING_TABLE_SIDE,
						&ENCHANTING_TABLE_TOP, &END_STONE, &ENDFRAME_EYE, &ENDFRAME_SIDE,
						&ENDFRAME_TOP, &FARMLAND_DRY, &FARMLAND_WET, &FERN, &FIRE_LAYER_0,
						&FIRE_LAYER_1, &FLOWER_ALLIUM, &FLOWER_BLUE_ORCHID,
						&FLOWER_DANDELION, &FLOWER_HOUSTONIA, &FLOWER_OXEYE_DAISY,
						&FLOWER_PAEONIA, &FLOWER_POT, &FLOWER_ROSE, &FLOWER_TULIP_ORANGE,
						&FLOWER_TULIP_PINK, &FLOWER_TULIP_RED, &FLOWER_TULIP_WHITE,
						&FURNACE_FRONT_OFF, &FURNACE_FRONT_ON, &FURNACE_SIDE,
						&FURNACE_TOP, &GLASS, &GLASS_PANE_TOP, &GLOWSTONE, &GOLD_BLOCK,
						&GOLD_ORE, &GRASS_SIDE, &GRASS_SIDE_OVERLAY, &GRASS_SIDE_SNOWED,
						&GRASS_TOP, &GRAVEL, &HARDENED_CLAY, &HARDENED_CLAY_STAINED_BLACK,
						&HARDENED_CLAY_STAINED_BLUE, &HARDENED_CLAY_STAINED_BROWN,
						&HARDENED_CLAY_STAINED_CYAN, &HARDENED_CLAY_STAINED_GRAY,
						&HARDENED_CLAY_STAINED_GREEN, &HARDENED_CLAY_STAINED_LIGHT_BLUE,
						&HARDENED_CLAY_STAINED_LIME, &HARDENED_CLAY_STAINED_MAGENTA,
						&HARDENED_CLAY_STAINED_ORANGE, &HARDENED_CLAY_STAINED_PINK,
						&HARDENED_CLAY_STAINED_PURPLE, &HARDENED_CLAY_STAINED_RED,
						&HARDENED_CLAY_STAINED_SILVER, &HARDENED_CLAY_STAINED_WHITE,
						&HARDENED_CLAY_STAINED_YELLOW, &HAY_BLOCK_SIDE, &HAY_BLOCK_TOP,
						&HOPPER_INSIDE, &HOPPER_OUTSIDE, &HOPPER_TOP, &ICE, &ICE_PACKED,
						&IRON_BARS, &IRON_BLOCK, &IRON_ORE, &ITEMFRAME_BACKGROUND,
						&JUKEBOX_SIDE, &JUKEBOX_TOP, &LADDER, &LAPIS_BLOCK, &LAPIS_ORE,
						&LAVA_FLOW, &LAVA_STILL, &LEAVES_BIRCH, &LEAVES_BIRCH_OPAQUE,
						&LEAVES_JUNGLE, &LEAVES_JUNGLE_OPAQUE, &LEAVES_OAK,
						&LEAVES_OAK_OPAQUE, &LEAVES_SPRUCE, &LEAVES_SPRUCE_OPAQUE, &LEVER,
						&LOG_BIRCH, &LOG_BIRCH_TOP, &LOG_JUNGLE, &LOG_JUNGLE_TOP,
						&LOG_OAK, &LOG_OAK_TOP, &LOG_SPRUCE, &LOG_SPRUCE_TOP, &MELON_SIDE,
						&MELON_STEM_CONNECTED, &MELON_STEM_DISCONNECTED, &MELON_TOP,
						&MOB_SPAWNER, &MUSHROOM_BLOCK_INSIDE, &MUSHROOM_BLOCK_SKIN_BROWN,
						&MUSHROOM_BLOCK_SKIN_RED, &MUSHROOM_BLOCK_SKIN_STEM,
						&MUSHROOM_BROWN, &MUSHROOM_RED, &MYCELIUM_SIDE, &MYCELIUM_TOP,
						&NETHER_BRICK, &NETHER_WART_STAGE_0, &NETHER_WART_STAGE_1,
						&NETHER_WART_STAGE_2, &NETHERRACK, &NOTEBLOCK, &OBSIDIAN,
						&PISTON_BOTTOM, &PISTON_INNER, &PISTON_SIDE, &PISTON_TOP_NORMAL,
						&PISTON_TOP_STICKY, &PLANKS_BIRCH, &PLANKS_JUNGLE, &PLANKS_OAK,
						&PLANKS_SPRUCE, &PORTAL, &POTATOES_STAGE_0, &POTATOES_STAGE_1,
						&POTATOES_STAGE_2, &POTATOES_STAGE_3, &PUMPKIN_FACE_OFF,
						&PUMPKIN_FACE_ON, &PUMPKIN_SIDE, &PUMPKIN_STEM_CONNECTED,
						&PUMPKIN_STEM_DISCONNECTED, &PUMPKIN_TOP, &QUARTZ_BLOCK_BOTTOM,
						&QUARTZ_BLOCK_CHISELED, &QUARTZ_BLOCK_CHISELED_TOP,
						&QUARTZ_BLOCK_LINES, &QUARTZ_BLOCK_LINES_TOP, &QUARTZ_BLOCK_SIDE,
						&QUARTZ_BLOCK_TOP, &QUARTZ_ORE, &RAIL_ACTIVATOR,
						&RAIL_ACTIVATOR_POWERED, &RAIL_DETECTOR, &RAIL_DETECTOR_POWERED,
						&RAIL_GOLDEN, &RAIL_GOLDEN_POWERED, &RAIL_NORMAL,
						&RAIL_NORMAL_TURNED, &REDSTONE_BLOCK, &REDSTONE_DUST_CROSS,
						&REDSTONE_DUST_CROSS_OVERLAY, &REDSTONE_DUST_LINE,
						&REDSTONE_DUST_LINE_OVERLAY, &REDSTONE_LAMP_OFF,
						&REDSTONE_LAMP_ON, &REDSTONE_ORE, &REDSTONE_TORCH_OFF,
						&REDSTONE_TORCH_ON, &REEDS, &REPEATER_OFF, &REPEATER_ON, &SAND,
						&SANDSTONE_BOTTOM, &SANDSTONE_CARVED, &SANDSTONE_NORMAL,
						&SANDSTONE_SMOOTH, &SANDSTONE_TOP, &SAPLING_BIRCH,
						&SAPLING_JUNGLE, &SAPLING_OAK, &SAPLING_SPRUCE, &SNOW, &SOUL_SAND,
						&SPONGE, &STONE, &STONE_SLAB_SIDE, &STONE_SLAB_TOP, &STONEBRICK,
						&STONEBRICK_CARVED, &STONEBRICK_CRACKED, &STONEBRICK_MOSSY,
						&TALLGRASS, &TNT_BOTTOM, &TNT_SIDE, &TNT_TOP, &TORCH_ON,
						&TRAPDOOR, &TRIP_WIRE, &TRIP_WIRE_SOURCE, &VINE, &WATER_FLOW,
						&WATER_STILL, &WATERLILY, &WEB, &WHEAT_STAGE_0, &WHEAT_STAGE_1,
						&WHEAT_STAGE_2, &WHEAT_STAGE_3, &WHEAT_STAGE_4, &WHEAT_STAGE_5,
						&WHEAT_STAGE_6, &WHEAT_STAGE_7, &WOOL_COLORED_BLACK,
						&WOOL_COLORED_BLUE, &WOOL_COLORED_BROWN, &WOOL_COLORED_CYAN,
						&WOOL_COLORED_GRAY, &WOOL_COLORED_GREEN, &WOOL_COLORED_LIGHT_BLUE,
						&WOOL_COLORED_LIME, &WOOL_COLORED_MAGENTA, &WOOL_COLORED_ORANGE,
						&WOOL_COLORED_PINK, &WOOL_COLORED_PURPLE, &WOOL_COLORED_RED,
						&WOOL_COLORED_SILVER, &WOOL_COLORED_WHITE, &WOOL_COLORED_YELLOW }) {
}

BlockTextures::~BlockTextures() {
}

/**
 * Loads all block textures from the 'blocks' directory.
 */
bool BlockTextures::load(const std::string& block_dir, int size) {
	if (!fs::exists(block_dir) || !fs::is_directory(block_dir)) {
		std::cerr << "Error: Directory 'blocks' with block textures does not exist." << std::endl;
		return false;
	}

	// go through all textures and load them
	for (size_t i = 0; i < textures.size(); i++) {
		if (!textures[i]->load(block_dir, size))
			std::cerr << "Warning: Unable to load block texture "
				<< textures[i]->getName() << ".png ." << std::endl;
	}
	return true;
}

}
}