/*
 * XREFs of UserPowerInfoCallout @ 0x1C00B657C
 * Callers:
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 * Callees:
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1C00169A0 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0016C10 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C003B380 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     QueuePowerRequest @ 0x1C00B7EA0 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00B809C (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     EtwTraceDisplayReqChange @ 0x1C00B8144 (EtwTraceDisplayReqChange.c)
 *     CitDisplayRequestChange @ 0x1C00B81B4 (CitDisplayRequestChange.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C00CFACC (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@-$DomainSharedBase@$$.c)
 *     ?lock@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@?$DomainSharedBase@$$V@@AEAAXXZ @ 0x1C00CFB20 (-lock@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@-$DomainSharedBase.c)
 *     ??0UserCritTelemetry@@AEAA@XZ @ 0x1C00D5944 (--0UserCritTelemetry@@AEAA@XZ.c)
 *     SetPendingInput @ 0x1C00D8940 (SetPendingInput.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0159EA0 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C015A190 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     PowerUpdateBrightnessLevels @ 0x1C015C0A4 (PowerUpdateBrightnessLevels.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     UserLogError @ 0x1C017CC90 (UserLogError.c)
 *     ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x1C020BC08 (-OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z.c)
 */

__int64 __fastcall UserPowerInfoCallout(__int64 a1, __int64 a2, __int64 a3, int *a4, int a5, _DWORD *a6)
{
  int v6; // edi
  unsigned int v7; // r12d
  int v9; // r13d
  int v10; // ebx
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  bool v13; // si
  __int64 v14; // r8
  unsigned __int8 v15; // r10
  int v16; // ebx
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // r15d
  PVOID v21; // rdx
  unsigned __int64 v22; // r8
  LARGE_INTEGER *v23; // rbx
  __int64 v24; // rax
  struct tagTHREADINFO **v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r14
  LARGE_INTEGER v31; // rax
  __int64 v32; // rbx
  struct _LIST_ENTRY *v33; // r15
  UserCritTelemetry *v34; // rcx
  int v35; // r8d
  struct tagTHREADINFO *v36; // rbx
  __int64 v37; // rdx
  struct tagTHREADINFO *v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 *v42; // rbx
  int v43; // r14d
  int v44; // ebx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  bool v53; // zf
  bool v54; // sf
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  PVOID v76; // rdx
  LARGE_INTEGER *v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // r15
  LARGE_INTEGER v84; // rax
  __int64 v85; // rbx
  struct _LIST_ENTRY *v86; // r13
  UserCritTelemetry *v87; // rcx
  int v88; // r8d
  struct tagTHREADINFO *v89; // rbx
  __int64 v90; // rdx
  struct tagTHREADINFO *v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  int v94; // ebx
  _BYTE *v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v104; // rcx
  __int64 v105; // r9
  char v106; // r15
  __int64 v107; // r13
  PVOID v108; // rdx
  unsigned __int64 v109; // r8
  LARGE_INTEGER *v110; // rbx
  __int64 v111; // rax
  struct tagTHREADINFO **v112; // r12
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // r14
  LARGE_INTEGER v118; // rax
  __int64 v119; // rbx
  struct _LIST_ENTRY *v120; // r15
  UserCritTelemetry *v121; // rcx
  int v122; // r8d
  struct tagTHREADINFO *v123; // rbx
  PVOID v124; // rdx
  LARGE_INTEGER *v125; // rbx
  __int64 v126; // rax
  struct tagTHREADINFO **v127; // r13
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // r14
  LARGE_INTEGER v133; // r15
  __int64 v134; // rbx
  int v135; // r8d
  struct tagTHREADINFO *v136; // rbx
  __int64 v137; // rdx
  struct tagTHREADINFO *v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  int v141; // ebx
  int v142; // ebx
  int v143; // ebx
  __int64 v144; // rcx
  __int64 v145; // r9
  PVOID v146; // rdx
  unsigned __int64 v147; // r8
  LARGE_INTEGER *v148; // rbx
  __int64 v149; // rax
  struct tagTHREADINFO **v150; // r13
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // r14
  LARGE_INTEGER v156; // rax
  __int64 v157; // rbx
  struct _LIST_ENTRY *v158; // r15
  UserCritTelemetry *v159; // rcx
  int v160; // r8d
  struct tagTHREADINFO *v161; // rbx
  __int64 v162; // rdx
  struct tagTHREADINFO *v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 v166; // rbx
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  PVOID v175; // rdx
  LARGE_INTEGER *v176; // rbx
  __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // r15
  LARGE_INTEGER v183; // r13
  __int64 v184; // rbx
  int v185; // r8d
  struct tagTHREADINFO *v186; // rbx
  __int64 v187; // rdx
  struct tagTHREADINFO *v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  int v191; // ebx
  PVOID v192; // rdx
  LARGE_INTEGER *v193; // rbx
  __int64 v194; // rax
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // r9
  __int64 v199; // r15
  LARGE_INTEGER v200; // rax
  __int64 v201; // rbx
  struct _LIST_ENTRY *v202; // r13
  UserCritTelemetry *v203; // rcx
  int v204; // r8d
  struct tagTHREADINFO *v205; // rbx
  __int64 v206; // rdx
  struct tagTHREADINFO *v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r9
  int v210; // ebx
  PVOID v211; // rdx
  LARGE_INTEGER *v212; // rbx
  __int64 v213; // rax
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // r9
  __int64 v218; // r15
  LARGE_INTEGER v219; // rax
  __int64 v220; // rbx
  struct _LIST_ENTRY *v221; // r13
  UserCritTelemetry *v222; // rcx
  int v223; // r8d
  struct tagTHREADINFO *v224; // rbx
  __int64 v225; // rdx
  struct tagTHREADINFO *v226; // rcx
  __int64 v227; // r8
  __int64 v228; // r9
  int v229; // ebx
  __int64 v230; // rax
  __int64 *v231; // rbx
  __int64 v232; // rax
  __int64 *v233; // rbx
  __int64 v234; // rdx
  __int64 v235; // r8
  __int64 v236; // r9
  __int64 v237; // rcx
  __int64 v238; // rcx
  PVOID v239; // rdx
  unsigned __int64 v240; // r8
  LARGE_INTEGER *v241; // rbx
  __int64 v242; // rax
  struct tagTHREADINFO **v243; // r13
  __int64 v244; // rdx
  __int64 v245; // rcx
  __int64 v246; // r8
  __int64 v247; // r9
  __int64 v248; // r15
  LARGE_INTEGER v249; // rax
  __int64 v250; // rbx
  struct _LIST_ENTRY *v251; // r12
  UserCritTelemetry *v252; // rcx
  int v253; // r8d
  struct tagTHREADINFO *v254; // rbx
  __int64 v255; // rdx
  struct tagTHREADINFO *v256; // rcx
  __int64 v257; // r8
  __int64 v258; // r9
  int v259; // ebx
  __int64 v260; // rdx
  __int64 v261; // rcx
  __int64 v262; // r8
  __int64 v263; // r9
  __int64 v264; // rdx
  PVOID Reserved; // rdx
  LARGE_INTEGER *CurrentThreadWin32Thread; // r15
  __int64 v267; // rax
  __int64 v268; // rdx
  struct tagTHREADINFO *v269; // rcx
  __int64 v270; // r8
  __int64 v271; // r9
  __int64 v272; // rdx
  __int64 v273; // rcx
  __int64 v274; // r8
  __int64 v275; // r9
  __int64 v276; // r15
  int v277; // r8d
  struct _LIST_ENTRY *QuadPart; // rcx
  struct tagTHREADINFO *v279; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v281; // r15
  int v282; // ebx
  int v283; // ebx
  __int64 v284; // rcx
  __int64 v285; // r9
  unsigned int v286; // r13d
  PVOID v287; // rdx
  unsigned __int64 v288; // r8
  LARGE_INTEGER *v289; // rbx
  __int64 v290; // rax
  __int64 v291; // rdx
  __int64 v292; // rcx
  __int64 v293; // r8
  __int64 v294; // r9
  __int64 v295; // r14
  LARGE_INTEGER v296; // rax
  __int64 v297; // rbx
  struct _LIST_ENTRY *v298; // r15
  UserCritTelemetry *v299; // rcx
  int v300; // r8d
  struct tagTHREADINFO *v301; // rbx
  __int64 v302; // rcx
  __int64 v303; // rax
  __int64 *v304; // rbx
  __int64 v305; // rax
  __int64 *v306; // rbx
  PVOID v307; // rdx
  LARGE_INTEGER *v308; // rbx
  __int64 v309; // rax
  __int64 v310; // rdx
  struct tagTHREADINFO *v311; // rcx
  __int64 v312; // r8
  __int64 v313; // r9
  __int64 v314; // rdx
  __int64 v315; // rcx
  __int64 v316; // r8
  __int64 v317; // r9
  __int64 v318; // r15
  LARGE_INTEGER v319; // rax
  __int64 v320; // rbx
  struct _LIST_ENTRY *v321; // r13
  UserCritTelemetry *v322; // rcx
  int v323; // r8d
  struct tagTHREADINFO *v324; // rbx
  __int64 v325; // rax
  __int64 *v326; // rbx
  int v327; // ebx
  int v328; // ebx
  __int64 v329; // rdx
  __int64 v330; // rcx
  __int64 v331; // r8
  __int64 v332; // r9
  int v333; // ebx
  __int64 v334; // rdx
  __int64 v335; // rcx
  __int64 v336; // r8
  __int64 v337; // r9
  int v338; // ebx
  __int64 v339; // rdx
  __int64 v340; // rcx
  __int64 v341; // r8
  __int64 v342; // r9
  int v343; // ebx
  __int64 v344; // rdx
  __int64 v345; // rcx
  __int64 v346; // r8
  __int64 v347; // r9
  int v348; // ebx
  __int64 v349; // rdx
  __int64 v350; // rcx
  __int64 v351; // r8
  __int64 v352; // r9
  int v353; // ebx
  __int64 v354; // rdx
  __int64 v355; // rcx
  __int64 v356; // r8
  __int64 v357; // r9
  int v358; // ebx
  __int64 v359; // rdx
  __int64 v360; // rcx
  __int64 v361; // r8
  __int64 v362; // r9
  __int64 v363; // rdx
  __int64 v364; // rcx
  __int64 v365; // r8
  __int64 v366; // r9
  __int64 v367; // rdx
  __int64 v368; // rcx
  __int64 v369; // r8
  __int64 v370; // r9
  __int64 v371; // rbx
  __int64 v372; // rdx
  __int64 v373; // rcx
  __int64 v374; // r8
  __int64 v375; // r9
  __int64 v376; // rbx
  __int64 v377; // rdx
  __int64 v378; // rcx
  __int64 v379; // r8
  __int64 v380; // r9
  __int64 v381; // rax
  __int64 *v382; // rbx
  __int64 v383; // rdx
  __int64 v384; // rcx
  __int64 v385; // r8
  __int64 v386; // r9
  __int64 v387; // rdx
  __int64 v388; // rcx
  __int64 v389; // r8
  __int64 v390; // r9
  __int64 v391; // rdx
  __int64 v392; // rcx
  __int64 v393; // r8
  __int64 v394; // r9
  __int64 v395; // rax
  __int64 *v396; // rbx
  __int64 v397; // rax
  __int64 *v398; // rbx
  PVOID v399; // rdx
  LARGE_INTEGER *v400; // rbx
  __int64 v401; // rax
  __int64 v402; // rdx
  __int64 v403; // rcx
  __int64 v404; // r8
  __int64 v405; // r9
  __int64 v406; // r15
  LARGE_INTEGER v407; // rax
  __int64 v408; // rbx
  struct _LIST_ENTRY *v409; // r13
  UserCritTelemetry *v410; // rcx
  int v411; // r8d
  struct tagTHREADINFO *v412; // rbx
  __int64 v413; // rcx
  __int64 v414; // rax
  __int64 *v415; // rbx
  int v416; // ebx
  __int64 v417; // rdx
  __int64 v418; // rcx
  __int64 v419; // r8
  __int64 v420; // r9
  PVOID v421; // rdx
  LARGE_INTEGER *v422; // rbx
  __int64 v423; // rax
  struct tagTHREADINFO **v424; // r13
  struct tagTHREADINFO *v425; // rcx
  __int64 v426; // rdx
  __int64 v427; // rcx
  __int64 v428; // r8
  __int64 v429; // r9
  __int64 v430; // r14
  LARGE_INTEGER v431; // rax
  __int64 v432; // rbx
  struct _LIST_ENTRY *v433; // r15
  UserCritTelemetry *v434; // rcx
  int v435; // r8d
  struct tagTHREADINFO *v436; // rbx
  __int64 v437; // rax
  __int64 *v438; // rbx
  enum POWER_MONITOR_REQUEST_REASON v439; // ecx
  PVOID v440; // rdx
  LARGE_INTEGER *v441; // rbx
  __int64 v442; // rax
  __int64 v443; // rdx
  __int64 v444; // rcx
  __int64 v445; // r8
  __int64 v446; // r9
  __int64 v447; // r15
  LARGE_INTEGER v448; // rax
  __int64 v449; // rbx
  struct _LIST_ENTRY *v450; // r13
  UserCritTelemetry *v451; // rcx
  int v452; // r8d
  struct tagTHREADINFO *v453; // rbx
  __int64 v454; // rcx
  __int64 v455; // rax
  __int64 *v456; // rbx
  __int64 v457; // rdx
  __int64 v458; // rcx
  __int64 v459; // r8
  __int64 v460; // r9
  PVOID v461; // rdx
  LARGE_INTEGER *v462; // rbx
  __int64 v463; // rax
  __int64 v464; // rdx
  struct tagTHREADINFO *v465; // rcx
  __int64 v466; // r8
  __int64 v467; // r9
  __int64 v468; // rdx
  __int64 v469; // rcx
  __int64 v470; // r8
  __int64 v471; // r9
  __int64 v472; // r15
  LARGE_INTEGER v473; // rax
  __int64 v474; // rbx
  struct _LIST_ENTRY *v475; // r13
  UserCritTelemetry *v476; // rcx
  int v477; // r8d
  struct tagTHREADINFO *v478; // rbx
  __int64 v479; // rax
  __int64 *v480; // rbx
  PVOID v481; // rdx
  LARGE_INTEGER *v482; // rbx
  __int64 v483; // rax
  __int64 v484; // rdx
  struct tagTHREADINFO *v485; // rcx
  __int64 v486; // r8
  __int64 v487; // r9
  __int64 v488; // rdx
  __int64 v489; // rcx
  __int64 v490; // r8
  __int64 v491; // r9
  __int64 v492; // r15
  LARGE_INTEGER v493; // rax
  __int64 v494; // rbx
  struct _LIST_ENTRY *v495; // r13
  UserCritTelemetry *v496; // rcx
  int v497; // r8d
  struct tagTHREADINFO *v498; // rbx
  __int64 v499; // rax
  __int64 *v500; // rbx
  __int64 v501; // rdx
  __int64 v502; // rcx
  __int64 v503; // r8
  __int64 v504; // r9
  PVOID v505; // rdx
  LARGE_INTEGER *v506; // rbx
  __int64 v507; // rax
  __int64 v508; // rdx
  struct tagTHREADINFO *v509; // rcx
  __int64 v510; // r8
  __int64 v511; // r9
  __int64 v512; // rdx
  __int64 v513; // rcx
  __int64 v514; // r8
  __int64 v515; // r9
  __int64 v516; // r15
  LARGE_INTEGER v517; // rax
  __int64 v518; // rbx
  struct _LIST_ENTRY *v519; // r13
  UserCritTelemetry *v520; // rcx
  int v521; // r8d
  struct tagTHREADINFO *v522; // rbx
  __int64 v523; // rax
  __int64 *v524; // rbx
  int v525; // ebx
  __int64 v526; // rax
  __int64 *v527; // rbx
  __int64 v528; // rax
  __int64 *v529; // rbx
  __int64 v530; // rcx
  PVOID v531; // rdx
  LARGE_INTEGER *v532; // rbx
  __int64 v533; // rax
  struct tagTHREADINFO **v534; // r13
  __int64 v535; // rdx
  struct tagTHREADINFO *v536; // rcx
  __int64 v537; // r8
  __int64 v538; // r9
  __int64 v539; // rdx
  __int64 v540; // rcx
  __int64 v541; // r8
  __int64 v542; // r9
  __int64 v543; // r14
  LARGE_INTEGER v544; // rax
  __int64 v545; // rbx
  struct _LIST_ENTRY *v546; // r15
  UserCritTelemetry *v547; // rcx
  int v548; // r8d
  struct tagTHREADINFO *v549; // rbx
  __int64 v550; // rax
  __int64 *v551; // rbx
  __int64 v552; // rax
  __int64 v553; // rcx
  PVOID v554; // rdx
  LARGE_INTEGER *v555; // rbx
  __int64 v556; // rax
  __int64 v557; // rdx
  __int64 v558; // rcx
  __int64 v559; // r8
  __int64 v560; // r9
  __int64 v561; // r15
  LARGE_INTEGER v562; // rax
  __int64 v563; // rbx
  struct _LIST_ENTRY *v564; // r13
  UserCritTelemetry *v565; // rcx
  int v566; // r8d
  struct tagTHREADINFO *v567; // rbx
  __int64 v568; // rcx
  __int64 v569; // rax
  __int64 *v570; // rbx
  __int64 v571; // rdx
  __int64 v572; // rcx
  __int64 v573; // r8
  __int64 v574; // r9
  __int64 v575; // rax
  __int64 v576; // rcx
  __int64 v577; // rax
  PVOID v578; // rdx
  LARGE_INTEGER *v579; // rbx
  __int64 v580; // rax
  __int64 v581; // rdx
  struct tagTHREADINFO *v582; // rcx
  __int64 v583; // r8
  __int64 v584; // r9
  __int64 v585; // rdx
  __int64 v586; // rcx
  __int64 v587; // r8
  __int64 v588; // r9
  __int64 v589; // r15
  LARGE_INTEGER v590; // rax
  __int64 v591; // rbx
  struct _LIST_ENTRY *v592; // r13
  UserCritTelemetry *v593; // rcx
  int v594; // r8d
  struct tagTHREADINFO *v595; // rbx
  __int64 v596; // rax
  __int64 *v597; // rbx
  __int64 v598; // [rsp+28h] [rbp-B9h]
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-99h]
  char v600; // [rsp+54h] [rbp-8Dh]
  struct tagTHREADINFO **v601; // [rsp+58h] [rbp-89h]
  struct tagTHREADINFO **v602; // [rsp+58h] [rbp-89h]
  struct tagTHREADINFO **v603; // [rsp+58h] [rbp-89h]
  struct tagTHREADINFO **v604; // [rsp+58h] [rbp-89h]
  struct tagTHREADINFO **v605; // [rsp+58h] [rbp-89h]
  struct tagTHREADINFO **v606; // [rsp+58h] [rbp-89h]
  struct tagTHREADINFO **v607; // [rsp+58h] [rbp-89h]
  struct tagTHREADINFO **v608; // [rsp+58h] [rbp-89h]
  struct tagTHREADINFO **v609; // [rsp+58h] [rbp-89h]
  struct tagTHREADINFO **v610; // [rsp+58h] [rbp-89h]
  struct tagTHREADINFO **v611; // [rsp+58h] [rbp-89h]
  bool v612[8]; // [rsp+60h] [rbp-81h] BYREF
  __int128 v613; // [rsp+68h] [rbp-79h] BYREF
  int v614; // [rsp+78h] [rbp-69h]
  struct tagTHREADINFO **v615; // [rsp+80h] [rbp-61h]
  __int64 v616; // [rsp+88h] [rbp-59h]
  _DWORD *v617; // [rsp+90h] [rbp-51h]
  PERESOURCE *DomainLockRef; // [rsp+98h] [rbp-49h] BYREF
  char v619; // [rsp+A0h] [rbp-41h]
  void *v620; // [rsp+A8h] [rbp-39h]
  char v621; // [rsp+B0h] [rbp-31h]
  __int64 v622; // [rsp+B8h] [rbp-29h]
  char v623; // [rsp+C0h] [rbp-21h]
  _QWORD v624[5]; // [rsp+C8h] [rbp-19h] BYREF
  char v625; // [rsp+F0h] [rbp+Fh]

  v6 = 0;
  v617 = a6;
  v7 = 0;
  v613 = 0LL;
  v9 = a3;
  v10 = a1;
  if ( !*(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 2936) )
    return (unsigned int)-1073741823;
  v12 = 0x8000002010000000uLL;
  v13 = 1;
  v14 = 0x200000010000000LL;
  v15 = 2;
  if ( !v10 )
  {
    if ( gbVideoInitialized )
      goto LABEL_47;
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (Reserved = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v12) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > v15
      && (v12 & qword_1C02C4050) != 0
      && (v12 & qword_1C02C4058) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & v14) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > v15
      && (v14 & qword_1C02C4050) != 0
      && (v14 & qword_1C02C4058) == qword_1C02C4058 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v11, Reserved, v14, v12, v598);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    }
    v267 = SGDGetUserSessionState(v11, Reserved, v14, v12);
    v615 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v267 + 8));
    if ( v615 )
    {
      if ( IsEtwUserCritEnabled() )
      {
        v616 = PsGetCurrentThreadWin32Thread(v273, v272, v274, v275, v598);
        if ( v616 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v276 = PerformanceCounter.QuadPart - *(_QWORD *)(v616 + 8);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
            xmmword_1C02D2BD8 = 0LL;
          }
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v276, 0);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
            xmmword_1C02D2BD8 = 0LL;
          }
          UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
          v277 = 0x10000000;
          QuadPart = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
          *(LARGE_INTEGER *)(v616 + 8) = PerformanceCounter;
          if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              0x10000000,
              v276,
              1000000 * v276 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
            QuadPart = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
          }
          if ( v276 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (char *)QuadPart - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
            {
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v277,
                v276,
                1000 * v276 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
              QuadPart = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
            }
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = QuadPart;
          }
          *(_QWORD *)(v616 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v279 = *v615;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v279;
        if ( v279 )
        {
          *((_DWORD *)v279 + 387) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v269);
          if ( CurrentProcessWin32Process )
          {
            if ( *(_QWORD *)CurrentProcessWin32Process )
            {
              if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
              {
                v269 = gptiCurrent;
                if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                {
                  v281 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( gpSharedUserCritDeferredUnlockListHead )
                  {
                    do
                    {
                      gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v281[2];
                      v281[2] = 0LL;
                      if ( !*(_DWORD *)(*v281 + 8) )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                      HMUnlockObject(*v281);
                      v281 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    }
                    while ( gpSharedUserCritDeferredUnlockListHead );
                    v7 = 0;
                  }
                }
              }
            }
          }
        }
        goto LABEL_342;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
LABEL_342:
    UserSessionSwitchLeaveCrit((__int64)v269, v268, v270, v271);
    v14 = 0x200000010000000LL;
    v12 = 0x8000002010000000uLL;
    v15 = 2;
  }
  if ( !gbVideoInitialized )
    return (unsigned int)-1073741823;
  if ( !v10 )
  {
LABEL_47:
    if ( v9 != 20 || !a4 )
      return (unsigned int)-1073741823;
    v64 = *(_QWORD *)&GUID_ADAPTIVE_SESSION_STATE_CHANGED.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_ADAPTIVE_SESSION_STATE_CHANGED.Data1 == *(_QWORD *)a4 )
      v64 = *(_QWORD *)GUID_ADAPTIVE_SESSION_STATE_CHANGED.Data4 - *((_QWORD *)a4 + 1);
    if ( v64 )
    {
      v65 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 - *(_QWORD *)a4;
      if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
        v65 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
      if ( v65 )
      {
        v66 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
          v66 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
        if ( v66 )
        {
          v67 = *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 - *(_QWORD *)a4;
          if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == *(_QWORD *)a4 )
            v67 = *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 - *((_QWORD *)a4 + 1);
          if ( v67 )
          {
            v68 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)a4 )
              v68 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - *((_QWORD *)a4 + 1);
            if ( v68 )
            {
              v68 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)a4;
              if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4 )
                v68 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)a4 + 1);
              if ( v68 )
              {
                v69 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - *(_QWORD *)a4;
                if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 == *(_QWORD *)a4 )
                  v69 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - *((_QWORD *)a4 + 1);
                if ( v69 )
                {
                  v70 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - *(_QWORD *)a4;
                  if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)a4 )
                    v70 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - *((_QWORD *)a4 + 1);
                  if ( v70 )
                  {
                    v71 = *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 - *(_QWORD *)a4;
                    if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 == *(_QWORD *)a4 )
                      v71 = *(_QWORD *)GUID_LIDSWITCH_STATE_RELIABILITY.Data4 - *((_QWORD *)a4 + 1);
                    if ( v71 )
                    {
                      v72 = *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 - *(_QWORD *)a4;
                      if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 == *(_QWORD *)a4 )
                        v72 = *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 - *((_QWORD *)a4 + 1);
                      if ( v72 )
                      {
                        v73 = *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 - *(_QWORD *)a4;
                        if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)a4 )
                          v73 = *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 - *((_QWORD *)a4 + 1);
                        if ( v73 )
                        {
                          v74 = *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 - *(_QWORD *)a4;
                          if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
                            v74 = *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
                          if ( v74 )
                          {
                            v75 = *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 - *(_QWORD *)a4;
                            if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
                              v75 = *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
                            if ( !v75 )
                            {
                              if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
                                || (v76 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v12) != 0)
                                && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                                && (v12 & qword_1C02C4050) != 0
                                && (v12 & qword_1C02C4058) == qword_1C02C4058
                                || ((__int64)WPP_MAIN_CB.Reserved & v14) != 0
                                && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                                && (v14 & qword_1C02C4050) != 0
                                && (v14 & qword_1C02C4058) == qword_1C02C4058 )
                              {
                                v77 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v75, v76, v14, v12, v598);
                                if ( v77 )
                                  v77[1] = KeQueryPerformanceCounter(0LL);
                              }
                              v78 = SGDGetUserSessionState(v75, v76, v14, v12);
                              v601 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v78 + 8));
                              if ( v601 )
                              {
                                if ( IsEtwUserCritEnabled() )
                                {
                                  v83 = PsGetCurrentThreadWin32Thread(v80, v79, v81, v82, v598);
                                  if ( v83 )
                                  {
                                    v84 = KeQueryPerformanceCounter(0LL);
                                    v85 = v84.QuadPart - *(_QWORD *)(v83 + 8);
                                    v86 = (struct _LIST_ENTRY *)v84.QuadPart;
                                    if ( (dword_1C02D1900 & 1) == 0 )
                                    {
                                      dword_1C02D1900 |= 1u;
                                      UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
                                    }
                                    UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v85, 0);
                                    if ( (dword_1C02D1900 & 1) == 0 )
                                    {
                                      dword_1C02D1900 |= 1u;
                                      UserCritTelemetry::UserCritTelemetry(v87);
                                    }
                                    UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
                                    *(_QWORD *)(v83 + 8) = v86;
                                    if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                                      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                                      && (qword_1C02C4050 & 0x200000010000000LL) != 0
                                      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                                      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                                    {
                                      McTemplateK0xqx_EtwWriteTransfer(
                                        gullUserCritAcquireToken,
                                        (unsigned int)&AcquiredExclusiveUserCritEvent,
                                        v88,
                                        v85,
                                        1000000 * v85 / gliQpcFreq.QuadPart,
                                        gullUserCritAcquireToken);
                                    }
                                    if ( v85 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                                      && (char *)v86 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
                                    {
                                      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                                        McTemplateK0xqx_EtwWriteTransfer(
                                          gullUserCritAcquireToken,
                                          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                                          v88,
                                          v85,
                                          1000 * v85 / gliQpcFreq.QuadPart,
                                          gullUserCritAcquireToken);
                                      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v86;
                                    }
                                    *(_QWORD *)(v83 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                                  }
                                }
                                v89 = *v601;
                                if ( !IsThreadCrossSessionAttached() )
                                {
                                  gptiCurrent = v89;
                                  if ( v89 )
                                  {
                                    *((_DWORD *)v89 + 387) = 1;
                                    v528 = PsGetCurrentProcessWin32Process(v91);
                                    if ( v528 )
                                    {
                                      if ( *(_QWORD *)v528 )
                                      {
                                        if ( (*(_DWORD *)(v528 + 12) & 0x8000) != 0 )
                                        {
                                          v91 = gptiCurrent;
                                          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                                            && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                                          {
                                            v529 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                                            if ( gpSharedUserCritDeferredUnlockListHead )
                                            {
                                              do
                                              {
                                                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v529[2];
                                                v529[2] = 0LL;
                                                if ( !*(_DWORD *)(*v529 + 8) )
                                                  MicrosoftTelemetryAssertTriggeredArgsKM(
                                                    "IXPTelAssert",
                                                    0x20000LL,
                                                    4237LL);
                                                HMUnlockObject(*v529);
                                                v529 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                                              }
                                              while ( gpSharedUserCritDeferredUnlockListHead );
                                              v7 = 0;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  goto LABEL_105;
                                }
                              }
                              else
                              {
                                EtwTraceAcquiredExclusiveUserCrit();
                              }
                              gptiCurrent = 0LL;
LABEL_105:
                              v94 = a4[4];
                              *(_DWORD *)(SGDGetUserSessionState(v91, v90, v92, v93) + 3000) = v94;
                              goto LABEL_108;
                            }
                            v530 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)a4;
                            if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)a4 )
                              v530 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *((_QWORD *)a4 + 1);
                            if ( !v530 )
                            {
                              if ( !a4[4] )
                                return v7;
                              if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
                                || (v531 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v12) != 0)
                                && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                                && (v12 & qword_1C02C4050) != 0
                                && (v12 & qword_1C02C4058) == qword_1C02C4058
                                || ((__int64)WPP_MAIN_CB.Reserved & v14) != 0
                                && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                                && (v14 & qword_1C02C4050) != 0
                                && (v14 & qword_1C02C4058) == qword_1C02C4058 )
                              {
                                v532 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v530, v531, v14, v12, v598);
                                if ( v532 )
                                  v532[1] = KeQueryPerformanceCounter(0LL);
                              }
                              v533 = SGDGetUserSessionState(v530, v531, v14, v12);
                              v534 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v533 + 8));
                              if ( v534 )
                              {
                                if ( IsEtwUserCritEnabled() )
                                {
                                  v543 = PsGetCurrentThreadWin32Thread(v540, v539, v541, v542, v598);
                                  if ( v543 )
                                  {
                                    v544 = KeQueryPerformanceCounter(0LL);
                                    v545 = v544.QuadPart - *(_QWORD *)(v543 + 8);
                                    v546 = (struct _LIST_ENTRY *)v544.QuadPart;
                                    if ( (dword_1C02D1900 & 1) == 0 )
                                    {
                                      dword_1C02D1900 |= 1u;
                                      UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
                                    }
                                    UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v545, 0);
                                    if ( (dword_1C02D1900 & 1) == 0 )
                                    {
                                      dword_1C02D1900 |= 1u;
                                      UserCritTelemetry::UserCritTelemetry(v547);
                                    }
                                    UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
                                    *(_QWORD *)(v543 + 8) = v546;
                                    if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                                      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                                      && (qword_1C02C4050 & 0x200000010000000LL) != 0
                                      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                                      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                                    {
                                      McTemplateK0xqx_EtwWriteTransfer(
                                        gullUserCritAcquireToken,
                                        (unsigned int)&AcquiredExclusiveUserCritEvent,
                                        v548,
                                        v545,
                                        1000000 * v545 / gliQpcFreq.QuadPart,
                                        gullUserCritAcquireToken);
                                    }
                                    if ( v545 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                                      && (char *)v546 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
                                    {
                                      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                                        McTemplateK0xqx_EtwWriteTransfer(
                                          gullUserCritAcquireToken,
                                          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                                          v548,
                                          v545,
                                          1000 * v545 / gliQpcFreq.QuadPart,
                                          gullUserCritAcquireToken);
                                      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v546;
                                    }
                                    *(_QWORD *)(v543 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                                  }
                                }
                                v549 = *v534;
                                if ( !IsThreadCrossSessionAttached() )
                                {
                                  gptiCurrent = v549;
                                  if ( v549 )
                                  {
                                    *((_DWORD *)v549 + 387) = 1;
                                    v550 = PsGetCurrentProcessWin32Process(v536);
                                    if ( v550 )
                                    {
                                      if ( *(_QWORD *)v550 )
                                      {
                                        if ( (*(_DWORD *)(v550 + 12) & 0x8000) != 0 )
                                        {
                                          v536 = gptiCurrent;
                                          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                                            && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                                          {
                                            v551 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                                            if ( gpSharedUserCritDeferredUnlockListHead )
                                            {
                                              do
                                              {
                                                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v551[2];
                                                v551[2] = 0LL;
                                                if ( !*(_DWORD *)(*v551 + 8) )
                                                  MicrosoftTelemetryAssertTriggeredArgsKM(
                                                    "IXPTelAssert",
                                                    0x20000LL,
                                                    4237LL);
                                                HMUnlockObject(*v551);
                                                v551 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                                              }
                                              while ( gpSharedUserCritDeferredUnlockListHead );
                                              v7 = 0;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  goto LABEL_1048;
                                }
                              }
                              else
                              {
                                EtwTraceAcquiredExclusiveUserCrit();
                              }
                              gptiCurrent = 0LL;
LABEL_1048:
                              v552 = SGDGetUserSessionState(v536, v535, v537, v538);
                              v96 = 2LL;
                              *(_DWORD *)(v552 + 12616) |= 2u;
                              goto LABEL_108;
                            }
                            v553 = *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 - *(_QWORD *)a4;
                            if ( *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 == *(_QWORD *)a4 )
                              v553 = *(_QWORD *)GUID_INPUT_SUPPRESS_REQUESTED.Data4 - *((_QWORD *)a4 + 1);
                            if ( v553 )
                              return (unsigned int)-1073741823;
                            if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
                              || (v554 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v12) != 0)
                              && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                              && (v12 & qword_1C02C4050) != 0
                              && (v12 & qword_1C02C4058) == qword_1C02C4058
                              || ((__int64)WPP_MAIN_CB.Reserved & v14) != 0
                              && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                              && (v14 & qword_1C02C4050) != 0
                              && (v14 & qword_1C02C4058) == qword_1C02C4058 )
                            {
                              v555 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v553, v554, v14, v12, v598);
                              if ( v555 )
                                v555[1] = KeQueryPerformanceCounter(0LL);
                            }
                            v556 = SGDGetUserSessionState(v553, v554, v14, v12);
                            v610 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v556 + 8));
                            if ( v610 )
                            {
                              if ( IsEtwUserCritEnabled() )
                              {
                                v561 = PsGetCurrentThreadWin32Thread(v558, v557, v559, v560, v598);
                                if ( v561 )
                                {
                                  v562 = KeQueryPerformanceCounter(0LL);
                                  v563 = v562.QuadPart - *(_QWORD *)(v561 + 8);
                                  v564 = (struct _LIST_ENTRY *)v562.QuadPart;
                                  if ( (dword_1C02D1900 & 1) == 0 )
                                  {
                                    dword_1C02D1900 |= 1u;
                                    UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
                                  }
                                  UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v563, 0);
                                  if ( (dword_1C02D1900 & 1) == 0 )
                                  {
                                    dword_1C02D1900 |= 1u;
                                    UserCritTelemetry::UserCritTelemetry(v565);
                                  }
                                  UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
                                  *(_QWORD *)(v561 + 8) = v564;
                                  if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                                    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                                    && (qword_1C02C4050 & 0x200000010000000LL) != 0
                                    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                                    && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                                  {
                                    McTemplateK0xqx_EtwWriteTransfer(
                                      gullUserCritAcquireToken,
                                      (unsigned int)&AcquiredExclusiveUserCritEvent,
                                      v566,
                                      v563,
                                      1000000 * v563 / gliQpcFreq.QuadPart,
                                      gullUserCritAcquireToken);
                                  }
                                  if ( v563 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                                    && (char *)v564 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
                                  {
                                    if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                                      McTemplateK0xqx_EtwWriteTransfer(
                                        gullUserCritAcquireToken,
                                        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                                        v566,
                                        v563,
                                        1000 * v563 / gliQpcFreq.QuadPart,
                                        gullUserCritAcquireToken);
                                    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v564;
                                  }
                                  *(_QWORD *)(v561 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                                }
                              }
                              v567 = *v610;
                              if ( !IsThreadCrossSessionAttached() )
                              {
                                gptiCurrent = v567;
                                if ( v567 )
                                {
                                  *((_DWORD *)v567 + 387) = 1;
                                  v569 = PsGetCurrentProcessWin32Process(v568);
                                  if ( v569 )
                                  {
                                    if ( *(_QWORD *)v569 )
                                    {
                                      if ( (*(_DWORD *)(v569 + 12) & 0x8000) != 0
                                        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                                        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                                      {
                                        v570 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                                        if ( gpSharedUserCritDeferredUnlockListHead )
                                        {
                                          do
                                          {
                                            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v570[2];
                                            v570[2] = 0LL;
                                            if ( !*(_DWORD *)(*v570 + 8) )
                                              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                                            HMUnlockObject(*v570);
                                            v570 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                                          }
                                          while ( gpSharedUserCritDeferredUnlockListHead );
                                          v7 = 0;
                                        }
                                      }
                                    }
                                  }
                                }
                                goto LABEL_1097;
                              }
                            }
                            else
                            {
                              EtwTraceAcquiredExclusiveUserCrit();
                            }
                            gptiCurrent = 0LL;
LABEL_1097:
                            DomainSharedBase<>::DomainExclusiveBase<DLT_POWERTRANSITIONSSTATE>::ObjectLockBase<>::ObjectLockBase<>(v624);
                            DomainSharedBase<>::DomainExclusiveBase<DLT_POWERTRANSITIONSSTATE>::ObjectLockBase<>::lock(v624);
                            if ( a4[4] )
                            {
                              v575 = SGDGetUserSessionState(v572, v571, v573, v574);
                              v576 = 2147484348LL;
                              *(_DWORD *)(v575 + 3008) = 1;
                            }
                            else
                            {
                              v577 = SGDGetUserSessionState(v572, v571, v573, v574);
                              v576 = 2147484349LL;
                              *(_DWORD *)(v577 + 3008) = 0;
                            }
                            UserLogError(v576);
                            CBaseInput::OnInputSuppressedValueChanged(a4[4] != 0);
                            if ( v625 )
                            {
                              v96 = v624[0];
                              if ( v624[0] )
                                ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v624[0]);
                              v625 = 0;
                            }
                            goto LABEL_108;
                          }
                          if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
                            || (v211 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v12) != 0)
                            && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                            && (v12 & qword_1C02C4050) != 0
                            && (v12 & qword_1C02C4058) == qword_1C02C4058
                            || ((__int64)WPP_MAIN_CB.Reserved & v14) != 0
                            && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                            && (v14 & qword_1C02C4050) != 0
                            && (v14 & qword_1C02C4058) == qword_1C02C4058 )
                          {
                            v212 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v74, v211, v14, v12, v598);
                            if ( v212 )
                              v212[1] = KeQueryPerformanceCounter(0LL);
                          }
                          v213 = SGDGetUserSessionState(v74, v211, v14, v12);
                          v604 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v213 + 8));
                          if ( v604 )
                          {
                            if ( IsEtwUserCritEnabled() )
                            {
                              v218 = PsGetCurrentThreadWin32Thread(v215, v214, v216, v217, v598);
                              if ( v218 )
                              {
                                v219 = KeQueryPerformanceCounter(0LL);
                                v220 = v219.QuadPart - *(_QWORD *)(v218 + 8);
                                v221 = (struct _LIST_ENTRY *)v219.QuadPart;
                                if ( (dword_1C02D1900 & 1) == 0 )
                                {
                                  dword_1C02D1900 |= 1u;
                                  UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
                                }
                                UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v220, 0);
                                if ( (dword_1C02D1900 & 1) == 0 )
                                {
                                  dword_1C02D1900 |= 1u;
                                  UserCritTelemetry::UserCritTelemetry(v222);
                                }
                                UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
                                *(_QWORD *)(v218 + 8) = v221;
                                if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                                  && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                                  && (qword_1C02C4050 & 0x200000010000000LL) != 0
                                  && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                                  && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                                {
                                  McTemplateK0xqx_EtwWriteTransfer(
                                    gullUserCritAcquireToken,
                                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                                    v223,
                                    v220,
                                    1000000 * v220 / gliQpcFreq.QuadPart,
                                    gullUserCritAcquireToken);
                                }
                                if ( v220 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                                  && (char *)v221 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
                                {
                                  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                                    McTemplateK0xqx_EtwWriteTransfer(
                                      gullUserCritAcquireToken,
                                      (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                                      v223,
                                      v220,
                                      1000 * v220 / gliQpcFreq.QuadPart,
                                      gullUserCritAcquireToken);
                                  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v221;
                                }
                                *(_QWORD *)(v218 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                              }
                            }
                            v224 = *v604;
                            if ( !IsThreadCrossSessionAttached() )
                            {
                              gptiCurrent = v224;
                              if ( v224 )
                              {
                                *((_DWORD *)v224 + 387) = 1;
                                v526 = PsGetCurrentProcessWin32Process(v226);
                                if ( v526 )
                                {
                                  if ( *(_QWORD *)v526 )
                                  {
                                    if ( (*(_DWORD *)(v526 + 12) & 0x8000) != 0 )
                                    {
                                      v226 = gptiCurrent;
                                      if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                                        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                                      {
                                        v527 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                                        if ( gpSharedUserCritDeferredUnlockListHead )
                                        {
                                          do
                                          {
                                            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v527[2];
                                            v527[2] = 0LL;
                                            if ( !*(_DWORD *)(*v527 + 8) )
                                              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                                            HMUnlockObject(*v527);
                                            v527 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                                          }
                                          while ( gpSharedUserCritDeferredUnlockListHead );
                                          v7 = 0;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto LABEL_231;
                            }
                          }
                          else
                          {
                            EtwTraceAcquiredExclusiveUserCrit();
                          }
                          gptiCurrent = 0LL;
LABEL_231:
                          v229 = a4[4];
                          *(_DWORD *)(SGDGetUserSessionState(v226, v225, v227, v228) + 3108) = v229;
                          goto LABEL_108;
                        }
                        if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
                          || (v505 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v12) != 0)
                          && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                          && (v12 & qword_1C02C4050) != 0
                          && (v12 & qword_1C02C4058) == qword_1C02C4058
                          || ((__int64)WPP_MAIN_CB.Reserved & v14) != 0
                          && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                          && (v14 & qword_1C02C4050) != 0
                          && (v14 & qword_1C02C4058) == qword_1C02C4058 )
                        {
                          v506 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v73, v505, v14, v12, v598);
                          if ( v506 )
                            v506[1] = KeQueryPerformanceCounter(0LL);
                        }
                        v507 = SGDGetUserSessionState(v73, v505, v14, v12);
                        v609 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v507 + 8));
                        if ( v609 )
                        {
                          if ( IsEtwUserCritEnabled() )
                          {
                            v516 = PsGetCurrentThreadWin32Thread(v513, v512, v514, v515, v598);
                            if ( v516 )
                            {
                              v517 = KeQueryPerformanceCounter(0LL);
                              v518 = v517.QuadPart - *(_QWORD *)(v516 + 8);
                              v519 = (struct _LIST_ENTRY *)v517.QuadPart;
                              if ( (dword_1C02D1900 & 1) == 0 )
                              {
                                dword_1C02D1900 |= 1u;
                                UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
                              }
                              UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v518, 0);
                              if ( (dword_1C02D1900 & 1) == 0 )
                              {
                                dword_1C02D1900 |= 1u;
                                UserCritTelemetry::UserCritTelemetry(v520);
                              }
                              UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
                              *(_QWORD *)(v516 + 8) = v519;
                              if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                                && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                                && (qword_1C02C4050 & 0x200000010000000LL) != 0
                                && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                                && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                              {
                                McTemplateK0xqx_EtwWriteTransfer(
                                  gullUserCritAcquireToken,
                                  (unsigned int)&AcquiredExclusiveUserCritEvent,
                                  v521,
                                  v518,
                                  1000000 * v518 / gliQpcFreq.QuadPart,
                                  gullUserCritAcquireToken);
                              }
                              if ( v518 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                                && (char *)v519 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
                              {
                                if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                                  McTemplateK0xqx_EtwWriteTransfer(
                                    gullUserCritAcquireToken,
                                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                                    v521,
                                    v518,
                                    1000 * v518 / gliQpcFreq.QuadPart,
                                    gullUserCritAcquireToken);
                                WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v519;
                              }
                              *(_QWORD *)(v516 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                            }
                          }
                          v522 = *v609;
                          if ( !IsThreadCrossSessionAttached() )
                          {
                            gptiCurrent = v522;
                            if ( v522 )
                            {
                              *((_DWORD *)v522 + 387) = 1;
                              v523 = PsGetCurrentProcessWin32Process(v509);
                              if ( v523 )
                              {
                                if ( *(_QWORD *)v523 )
                                {
                                  if ( (*(_DWORD *)(v523 + 12) & 0x8000) != 0 )
                                  {
                                    v509 = gptiCurrent;
                                    if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                                      && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                                    {
                                      v524 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                                      if ( gpSharedUserCritDeferredUnlockListHead )
                                      {
                                        do
                                        {
                                          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v524[2];
                                          v524[2] = 0LL;
                                          if ( !*(_DWORD *)(*v524 + 8) )
                                            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                                          HMUnlockObject(*v524);
                                          v524 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                                        }
                                        while ( gpSharedUserCritDeferredUnlockListHead );
                                        v7 = 0;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            goto LABEL_942;
                          }
                        }
                        else
                        {
                          EtwTraceAcquiredExclusiveUserCrit();
                        }
                        gptiCurrent = 0LL;
LABEL_942:
                        v525 = a4[4];
                        *(_DWORD *)(SGDGetUserSessionState(v509, v508, v510, v511) + 2996) = v525;
                        goto LABEL_108;
                      }
                      if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
                        || (v481 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v12) != 0)
                        && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                        && (v12 & qword_1C02C4050) != 0
                        && (v12 & qword_1C02C4058) == qword_1C02C4058
                        || ((__int64)WPP_MAIN_CB.Reserved & v14) != 0
                        && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                        && (v14 & qword_1C02C4050) != 0
                        && (v14 & qword_1C02C4058) == qword_1C02C4058 )
                      {
                        v482 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v72, v481, v14, v12, v598);
                        if ( v482 )
                          v482[1] = KeQueryPerformanceCounter(0LL);
                      }
                      v483 = SGDGetUserSessionState(v72, v481, v14, v12);
                      v608 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v483 + 8));
                      if ( v608 )
                      {
                        if ( IsEtwUserCritEnabled() )
                        {
                          v492 = PsGetCurrentThreadWin32Thread(v489, v488, v490, v491, v598);
                          if ( v492 )
                          {
                            v493 = KeQueryPerformanceCounter(0LL);
                            v494 = v493.QuadPart - *(_QWORD *)(v492 + 8);
                            v495 = (struct _LIST_ENTRY *)v493.QuadPart;
                            if ( (dword_1C02D1900 & 1) == 0 )
                            {
                              dword_1C02D1900 |= 1u;
                              UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
                            }
                            UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v494, 0);
                            if ( (dword_1C02D1900 & 1) == 0 )
                            {
                              dword_1C02D1900 |= 1u;
                              UserCritTelemetry::UserCritTelemetry(v496);
                            }
                            UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
                            *(_QWORD *)(v492 + 8) = v495;
                            if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                              && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                              && (qword_1C02C4050 & 0x200000010000000LL) != 0
                              && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                              && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                            {
                              McTemplateK0xqx_EtwWriteTransfer(
                                gullUserCritAcquireToken,
                                (unsigned int)&AcquiredExclusiveUserCritEvent,
                                v497,
                                v494,
                                1000000 * v494 / gliQpcFreq.QuadPart,
                                gullUserCritAcquireToken);
                            }
                            if ( v494 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                              && (char *)v495 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
                            {
                              if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                                McTemplateK0xqx_EtwWriteTransfer(
                                  gullUserCritAcquireToken,
                                  (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                                  v497,
                                  v494,
                                  1000 * v494 / gliQpcFreq.QuadPart,
                                  gullUserCritAcquireToken);
                              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v495;
                            }
                            *(_QWORD *)(v492 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                          }
                        }
                        v498 = *v608;
                        if ( !IsThreadCrossSessionAttached() )
                        {
                          gptiCurrent = v498;
                          if ( v498 )
                          {
                            *((_DWORD *)v498 + 387) = 1;
                            v499 = PsGetCurrentProcessWin32Process(v485);
                            if ( v499 )
                            {
                              if ( *(_QWORD *)v499 )
                              {
                                if ( (*(_DWORD *)(v499 + 12) & 0x8000) != 0 )
                                {
                                  v485 = gptiCurrent;
                                  if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                                    && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                                  {
                                    v500 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                                    if ( gpSharedUserCritDeferredUnlockListHead )
                                    {
                                      do
                                      {
                                        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v500[2];
                                        v500[2] = 0LL;
                                        if ( !*(_DWORD *)(*v500 + 8) )
                                          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                                        HMUnlockObject(*v500);
                                        v500 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                                      }
                                      while ( gpSharedUserCritDeferredUnlockListHead );
                                      v7 = 0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          goto LABEL_892;
                        }
                      }
                      else
                      {
                        EtwTraceAcquiredExclusiveUserCrit();
                      }
                      gptiCurrent = 0LL;
LABEL_892:
                      if ( !a4[4] )
                      {
                        *(_DWORD *)(SGDGetUserSessionState(v485, v484, v486, v487) + 2956) = 0;
                        goto LABEL_108;
                      }
                      if ( *(_BYTE *)SGDGetUserGdiSessionState(v485) )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5110LL);
                      LODWORD(v613) = 5;
                      *((_QWORD *)&v613 + 1) = 13LL;
                      *(_DWORD *)(SGDGetUserSessionState(v502, v501, v503, v504) + 2956) = 1;
                      goto LABEL_177;
                    }
                    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
                      || (v461 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v12) != 0)
                      && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                      && (v12 & qword_1C02C4050) != 0
                      && (v12 & qword_1C02C4058) == qword_1C02C4058
                      || ((__int64)WPP_MAIN_CB.Reserved & v14) != 0
                      && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                      && (v14 & qword_1C02C4050) != 0
                      && (v14 & qword_1C02C4058) == qword_1C02C4058 )
                    {
                      v462 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v71, v461, v14, v12, v598);
                      if ( v462 )
                        v462[1] = KeQueryPerformanceCounter(0LL);
                    }
                    v463 = SGDGetUserSessionState(v71, v461, v14, v12);
                    v607 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v463 + 8));
                    if ( v607 )
                    {
                      if ( IsEtwUserCritEnabled() )
                      {
                        v472 = PsGetCurrentThreadWin32Thread(v469, v468, v470, v471, v598);
                        if ( v472 )
                        {
                          v473 = KeQueryPerformanceCounter(0LL);
                          v474 = v473.QuadPart - *(_QWORD *)(v472 + 8);
                          v475 = (struct _LIST_ENTRY *)v473.QuadPart;
                          if ( (dword_1C02D1900 & 1) == 0 )
                          {
                            dword_1C02D1900 |= 1u;
                            UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
                          }
                          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v474, 0);
                          if ( (dword_1C02D1900 & 1) == 0 )
                          {
                            dword_1C02D1900 |= 1u;
                            UserCritTelemetry::UserCritTelemetry(v476);
                          }
                          UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
                          *(_QWORD *)(v472 + 8) = v475;
                          if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                            && (qword_1C02C4050 & 0x200000010000000LL) != 0
                            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                          {
                            McTemplateK0xqx_EtwWriteTransfer(
                              gullUserCritAcquireToken,
                              (unsigned int)&AcquiredExclusiveUserCritEvent,
                              v477,
                              v474,
                              1000000 * v474 / gliQpcFreq.QuadPart,
                              gullUserCritAcquireToken);
                          }
                          if ( v474 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                            && (char *)v475 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
                          {
                            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                              McTemplateK0xqx_EtwWriteTransfer(
                                gullUserCritAcquireToken,
                                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                                v477,
                                v474,
                                1000 * v474 / gliQpcFreq.QuadPart,
                                gullUserCritAcquireToken);
                            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v475;
                          }
                          *(_QWORD *)(v472 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                        }
                      }
                      v478 = *v607;
                      if ( !IsThreadCrossSessionAttached() )
                      {
                        gptiCurrent = v478;
                        if ( v478 )
                        {
                          *((_DWORD *)v478 + 387) = 1;
                          v479 = PsGetCurrentProcessWin32Process(v465);
                          if ( v479 )
                          {
                            if ( *(_QWORD *)v479 )
                            {
                              if ( (*(_DWORD *)(v479 + 12) & 0x8000) != 0 )
                              {
                                v465 = gptiCurrent;
                                if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                                  && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                                {
                                  v480 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                                  if ( gpSharedUserCritDeferredUnlockListHead )
                                  {
                                    do
                                    {
                                      gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v480[2];
                                      v480[2] = 0LL;
                                      if ( !*(_DWORD *)(*v480 + 8) )
                                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                                      HMUnlockObject(*v480);
                                      v480 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                                    }
                                    while ( gpSharedUserCritDeferredUnlockListHead );
                                    v7 = 0;
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto LABEL_844;
                      }
                    }
                    else
                    {
                      EtwTraceAcquiredExclusiveUserCrit();
                    }
                    gptiCurrent = 0LL;
LABEL_844:
                    if ( a4[4] )
                      *(_DWORD *)(SGDGetUserSessionState(v465, v464, v466, v467) + 3012) = 1;
                    else
                      *(_DWORD *)(SGDGetUserSessionState(v465, v464, v466, v467) + 3012) = 0;
                    goto LABEL_108;
                  }
                  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
                    || (v440 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v12) != 0)
                    && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                    && (v12 & qword_1C02C4050) != 0
                    && (v12 & qword_1C02C4058) == qword_1C02C4058
                    || ((__int64)WPP_MAIN_CB.Reserved & v14) != 0
                    && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                    && (v14 & qword_1C02C4050) != 0
                    && (v14 & qword_1C02C4058) == qword_1C02C4058 )
                  {
                    v441 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v70, v440, v14, v12, v598);
                    if ( v441 )
                      v441[1] = KeQueryPerformanceCounter(0LL);
                  }
                  v442 = SGDGetUserSessionState(v70, v440, v14, v12);
                  v606 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v442 + 8));
                  if ( v606 )
                  {
                    if ( IsEtwUserCritEnabled() )
                    {
                      v447 = PsGetCurrentThreadWin32Thread(v444, v443, v445, v446, v598);
                      if ( v447 )
                      {
                        v448 = KeQueryPerformanceCounter(0LL);
                        v449 = v448.QuadPart - *(_QWORD *)(v447 + 8);
                        v450 = (struct _LIST_ENTRY *)v448.QuadPart;
                        if ( (dword_1C02D1900 & 1) == 0 )
                        {
                          dword_1C02D1900 |= 1u;
                          UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
                        }
                        UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v449, 0);
                        if ( (dword_1C02D1900 & 1) == 0 )
                        {
                          dword_1C02D1900 |= 1u;
                          UserCritTelemetry::UserCritTelemetry(v451);
                        }
                        UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
                        *(_QWORD *)(v447 + 8) = v450;
                        if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                          && (qword_1C02C4050 & 0x200000010000000LL) != 0
                          && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                        {
                          McTemplateK0xqx_EtwWriteTransfer(
                            gullUserCritAcquireToken,
                            (unsigned int)&AcquiredExclusiveUserCritEvent,
                            v452,
                            v449,
                            1000000 * v449 / gliQpcFreq.QuadPart,
                            gullUserCritAcquireToken);
                        }
                        if ( v449 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                          && (char *)v450 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
                        {
                          if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                            McTemplateK0xqx_EtwWriteTransfer(
                              gullUserCritAcquireToken,
                              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                              v452,
                              v449,
                              1000 * v449 / gliQpcFreq.QuadPart,
                              gullUserCritAcquireToken);
                          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v450;
                        }
                        *(_QWORD *)(v447 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                      }
                    }
                    v453 = *v606;
                    if ( !IsThreadCrossSessionAttached() )
                    {
                      gptiCurrent = v453;
                      if ( v453 )
                      {
                        *((_DWORD *)v453 + 387) = 1;
                        v455 = PsGetCurrentProcessWin32Process(v454);
                        if ( v455 )
                        {
                          if ( *(_QWORD *)v455 )
                          {
                            if ( (*(_DWORD *)(v455 + 12) & 0x8000) != 0
                              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                              && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                            {
                              v456 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                              if ( gpSharedUserCritDeferredUnlockListHead )
                              {
                                do
                                {
                                  gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v456[2];
                                  v456[2] = 0LL;
                                  if ( !*(_DWORD *)(*v456 + 8) )
                                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                                  HMUnlockObject(*v456);
                                  v456 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                                }
                                while ( gpSharedUserCritDeferredUnlockListHead );
                                v7 = 0;
                              }
                            }
                          }
                        }
                      }
                      goto LABEL_792;
                    }
                  }
                  else
                  {
                    EtwTraceAcquiredExclusiveUserCrit();
                  }
                  gptiCurrent = 0LL;
LABEL_792:
                  DomainLockRef = GetDomainLockRef(13);
                  v619 = 1;
                  v620 = &gDomainDummyLock;
                  v622 = 0LL;
                  v621 = 0;
                  v623 = 0;
                  DomainSharedBase<>::DomainExclusiveBase<DLT_POWERTRANSITIONSSTATE>::ObjectLockBase<>::lock(&DomainLockRef);
                  if ( a4[4] )
                    *(_DWORD *)(SGDGetUserSessionState(v458, v457, v459, v460) + 3004) = 1;
                  else
                    *(_DWORD *)(SGDGetUserSessionState(v458, v457, v459, v460) + 3004) = 0;
                  if ( v623 )
                  {
                    v96 = (__int64)DomainLockRef;
                    if ( DomainLockRef )
                      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
                    v623 = 0;
                  }
                  goto LABEL_108;
                }
                if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
                  || (v421 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v12) != 0)
                  && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                  && (v12 & qword_1C02C4050) != 0
                  && (v12 & qword_1C02C4058) == qword_1C02C4058
                  || ((__int64)WPP_MAIN_CB.Reserved & v14) != 0
                  && (unsigned __int8)(byte_1C02C4068 - 1) > v15
                  && (v14 & qword_1C02C4050) != 0
                  && (v14 & qword_1C02C4058) == qword_1C02C4058 )
                {
                  v422 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v69, v421, v14, v12, v598);
                  if ( v422 )
                    v422[1] = KeQueryPerformanceCounter(0LL);
                }
                v423 = SGDGetUserSessionState(v69, v421, v14, v12);
                v424 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v423 + 8));
                if ( v424 )
                {
                  if ( IsEtwUserCritEnabled() )
                  {
                    v430 = PsGetCurrentThreadWin32Thread(v427, v426, v428, v429, v598);
                    if ( v430 )
                    {
                      v431 = KeQueryPerformanceCounter(0LL);
                      v432 = v431.QuadPart - *(_QWORD *)(v430 + 8);
                      v433 = (struct _LIST_ENTRY *)v431.QuadPart;
                      if ( (dword_1C02D1900 & 1) == 0 )
                      {
                        dword_1C02D1900 |= 1u;
                        UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
                      }
                      UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v432, 0);
                      if ( (dword_1C02D1900 & 1) == 0 )
                      {
                        dword_1C02D1900 |= 1u;
                        UserCritTelemetry::UserCritTelemetry(v434);
                      }
                      UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
                      *(_QWORD *)(v430 + 8) = v433;
                      if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                        && (qword_1C02C4050 & 0x200000010000000LL) != 0
                        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                      {
                        McTemplateK0xqx_EtwWriteTransfer(
                          gullUserCritAcquireToken,
                          (unsigned int)&AcquiredExclusiveUserCritEvent,
                          v435,
                          v432,
                          1000000 * v432 / gliQpcFreq.QuadPart,
                          gullUserCritAcquireToken);
                      }
                      if ( v432 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                        && (char *)v433 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
                      {
                        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                          McTemplateK0xqx_EtwWriteTransfer(
                            gullUserCritAcquireToken,
                            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                            v435,
                            v432,
                            1000 * v432 / gliQpcFreq.QuadPart,
                            gullUserCritAcquireToken);
                        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v433;
                      }
                      *(_QWORD *)(v430 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                    }
                  }
                  v436 = *v424;
                  if ( !IsThreadCrossSessionAttached() )
                  {
                    gptiCurrent = v436;
                    if ( v436 )
                    {
                      *((_DWORD *)v436 + 387) = 1;
                      v437 = PsGetCurrentProcessWin32Process(v425);
                      if ( v437 )
                      {
                        if ( *(_QWORD *)v437 )
                        {
                          if ( (*(_DWORD *)(v437 + 12) & 0x8000) != 0 )
                          {
                            v425 = gptiCurrent;
                            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                              && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                            {
                              v438 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                              if ( gpSharedUserCritDeferredUnlockListHead )
                              {
                                do
                                {
                                  gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v438[2];
                                  v438[2] = 0LL;
                                  if ( !*(_DWORD *)(*v438 + 8) )
                                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                                  HMUnlockObject(*v438);
                                  v438 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                                }
                                while ( gpSharedUserCritDeferredUnlockListHead );
                                v7 = 0;
                              }
                            }
                          }
                        }
                      }
                    }
                    goto LABEL_743;
                  }
                }
                else
                {
                  EtwTraceAcquiredExclusiveUserCrit();
                }
                gptiCurrent = 0LL;
LABEL_743:
                if ( *(_BYTE *)SGDGetUserGdiSessionState(v425)
                  || gProtocolType
                  || *(_DWORD *)(SGDGetUserSessionState(v96, v95, v97, v98) + 2968) )
                {
                  goto LABEL_108;
                }
                v439 = MonitorRequestReasonBatteryCountChange;
                goto LABEL_1158;
              }
            }
            if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
              || (v578 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v12) != 0)
              && (unsigned __int8)(byte_1C02C4068 - 1) > v15
              && (v12 & qword_1C02C4050) != 0
              && (v12 & qword_1C02C4058) == qword_1C02C4058
              || ((__int64)WPP_MAIN_CB.Reserved & v14) != 0
              && (unsigned __int8)(byte_1C02C4068 - 1) > v15
              && (v14 & qword_1C02C4050) != 0
              && (v14 & qword_1C02C4058) == qword_1C02C4058 )
            {
              v579 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v68, v578, v14, v12, v598);
              if ( v579 )
                v579[1] = KeQueryPerformanceCounter(0LL);
            }
            v580 = SGDGetUserSessionState(v68, v578, v14, v12);
            v611 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v580 + 8));
            if ( v611 )
            {
              if ( IsEtwUserCritEnabled() )
              {
                v589 = PsGetCurrentThreadWin32Thread(v586, v585, v587, v588, v598);
                if ( v589 )
                {
                  v590 = KeQueryPerformanceCounter(0LL);
                  v591 = v590.QuadPart - *(_QWORD *)(v589 + 8);
                  v592 = (struct _LIST_ENTRY *)v590.QuadPart;
                  if ( (dword_1C02D1900 & 1) == 0 )
                  {
                    dword_1C02D1900 |= 1u;
                    UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
                  }
                  UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v591, 0);
                  if ( (dword_1C02D1900 & 1) == 0 )
                  {
                    dword_1C02D1900 |= 1u;
                    UserCritTelemetry::UserCritTelemetry(v593);
                  }
                  UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
                  *(_QWORD *)(v589 + 8) = v592;
                  if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                    && (qword_1C02C4050 & 0x200000010000000LL) != 0
                    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                    && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                  {
                    McTemplateK0xqx_EtwWriteTransfer(
                      gullUserCritAcquireToken,
                      (unsigned int)&AcquiredExclusiveUserCritEvent,
                      v594,
                      v591,
                      1000000 * v591 / gliQpcFreq.QuadPart,
                      gullUserCritAcquireToken);
                  }
                  if ( v591 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                    && (char *)v592 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
                  {
                    if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                      McTemplateK0xqx_EtwWriteTransfer(
                        gullUserCritAcquireToken,
                        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                        v594,
                        v591,
                        1000 * v591 / gliQpcFreq.QuadPart,
                        gullUserCritAcquireToken);
                    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v592;
                  }
                  *(_QWORD *)(v589 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                }
              }
              v595 = *v611;
              if ( !IsThreadCrossSessionAttached() )
              {
                gptiCurrent = v595;
                if ( v595 )
                {
                  *((_DWORD *)v595 + 387) = 1;
                  v596 = PsGetCurrentProcessWin32Process(v582);
                  if ( v596 )
                  {
                    if ( *(_QWORD *)v596 )
                    {
                      if ( (*(_DWORD *)(v596 + 12) & 0x8000) != 0 )
                      {
                        v582 = gptiCurrent;
                        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                        {
                          v597 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                          if ( gpSharedUserCritDeferredUnlockListHead )
                          {
                            do
                            {
                              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v597[2];
                              v597[2] = 0LL;
                              if ( !*(_DWORD *)(*v597 + 8) )
                                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                              HMUnlockObject(*v597);
                              v597 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                            }
                            while ( gpSharedUserCritDeferredUnlockListHead );
                            v7 = 0;
                          }
                        }
                      }
                    }
                  }
                }
                goto LABEL_1149;
              }
            }
            else
            {
              EtwTraceAcquiredExclusiveUserCrit();
            }
            gptiCurrent = 0LL;
LABEL_1149:
            if ( a4[4] )
              *(_DWORD *)(SGDGetUserSessionState(v582, v581, v583, v584) + 2968) = 0;
            else
              *(_DWORD *)(SGDGetUserSessionState(v582, v581, v583, v584) + 2968) = 1;
            v96 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4 )
              v96 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)a4 + 1);
            if ( !v96 || *(_BYTE *)SGDGetUserGdiSessionState(v96) || gProtocolType )
              goto LABEL_108;
            v439 = MonitorRequestReasonAcDcDisplayBurst;
LABEL_1158:
            PowerDisplayBurst(v439);
            goto LABEL_108;
          }
          if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
            || (v399 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v12) != 0)
            && (unsigned __int8)(byte_1C02C4068 - 1) > v15
            && (v12 & qword_1C02C4050) != 0
            && (v12 & qword_1C02C4058) == qword_1C02C4058
            || ((__int64)WPP_MAIN_CB.Reserved & v14) != 0
            && (unsigned __int8)(byte_1C02C4068 - 1) > v15
            && (v14 & qword_1C02C4050) != 0
            && (v14 & qword_1C02C4058) == qword_1C02C4058 )
          {
            v400 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v67, v399, v14, v12, v598);
            if ( v400 )
              v400[1] = KeQueryPerformanceCounter(0LL);
          }
          v401 = SGDGetUserSessionState(v67, v399, v14, v12);
          v605 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v401 + 8));
          if ( v605 )
          {
            if ( IsEtwUserCritEnabled() )
            {
              v406 = PsGetCurrentThreadWin32Thread(v403, v402, v404, v405, v598);
              if ( v406 )
              {
                v407 = KeQueryPerformanceCounter(0LL);
                v408 = v407.QuadPart - *(_QWORD *)(v406 + 8);
                v409 = (struct _LIST_ENTRY *)v407.QuadPart;
                if ( (dword_1C02D1900 & 1) == 0 )
                {
                  dword_1C02D1900 |= 1u;
                  UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
                }
                UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v408, 0);
                if ( (dword_1C02D1900 & 1) == 0 )
                {
                  dword_1C02D1900 |= 1u;
                  UserCritTelemetry::UserCritTelemetry(v410);
                }
                UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
                *(_QWORD *)(v406 + 8) = v409;
                if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                  && (qword_1C02C4050 & 0x200000010000000LL) != 0
                  && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                  && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                {
                  McTemplateK0xqx_EtwWriteTransfer(
                    gullUserCritAcquireToken,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v411,
                    v408,
                    1000000 * v408 / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                }
                if ( v408 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                  && (char *)v409 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
                {
                  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                    McTemplateK0xqx_EtwWriteTransfer(
                      gullUserCritAcquireToken,
                      (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                      v411,
                      v408,
                      1000 * v408 / gliQpcFreq.QuadPart,
                      gullUserCritAcquireToken);
                  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v409;
                }
                *(_QWORD *)(v406 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
              }
            }
            v412 = *v605;
            if ( !IsThreadCrossSessionAttached() )
            {
              gptiCurrent = v412;
              if ( v412 )
              {
                *((_DWORD *)v412 + 387) = 1;
                v414 = PsGetCurrentProcessWin32Process(v413);
                if ( v414 )
                {
                  if ( *(_QWORD *)v414 )
                  {
                    if ( (*(_DWORD *)(v414 + 12) & 0x8000) != 0
                      && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                      && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                    {
                      v415 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      if ( gpSharedUserCritDeferredUnlockListHead )
                      {
                        do
                        {
                          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v415[2];
                          v415[2] = 0LL;
                          if ( !*(_DWORD *)(*v415 + 8) )
                            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                          HMUnlockObject(*v415);
                          v415 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                        }
                        while ( gpSharedUserCritDeferredUnlockListHead );
                        v7 = 0;
                      }
                    }
                  }
                }
              }
              goto LABEL_697;
            }
          }
          else
          {
            EtwTraceAcquiredExclusiveUserCrit();
          }
          gptiCurrent = 0LL;
LABEL_697:
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5045LL);
          v416 = a4[4];
          *(_DWORD *)(SGDGetUserSessionState(v418, v417, v419, v420) + 3104) = v416;
          goto LABEL_108;
        }
        if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
          || (v192 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v12) != 0)
          && (unsigned __int8)(byte_1C02C4068 - 1) > v15
          && (v12 & qword_1C02C4050) != 0
          && (v12 & qword_1C02C4058) == qword_1C02C4058
          || ((__int64)WPP_MAIN_CB.Reserved & v14) != 0
          && (unsigned __int8)(byte_1C02C4068 - 1) > v15
          && (v14 & qword_1C02C4050) != 0
          && (v14 & qword_1C02C4058) == qword_1C02C4058 )
        {
          v193 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v66, v192, v14, v12, v598);
          if ( v193 )
            v193[1] = KeQueryPerformanceCounter(0LL);
        }
        v194 = SGDGetUserSessionState(v66, v192, v14, v12);
        v603 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v194 + 8));
        if ( v603 )
        {
          if ( IsEtwUserCritEnabled() )
          {
            v199 = PsGetCurrentThreadWin32Thread(v196, v195, v197, v198, v598);
            if ( v199 )
            {
              v200 = KeQueryPerformanceCounter(0LL);
              v201 = v200.QuadPart - *(_QWORD *)(v199 + 8);
              v202 = (struct _LIST_ENTRY *)v200.QuadPart;
              if ( (dword_1C02D1900 & 1) == 0 )
              {
                dword_1C02D1900 |= 1u;
                UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
              }
              UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v201, 0);
              if ( (dword_1C02D1900 & 1) == 0 )
              {
                dword_1C02D1900 |= 1u;
                UserCritTelemetry::UserCritTelemetry(v203);
              }
              UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
              *(_QWORD *)(v199 + 8) = v202;
              if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                && (qword_1C02C4050 & 0x200000010000000LL) != 0
                && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
              {
                McTemplateK0xqx_EtwWriteTransfer(
                  gullUserCritAcquireToken,
                  (unsigned int)&AcquiredExclusiveUserCritEvent,
                  v204,
                  v201,
                  1000000 * v201 / gliQpcFreq.QuadPart,
                  gullUserCritAcquireToken);
              }
              if ( v201 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                && (char *)v202 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
              {
                if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                  McTemplateK0xqx_EtwWriteTransfer(
                    gullUserCritAcquireToken,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v204,
                    v201,
                    1000 * v201 / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v202;
              }
              *(_QWORD *)(v199 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
            }
          }
          v205 = *v603;
          if ( !IsThreadCrossSessionAttached() )
          {
            gptiCurrent = v205;
            if ( v205 )
            {
              *((_DWORD *)v205 + 387) = 1;
              v397 = PsGetCurrentProcessWin32Process(v207);
              if ( v397 )
              {
                if ( *(_QWORD *)v397 )
                {
                  if ( (*(_DWORD *)(v397 + 12) & 0x8000) != 0 )
                  {
                    v207 = gptiCurrent;
                    if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                      && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                    {
                      v398 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      if ( gpSharedUserCritDeferredUnlockListHead )
                      {
                        do
                        {
                          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v398[2];
                          v398[2] = 0LL;
                          if ( !*(_DWORD *)(*v398 + 8) )
                            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                          HMUnlockObject(*v398);
                          v398 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                        }
                        while ( gpSharedUserCritDeferredUnlockListHead );
                        v7 = 0;
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_213;
          }
        }
        else
        {
          EtwTraceAcquiredExclusiveUserCrit();
        }
        gptiCurrent = 0LL;
LABEL_213:
        v210 = a4[4];
        *(_DWORD *)(SGDGetUserSessionState(v207, v206, v208, v209) + 3088) = v210;
        goto LABEL_108;
      }
      if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
        || (v175 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v12) != 0)
        && (unsigned __int8)(byte_1C02C4068 - 1) > v15
        && (v12 & qword_1C02C4050) != 0
        && (v12 & qword_1C02C4058) == qword_1C02C4058
        || ((__int64)WPP_MAIN_CB.Reserved & v14) != 0
        && (unsigned __int8)(byte_1C02C4068 - 1) > v15
        && (v14 & qword_1C02C4050) != 0
        && (v14 & qword_1C02C4058) == qword_1C02C4058 )
      {
        v176 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v65, v175, v14, v12, v598);
        if ( v176 )
          v176[1] = KeQueryPerformanceCounter(0LL);
      }
      v177 = SGDGetUserSessionState(v65, v175, v14, v12);
      v602 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v177 + 8));
      if ( v602 )
      {
        if ( IsEtwUserCritEnabled() )
        {
          v182 = PsGetCurrentThreadWin32Thread(v179, v178, v180, v181, v598);
          if ( v182 )
          {
            v183 = KeQueryPerformanceCounter(0LL);
            v184 = v183.QuadPart - *(_QWORD *)(v182 + 8);
            if ( (dword_1C02D1900 & 1) == 0 )
            {
              dword_1C02D1900 |= 1u;
              memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
              word_1C02D2A38 = 0;
              byte_1C02D2A3A = 0;
              memset(&unk_1C02D2A40, 0, 0x168uLL);
              qword_1C02D2BB8 = 0LL;
              qword_1C02D2BD0 = 0LL;
              xmmword_1C02D2BA8 = 0LL;
              qword_1C02D2BE8 = 0LL;
              xmmword_1C02D2BC0 = 0LL;
              xmmword_1C02D2BF0 = 0uLL;
              xmmword_1C02D2BD8 = 0LL;
            }
            UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v184, 0);
            if ( (dword_1C02D1900 & 1) == 0 )
            {
              dword_1C02D1900 |= 1u;
              memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
              word_1C02D2A38 = 0;
              byte_1C02D2A3A = 0;
              memset(&unk_1C02D2A40, 0, 0x168uLL);
              qword_1C02D2BB8 = 0LL;
              qword_1C02D2BD0 = 0LL;
              xmmword_1C02D2BA8 = 0LL;
              qword_1C02D2BE8 = 0LL;
              xmmword_1C02D2BC0 = 0LL;
              xmmword_1C02D2BF0 = 0uLL;
              xmmword_1C02D2BD8 = 0LL;
            }
            UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
            *(LARGE_INTEGER *)(v182 + 8) = v183;
            if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
              && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
              && (qword_1C02C4050 & 0x200000010000000LL) != 0
              && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
              && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
            {
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v185,
                v184,
                1000000 * v184 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            }
            if ( v184 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
              && (signed __int64)(v183.QuadPart - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
            {
              if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                McTemplateK0xqx_EtwWriteTransfer(
                  gullUserCritAcquireToken,
                  (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                  v185,
                  v184,
                  1000 * v184 / gliQpcFreq.QuadPart,
                  gullUserCritAcquireToken);
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v183.QuadPart;
            }
            *(_QWORD *)(v182 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
          }
        }
        v186 = *v602;
        if ( !IsThreadCrossSessionAttached() )
        {
          gptiCurrent = v186;
          if ( v186 )
          {
            *((_DWORD *)v186 + 387) = 1;
            v395 = PsGetCurrentProcessWin32Process(v188);
            if ( v395 )
            {
              if ( *(_QWORD *)v395 )
              {
                if ( (*(_DWORD *)(v395 + 12) & 0x8000) != 0 )
                {
                  v188 = gptiCurrent;
                  if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                  {
                    v396 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    if ( gpSharedUserCritDeferredUnlockListHead )
                    {
                      do
                      {
                        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v396[2];
                        v396[2] = 0LL;
                        if ( !*(_DWORD *)(*v396 + 8) )
                          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                        HMUnlockObject(*v396);
                        v396 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      }
                      while ( gpSharedUserCritDeferredUnlockListHead );
                      v7 = 0;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_195;
        }
      }
      else
      {
        EtwTraceAcquiredExclusiveUserCrit();
      }
      gptiCurrent = 0LL;
LABEL_195:
      v191 = a4[4];
      *(_DWORD *)(SGDGetUserSessionState(v188, v187, v189, v190) + 3096) = v191;
      goto LABEL_108;
    }
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (v124 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v12) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > v15
      && (v12 & qword_1C02C4050) != 0
      && (v12 & qword_1C02C4058) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & v14) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > v15
      && (v14 & qword_1C02C4050) != 0
      && (v14 & qword_1C02C4058) == qword_1C02C4058 )
    {
      v125 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v64, v124, v14, v12, v598);
      if ( v125 )
        v125[1] = KeQueryPerformanceCounter(0LL);
    }
    v126 = SGDGetUserSessionState(v64, v124, v14, v12);
    v127 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v126 + 8));
    if ( v127 )
    {
      if ( IsEtwUserCritEnabled() )
      {
        v132 = PsGetCurrentThreadWin32Thread(v129, v128, v130, v131, v598);
        if ( v132 )
        {
          v133 = KeQueryPerformanceCounter(0LL);
          v134 = v133.QuadPart - *(_QWORD *)(v132 + 8);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
            xmmword_1C02D2BD8 = 0LL;
          }
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v134, 0);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
            xmmword_1C02D2BD8 = 0LL;
          }
          UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
          *(LARGE_INTEGER *)(v132 + 8) = v133;
          if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v135,
              v134,
              1000000 * v134 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          if ( v134 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (signed __int64)(v133.QuadPart - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v135,
                v134,
                1000 * v134 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v133.QuadPart;
          }
          *(_QWORD *)(v132 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v136 = *v127;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v136;
        if ( v136 )
        {
          *((_DWORD *)v136 + 387) = 1;
          v232 = PsGetCurrentProcessWin32Process(v138);
          if ( v232 )
          {
            if ( *(_QWORD *)v232 )
            {
              if ( (*(_DWORD *)(v232 + 12) & 0x8000) != 0 )
              {
                v138 = gptiCurrent;
                if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                {
                  v233 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( gpSharedUserCritDeferredUnlockListHead )
                  {
                    do
                    {
                      gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v233[2];
                      v233[2] = 0LL;
                      if ( !*(_DWORD *)(*v233 + 8) )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                      HMUnlockObject(*v233);
                      v233 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    }
                    while ( gpSharedUserCritDeferredUnlockListHead );
                    v7 = 0;
                  }
                }
              }
            }
          }
        }
        goto LABEL_243;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
LABEL_243:
    if ( !gProtocolType || *(_DWORD *)(SGDGetUserSessionState(v138, v137, v139, v140) + 2948) )
      UpdateAdaptiveSessionState();
    goto LABEL_108;
  }
  v16 = v10 - 1;
  if ( !v16 )
  {
    if ( *(_BYTE *)SGDGetUserGdiSessionState(v11) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5193LL);
    if ( v9 != 8 || !a4 )
      return (unsigned int)-1073741811;
    v106 = *(_BYTE *)a4;
    v107 = a4[1];
    v600 = *(_BYTE *)a4;
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (v108 = WPP_MAIN_CB.Reserved,
          v109 = 0x8000002010000000uLL,
          ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
      && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
      || (v109 = 0x200000010000000LL, ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x200000010000000LL) != 0
      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
    {
      v110 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v104, v108, v109, v105, v598);
      if ( v110 )
        v110[1] = KeQueryPerformanceCounter(0LL);
    }
    v111 = SGDGetUserSessionState(v104, v108, v109, v105);
    v112 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v111 + 8));
    if ( v112 )
    {
      if ( IsEtwUserCritEnabled() )
      {
        v117 = PsGetCurrentThreadWin32Thread(v114, v113, v115, v116, v598);
        if ( v117 )
        {
          v118 = KeQueryPerformanceCounter(0LL);
          v119 = v118.QuadPart - *(_QWORD *)(v117 + 8);
          v120 = (struct _LIST_ENTRY *)v118.QuadPart;
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
          }
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v119, 0);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            UserCritTelemetry::UserCritTelemetry(v121);
          }
          UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
          *(_QWORD *)(v117 + 8) = v120;
          if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v122,
              v119,
              1000000 * v119 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          if ( v119 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (char *)v120 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v122,
                v119,
                1000 * v119 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v120;
          }
          v106 = v600;
          *(_QWORD *)(v117 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v123 = *v112;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v123;
        if ( v123 )
        {
          *((_DWORD *)v123 + 387) = 1;
          v230 = PsGetCurrentProcessWin32Process(v96);
          if ( v230 )
          {
            if ( *(_QWORD *)v230 )
            {
              if ( (*(_DWORD *)(v230 + 12) & 0x8000) != 0 )
              {
                v96 = (__int64)gptiCurrent;
                if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                {
                  v231 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( gpSharedUserCritDeferredUnlockListHead )
                  {
                    do
                    {
                      gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v231[2];
                      v231[2] = 0LL;
                      if ( !*(_DWORD *)(*v231 + 8) )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                      HMUnlockObject(*v231);
                      v231 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    }
                    while ( gpSharedUserCritDeferredUnlockListHead );
                    v106 = v600;
                  }
                }
              }
            }
          }
        }
        goto LABEL_239;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
LABEL_239:
    if ( v106 && gbBlockSendInputResets )
    {
      v7 = -1073741823;
    }
    else if ( *(_DWORD *)(SGDGetUserSessionState(v96, v95, v97, v98) + 2960) )
    {
      v7 = 259;
      v95 = *(_BYTE **)(SGDGetUserSessionState(v100, v99, v101, v102) + 2928);
      if ( !*v95 )
        SetPendingInput((unsigned int)v107);
    }
    else
    {
      LODWORD(v613) = 16;
      *((_QWORD *)&v613 + 1) = v107;
      v7 = QueuePowerRequest(&v613, 0LL);
    }
    goto LABEL_108;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    if ( *(_BYTE *)SGDGetUserGdiSessionState(v11) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5288LL);
    if ( v9 == 4 && a4 && a5 == 4 && v617 )
    {
      v20 = *a4;
      v614 = *a4;
      if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
        || (v21 = WPP_MAIN_CB.Reserved,
            v22 = 0x8000002010000000uLL,
            ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
        && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
        || (v22 = 0x200000010000000LL, ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0)
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x200000010000000LL) != 0
        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
      {
        v23 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v18, v21, v22, v19, v598);
        if ( v23 )
          v23[1] = KeQueryPerformanceCounter(0LL);
      }
      v24 = SGDGetUserSessionState(v18, v21, v22, v19);
      v25 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v24 + 8));
      if ( v25 )
      {
        if ( IsEtwUserCritEnabled() )
        {
          v30 = PsGetCurrentThreadWin32Thread(v27, v26, v28, v29, v598);
          if ( v30 )
          {
            v31 = KeQueryPerformanceCounter(0LL);
            v32 = v31.QuadPart - *(_QWORD *)(v30 + 8);
            v33 = (struct _LIST_ENTRY *)v31.QuadPart;
            if ( (dword_1C02D1900 & 1) == 0 )
            {
              dword_1C02D1900 |= 1u;
              UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
            }
            UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v32, 0);
            if ( (dword_1C02D1900 & 1) == 0 )
            {
              dword_1C02D1900 |= 1u;
              UserCritTelemetry::UserCritTelemetry(v34);
            }
            UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
            *(_QWORD *)(v30 + 8) = v33;
            if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
              && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
              && (qword_1C02C4050 & 0x200000010000000LL) != 0
              && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
              && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
            {
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v35,
                v32,
                1000000 * v32 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            }
            if ( v32 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
              && (char *)v33 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
            {
              if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                McTemplateK0xqx_EtwWriteTransfer(
                  gullUserCritAcquireToken,
                  (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                  v35,
                  v32,
                  1000 * v32 / gliQpcFreq.QuadPart,
                  gullUserCritAcquireToken);
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v33;
            }
            v20 = v614;
            *(_QWORD *)(v30 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
          }
        }
        v36 = *v25;
        if ( !IsThreadCrossSessionAttached() )
        {
          gptiCurrent = v36;
          if ( v36 )
          {
            *((_DWORD *)v36 + 387) = 1;
            v41 = PsGetCurrentProcessWin32Process(v38);
            if ( v41 )
            {
              if ( *(_QWORD *)v41 )
              {
                if ( (*(_DWORD *)(v41 + 12) & 0x8000) != 0 )
                {
                  v38 = gptiCurrent;
                  if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                  {
                    v42 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    if ( gpSharedUserCritDeferredUnlockListHead )
                    {
                      do
                      {
                        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v42[2];
                        v42[2] = 0LL;
                        if ( !*(_DWORD *)(*v42 + 8) )
                          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                        HMUnlockObject(*v42);
                        v42 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      }
                      while ( gpSharedUserCritDeferredUnlockListHead );
                      v7 = 0;
                    }
                  }
                }
              }
            }
          }
LABEL_35:
          v43 = *(_DWORD *)(SGDGetUserSessionState(v38, v37, v39, v40) + 3072);
          v44 = v43 + v20;
          *(_DWORD *)(SGDGetUserSessionState(v46, v45, v47, v48) + 3072) = v43 + v20;
          if ( v43 == 1 )
          {
            v53 = v44 == 0;
            v54 = v44 < 0;
            if ( v44 )
            {
LABEL_40:
              v612[0] = !v54 && !v53;
              v55 = SGDGetUserSessionState(v50, v49, v51, v52);
              ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, v612, 1LL, 0LL, v55);
              UserSessionSwitchLeaveCrit(v57, v56, v58, v59);
              if ( v43 || v44 != 1 )
              {
                if ( v44 < 0 )
                  goto LABEL_45;
              }
              else if ( *(_DWORD *)(SGDGetUserSessionState(v61, v60, v62, v63) + 3080) == 2 )
              {
                LODWORD(v613) = 4;
                *((_QWORD *)&v613 + 1) = 48LL;
                QueuePowerRequest(&v613, 0LL);
              }
              v6 = v43 + v20;
LABEL_45:
              *v617 = v6;
              return v7;
            }
            CitDisplayRequestChange(0);
            EtwTraceDisplayReqChange(0LL);
            if ( !gbBlockSendInputResets )
              CInputGlobals::UpdateLastInputTime(
                (__int64)gpInputGlobals,
                (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                0xAu);
          }
          else if ( !v43 && v44 == 1 )
          {
            CitDisplayRequestChange(1u);
            EtwTraceDisplayReqChange(1LL);
          }
          v53 = v44 == 0;
          v54 = v44 < 0;
          goto LABEL_40;
        }
      }
      else
      {
        EtwTraceAcquiredExclusiveUserCrit();
      }
      gptiCurrent = 0LL;
      goto LABEL_35;
    }
    return (unsigned int)-1073741811;
  }
  v141 = v17 - 1;
  if ( v141 )
  {
    v142 = v141 - 1;
    if ( v142 )
    {
      v143 = v142 - 1;
      if ( !v143 )
      {
        if ( *(_BYTE *)SGDGetUserGdiSessionState(v11) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5450LL);
        if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
          || (v146 = WPP_MAIN_CB.Reserved,
              v147 = 0x8000002010000000uLL,
              ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
          && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
          || (v147 = 0x200000010000000LL, ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0)
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (qword_1C02C4050 & 0x200000010000000LL) != 0
          && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
        {
          v148 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v144, v146, v147, v145, v598);
          if ( v148 )
            v148[1] = KeQueryPerformanceCounter(0LL);
        }
        v149 = SGDGetUserSessionState(v144, v146, v147, v145);
        v150 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v149 + 8));
        if ( v150 )
        {
          if ( IsEtwUserCritEnabled() )
          {
            v155 = PsGetCurrentThreadWin32Thread(v152, v151, v153, v154, v598);
            if ( v155 )
            {
              v156 = KeQueryPerformanceCounter(0LL);
              v157 = v156.QuadPart - *(_QWORD *)(v155 + 8);
              v158 = (struct _LIST_ENTRY *)v156.QuadPart;
              if ( (dword_1C02D1900 & 1) == 0 )
              {
                dword_1C02D1900 |= 1u;
                UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
              }
              UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v157, 0);
              if ( (dword_1C02D1900 & 1) == 0 )
              {
                dword_1C02D1900 |= 1u;
                UserCritTelemetry::UserCritTelemetry(v159);
              }
              UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
              *(_QWORD *)(v155 + 8) = v158;
              if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                && (qword_1C02C4050 & 0x200000010000000LL) != 0
                && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
              {
                McTemplateK0xqx_EtwWriteTransfer(
                  gullUserCritAcquireToken,
                  (unsigned int)&AcquiredExclusiveUserCritEvent,
                  v160,
                  v157,
                  1000000 * v157 / gliQpcFreq.QuadPart,
                  gullUserCritAcquireToken);
              }
              if ( v157 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                && (char *)v158 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
              {
                if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                  McTemplateK0xqx_EtwWriteTransfer(
                    gullUserCritAcquireToken,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v160,
                    v157,
                    1000 * v157 / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v158;
              }
              *(_QWORD *)(v155 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
            }
          }
          v161 = *v150;
          if ( !IsThreadCrossSessionAttached() )
          {
            gptiCurrent = v161;
            if ( v161 )
            {
              *((_DWORD *)v161 + 387) = 1;
              v305 = PsGetCurrentProcessWin32Process(v163);
              if ( v305 )
              {
                if ( *(_QWORD *)v305 )
                {
                  if ( (*(_DWORD *)(v305 + 12) & 0x8000) != 0 )
                  {
                    v163 = gptiCurrent;
                    if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                      && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                    {
                      v306 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      if ( gpSharedUserCritDeferredUnlockListHead )
                      {
                        do
                        {
                          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v306[2];
                          v306[2] = 0LL;
                          if ( !*(_DWORD *)(*v306 + 8) )
                            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                          HMUnlockObject(*v306);
                          v306 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                        }
                        while ( gpSharedUserCritDeferredUnlockListHead );
                        v7 = 0;
                      }
                    }
                  }
                }
              }
            }
LABEL_173:
            if ( *(_BYTE *)(SGDGetUserSessionState(v163, v162, v164, v165) + 752) )
            {
              v166 = *(int *)(SGDGetUserSessionState(v96, v95, v97, v98) + 756);
              *(_BYTE *)(SGDGetUserSessionState(v168, v167, v169, v170) + 752) = 0;
              *(_DWORD *)(SGDGetUserSessionState(v172, v171, v173, v174) + 756) = 0;
              if ( gnPoSessionSwitchBlockCount < 2 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5465LL);
              LODWORD(v613) = 12;
              *((_QWORD *)&v613 + 1) = v166;
LABEL_177:
              QueuePowerRequest(&v613, 0LL);
            }
LABEL_108:
            UserSessionSwitchLeaveCrit(v96, (__int64)v95, v97, v98);
            return v7;
          }
        }
        else
        {
          EtwTraceAcquiredExclusiveUserCrit();
        }
        gptiCurrent = 0LL;
        goto LABEL_173;
      }
      v282 = v143 - 1;
      if ( v282 )
      {
        v283 = v282 - 1;
        if ( v283 )
        {
          if ( v283 == 1 )
          {
            if ( !*(_BYTE *)SGDGetUserGdiSessionState(v11) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5253LL);
            if ( v9 != 1 || !a4 || a5 || v617 )
              return (unsigned int)-1073741811;
            v286 = *(_BYTE *)a4 != 0;
            if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
              || (v287 = WPP_MAIN_CB.Reserved,
                  v288 = 0x8000002010000000uLL,
                  ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
              && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
              && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
              && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
              || (v288 = 0x200000010000000LL, ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0)
              && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
              && (qword_1C02C4050 & 0x200000010000000LL) != 0
              && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
            {
              v289 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v284, v287, v288, v285, v598);
              if ( v289 )
                v289[1] = KeQueryPerformanceCounter(0LL);
            }
            v290 = SGDGetUserSessionState(v284, v287, v288, v285);
            v615 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v290 + 8));
            if ( v615 )
            {
              if ( IsEtwUserCritEnabled() )
              {
                v295 = PsGetCurrentThreadWin32Thread(v292, v291, v293, v294, v598);
                if ( v295 )
                {
                  v296 = KeQueryPerformanceCounter(0LL);
                  v297 = v296.QuadPart - *(_QWORD *)(v295 + 8);
                  v298 = (struct _LIST_ENTRY *)v296.QuadPart;
                  if ( (dword_1C02D1900 & 1) == 0 )
                  {
                    dword_1C02D1900 |= 1u;
                    UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
                  }
                  UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v297, 0);
                  if ( (dword_1C02D1900 & 1) == 0 )
                  {
                    dword_1C02D1900 |= 1u;
                    UserCritTelemetry::UserCritTelemetry(v299);
                  }
                  UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
                  *(_QWORD *)(v295 + 8) = v298;
                  if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                    && (qword_1C02C4050 & 0x200000010000000LL) != 0
                    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                    && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                  {
                    McTemplateK0xqx_EtwWriteTransfer(
                      gullUserCritAcquireToken,
                      (unsigned int)&AcquiredExclusiveUserCritEvent,
                      v300,
                      v297,
                      1000000 * v297 / gliQpcFreq.QuadPart,
                      gullUserCritAcquireToken);
                  }
                  if ( v297 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                    && (char *)v298 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
                  {
                    if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                      McTemplateK0xqx_EtwWriteTransfer(
                        gullUserCritAcquireToken,
                        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                        v300,
                        v297,
                        1000 * v297 / gliQpcFreq.QuadPart,
                        gullUserCritAcquireToken);
                    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v298;
                  }
                  *(_QWORD *)(v295 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                }
              }
              v301 = *v615;
              if ( !IsThreadCrossSessionAttached() )
              {
                gptiCurrent = v301;
                if ( v301 )
                {
                  *((_DWORD *)v301 + 387) = 1;
                  v303 = PsGetCurrentProcessWin32Process(v302);
                  if ( v303 )
                  {
                    if ( *(_QWORD *)v303 )
                    {
                      if ( (*(_DWORD *)(v303 + 12) & 0x8000) != 0
                        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                      {
                        v304 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                        if ( gpSharedUserCritDeferredUnlockListHead )
                        {
                          do
                          {
                            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v304[2];
                            v304[2] = 0LL;
                            if ( !*(_DWORD *)(*v304 + 8) )
                              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                            HMUnlockObject(*v304);
                            v304 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                          }
                          while ( gpSharedUserCritDeferredUnlockListHead );
                          v7 = 0;
                        }
                      }
                    }
                  }
                }
                goto LABEL_397;
              }
            }
            else
            {
              EtwTraceAcquiredExclusiveUserCrit();
            }
            gptiCurrent = 0LL;
LABEL_397:
            CitDisplayRequestChange(v286);
            EtwTraceDisplayReqChange(v286);
            goto LABEL_108;
          }
          return (unsigned int)-1073741823;
        }
        if ( !*(_BYTE *)SGDGetUserGdiSessionState(v11) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5510LL);
        if ( v9 != 4 || !a4 )
          return (unsigned int)-1073741823;
        LOBYTE(v264) = 1;
        *((_QWORD *)&v613 + 1) = *a4;
        LODWORD(v613) = 15;
LABEL_284:
        QueuePowerRequest(&v613, v264);
        return v7;
      }
      if ( !*(_BYTE *)SGDGetUserGdiSessionState(v11) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5477LL);
      if ( v9 != 8 || !a4 )
        return (unsigned int)-1073741823;
      UserSessionSwitchBlock_Start();
      *((_QWORD *)&v613 + 1) = a4[1];
      LODWORD(v613) = 14;
      if ( *(_BYTE *)a4 )
        LODWORD(v613) = 13;
LABEL_283:
      v264 = 0LL;
      goto LABEL_284;
    }
    if ( v9 != 32 || !a4 )
      return (unsigned int)-1073741811;
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (v307 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v12) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > v15
      && (v12 & qword_1C02C4050) != 0
      && (v12 & qword_1C02C4058) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & v14) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > v15
      && (v14 & qword_1C02C4050) != 0
      && (v14 & qword_1C02C4058) == qword_1C02C4058 )
    {
      v308 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v11, v307, v14, v12, v598);
      if ( v308 )
        v308[1] = KeQueryPerformanceCounter(0LL);
    }
    v309 = SGDGetUserSessionState(v11, v307, v14, v12);
    v615 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v309 + 8));
    if ( v615 )
    {
      if ( IsEtwUserCritEnabled() )
      {
        v318 = PsGetCurrentThreadWin32Thread(v315, v314, v316, v317, v598);
        if ( v318 )
        {
          v319 = KeQueryPerformanceCounter(0LL);
          v320 = v319.QuadPart - *(_QWORD *)(v318 + 8);
          v321 = (struct _LIST_ENTRY *)v319.QuadPart;
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
          }
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v320, 0);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            UserCritTelemetry::UserCritTelemetry(v322);
          }
          UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
          *(_QWORD *)(v318 + 8) = v321;
          if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v323,
              v320,
              1000000 * v320 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          if ( v320 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (char *)v321 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v323,
                v320,
                1000 * v320 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v321;
          }
          *(_QWORD *)(v318 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v324 = *v615;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v324;
        if ( v324 )
        {
          *((_DWORD *)v324 + 387) = 1;
          v325 = PsGetCurrentProcessWin32Process(v311);
          if ( v325 )
          {
            if ( *(_QWORD *)v325 )
            {
              if ( (*(_DWORD *)(v325 + 12) & 0x8000) != 0 )
              {
                v311 = gptiCurrent;
                if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                {
                  v326 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( gpSharedUserCritDeferredUnlockListHead )
                  {
                    do
                    {
                      gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v326[2];
                      v326[2] = 0LL;
                      if ( !*(_DWORD *)(*v326 + 8) )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                      HMUnlockObject(*v326);
                      v326 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    }
                    while ( gpSharedUserCritDeferredUnlockListHead );
                    v7 = 0;
                  }
                }
              }
            }
          }
        }
        goto LABEL_485;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
LABEL_485:
    v327 = *a4;
    *(_DWORD *)(SGDGetUserSessionState(v311, v310, v312, v313) + 3116) = v327;
    v328 = a4[1];
    *(_DWORD *)(SGDGetUserSessionState(v330, v329, v331, v332) + 3120) = v328;
    v333 = a4[2];
    *(_DWORD *)(SGDGetUserSessionState(v335, v334, v336, v337) + 3124) = v333;
    v338 = a4[3];
    *(_DWORD *)(SGDGetUserSessionState(v340, v339, v341, v342) + 3128) = v338;
    v343 = a4[4];
    *(_DWORD *)(SGDGetUserSessionState(v345, v344, v346, v347) + 3132) = v343;
    v348 = a4[5];
    *(_DWORD *)(SGDGetUserSessionState(v350, v349, v351, v352) + 3136) = v348;
    v353 = a4[6];
    *(_DWORD *)(SGDGetUserSessionState(v355, v354, v356, v357) + 3140) = v353;
    v358 = a4[7];
    *(_DWORD *)(SGDGetUserSessionState(v360, v359, v361, v362) + 3144) = v358;
    PowerUpdateBrightnessLevels();
    if ( *(_DWORD *)(SGDGetUserSessionState(v364, v363, v365, v366) + 3080) == 1 )
    {
      v371 = SGDGetUserSessionState(v368, v367, v369, v370);
      v368 = *(unsigned int *)(SGDGetUserSessionState(v373, v372, v374, v375) + 3116);
      if ( *(_DWORD *)(v371 + 3112) != (_DWORD)v368 )
      {
        LODWORD(v613) = 11;
        *((_QWORD *)&v613 + 1) = 1LL;
        QueuePowerRequest(&v613, 0LL);
      }
    }
    if ( *(_DWORD *)(SGDGetUserSessionState(v368, v367, v369, v370) + 3080) != 2 )
      goto LABEL_108;
    v376 = SGDGetUserSessionState(v96, v95, v97, v98);
    v96 = *(unsigned int *)(SGDGetUserSessionState(v378, v377, v379, v380) + 3132);
    if ( *(_DWORD *)(v376 + 3112) == (_DWORD)v96 )
      goto LABEL_108;
    LODWORD(v613) = 11;
    *((_QWORD *)&v613 + 1) = 2LL;
    goto LABEL_177;
  }
  if ( *(_BYTE *)SGDGetUserGdiSessionState(v11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5362LL);
  if ( v9 != 8 || !a4 )
    return (unsigned int)-1073741823;
  v237 = (unsigned int)*a4;
  if ( (_DWORD)v237 )
  {
    v238 = (unsigned int)(v237 - 1);
    if ( !(_DWORD)v238 )
      goto LABEL_279;
    if ( (_DWORD)v238 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5410LL);
      return v7;
    }
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (v239 = WPP_MAIN_CB.Reserved,
          v240 = 0x8000002010000000uLL,
          ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
      && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
      || (v240 = 0x200000010000000LL, ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x200000010000000LL) != 0
      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
    {
      v241 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v238, v239, v240, v236, v598);
      if ( v241 )
        v241[1] = KeQueryPerformanceCounter(0LL);
    }
    v242 = SGDGetUserSessionState(v238, v239, v240, v236);
    v243 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v242 + 8));
    if ( v243 )
    {
      if ( IsEtwUserCritEnabled() )
      {
        v248 = PsGetCurrentThreadWin32Thread(v245, v244, v246, v247, v598);
        if ( v248 )
        {
          v249 = KeQueryPerformanceCounter(0LL);
          v250 = v249.QuadPart - *(_QWORD *)(v248 + 8);
          v251 = (struct _LIST_ENTRY *)v249.QuadPart;
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            UserCritTelemetry::UserCritTelemetry((UserCritTelemetry *)(unsigned int)dword_1C02D1900);
          }
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v250, 0);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            UserCritTelemetry::UserCritTelemetry(v252);
          }
          UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
          *(_QWORD *)(v248 + 8) = v251;
          if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v253,
              v250,
              1000000 * v250 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          if ( v250 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (char *)v251 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v253,
                v250,
                1000 * v250 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v251;
          }
          *(_QWORD *)(v248 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v254 = *v243;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v254;
        if ( v254 )
        {
          *((_DWORD *)v254 + 387) = 1;
          v381 = PsGetCurrentProcessWin32Process(v256);
          if ( v381 )
          {
            if ( *(_QWORD *)v381 )
            {
              if ( (*(_DWORD *)(v381 + 12) & 0x8000) != 0 )
              {
                v256 = gptiCurrent;
                if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                {
                  while ( 1 )
                  {
                    v382 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    if ( !gpSharedUserCritDeferredUnlockListHead )
                      break;
                    gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                                 + 2);
                    v382[2] = 0LL;
                    if ( !*(_DWORD *)(*v382 + 8) )
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                    HMUnlockObject(*v382);
                  }
                }
              }
            }
          }
        }
LABEL_278:
        v259 = *(_DWORD *)(SGDGetUserSessionState(v256, v255, v257, v258) + 2952);
        UserSessionSwitchLeaveCrit(v261, v260, v262, v263);
        v7 = (unsigned __int8)-(v259 != 0);
        v13 = v259 == 0;
        if ( v259 )
        {
LABEL_280:
          if ( !v13 )
            return v7;
          LODWORD(v613) = 4;
          goto LABEL_282;
        }
LABEL_279:
        CInputGlobals::UpdateLastInputTime(
          (__int64)gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          5u);
        goto LABEL_280;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
    goto LABEL_278;
  }
  v7 = 0;
  if ( !*(_BYTE *)(SGDGetUserSessionState(v237, v234, v235, v236) + 712) )
  {
LABEL_527:
    LODWORD(v613) = 5;
LABEL_282:
    *((_QWORD *)&v613 + 1) = a4[1];
    goto LABEL_283;
  }
  if ( *(_DWORD *)(SGDGetUserSessionState(v384, v383, v385, v386) + 2952)
    || *(_DWORD *)(SGDGetUserSessionState(v388, v387, v389, v390) + 2972)
    || *(_DWORD *)(SGDGetUserSessionState(v392, v391, v393, v394) + 2976) )
  {
    SetInputMode(1LL);
    goto LABEL_527;
  }
  return v7;
}
