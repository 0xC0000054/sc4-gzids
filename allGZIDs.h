
//messages start
enum GZMSGID 
{
	kMsgTypeToolTipTick = 0x533CCA1E,
	kMsgMapChanged = 0x2A09B21,
	kMsgWaterMapChanged = 0x6946DC3,
	kMsgTransitStrikeCalledOff = 0x69247DC3,
	kMsgTransitStrikeBegin = 0x69247DC4,
	kMsgTransitStrikeFinished = 0x69247DC5,
	kMsgTransitStrikeThreatened = 0x69247DC6,
	kMsgTrafficMapChanged = 0x69247DC7,
	kMsgRoadDamageChange = 0x69247DC8,
	kMsgFerryDataUpdate = 0x2C06BA8,
	kMsgMoistureMapChanged = 0x9B6D58,
	kMsgAdviceClickedChanged = 0x426841A1,
	kMsgTypeToolTipTick2 = 0xCA56DD7,
	kMsgPingResult = 0x243FC6F,
	kMessageTypeAppGainLoseFocus = 0x4348B111,
	kMessageTypeIMEEvent = 0x5A4FC3D5,
	kMessageType_UpdateSelf = 0xCA8F3DB6,
	kMessageTypeDispatchBegin = 0xE94671EB,
	kMessageTypeDispatchActive = 0xE94671EC,
	kMessageTypeDispatchInactive = 0xE94671ED,
	kMessageTypeDispatchEnd = 0x894671F6,
	kMessageTypePreferencesChanged = 0x231BBF91,
	kMessageTypeFireDisasterSeverityChange = 0x49D15B72,
	kMessageTypeFireDisasterObjectsIgnited = 0x49D15B73,
	kMessageTypeDisasterPeriodStarted = 0xCA1B1E64,
	kMessageTypeDisasterPeriodEnded = 0xAA1B2002,
	kMessageTypeDisasterPhaseChange = 0xA9C7CAB6,
	kMessageTypeDisasterFireStarter = 0x49E3DB1D,
	kMessageTypeFileChangeNotification = 0x87163754,
	kMessageTypeMapChanged = 0x88EA4DFF,
	kMessageTypeFundingPercentageChanged = 0x8DAC3E7,
	kMessageTypeIdealMonthlyFundingChanged = 0x8DAC3E8,
	kMessageTypeSimCycleComplete0 = 0x68F54CE0,
	kMessageTypeStrikeBegin0 = 0x68F54CE1,
	kMessageTypeStrikeEnd0 = 0x68F54CE2,
	kMessageTypeSimCycleComplete1 = 0x8F415FE,
	kMessageTypeMapChanged1 = 0x87CC75B3,
	kMessageType_LotDeveloperNotification = 0x4C04DE69,
	kMessageTypeZooEscape = 0xAA667CE2,
	kMessageTypeSimCycleComplete2 = 0xA8DAF510,
	kMessageTypeStrikeBegin1 = 0xA8DAF511,
	kMessageTypeStrikeEnd1 = 0xA8DAF512,
	kMessageTypePoliceBuildingChange = 0xA949569A,
	kMessageTypeJailbreakBegin = 0x2A614891,
	kMessageTypeJailbreakEnd = 0x2A614892,
	kMessageTypeStrikeBegin2 = 0xCA358F85,
	kMessageTypeStrikeEnd2 = 0xCA358F9C,
	kMessageTypeMapChanged2 = 0x6A07C2EE,
	kMessageTypeSimCycleComplete3 = 0xC8EA5018,
	kSC4MessageAdvisors_AdviceAdded = 0x8A09FA64,
	kSC4MessageAdvisors_AdviceRemoved = 0x8A09FA65,
	kSC4MessageAdvisors_AdviceChanged = 0x8A09FA66,
	kSC4MessageAdvisors_AdviceRemovedAll = 0x8A09FA67,
	kSC4MessageAdvisors_AdviceCommand = 0x8A09FA6C,
	kSC4MessageAdvisors_AdvisorChanged = 0x8A09FA68,
	kSC4MessageAdvisors_AdvisorRemoved = 0x8A09FA69,
	kSC4MessageAdvisors_AdvisorAdded = 0x8A09FA6A,
	kSC4MessageAdvisors_AdvisorRemovedAll = 0x8A09FA6B,
	kSC4MessageAdvisors_AdviceDebugCheat_DebugShowGUID = 0xEA917750,
	kSC4MessageAdvisors_AdviceDebugCheat_DebugRefresh = 0x8A917759,
	kSC4MessageAdvisors_AdviceDebugCheat_DebugTrigger = 0x4A91DD6E,
	kSC4MessageAdvisors_AdviceDebugCheat_DebugPrint = 0x4A92ECEF,
	kSC4MessageAdvisors_BudgetWindow = 0xEA5BDFBC,
	kSC4MessageAdvisors_Data1_BudgetWindowMainSmall = 0xCA5BDFB0,
	kSC4MessageAdvisors_Data1_BudgetWindowMainLarge = 0x4A5BDFB8,
	kSC4MessageAdvisors_DataMapWindow = 0x6A5BDFCD,
	kSC4MessageAdvisors_GraphWindow = 0x6A720993,
	kSC4MessageMySim_DebugPrintMySimsInfo = 0xB6F3E27,
	kSC4MessageMySim_DebugPrintMySimChangeJob = 0xAB6F3E2D,
	kSC4MessageMySim_DebugPrintMySimChangeHouse = 0x4B6F3EBF,
	kSC4MessageMySim_DebugPrintMySimDispatch = 0xBB04126,
	kSC4MessageMySim_FollowWithCamera = 0x8BBBD22A,
	kSC4MessageMySims_MySimsChanged = 0xAA25827C,
	kSC4MessageMySims_MySimMovedIn = 0xEA3ADA33,
	kSC4MessageTutorial_EndTutorial = 0xAA3840E6,
	kSC4MessageTypeMySimDispatchFollow = 0xEBAB04B2,
	kSC4MessageTypeMySimDispatchActivate = 0xEBAB04F3,
	kSC4MessageAnimationTick = 0x86AD10EE,
	kSC4MessageAnimationTickPriority = 0x86AD10EF,
	kSC4MessagePreAppInit = 0x28E9397A,
	kSC4MessagePostAppInit = 0x28E9397B,
	kSC4MessagePreAppShutdown = 0x28E9397C,
	kSC4MessagePostAppShutdown = 0x28E9397D,
	kSC4MessageInsertBuildingOccupant = 0x8B8B2CED,
	kSC4MessageRemoveBuildingOccupant = 0x8B8B2CEE,
	kSC4MessageBuildingOccupantStateChange = 0xC8DAC052,
	kSC4MessageBuildingCompletionChange = 0x2977AE2F,
	kSC4MessageBuildingVisualStateChange = 0x9D8E0B6,
	kSC4MessagePreCityInit = 0x26D31EC0,
	kSC4MessagePostCityInit = 0x26D31EC1,
	kSC4MessagePostCityInitComplete = 0xEA8AE29A,
	kSC4MessagePreCityShutdown = 0x26D31EC2,
	kSC4MessagePostCityShutdown = 0x26D31EC3,
	kSC4MessageCityEstablished = 0x26D31EC4,
	kSC4MessageCityObliterated = 0x26D31EC5,
	kSC4MessageCityObliterationSceneEnded = 0xEA65224E,
	kSC4MessageCityNameChanged = 0xAB99380,
	kSC4MessageMayorNameChanged = 0xAB99381,
	kSC4MessagePreDemolishOccupant = 0xA6DDE60A,
	kSC4MessagePostDemolishOccupant = 0xA6DDE60B,
	kSC4MessagePreDemolishArea = 0xA6DDE60C,
	kSC4MessagePostDemolishArea = 0xA6DDE60D,
	kSC4MessagePreDemolishNetworkOccupant = 0xAA7A014D,
	kSC4MessageHeaderFontStyleID = 0x4A809914,
	kSC4MessageBodyFontStyleID = 0x4A809915,
	kSC4MessagePreLoad = 0x26C63340,
	kSC4MessageLoad = 0x26C63341,
	kSC4MessagePostLoad = 0x26C63342,
	kSC4MessagePreSave = 0x26C63343,
	kSC4MessageSave = 0x26C63344,
	kSC4MessagePostSave = 0x26C63345,
	kSC4MessageMouseScrollBegin = 0xCAD61E00,
	kSC4MessageMouseScrollEnd = 0xEAD61E16,
	kSC4MessagePostAppServicesInit = 0x2B96B3EA,
	kSC4MessagePostAppServicesInitComplete = 0xAB96B05F,
	kSC4MessagePropExemplarDataUpdated = 0x896FDC70,
	kSC4MessageConnectionsReady = 0x6AC284F3,
	kSC4MessageAutomatonApprochingIntersection = 0x8A878385,
	kSC4MessageChangeInputControl = 0x9C8B8EA,
	kSC4MessageZoningChange = 0x7699455,
	kSC4MessageUnilateralQuit = 0x29A89B05,
	kSC4MessageTypeDispatchFollow = 0x49F10111,
	kSC4MessageTypeDispatchActivate = 0xC9F1011A,
	kSC4MessageViewAnimTick = 0x697D01EE,
	kSC4MessageAutomataPlaySFX = 0x8A385DD8,
	kSC4MessageAutomataStopSFX = 0xAA396960,
	kSC4MessageCrowdReactionEvent = 0xA9E3B6E2,
	kSC4MessageCrowdReactionResult = 0xA9E3B6E3,
	kSC4MessageEmergencyVehicleRouteBlocked = 0xCA8DCDB4,
	kSC4MessagePedestrianChangeState = 0x49E64801,
	kSC4MessageAutomataCollision = 0x49E64802,
	kSC4MessageAutomataEvent = 0x9D92FC3,
	kSC4MessageRemoveAutomataController = 0xEA298D50,
	kSC4MessageCitySituationActivationChange = 0xABBBCA64,
	kSC4MessageCitySituationProgressChange = 0xAC083D7D,
	kSC4MessageMissionEffectStarted = 0xCC0D905F,
	kSC4MessagePlayerDriveControlCallback = 0xBB324BD,
	kSC4MessageTornadoDead = 0xA36F1E8,
	kSC4MessageTornadoLocation = 0xA36F1E9,
	kSC4MessageEffectDone = 0x2A7B582D,
	kSC4MessageEffectLocation = 0x2A7B582E,
	kSC4MessageCreateOccupant = 0x99EF1140,
	kSC4MessageDestroyOccupant = 0x99EF1141,
	kSC4MessageShowOccupant = 0x99EF1144,
	kSC4MessageChangeOccupant = 0x99EF1145,
	kSC4MessageInsertOccupant = 0x99EF1142,
	kSC4MessageRemoveOccupant = 0x99EF1143,
	kSC4MessageMoveOccupant = 0x99EF1146,
	kSC4MessageDeferOccupantOperations = 0x49D968C4,
	kSC4MessageOccupantGroupChanged = 0xEBFF18A3,
	kSC4MessagePropStateChange = 0xE9C86DDB,
	kSC4MessageProgressMessage = 0x4A44667F,
	kSC4MessageInsertUndergroundOccupant = 0x8B87A974,
	kSC4MessageRemoveUndergroundOccupant = 0x8B87A975,
	kSC4MessageTypeIngredChangesMade = 0xCA1B151C,
	kSC4MessageGrowSmallAirport1 = 0xEA394B74,
	kSC4MessageGrowSmallAirport2 = 0xCB3BE815,
	kSC4MessageGrowMediumAirport1 = 0xEB3BE415,
	kSC4MessageGrowMediumAirport2 = 0x2B3BE44A,
	kSC4MessageGrowLargeAirport1 = 0x6B3BE6D8,
	kSC4MessageGrowLargeAirport2 = 0xB3BE81A,
	kSC4MessageFundsChanged = 0x772FAD4,
	kSC4MessageBondIssued = 0xC772FADA,
	kSC4MessageBondFinished = 0xCA3FBDCE,
	kSC4MessageToggleBudgetDialog = 0x29222F02,
	kSC4MessageEndGameForBudgetFailure = 0xAA5CF1E3,
	kSC4MessageBudgetGroupChanged = 0xA3E7624,
	kSC4MessageBudgetForOccupantChanged = 0x6A5FD3FD,
	kSC4MessageBuildingTypesUpdated = 0xA783EBC8,
	kSC4MessageFloraTypesUpdated = 0x87A6277F,
	kSC4MessagePollutionAirChange = 0xFA6DD0BB,
	kSC4MessagePollutionWaterChange = 0x5A6DD1AA,
	kSC4MessagePollutionGarbageChange = 0xDA6DD2CB,
	kSC4MessagePollutionRadiationChange = 0xDA6DD35D,
	kSC4MessagePowerSupplyChange = 0x876993FF,
	kSC4MessageSchoolStrike = 0x77ACCD0,
	kSC4MessageHealthStrike = 0x77ACCD2,
	kSC4MessageGrowSeaport = 0x8A394DC4,
	kSC4MessageSeaportBadLocation = 0x4A490D33,
	kSC4MessageCreateSeaportAdvice = 0x2A622C8,
	kSC4MessageSimBegin = 0x66956810,
	kSC4MessageSimOneShot = 0x66956810,
	kSC4MessageSimEmergencyTime = 0x66956811,
	kSC4MessageSimNewMinute = 0x66956812,
	kSC4MessageSimNewHour = 0x66956813,
	kSC4MessageSimNewDay = 0x66956814,
	kSC4MessageSimNewWeek = 0x66956815,
	kSC4MessageSimNewMonth = 0x66956816,
	kSC4MessageSimNewYear = 0x66956817,
	kSC4MessageSimSpecificDay = 0x66956818,
	kSC4MessageSimSpecificTime = 0x66956819,
	kSC4MessageSimIdle = 0x6695681A,
	kSC4MessageSimPauseChange = 0xAA7FB7E0,
	kSC4MessageSimHiddenPauseChange = 0x4A7FB7E2,
	kSC4MessageSimEmergencyPauseChange = 0x4A7FB807,
	kSC4MessageSimSpeedChange = 0x4A7FB7E9,
	kSC4MessageSeasonChange = 0x6716A4E5,
	kSC4MessageWeatherCycleCompleted = 0x6716A4E6,
	kSC4MessageRedisplayTerrain = 0x870BC918,
	kSC4MessageTerrainDoErosion = 0x470BD214,
	kSC4MessageToggleTerrainGridDisplay = 0x277A9364,
	kSC4MessageLongTerrainOperationBegin = 0xEA3B0AF1,
	kSC4MessageLongTerrainOperationEnd = 0x6A3B0AFD,
	kSC4MessageTerrainHeightsChanged = 0x278E6003,
	kSC4MessageWaterHeightsChanged = 0x678E6E3A,
	kSC4MessageSeaLevelChanged = 0x89171496,
	kSC4MessageTerrainTypeChanged = 0xC922EB91,
	kSC4MessageTerrainReconcilation = 0xCA63D517,
	kSC4MessageWaterSurfaceStateChanged = 0x6AB97795,
	kSC4MessageAdviseList_RemoveCommand = 0xCA09FA6C,
	kSC4MessagePreRegionInit = 0xABB5BB44,
	kSC4MessagePostRegionInit = 0xCBB5BB45,
	kSC4MessagePreRegionShutdown = 0x8BB5BB46,
	kSC4MessagePostRegionShutdown = 0x8BB5BB4B,
	kSC4MessageCameraUpdated = 0x4A9F2FFE,
	kSC4MessageMultipleViewChangeBegin = 0x4AB04CBE,
	kSC4MessageMultipleViewChangeEnd = 0x4AB04CBF,
	kSC4MessageViewZRChange1 = 0xA6B79600,
	kSC4MessageViewZRChange2 = 0xA6B79601,
	kSC4MessageViewZRChange3 = 0xA6B79602,
	kSC4MessageViewTChange1 = 0xA6B79610,
	kSC4MessageViewTChange2 = 0xA6B79611,
	kSC4MessageViewTChange3 = 0xA6B79612,
	kSC4MessagePostViewInit = 0xA6B79620,
	kSC4MessagePostViewRefresh = 0xA6B79621,
	kSC4MessagePreViewShutdown = 0xA6B79622,
	kSC4MessagePreViewFilterChange = 0x6CDB65A,
	kSC4MessagePostViewFilterChange = 0x6CDB65B,
	kSC4MessagePreViewLevelChange = 0xC6CDBF1A,
	kSC4MessagePostViewLevelChange = 0xC6CDBF1B,
	kSC4MessageOccupantHighlightChange = 0xE6E85114,
	kSC4MessageOrdinanceAvailable = 0xA2D1C5B9,
	kSC4MessageOrdinanceUpdated = 0xC2C09554,
	kCanvasMessageType = 0x1A10630A,
	kMouseMessageType = 0xFA0C6390,
	kMySimMessageTypeUpdate = 0x4BC42C48,
	kNotificationMessageTypeID = 0x2BA06B99,
	kSelfMessageType = 0x4C05A5E6,
	kRefreshMessageType = 0x8A8AD2B,
	kInternalMessageTypeScrolling = 0xFE342D2A,
	kDialupMessageTypeContacted = 0x65783920,
	kDialupMessageTypeCompleted = 0x65783921,
	kSndEventMsgTypeStd = 0xDB53383B,
	kMessageGameInIdleState = 0xBA44EB51,
	kAdvisorSystemTicker_MessageType = 0xCA5501F2,
	kMessageSetRadioStation = 0x2A3AD653,
	kMessageSetSimSpeed = 0xEC320E96,
	kMessageListenerPosChanged = 0x8A4A69C7,
	kSC4MsgConstructionRoadCrewStart = 0x89F10866,
	kSC4MessageNetworkOccupantUsableChange = 0x89D3E9F3,
	kSC4MessageShowSituationPopup = 0xEBB67EF7,
	kSGLMessage_RestoreTextures = 0x8ACAA95F,
	kMessageConditionChanged = 0xE99B3D4D,
	kMessageStateChanged = 0xE8BDA2E7,
	kMessageTypeSelfTick = 0xCC327B60,
	kMessageTractPowerChanged = 0x8A07AE00,
	kMessageCheatIssued = 0x230E27AC,
	kSC4MessageActiveDemandChanged = 0x426840A0,
	kMessageVideoPreferencesChanged = 0xC9F775BB,
}
//messages end


//service id start
	kcGZAllocatorService_SystemServiceId = 0x3AE4BEA3,
	kGZCanvas_SystemServiceID = 0xA3460DEB,
	kGZFileSystemServiceID = 0x2073215D,
	kGatherSystemServiceID = 0x9C55E5F5,
	kGZRealtimeDebugDisplaySystemServiceID = 0x8414A2C2,
	kGZWWWSystem_SystemServiceID = 0x449B1939,
	kGZGraphicSystem_SystemServiceID = 0xC416025C,
	kGZGUID_AudioAmbienceManagerSystemServiceId = 0xAA12F911,
	kAudioScapeManagerSystemServiceID = 0x49E50BA1,
	kGZGUID_AEMSEventsSystemServiceId = 0xAC1FAE31,
	kRZNetManager_SystemServiceID = 0x654383C9,
	kGZCallbackSysServiceID = 0xA76C78E7,
	kGZCommandServerSysServiceID = 0xEB903A32,
	kGZLanguageManagerSysServiceID = 0x441E5070,
	kDefaultSysServiceID = 0xA406334,
	kDefaultSysServiceID = 0x6406338,
	kDefaultSysServiceID = 0x64FA8434,
	kGZMessageServer2SysServiceID = 0x4FA845B,
	kGZRegistrySysServiceID = 0x25076B9E,
	kSC4AnimationTickManagerSysServiceId = 0x86AD10EC,
	kSC424HourClockSysServiceId = 0xA7E7F92A,
	kSC4SimulatorSysServiceId = 0x46956659,
	kGZWinMgr_SysServiceID = 0xA417445E,
	kGZLuaScriptServerSystemServiceID = 0x4BD10133,
	kRZRadioDefaultServiceId = 0x1D07B39F,
	kGZIMEServerDefaultServiceID = 0x2AC45447,
	kGZIMEProxyDefaultServiceID = 0x2AC45449,
	kGZUIScriptServiceID = 0x5A356E15,
	kGZMesageServer = 0x64063387
//service id end

//CLSID start
	kSC4CLSID_cSC4Advice = 0x8A09F5F4,
	kSC4CLSID_cSC4Advisor = 0xEAC937B4,
	kSC4CLSID_cSC4AdvisorSystem = 0x4A0DD616,
	kSC4CLSID_cSC4AdviceSubject = 0x6A26D049,
	kSC4CLSID_cSC4CitySituationAdvice = 0x8BE3753B,
	kSC4CLSID_cSC4MySimAgentSimulator = 0x29E37DEC,
	kSC4CLSID_cSC4TutorialSystem = 0xAA3836FB,
	kSC4CLSID_cSC4TutorialTask = 0xAA388261,
	kSC4CLSID_cSC4AdvisorBase = 0xCA09F543,
	kSC4CLSID_cSC4AdvisorCityPlanning = 0x2A5F877D,
	kSC4CLSID_cSC4AdvisorCitySituations = 0x4BE372CD,
	kSC4CLSID_cSC4AdvisorFinance = 0xAA5292D7,
	kSC4CLSID_cSC4AdvisorHQ = 0x6A5F8755,
	kSC4CLSID_cSC4AdvisorSafety = 0xEA19E825,
	kSC4CLSID_cSC4AdvisorTraffic = 0x4A3AD3E1,
	kSC4CLSID_cSC4AdvisorUtility = 0xCA2C2A2F,
	kSC4CLSID_cSC4AdviceNeghborDeal = 0x6A3848DB,
	kSC4CLSID_cSC4MySim = 0x4A1DBBBF,
	kSC4CLSID_cSC4MySimAdvice = 0x6A9335DE,
	kSC4CLSID_cSC4MySimBalloonAdvice = 0x6B70EFAD,
	kSC4CLSID_cSC4MySimDispatch = 0xCBC14674,
	kSC4CLSID_cSC4MyStreetSim = 0xBF606A5,
	kSC4CLSID_cSC4RewardAdvice = 0xAA371C32,
	kSC4CLSID_cSC424HourClock = 0xA7E7F929,
	kSC4CLSID_cSC4AnimationTickManager = 0xA9C73857,
	kSC4CLSID_cSC4CityDetailManager = 0xEAD4BA36,
	kSC4CLSID_cSC4DebugConsole = 0xE777F79D,
	kSC4CLSID_cSC4Demolition = 0x990C38A,
	kSC4CLSID_cSC4DispatchManager = 0x4990BD93,
	kSC4CLSID_cSC4HistoryWarehouse = 0x89EFA536,
	kSC4CLSID_cSC4LotConfigurationManager = 0x299062C0,
	kSC4CLSID_cSC4LotManager = 0xA990625B,
	kSC4CLSID_cSC4OccupantManager = 0x98F964D,
	kSC4CLSID_cSC4PropManager = 0xA990BD10,
	kSC4CLSID_cSC4TrafficNetworkMap = 0x6A0F82B2,
	kSC4CLSID_cSC4WinProcSpy = 0x298B204C,
	kSC4CLSID_cSC4ZoneManager = 0x298F9B2D,
	kSC4CLSID_cSC4App = 0xCA263481,
	kSC4CLSID_cSC4BuildingOccupant = 0xA9BD882D,
	kSC4CLSID_cSC4City = 0x8990C372,
	kSC4CLSID_cSC4FireOccupant = 0x29D25F1D,
	kSC4CLSID_cSC4FloraOccupant = 0xA9C05C85,
	kSC4CLSID_cSC4LandfillOccupant = 0x8A22BEBE,
	kSC4CLSID_cSC4LotConfiguration = 0xA99062B4,
	kSC4CLSID_cSC4WinLotConfigurationChooser = 0xC918C6FF,
	kSC4CLSID_cSC4WinLotConfigurationEditor = 0x4918C704,
	kSC4CLSID_cSC4WinBuildingFamilyChooser = 0x8918C708,
	kSC4CLSID_cSC4WinBuildingChooser = 0xE918C70C,
	kSC4CLSID_cSC4Nation = 0xC9DC0477,
	kSC4CLSID_cSC4WinNetworkLotChooser = 0x29AAD0F6,
	kSC4CLSID_cSC4WinNetworkLotEditor = 0x29AB0142,
	kSC4CLSID_cSC4RegionalCity = 0x6A037C24,
	kSC4CLSID_cSC4ToxicOccupant = 0xABF98CB5,
	kSC4CLSID_cSC4AudioAmbienceManager = 0x6A12F51C,
	kSC4CLSID_cSC4AudioScapeManager = 0x29E2797F,
	kSC4CLSID_cSC4AudioAmbienceLayer = 0x4A2835FE,
	kSC4CLSID_cSC4AudioSemManager = 0xAA355871,
	kSC4CLSID_cSC4AudioEventHandler = 0xBDB6171E,
	kSC4CLSID_cSC4AudioEventHandlerDisasterFire = 0x69E500BC,
	kSC4CLSID_cSC4AudioListener = 0xCA4A66B9,
	kSC4CLSID_cSC4AudioSoundManager = 0x4A47DC0D,
	kSC4CLSID_cSC4Vehicle = 0x896E714A,
	kSC4CLSID_cSC4VehicleManager = 0xA98F9D3B,
	kSC4CLSID_cSC4Pedestrian = 0x896E75AF,
	kSC4CLSID_cSC4PedestrianOneShot = 0xAA09DC28,
	kSC4CLSID_cSC4PedestrianManager = 0xC98F9D17,
	kSC4CLSID_cSC4Aircraft = 0xC96E75DC,
	kSC4CLSID_cSC4AircraftManager = 0xC98F9D4A,
	kSC4CLSID_cSC4Watercraft = 0x96E75F5,
	kSC4CLSID_cSC4WatercraftManager = 0xA98F9D28,
	kSC4CLSID_cSC4AutomataControllerManager = 0xCA14CA03,
	kSC4CLSID_cSC4AutomataController = 0x4A18672B,
	kSC4CLSID_cSC4AutomataAttractor = 0x6A1628BA,
	kSC4CLSID_cSC4AutomataGenerator = 0x4A1628C5,
	kSC4CLSID_cSC4AutomataScriptSystem = 0x4A1B664E,
	kSC4CLSID_cSC4CitySituationManager = 0xBB14381,
	kSC4CLSID_cSC4PathInfoFactory = 0x496678FE,
	kSC4CLSID_cSC4Airplane = 0xCBEB4F62,
	kSC4CLSID_cSC4Ambulance = 0x6C1ACDE1,
	kSC4CLSID_cSC4AutomataManager = 0x498F9CB5,
	kSC4CLSID_cSC4Bus = 0xAA9F4A3D,
	kSC4CLSID_cSC4CarjackedVehicle = 0xCBB32B0A,
	kSC4CLSID_cSC4FireTruck = 0xAA222B83,
	kSC4CLSID_cSC4GetawayVan = 0xEA863423,
	kSC4CLSID_cSC4Helicopter = 0x8BA98EDA,
	kSC4CLSID_cSC4MassTransitTrain = 0x4C22AE53,
	kSC4CLSID_cSC4MayorLimo = 0x4C0DD224,
	kSC4CLSID_cSC4PatrolCar = 0x4A222B98,
	kSC4CLSID_cSC4RiotPolice = 0x8A6E4FA4,
	kSC4CLSID_cSC4SimFireCrew = 0x4A222E4D,
	kSC4CLSID_cSC4Tank = 0xEBE0DCAD,
	kSC4CLSID_cSC4TrailerVehicle = 0x4A5B69ED,
	kSC4CLSID_cSC4TrainCar = 0x4A416254,
	kSC4CLSID_cSC4Train = 0x8A41625A,
	kSC4CLSID_cSC4DisasterManagerEarthquake = 0xA086BD3,
	kSC4CLSID_cSC4DisasterInstanceEarthquake = 0xAA086D86,
	kSC4CLSID_cSC4DisasterManagerEffect = 0x6A7B3E9B,
	kSC4CLSID_cSC4DisasterInstanceEffect = 0x6A7B3E9C,
	kSC4CLSID_cSC4DisasterManagerFire = 0x69C1718E,
	kSC4CLSID_cSC4DisasterInstanceFire = 0x69C1718F,
	kSC4CLSID_cSC4DisasterManagerPipeBurst = 0x4A132FDF,
	kSC4CLSID_cSC4DisasterInstancePipeBurst = 0xA133012,
	kSC4CLSID_cSC4DisasterManagerRiot = 0x4A38206C,
	kSC4CLSID_cSC4DisasterInstanceRiot = 0x4A38206D,
	kSC4CLSID_cSC4DisasterManagerToxic = 0xEBFB0402,
	kSC4CLSID_cSC4DisasterInstanceToxic = 0xEBFB0403,
	kSC4CLSID_cSC4DisasterLayer = 0x61F6ABF5,
	kSC4CLSID_cSC4DisasterManagerVolcano = 0xA9B5AB9F,
	kSC4CLSID_cSC4DisasterInstanceVolcano = 0x29B5AB89,
	kSC4CLSID_cSC4EffectsManager = 0x49822F75,
	kSC4CLSID_cSC4EffectsParser = 0xA956AD14,
	kSC4CLSID_cSC4EffectsResource = 0x2A5118AD,
	kSC4CLSID_cSC4EffectsResourceFactory = 0xEA5118B5,
	kSC4CLSID_cSC4PropOccupant = 0x2977AA47,
	kSC4CLSID_cSC4PropOccupantBurntBuilding = 0xC9EFB016,
	kSC4CLSID_cSC4PropOccupantTerrainDecal = 0x2977AA48,
	kSC4CLSID_cSC4PropOccupantVisualEffect = 0x2977AA49,
	kSC4CLSID_cSC4PropOccupantAutomataController = 0x2A4017A0,
	kSC4CLSID_cSC4PropPlacementPropertiesFactory = 0xA83479EA,
	kSC4PropClassIDProperty = 0xA977A86B,
	kSC4CLSID_cSC4SignpostOccupant = 0xAB72FBB3,
	kSC4CLSID_cSC4ConstructionOccupant = 0xA97F909E,
	kSC4CLSID_cSC4DBSegmentTester1 = 0x899CA901,
	kSC4CLSID_cSC4DBSegmentTester2 = 0x899CA902,
	kSC4CLSID_cSC4DBSegmentTester3 = 0x899CA903,
	kSC4CLSID_cSC4DBSegmentTester4 = 0x899CA904,
	kSC4CLSID_cSC4DBSegmentTester5 = 0x899CA905,
	kSC4CLSID_cSC4FoundationModel = 0xE9862AB6,
	kSC4CLSID_cSC4FoundationOccupant = 0x49C05C8F,
	kSC4CLSID_cSC4LotBaseTextureOccupant = 0xC97F987C,
	kSC4CLSID_cSC4CellTextureModel = 0x29802083,
	kSC4CLSID_cSC4LotRetainingWallModel = 0xC9862A86,
	kSC4CLSID_cSC4LotRetainingWallOccupant = 0x49C05C9F,
	kSC4CLSID_cSC4Occupant = 0xA9BC9AB6,
	kSC4CLSID_cSC4OccupantFilter = 0xA9C74DC9,
	kSC4CLSID_cSC4DefaultOccupantFilter = 0xC9C75EAE,
	kSC4CLSID_cSC4OccupantTypeFilter = 0xE9C75ED1,
	kSC4CLSID_cSC4OccupantTypesFilter = 0xE9C75EE8,
	kSC4CLSID_cSC4OccupantTypesFilterHashed = 0xAA25CB90,
	kSC4CLSID_cSC4RealisticOccupantFilter = 0x8A7A1C2C,
	kSC4CLSID_cSC4NetworkOccupantFilter = 0xEAC3A3D2,
	kSC4CLSID_cSC4ViewLevelOccupantFilter = 0xAAC3C01D,
	kSC4CLSID_cSC4StringSpecificationOccupantFilter = 0xBCEB6C2,
	kSC4CLSID_cSC43DPlaceableObject = 0x9852AC9,
	kSC4CLSID_cSC4PylonOccupant = 0x49B6D69B,
	kSC4CLSID_cSC4ScriptServiceResourceFactory = 0xAA49A20,
	kSC4CLSID_cSC4SimGrid = 0x49B9E600,
	kSC4CLSID_cSC4SimGridBool8 = 0x49B9E601,
	kSC4CLSID_cSC4SimGridUint8 = 0x49B9E602,
	kSC4CLSID_cSC4SimGridSint8 = 0x49B9E603,
	kSC4CLSID_cSC4SimGridUint16 = 0x49B9E604,
	kSC4CLSID_cSC4SimGridSint16 = 0x49B9E605,
	kSC4CLSID_cSC4SimGridUint32 = 0x49B9E606,
	kSC4CLSID_cSC4SimGridSint32 = 0x49B9E607,
	kSC4CLSID_cSC4SimGridUint64 = 0x49B9E608,
	kSC4CLSID_cSC4SimGridSint64 = 0x49B9E609,
	kSC4CLSID_cSC4SimGridFloat32 = 0x49B9E60A,
	kSC4CLSID_cSC4SimGridFloat64 = 0x49B9E60B,
	kSC4CLSID_cSC4TextDecalOccupant = 0x8B79C707,
	kSC4CLSID_cSC4NetworkLotManager = 0xE9A6CD3B,
	kSC4CLSID_cSC4NetworkManager = 0xC990BD46,
	kSC4CLSID_cSC4NetworkBridgeOccupant = 0x49CC1BCD,
	kSC4CLSID_cSC4NetworkLayoutCustomView = 0x4B8EA424,
	kSC4CLSID_cSC4NetworkOccupant = 0xC9C05C6E,
	kSC4CLSID_cSC4MultiTypeNetworkOccupant = 0xA9C05C80,
	kSC4CLSID_cSC4NetworkOccupantWithPreBuiltModel = 0x49C1A034,
	kSC4CLSID_cSC4NetworkTunnelOccupant = 0x8A4BD52B,
	kSC4CLSID_cSC4PipeOccupant = 0x49C05B9F,
	kSC4CLSID_cSC4PowerLineOccupant = 0xC9C05C5D,
	kSC4CLSID_cSC4PowerPoleOccupant = 0x9C05C6A,
	kSC4CLSID_cSC4SubwayOccupant = 0xCA16374F,
	kSC4CLSID_cSC4UndergroundOccupant = 0x4A10AFC2,
	kSC4CLSID_cSC4AirportDeveloper = 0xAA2049A1,
	kSC4CLSID_cSC4AuraSimulator = 0x990BDD8,
	kSC4CLSID_cSC4BudgetSimulator = 0xE990BE01,
	kSC4CLSID_cSC4BuildingDevelopmentSimulator = 0x8990BE7A,
	kSC4CLSID_cSC4CivicBuildingSimulator = 0xA413481,
	kSC4CLSID_cSC4CommercialSimulator = 0x8990C080,
	kSC4CLSID_cSC4CrimeSimulator = 0x8990C09A,
	kSC4CLSID_cSC4DemandSimulator = 0x2990BFF2,
	kSC4CLSID_cSC4FireProtectionSimulator = 0x2990C05A,
	kSC4CLSID_cSC4FlammabilitySimulator = 0xE990C045,
	kSC4CLSID_cSC4FloraSimulator = 0xC990C034,
	kSC4CLSID_cSC4IndustrialSimulator = 0xA990C022,
	kSC4CLSID_cSC4LandfillDeveloper = 0xEA09D4AE,
	kSC4CLSID_cSC4LandValueSimulator = 0xE990C18E,
	kSC4CLSID_cSC4LotDeveloper = 0xA990BFE0,
	kSC4CLSID_cSC4NeighborsSimulator = 0xC990C0A4,
	kSC4CLSID_cSC4PlumbingSimulator = 0x990C075,
	kSC4CLSID_cSC4PoliceSimulator = 0x6990C04F,
	kSC4CLSID_cSC4PollutionSimulator = 0x8990C065,
	kSC4CLSID_cSC4PropDeveloper = 0x89C48F47,
	kSC4CLSID_cSC4ResidentialSimulator = 0x4990C013,
	kSC4CLSID_cSC4SeaportDeveloper = 0xEA230A28,
	kSC4CLSID_cSC4Simulator = 0x2990C1E5,
	kSC4CLSID_cSC4TractDeveloper = 0x2990C142,
	kSC4CLSID_cSC4TrafficSimulator = 0x6990C1AA,
	kSC4CLSID_cSC4WeatherSimulator = 0x2990C1BC,
	kSC4CLSID_cSC4ZoneDeveloper = 0x498F9B01,
	kSC4CLSID_cSC4Demand = 0x8990C12D,
	kSC4CLSID_cSC4DepartmentBudget = 0xE990BFFC,
	kSC4CLSID_cSC4LineItem = 0xAA313C9F,
	kSC4CLSID_cSC4FirePlaneDispatchSource = 0x4C0AE114,
	kSC4CLSID_cSC4GrowthDeveloper = 0x990C138,
	kSC4CLSID_cSC4Lot = 0xC9BD5D4A,
	kSC4CLSID_cSC4BusinessUnit = 0x4A232DA8,
	kSC4CLSID_cSC4NeighborConnection = 0xA134F24,
	kSC4CLSID_cSC4NeighborDeal = 0x2A134F42,
	kSC4CLSID_cSC4PathFinder = 0x6A0EF3B8,
	kSC4CLSID_cSC4PoliceHelicopterDispatchSource = 0xC0B06E8,
	kSC4CLSID_cSC4PortDeveloper = 0xA2C4EEE,
	kSC4CLSID_cSC4WealthRequester = 0x89C49986,
	kSC4CLSID_cSC4ProtectionSimulator = 0x2990C05A,
	kSC4CLSID_cSC4WaterPathFinder = 0xABDF0343,
	kSC4CLSID_cSC4WinAlertBorder = 0xCA5D3294,
	kSC4CLSID_cSC4WinMiniMap = 0xCA318388,
	kSC4CLSID_cSC4WinRCI = 0xC7A0E17E,
	kSC4CLSID_cSC4WinTrendBar = 0xAA5C2F86,
	kSC4CLSID_cSC4AdvisorPopupTracker = 0xCA5A7559,
	kSC4CLSID_cSC4WinAdviceList = 0xCA1492AC,
	kSC4CLSID_cSC4WinAuraBar = 0xAA5D16A9,
	kSC4CLSID_cSC4WinGenTransparent = 0x89E1567C,
	kSC4CLSID_cSC4WinIntroVideoScreen = 0x2A3832AA,
	kSC4CLSID_cSC4WinMapView = 0x28C5A41F,
	kSC4CLSID_cSC4WinRegionScreen = 0xEA659793,
	kSC4CLSID_cSC4WinRegionView = 0x2BA6BB97,
	kSC4CLSID_cSC4WinSplashScreen = 0xAA38326E,
	kSC4CLSID_cSC4ConfigRuleManager = 0xA1D8285,
	kSC4CLSID_cSC4LightingManager = 0x681BD52B,
	kSC4CLSID_cSC4View3DWin = 0x9A47B417,
	kSC4CLSID_cSC43DRender = 0xE9C622D8,
	kSC4CLSID_cSC4CameraControl = 0xC9C628EC,
	kSC4CLSID_cSC4WinToolTipMgr = 0xCA56C8C4,
	kSC4CLSID_cSC4OrdinanceSimulator = 0xA990C08E,
	kSC4CLSID_cSC4OrdinanceSimple = 0x8BD4FC74,
	kSC4CLSID_cSC4PowerSimulator = 0x990C005,
	kSimAgent = 0xC2D29ED,
	kAnimTickAgent = 0xC2D29EE,
	frame_sample = 0x4C2A6CE9,
	kGZCLSID_cGZWinKeyAccelerator = 0x42E967BE,
	kGZCLSID_cSC4GrowthDeveloper = 0x990C138,
	kGZCLSID_cGZScriptableControlSet = 0x5A354595,
	kGZCLSID_cGZPersistResourceManager = 0x56b906e,
	kGZCLSID_cGZWinFlatRect = 0xC2AFA76E,
	kGZCLSID_cGZWinGen = 0x4386D516,
	kGZCLSID_cGZScriptTerp = 0xBA2E7953,
	kGZCLSID_cS3DCamera = 0xE9C6262A,
	kGZCLSID_cSC4WinRegionScreen = 0xEA659793,
	kGZCLSID_cGZPersistDBSegmentMultiPackedFiles = 0x90F8619,
	kGZCLSID_cGZDBSegmentPackedFile = 0x86d4a89,
	kGZCLSID_cSCResExemplarFactory = 0x453429B3,
	kGZCLSID_cSCResExemplarCohortFactory = 0x53429C8,
//CLSID end

//cheats start
	kCommandID_ToggleGodPanel = 0x6A935C34,
	kCommandID_ToggleMayorPanel = 0x6A935CA4,
	kCommandID_ToggleMySimPanel = 0x6A935CA8,
	kCommandID_ToggleOptionsPanel = 0x6A935CAB,
	kCommandID_SimSpeedPause = 0x6A935CAD,
	kCommandID_SimSpeedSlow = 0x6A935CB0,
	kCommandID_SimSpeedMedium = 0x6A935CB2,
	kCommandID_SimSpeedFast = 0x6A935CB5,
	kCommandID_ZoomIn = 0x6A935CB7,
	kCommandID_ZoomOut = 0x6A935CBA,
	kCommandID_Zoom0 = 0x6A935CBD,
	kCommandID_Zoom1 = 0x6A935CBF,
	kCommandID_Zoom2 = 0x6A935CC2,
	kCommandID_Zoom3 = 0x6A935CC4,
	kCommandID_Zoom4 = 0x6A935CC7,
	kCommandID_Zoom5 = 0x2BCBD5F1,
	kCommandID_RotateCW = 0x6A935CC9,
	kCommandID_RotateCCW = 0x6A935CCC,
	kCommandID_RotateLotCW = 0x6A935CD5,
	kCommandID_RotateLotCCW = 0x6A935CD1,
	kCommandID_ScrollLeft = 0x6A935CD8,
	kCommandID_ScrollLeftOnce = 0x2A9484DA,
	kCommandID_ScrollLeftStop = 0x2A948275,
	kCommandID_ScrollUp = 0x6A935CDD,
	kCommandID_ScrollUpOnce = 0x2A9484F2,
	kCommandID_ScrollUpStop = 0x2A948272,
	kCommandID_ScrollRight = 0x6A935CE0,
	kCommandID_ScrollRightOnce = 0x2A9484FF,
	kCommandID_ScrollRightStop = 0x2A94826E,
	kCommandID_ScrollDown = 0x6A935CE2,
	kCommandID_ScrollDownOnce = 0x2A94850B,
	kCommandID_ScrollDownStop = 0x2A94826B,
	kCommandID_CenterOnCursor = 0x6A935CE5,
	kCommandID_ToggleGridVisibility = 0x6A935CE8,
	kCommandID_Cancel = 0x6A935CF1,
	kCommandID_QueryTool = 0x6A935CF3,
	kCommandID_TrafficQueryTool = 0x6A935CF4,
	kCommandID_ZoneLowResidentialTool = 0x6A935CF7,
	kCommandID_ZoneMediumResidentialTool = 0x6A935D0B,
	kCommandID_ZoneHighResidentialTool = 0x6A935D0E,
	kCommandID_ZoneLowCommercialTool = 0x6A935D11,
	kCommandID_ZoneMediumCommercialTool = 0x6A935D17,
	kCommandID_ZoneHighCommercialTool = 0x6A935D1A,
	kCommandID_ZoneAgriculturalTool = 0x6A935D1D,
	kCommandID_ZoneMediumIndustrialTool = 0x6A935D25,
	kCommandID_ZoneHighIndustrialTool = 0x6A935D2B,
	kCommandID_ZoneLandfillTool = 0x6A935D28,
	kCommandID_DeZoneTool = 0x6A935D2E,
	kCommandID_DemolishTool = 0x6A935D36,
	kCommandID_DispatchFireTool = 0x6A935D39,
	kCommandID_DispatchPoliceTool = 0xCA935DBD,
	kCommandID_DispatchFireAirTool = 0x8C0B0E46,
	kCommandID_DispatchPoliceAirTool = 0xEC0B0E6A,
	kCommandID_RoadTool = 0x6A935DC0,
	kCommandID_StreetTool = 0x6A935DC2,
	kCommandID_HighwayTool = 0x6A935DC5,
	kCommandID_AvenueTool = 0x6B730F78,
	kCommandID_PlaceBusStopTool = 0x6A935DC9,
	kCommandID_RailTool = 0x6A935DDA,
	kCommandID_LightRailTool = 0x2B79E72B,
	kCommandID_MonorailTool = 0x8BE098F4,
	kCommandID_OneWayRoadTool = 0x4BE098F7,
	kCommandID_DirtRoadTool = 0x6BE098FA,
	kCommandID_GroundHighwayTool = 0x4BE098FD,
	kCommandID_PlacePassengerDepotTool = 0x6A935DDD,
	kCommandID_PlaceFreightDepotTool = 0x6A935DDF,
	kCommandID_PlaceLightRailStationTool = 0x2BFE11C9,
	kCommandID_SubwayTool = 0x6A935DE3,
	kCommandID_PlaceSubwayStationTool = 0x6A935DE6,
	kCommandID_PowerLinesTool = 0x6A935DEB,
	kCommandID_PipesTool = 0x6A935DEE,
	kCommandID_PlaceSmallPoliceStationTool = 0x6A935DF1,
	kCommandID_PlaceLargePoliceStationTool = 0x6A935DF4,
	kCommandID_PlaceJailTool = 0x6A935DF7,
	kCommandID_PlacePoliceKioskTool = 0x2BFE0BEA,
	kCommandID_PlaceSmallFireStationTool = 0x6A935DFA,
	kCommandID_PlaceLargeFireStationTool = 0x6A935DFD,
	kCommandID_PlaceClinicTool = 0x6A935E0A,
	kCommandID_PlaceHospitalTool = 0x6A935E0D,
	kCommandID_PlaceElementarySchoolTool = 0x6A935E14,
	kCommandID_PlaceHighSchoolTool = 0x6A935E11,
	kCommandID_PlaceCollegeTool = 0x6A935E17,
	kCommandID_PlaceFerryTerminal = 0x2BFE1095,
	kCommandID_EnableDayOnly = 0x6A935E1E,
	kCommandID_EnableNightOnly = 0x6A935E21,
	kCommandID_EnableDayAndNight = 0x6A935E27,
	kCommandID_OpenPlayOptionsDialog = 0x6A935E2A,
	kCommandID_OpenGraphicOptionsDialog = 0x6A935E2D,
	kCommandID_OpenAudioOptionsDialog = 0x6A935E34,
	kCommandID_OpenPhotoAlbumDialog = 0x6A935E45,
	kCommandID_OpenSnapshotDialog = 0x6A935E4B,
	kCommandID_SaveCity = 0x6A935E36,
	kCommandID_SaveCityQuick = 0x6A935E37,
	kCommandID_QuitCity = 0x6A935E39,
	kCommandID_QuitGame = 0x6A935E3C,
	kCommandID_ToggleUIVisibility = 0x6A935E3F,
	kCommandID_OpenCheatCodeDialog = 0x2A9496C9,
	kCommandID_ToggleTerrainContourDisplay = 0x2A94A04B,
	kCommandID_OpenObliterateCityDialog = 0x2A94A5B6,
	kCommandID_SetExpandedToolTips = 0x6AA9FE51,
	kCommandID_SignTool = 0xB980581,
	kCommandID_LabelTool = 0xB980587,
	kCommandID_DemolishSignsAndLabels = 0xABCDEE11,
	kCommandID_ToggleSignsAndLabels = 0x6B98058A,
	kCommandID_LoadRegion = 0xBB3C277,
	kCommandID_LoadCity = 0xBB2747D,
	kCommandID_PlaceFlora = 0xAB99A64B,
	kCommandID_PlaceBuilding = 0xB99AE81,
	kCommandID_CreateTextDecal = 0xBEAF1A2,
	kCommandID_MinimizeDrivingPanel = 0xAC1F0449,
	kCommandID_MaximizeDrivingPanel = 0xCC1F0457,
	kCommandID_ToggleDrivingPanel = 0xAC1F045D,
	kCommandID_FullScreenRefresh = 0x6A9391A0,
	kCommandID_PauseAnimation = 0x6A9753EA,
	kCommandID_StepAnimation = 0x6A9753ED,
	kCommandID_RegionBitmapLoad = 0x6A9757C2,
	kCommandID_AnimationRecorder = 0xCAB22C64,
	kCommandID_OccupantManagerDebug = 0xCB996C8D,
	kCommandID_RenderDirtyRectangle = 0xCB998EB2,
	kCommandID_PollutionSimulatorStats = 0xB99A37A,
	kCommandID_TrafficDebug = 0x2B9D45CD,
	kCommandID_ToxicSpill = 0xBFB41BA,
	kCommandID_SetViewTarget = 0x8BB756A4,
	kCommandID_GZLog = 0x8BA12D18,
//cheats end

//interface id start
	kGZIID_cIGZUnknown = 1,
	kGZIID_cIGZSerializable = 0xE4FDA3D4,
	kGZIID_cISC4Ordinance = 0xAA5E2247,
	kGZIID_cISC4BuildingOccupant = 0x87DDA3A9,
	kGZIID_cISC4AdviceSubject = 0x6A26D050,
	kGZIID_cISCLua = 0xEA10C4A2,
	kGZIID_cISC4NetworkOccupant = 0xA821EF94,
	kGZIID_cIGZAllocatorService = 0x03AE4BEAB,
	kGZIID_cISC4App = 0x26CE01C0,
	kGZIID_cISC4DBSegmentOStream = 0x6999A8FB,
	kGZIID_cISC4DBSegmentIStream = 0x4999A8F5
	kGZIID_cIGZString = 0x89B7DC8,
	kGZIID_cISCProperty = 0x452160EC,
	kGZIID_cISCPropertyHolder = 0x25216283,
	kGZIID_cIGZVariant = 0x60FD4D2B,
	kGZIID_cISC4AnimationTickManager = 0x86AD10ED,
	kGZIID_cIGZWinKeyAccelerator = 0xE2C1B3C4,
	kGZIID_cIGZWinKeyAcceleratorRes = 0x42E3EA4B,
	kGZIID_cIGZMesageServer = 0xc1085722,
	kGZIID_cIGZMesageServer2 = 0x652294c7,
	kGZIID_cIGZMessage2CommandDispatcherMessage = 0x4B99446A,
	kGZIID_cIGZCanvasMessage = 0xDA1062FA,
	kGZIID_cIGZMessage2Standard = 0x65297976,
	kGZIID_cIGZMessageTarget = 0xE98B2F57,
	kGZIID_cIGZMessageTarget2 = 0x452294AA,
	kGZIID_cISC4City = 0x66BA4DB5,
	kGZIID_cISC4View3DWin = 0xFA47B3F9,
	kGZIID_cIGZUIScriptService = 0xFA3562FA,
	kGZIID_cIGZWinMgr = 0x5A4
	kGZIID_cIGZScriptableControlSet = 0x1A35608A,
	kGZIID_cIGZPersistResourceManager = 0x656B8EFC,
	kGZIID_cIGZWin = 0x22BA0121,
	kGZIID_cIGZWinBtn = 0x8810,
	kGZIID_cIGZWinFlatRect = 0xC2AFA76F,
	kGZIID_cIGZWinGen = 0x5386D516,
	kGZIID_cIGZWinSlider = 0x21325207,
	kGZIID_cIGZWinText = 0x212CDC1F,
	kGZIID_cISC4OccupantFilter = 0x46A80026,
	kGZIID_cIGZScriptTerp = 0x5A2C1570,
	kGZIID_cIGZWinProc = 0x22E85D8E,
	kGZIID_cIGZFrameworkHooks = 0x3FA40BF,
	kGZIID_cIGZGraphicsSystem = 0x73283C,
	kGZIID_cIGZGraphicsSystem2 = 0xC47B747C,
	kGZIID_cIGZGraphicsSystemW32 = 0x5AD24C36,
	kGZIID_cIGZSystemService = 0x287FB697,
	kGZIID_cIGZWinMessageTarget = 0xC6AE7085,
	kGZIID_cGZWinTextEdit = 0x231A1C57,
	kGZIID_cGZWinCtrlMgr = 0x22C2EB1F,	
	kGZIID_cS3DCamera = 0xE9C6262A,
	kGZIID_cGZWinOptGrp = 0xA1336CC0,
	kGZIID_cSC43DRender = 0x681BD529,
	kGZIID_cIGZPersistDBSegment = 0x656B8F0C,
	kGZIID_cIGZPersistResource = 0x456B8F1D,
	kGZIID_cIGZPersistResourceFactory = 0xA56B8F17,
	kGZIID_cIGZWinSpinner = 0x612CE0C3,
	kGZIID_cIGZWinBMP = 0xC12CEA13,
	kGZIID_cIGZWinListBox = 0x4132242B,
	kGZIID_cISC4ZoneManager = 0x67652433,
//interface id end

// budget group start
	kBudgetGroupBusinessDeals = 0xA5A72D1,
	kBudgetGroupCityBeautification = 0x6A357B96,
	kBudgetGroupGovernmentBuildings = 0xEA597195,
	kBudgetGroupHealthAndEducation = 0x6A357B7F,
	kBudgetGroupPublicSafety = 0x4A357B40,
	kBudgetGroupTransportation = 0xAA369059,
	kBudgetGroupUtilities = 0x4A357EAF,
// budget group end

// driver id start
kDriverDirectX = 0xBADB6906
kDriverOpenGL = 0xC4554841
kDriverSoftware = 0x7ACA35C6
// driver id end