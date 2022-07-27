// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPSteamGroupInfo;
struct FBPUniqueNetId;
enum class EBlueprintResultSwitch : uint8;
enum class EBlueprintAsyncResultSwitch : uint8;
enum class SteamAvatarSize : uint8;
class UTexture2D;
#ifdef ADVANCEDSTEAMSESSIONS_AdvancedSteamFriendsLibrary_generated_h
#error "AdvancedSteamFriendsLibrary.generated.h already included, missing '#pragma once' in AdvancedSteamFriendsLibrary.h"
#endif
#define ADVANCEDSTEAMSESSIONS_AdvancedSteamFriendsLibrary_generated_h

#define MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_253_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics; \
	ADVANCEDSTEAMSESSIONS_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDSTEAMSESSIONS_API UScriptStruct* StaticStruct<struct FBPSteamGroupInfo>();

#define MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_SPARSE_DATA
#define MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSteamGroups); \
	DECLARE_FUNCTION(execGetSteamFriendGamePlayed); \
	DECLARE_FUNCTION(execCreateSteamIDFromString); \
	DECLARE_FUNCTION(execGetSteamPersonaName); \
	DECLARE_FUNCTION(execGetFriendSteamLevel); \
	DECLARE_FUNCTION(execRequestSteamFriendInfo); \
	DECLARE_FUNCTION(execGetSteamFriendAvatar);


#define MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSteamGroups); \
	DECLARE_FUNCTION(execGetSteamFriendGamePlayed); \
	DECLARE_FUNCTION(execCreateSteamIDFromString); \
	DECLARE_FUNCTION(execGetSteamPersonaName); \
	DECLARE_FUNCTION(execGetFriendSteamLevel); \
	DECLARE_FUNCTION(execRequestSteamFriendInfo); \
	DECLARE_FUNCTION(execGetSteamFriendAvatar);


#define MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedSteamFriendsLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedSteamFriendsLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedSteamFriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSteamSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedSteamFriendsLibrary)


#define MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedSteamFriendsLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedSteamFriendsLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedSteamFriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSteamSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedSteamFriendsLibrary)


#define MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedSteamFriendsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedSteamFriendsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedSteamFriendsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedSteamFriendsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedSteamFriendsLibrary(UAdvancedSteamFriendsLibrary&&); \
	NO_API UAdvancedSteamFriendsLibrary(const UAdvancedSteamFriendsLibrary&); \
public:


#define MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedSteamFriendsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedSteamFriendsLibrary(UAdvancedSteamFriendsLibrary&&); \
	NO_API UAdvancedSteamFriendsLibrary(const UAdvancedSteamFriendsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedSteamFriendsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedSteamFriendsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedSteamFriendsLibrary)


#define MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_PRIVATE_PROPERTY_OFFSET
#define MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_272_PROLOG
#define MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_PRIVATE_PROPERTY_OFFSET \
	MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_SPARSE_DATA \
	MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_RPC_WRAPPERS \
	MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_INCLASS \
	MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_PRIVATE_PROPERTY_OFFSET \
	MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_SPARSE_DATA \
	MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_RPC_WRAPPERS_NO_PURE_DECLS \
	MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_INCLASS_NO_PURE_DECLS \
	MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_275_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSTEAMSESSIONS_API UClass* StaticClass<class UAdvancedSteamFriendsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MultiplayerTemplate_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h


#define FOREACH_ENUM_STEAMAVATARSIZE(op) \
	op(SteamAvatarSize::SteamAvatar_Small) \
	op(SteamAvatarSize::SteamAvatar_Medium) \
	op(SteamAvatarSize::SteamAvatar_Large) \
	op(SteamAvatarSize::SteamAvatar_LastOrDefault) 

enum class SteamAvatarSize : uint8;
template<> ADVANCEDSTEAMSESSIONS_API UEnum* StaticEnum<SteamAvatarSize>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
