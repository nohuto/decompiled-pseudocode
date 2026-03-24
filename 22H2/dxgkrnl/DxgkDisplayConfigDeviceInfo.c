/*
 * XREFs of DxgkDisplayConfigDeviceInfo @ 0x1C0135B50
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000A170 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000A1C4 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000A33C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000A39C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000A3B8 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000C3EC (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D994 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C001AA94 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C0036660 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C0037908 (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     ?IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEA_N@Z @ 0x1C00DD0A4 (-IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00EC5A8 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 *     MonitorGetMonitorHandle @ 0x1C0133530 (MonitorGetMonitorHandle.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C01355E8 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorReleaseMonitorHandle @ 0x1C0139140 (MonitorReleaseMonitorHandle.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C01391D0 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C013C28C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C013E964 (-BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C013E9F8 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C01478E0 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C0147950 (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C014799C (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C014D238 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     MonitorGetWideColorModeEnforced @ 0x1C0165670 (MonitorGetWideColorModeEnforced.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0169720 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C01735C8 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C020DEAC (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C0212938 (-DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02236C0 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C0269DC0 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C026A0F4 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 *     ?TriggerSDRWhiteLevelChangedWnf@@YAJXZ @ 0x1C0297F48 (-TriggerSDRWhiteLevelChangedWnf@@YAJXZ.c)
 *     DxgkNotifyDisplayChange @ 0x1C02A06B4 (DxgkNotifyDisplayChange.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z @ 0x1C02C43FC (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C02F3BA0 (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C02F3DBC (MonitorEnableDisableAdvancedColor.c)
 *     MonitorGetSDRWhiteLevel @ 0x1C02F42E4 (MonitorGetSDRWhiteLevel.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C02F43C0 (MonitorIsMonitorVirtualModeDisabled.c)
 *     MonitorSetAdvancedColorParams @ 0x1C02F4B48 (MonitorSetAdvancedColorParams.c)
 *     MonitorSetAppOverride @ 0x1C02F4D98 (MonitorSetAppOverride.c)
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C02F50AC (MonitorSetDefaultAdvancedColorParams.c)
 *     MonitorSetEnforceWideColorMode @ 0x1C02F51D4 (MonitorSetEnforceWideColorMode.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C02F541C (MonitorSetSDRWhiteLevel.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfo(char a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _DEVICE_OBJECT *v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  struct DXGADAPTER *DeviceInterfaces; // rsi
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rax
  int TargetBaseType; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGADAPTER *v22; // rsi
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  struct _DEVICE_OBJECT *v28; // rcx
  __int64 v29; // rax
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  DXGADAPTERSTOPRESETLOCKSHARED *v35; // rcx
  PZZWSTR v36; // rcx
  DXGADAPTERSTOPRESETLOCKSHARED *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // ebx
  __int64 v41; // rax
  unsigned int v42; // edx
  struct _LUID v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rax
  unsigned int v64; // edx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  _QWORD *v68; // rax
  DXGSESSIONMODECHANGELOCK *v69; // rcx
  DXGSESSIONMODECHANGELOCK *v70; // rcx
  struct DXGADAPTER *v71; // r14
  __int64 v72; // rdx
  int MonitorHandle; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  _QWORD *v76; // rax
  struct HDXGMONITOR__ *v77; // rbx
  __int64 v78; // rax
  __int128 v79; // xmm0
  struct DXGGLOBAL *Global; // rax
  int v81; // eax
  __int64 v82; // rax
  struct DXGGLOBAL *v83; // rax
  int v84; // eax
  __int64 v85; // rax
  __int64 v86; // rcx
  _QWORD *v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  _QWORD *v95; // rax
  __int64 v96; // rdx
  _QWORD *v97; // rax
  unsigned int v98; // edx
  __int64 v99; // rax
  struct DXGADAPTER *v100; // rbx
  __int64 v101; // rcx
  __int64 LowPart; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rax
  struct DXGADAPTER *v106; // rdx
  int v107; // ecx
  int v108; // eax
  int v109; // ecx
  int v110; // eax
  unsigned int v111; // edx
  struct _LUID v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  unsigned int v115; // edx
  int v116; // ecx
  __int64 v117; // rax
  struct DXGFASTMUTEX *v118; // r14
  int v119; // ebx
  __int64 v120; // rdx
  int v121; // eax
  unsigned int *v122; // rbx
  unsigned int *v123; // r12
  __int64 v124; // rcx
  __int64 v125; // rcx
  struct _LUID v126; // rbx
  __int64 v127; // r12
  __int64 v128; // rdx
  __int64 v129; // rcx
  struct DXGADAPTER *v130; // r14
  __int64 HighPart; // rax
  int v132; // eax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  _QWORD *v139; // rax
  _QWORD *v140; // rax
  int v141; // eax
  __int64 v142; // rdx
  __int64 v143; // rcx
  _QWORD *v144; // rax
  struct HDXGMONITOR__ *v145; // rbx
  __int64 v146; // rdx
  int v147; // eax
  __int64 v148; // rdx
  __int64 v149; // rcx
  int v150; // r15d
  int v151; // eax
  __int64 v152; // rdx
  __int64 v153; // rcx
  _QWORD *v154; // rax
  _QWORD *v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rdx
  _QWORD *v158; // rax
  struct _DEVICE_OBJECT *v159; // rsi
  __int64 v160; // rdx
  __int64 v161; // rcx
  struct DXGADAPTER *v162; // r14
  int v163; // eax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  _QWORD *v170; // rax
  __int64 v171; // rdx
  _QWORD *v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  _QWORD *v176; // rax
  int v177; // eax
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rsi
  _QWORD *v181; // rax
  struct HDXGMONITOR__ *v182; // rsi
  __int64 v183; // rax
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v185; // rdx
  __int64 v186; // rcx
  _QWORD *v187; // rax
  int IsMonitorAndDriverWCGCapable; // eax
  int v189; // eax
  __int64 v190; // rax
  unsigned int v191; // eax
  __int64 v192; // rax
  int WideColorModeEnforced; // eax
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v194; // ecx
  unsigned int ColorDepthFromPickedWireFormat; // eax
  __int64 Value; // rcx
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // rax
  int v200; // eax
  __int64 v201; // rax
  int v202; // eax
  int SDRWhiteLevel; // eax
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // r8
  _QWORD *v207; // rax
  __int64 v208; // rax
  int v209; // eax
  __int64 v210; // rdx
  __int64 v211; // rcx
  _QWORD *v212; // rax
  struct _LUID *v213; // rdx
  __int64 v214; // r8
  __int64 v215; // rdx
  struct DXGGLOBAL *v216; // rax
  __int64 v217; // rcx
  __int64 v218; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v220; // [rsp+28h] [rbp-E0h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v221; // [rsp+30h] [rbp-D8h]
  unsigned __int8 v222; // [rsp+58h] [rbp-B0h] BYREF
  bool v223; // [rsp+59h] [rbp-AFh] BYREF
  char v224; // [rsp+5Ah] [rbp-AEh] BYREF
  char v225; // [rsp+5Bh] [rbp-ADh]
  char v226; // [rsp+5Ch] [rbp-ACh] BYREF
  char v227; // [rsp+5Dh] [rbp-ABh]
  char v228; // [rsp+5Eh] [rbp-AAh]
  char v229; // [rsp+5Fh] [rbp-A9h] BYREF
  unsigned __int8 v230[4]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int8 v231[4]; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v232; // [rsp+68h] [rbp-A0h] BYREF
  int v233; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct DXGADAPTER *v234[2]; // [rsp+70h] [rbp-98h] BYREF
  struct HDXGMONITOR__ *v235; // [rsp+80h] [rbp-88h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v236; // [rsp+88h] [rbp-80h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v237; // [rsp+8Ch] [rbp-7Ch] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v238; // [rsp+90h] [rbp-78h] BYREF
  int v239; // [rsp+94h] [rbp-74h] BYREF
  unsigned int v240; // [rsp+98h] [rbp-70h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+A0h] [rbp-68h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v242; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v243; // [rsp+B0h] [rbp-58h] BYREF
  int v244; // [rsp+B8h] [rbp-50h]
  struct _LUID v245; // [rsp+C0h] [rbp-48h] BYREF
  struct HDXGMONITOR__ *v246; // [rsp+C8h] [rbp-40h] BYREF
  struct _LUID v247; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v248; // [rsp+D8h] [rbp-30h] BYREF
  struct HDXGMONITOR__ *v249; // [rsp+E0h] [rbp-28h] BYREF
  int v250; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v251; // [rsp+F0h] [rbp-18h]
  char v252; // [rsp+F8h] [rbp-10h]
  __int64 v253; // [rsp+100h] [rbp-8h] BYREF
  int v254; // [rsp+108h] [rbp+0h]
  char v255[8]; // [rsp+110h] [rbp+8h] BYREF
  struct DXGADAPTER *v256; // [rsp+118h] [rbp+10h]
  char v257; // [rsp+120h] [rbp+18h]
  char v258[8]; // [rsp+128h] [rbp+20h] BYREF
  struct DXGADAPTER *v259; // [rsp+130h] [rbp+28h]
  char v260; // [rsp+138h] [rbp+30h]
  DXGADAPTER *v261[2]; // [rsp+140h] [rbp+38h] BYREF
  _BYTE v262[16]; // [rsp+150h] [rbp+48h] BYREF
  __int128 v263; // [rsp+160h] [rbp+58h] BYREF
  __int64 v264; // [rsp+170h] [rbp+68h]
  __int128 v265; // [rsp+178h] [rbp+70h]
  _OWORD v266[2]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v267[10]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v268[40]; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v269[144]; // [rsp+338h] [rbp+230h] BYREF
  _BYTE v270[144]; // [rsp+3C8h] [rbp+2C0h] BYREF
  _BYTE v271[144]; // [rsp+458h] [rbp+350h] BYREF
  _BYTE v272[144]; // [rsp+4E8h] [rbp+3E0h] BYREF

  v234[0] = 0LL;
  memset(v267, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v267[1]);
  v6 = 1;
  v250 = -1;
  v267[8] = MEMORY[0xFFFFF78000000014];
  LOBYTE(v267[6]) = -1;
  LODWORD(v267[3]) = 39;
  v251 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v252 = 1;
    v250 = 2184;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 2184);
  }
  else
  {
    v252 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v250, 2184LL);
  LODWORD(v9) = -1073741811;
  if ( a2 )
  {
    v11 = *(_DWORD *)a2;
    v12 = 4294967274LL;
    LODWORD(DeviceInterfaces) = 0;
    if ( *(_DWORD *)a2 <= 0xFFFFFFEA )
    {
      if ( v11 != -22 )
      {
        if ( v11 <= 8 )
        {
          if ( v11 < 7 )
          {
            v14 = v11 - 2;
            if ( !v14 )
            {
              if ( !a1 )
              {
                v44 = WdLogNewEntry5_WdAssertion(4294967274LL, v7);
                *(_QWORD *)(v44 + 24) = 5180LL;
                WdLogEvent5_WdAssertion(v44);
              }
              TargetBaseType = DisplayConfigFillTargetDeviceInfo((struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
              goto LABEL_261;
            }
            v15 = v14 - 1;
            if ( !v15 )
            {
              if ( !a1 )
              {
                v38 = WdLogNewEntry5_WdAssertion(4294967274LL, v7);
                *(_QWORD *)(v38 + 24) = 5113LL;
                WdLogEvent5_WdAssertion(v38);
              }
              memset(v268, 0, sizeof(v268));
              v40 = 0;
              LODWORD(DeviceInterfaces) = -1071774970;
              do
              {
                if ( v40 >= 0x10 )
                  break;
                if ( v268[34] )
                {
                  v41 = WdLogNewEntry5_WdAssertion(v39, v7);
                  *(_QWORD *)(v41 + 24) = 5125LL;
                  WdLogEvent5_WdAssertion(v41);
                }
                memset(v268, 0, sizeof(v268));
                v42 = *(_DWORD *)(a2 + 16);
                v43 = *(struct _LUID *)(a2 + 8);
                v228 = 0;
                v227 = 0;
                LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(
                                              v43,
                                              v42,
                                              (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v268[17],
                                              (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v268[17] + 1,
                                              (__int64)&v268[32] + 4);
                if ( (int)DeviceInterfaces >= 0 )
                {
                  v268[8] = *(_QWORD *)(a2 + 8);
                  HIDWORD(v268[9]) = *(_DWORD *)(a2 + 16);
                  HIDWORD(v268[2]) = 65537;
                  LODWORD(v268[9]) = v40;
                  LODWORD(v268[29]) = -13434880;
                  BYTE1(v268[22]) = (v227 == 0 ? 2 : 0) | (v228 == 0);
                  v268[6] = 0xCF00000000000LL;
                  LODWORD(DeviceInterfaces) = BmlGetPathModalityForAdapter(
                                                (__int64)v268,
                                                (struct _LUID *)(a2 + 8),
                                                0,
                                                1u,
                                                0);
                  if ( (int)DeviceInterfaces >= 0 )
                  {
                    DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(&v268[10], a2 + 32);
                    *(_QWORD *)(a2 + 20) = *(_QWORD *)(a2 + 56);
                  }
                  BmlFreePathsModality((struct D3DKMT_GETPATHSMODALITY *)v268);
                  ++v40;
                }
              }
              while ( (_DWORD)DeviceInterfaces == -1071774970 );
              goto LABEL_262;
            }
            v16 = v15 - 1;
            if ( v16 )
            {
              if ( v16 == 2 )
              {
                if ( !a1 )
                {
                  v17 = WdLogNewEntry5_WdAssertion(4294967274LL, v7);
                  *(_QWORD *)(v17 + 24) = 5190LL;
                  WdLogEvent5_WdAssertion(v17);
                }
                TargetBaseType = DisplayConfigGetTargetBaseType((struct DISPLAYCONFIG_TARGET_BASE_TYPE *)a2);
                goto LABEL_261;
              }
              goto LABEL_97;
            }
            DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v234, (struct _LUID *)(a2 + 8));
            v22 = v234[0];
            if ( !v234[0] )
            {
              v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
              v23[3] = *(unsigned int *)(a2 + 8);
              v23[4] = *(int *)(a2 + 12);
              v23[5] = -1073741811LL;
              WdLogEvent5_WdWarning(v23);
              goto LABEL_263;
            }
            v256 = v234[0];
            v257 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v255);
            if ( *((_DWORD *)v22 + 50) != 1 )
            {
              v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
              LODWORD(v9) = -1073741130;
              *(struct DXGADAPTER **)(v27 + 24) = v234[0];
              *(_QWORD *)(v27 + 32) = -1073741130LL;
              WdLogEvent5_WdWarning(v27);
LABEL_26:
              v35 = (DXGADAPTERSTOPRESETLOCKSHARED *)v255;
LABEL_27:
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v35);
              goto LABEL_263;
            }
            v9 = (struct _DEVICE_OBJECT *)v234[0];
            v28 = (struct _DEVICE_OBJECT *)*((_QWORD *)v234[0] + 27);
            if ( !v28 )
            {
              v29 = WdLogNewEntry5_WdError(0LL, v24);
              *(_QWORD *)(v29 + 24) = v9;
              WdLogEvent5_WdError(v29);
              LODWORD(v9) = -1073741275;
              goto LABEL_26;
            }
            DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v28);
            SymbolicLinkList = 0LL;
            v9 = DeviceAttachmentBaseRef;
            DeviceInterfaces = (struct DXGADAPTER *)IoGetDeviceInterfaces(
                                                      &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
                                                      DeviceAttachmentBaseRef,
                                                      0,
                                                      &SymbolicLinkList);
            ObfDereferenceObject(v9);
            if ( (int)DeviceInterfaces < 0 )
            {
              v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
              *(_QWORD *)(v34 + 24) = v9;
              *(_QWORD *)(v34 + 32) = DeviceInterfaces;
              WdLogEvent5_WdWarning(v34);
              LODWORD(v9) = (_DWORD)DeviceInterfaces;
              goto LABEL_26;
            }
            wcsncpy_s((wchar_t *)(a2 + 20), 0x80uLL, SymbolicLinkList, 0xFFFFFFFFFFFFFFFFuLL);
            v36 = SymbolicLinkList;
            *(_WORD *)(a2 + 22) = 92;
            ExFreePoolWithTag(v36, 0);
            v37 = (DXGADAPTERSTOPRESETLOCKSHARED *)v255;
            goto LABEL_29;
          }
          DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v234, (struct _LUID *)(a2 + 8));
          DeviceInterfaces = v234[0];
          if ( !v234[0] )
          {
LABEL_46:
            v47 = WdLogNewEntry5_WdTrace(v46, v45);
            *(_QWORD *)(v47 + 24) = *(int *)(a2 + 12);
            *(_QWORD *)(v47 + 32) = *(unsigned int *)(a2 + 8);
            goto LABEL_263;
          }
          v222 = 0;
          v48 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v222, 0);
          v9 = (struct _DEVICE_OBJECT *)v48;
          if ( v48 < 0 )
          {
            v52 = WdLogNewEntry5_WdWarning(v50, v49, v51);
            *(_QWORD *)(v52 + 24) = v9;
            WdLogEvent5_WdWarning(v52);
LABEL_66:
            v69 = (DXGSESSIONMODECHANGELOCK *)&v222;
LABEL_203:
            DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK(v69);
            goto LABEL_263;
          }
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v269, DeviceInterfaces, 0LL);
          if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v269, 0LL) < 0 )
          {
            v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v54, v53, v55);
            v56[3] = DeviceInterfaces;
            v56[4] = *((int *)DeviceInterfaces + 80);
            v56[5] = *((unsigned int *)DeviceInterfaces + 79);
            WdLogEvent5_WdWarning(v56);
            LODWORD(v9) = -1073741811;
LABEL_65:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v269, v57);
            goto LABEL_66;
          }
          v58 = *((_QWORD *)DeviceInterfaces + 337);
          if ( !v58 || !*(_BYTE *)(v58 + 250) )
          {
            v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v54, v53, v55);
            v59[3] = DeviceInterfaces;
            v59[4] = *((int *)DeviceInterfaces + 80);
            v59[5] = *((unsigned int *)DeviceInterfaces + 79);
            WdLogEvent5_WdWarning(v59);
            LODWORD(v9) = -1073741637;
            goto LABEL_65;
          }
          if ( *(_DWORD *)a2 == 7 )
          {
            v229 = 0;
            if ( !a1 )
            {
              v60 = WdLogNewEntry5_WdAssertion(v54, v53);
              *(_QWORD *)(v60 + 24) = 5269LL;
              WdLogEvent5_WdAssertion(v60);
            }
            v61 = *(unsigned int *)(a2 + 16);
            *(_DWORD *)(a2 + 20) = 0;
            LODWORD(DeviceInterfaces) = MonitorIsMonitorVirtualModeDisabled(DeviceInterfaces, v61, &v229);
            if ( (int)DeviceInterfaces >= 0 )
              *(_DWORD *)(a2 + 20) = (v229 != 0) | *(_DWORD *)(a2 + 20) & 0xFFFFFFFE;
          }
          else
          {
            if ( a1 || *(_DWORD *)a2 != 8 )
            {
              v63 = WdLogNewEntry5_WdAssertion(v54, v53);
              *(_QWORD *)(v63 + 24) = 5286LL;
              WdLogEvent5_WdAssertion(v63);
            }
            v64 = *(_DWORD *)(a2 + 16);
            v230[0] = 0;
            if ( (int)CheckGivenTargetIsPartOfCloneGroup(DeviceInterfaces, v64, v230) >= 0 && v230[0] )
            {
              v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v66, v65, v67);
              v68[3] = *((int *)DeviceInterfaces + 80);
              v68[4] = *((unsigned int *)DeviceInterfaces + 79);
              v68[5] = *(unsigned int *)(a2 + 16);
              WdLogEvent5_WdWarning(v68);
              LODWORD(v9) = -1073741649;
              goto LABEL_65;
            }
            LOBYTE(v67) = *(_BYTE *)(a2 + 20) & 1;
            LODWORD(DeviceInterfaces) = MonitorDisableMonitorVirtualModeSupport(
                                          DeviceInterfaces,
                                          *(unsigned int *)(a2 + 16),
                                          v67,
                                          v267);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v269, v62);
          v70 = (DXGSESSIONMODECHANGELOCK *)&v222;
LABEL_69:
          DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK(v70);
          goto LABEL_262;
        }
        if ( v11 > 0xB )
        {
          if ( v11 != 100 )
          {
            if ( v11 != -24 )
            {
              if ( v11 == -23 )
              {
                if ( !IsCurrentProcessAdmin() )
                {
                  LODWORD(v9) = -1073741790;
                  goto LABEL_263;
                }
                DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v234, (struct _LUID *)(a2 + 8));
                v71 = v234[0];
                if ( v234[0] )
                {
                  v72 = *(unsigned int *)(a2 + 16);
                  v249 = 0LL;
                  MonitorHandle = MonitorGetMonitorHandle((__int64)v234[0], v72, 0, &DxgkDisplayConfigDeviceInfo, &v249);
                  v9 = (struct _DEVICE_OBJECT *)MonitorHandle;
                  if ( MonitorHandle < 0 )
                  {
                    v76 = (_QWORD *)WdLogNewEntry5_WdError(v75, v74);
                    v76[3] = *((int *)v71 + 80);
                    v76[4] = *((unsigned int *)v71 + 79);
                    v76[5] = *(unsigned int *)(a2 + 16);
                    v76[6] = v9;
                    WdLogEvent5_WdError(v76);
                    goto LABEL_263;
                  }
                  v77 = v249;
                  if ( !v249 )
                  {
                    v78 = WdLogNewEntry5_WdAssertion(v75, v74);
                    *(_QWORD *)(v78 + 24) = 6116LL;
                    WdLogEvent5_WdAssertion(v78);
                  }
                  v79 = *(_OWORD *)(a2 + 20);
                  v261[0] = 0LL;
                  v265 = v79;
                  DXGADAPTER_REFERENCE::Assign(v261, v71);
                  LODWORD(DeviceInterfaces) = MonitorSetAppOverride(
                                                (DXGADAPTER_REFERENCE *)v261,
                                                v77,
                                                *(_QWORD *)(a2 + 40));
                  MonitorReleaseMonitorHandle(v71, v77, &DxgkDisplayConfigDeviceInfo);
LABEL_262:
                  LODWORD(v9) = (_DWORD)DeviceInterfaces;
                  goto LABEL_263;
                }
                goto LABEL_46;
              }
LABEL_97:
              LODWORD(DeviceInterfaces) = -1073741811;
              goto LABEL_262;
            }
            Global = DXGGLOBAL::GetGlobal(4294967274LL, v7);
            v7 = *(unsigned int *)(a2 + 16);
            if ( !*((_BYTE *)Global + 304664) )
            {
              *(_QWORD *)(a2 + 20) = *(_QWORD *)(a2 + 8);
              *(_DWORD *)(a2 + 28) = v7;
              goto LABEL_262;
            }
            v253 = *(_QWORD *)(a2 + 8);
            v254 = v7;
            v243 = 0LL;
            v244 = 0;
            LODWORD(DeviceInterfaces) = REMOTEMONITORMAPPING::FindMappingFromGuestId(
                                          (struct DXGGLOBAL *)((char *)Global + 304616),
                                          (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v253,
                                          (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v243);
            if ( (int)DeviceInterfaces < 0 )
              goto LABEL_262;
            *(_QWORD *)(a2 + 20) = v243;
            v81 = v244;
LABEL_86:
            *(_DWORD *)(a2 + 28) = v81;
            goto LABEL_262;
          }
          goto LABEL_120;
        }
LABEL_186:
        v126 = *(struct _LUID *)(a2 + 8);
        v159 = (struct _DEVICE_OBJECT *)*(unsigned int *)(a2 + 16);
        v247 = v126;
        DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v234, &v247);
        v162 = v234[0];
        if ( !v234[0] )
        {
          v101 = WdLogNewEntry5_WdTrace(v161, v160);
          HighPart = v247.HighPart;
          goto LABEL_188;
        }
        v226 = 0;
        v163 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v226, 0);
        v9 = (struct _DEVICE_OBJECT *)v163;
        if ( v163 < 0 )
        {
          v166 = WdLogNewEntry5_WdError(v165, v164);
          *(_QWORD *)(v166 + 24) = v9;
          WdLogEvent5_WdError(v166);
LABEL_202:
          v69 = (DXGSESSIONMODECHANGELOCK *)&v226;
          goto LABEL_203;
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v272, v162, 0LL);
        if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v272, 0LL) < 0 )
        {
          v170 = (_QWORD *)WdLogNewEntry5_WdError(v168, v167);
          v170[3] = v162;
          v170[4] = *((int *)v162 + 80);
          v170[5] = *((unsigned int *)v162 + 79);
          WdLogEvent5_WdError(v170);
          LODWORD(v9) = -1073741811;
LABEL_201:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v272, v171);
          goto LABEL_202;
        }
        if ( !*((_QWORD *)v162 + 337) )
        {
          v172 = (_QWORD *)WdLogNewEntry5_WdWarning(v168, v167, v169);
          v172[3] = v162;
          v172[4] = *((int *)v162 + 80);
          v172[5] = *((unsigned int *)v162 + 79);
          WdLogEvent5_WdWarning(v172);
          LODWORD(v9) = -1073741637;
          goto LABEL_201;
        }
        v231[0] = 0;
        v9 = v159;
        if ( (unsigned int)CheckGivenTargetIsPartOfCloneGroup(v162, (unsigned int)v159, v231) == -1073741275 )
        {
          v176 = (_QWORD *)WdLogNewEntry5_WdWarning(v174, v173, v175);
          v176[3] = *((int *)v162 + 80);
          v176[4] = *((unsigned int *)v162 + 79);
          v176[5] = v159;
          v176[6] = -1073741275LL;
          WdLogEvent5_WdWarning(v176);
          v222 = 0;
        }
        else
        {
          v222 = v231[0];
        }
        v235 = 0LL;
        v177 = MonitorGetMonitorHandle((__int64)v162, (unsigned int)v159, 0, &DxgkDisplayConfigDeviceInfo, &v235);
        v180 = v177;
        if ( v177 < 0 )
        {
          v181 = (_QWORD *)WdLogNewEntry5_WdError(v179, v178);
          v181[3] = *((int *)v162 + 80);
          v181[4] = *((unsigned int *)v162 + 79);
          v181[5] = v9;
          v181[6] = v180;
          WdLogEvent5_WdError(v181);
          LODWORD(v9) = v180;
          goto LABEL_201;
        }
        v182 = v235;
        if ( !v235 )
        {
          v183 = WdLogNewEntry5_WdAssertion(v179, v178);
          *(_QWORD *)(v183 + 24) = 5837LL;
          WdLogEvent5_WdAssertion(v183);
        }
        v232 = 0;
        IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v182, &v232);
        DeviceInterfaces = (struct DXGADAPTER *)IsMonitorAndLinkHDRCapable;
        if ( IsMonitorAndLinkHDRCapable >= 0 )
        {
          v225 = 0;
          IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(v235);
          DeviceInterfaces = (struct DXGADAPTER *)IsMonitorAndDriverWCGCapable;
          if ( IsMonitorAndDriverWCGCapable >= 0 )
          {
            v236.Value = 0;
            v242 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
            v223 = 0;
            v189 = IsCurrentModeAdvancedColor(v162, (unsigned int)v9, &v236, &v242, &v223);
            DeviceInterfaces = (struct DXGADAPTER *)v189;
            if ( v189 >= 0 )
            {
              if ( v222 && v223 )
              {
                v190 = WdLogNewEntry5_WdAssertion(v186, v185);
                *(_QWORD *)(v190 + 24) = 5888LL;
                WdLogEvent5_WdAssertion(v190);
              }
              v191 = *(_DWORD *)a2;
              if ( *(_DWORD *)a2 == 9 )
              {
                if ( !a1 )
                {
                  v192 = WdLogNewEntry5_WdAssertion(v186, v185);
                  *(_QWORD *)(v192 + 24) = 5898LL;
                  WdLogEvent5_WdAssertion(v192);
                }
                v231[1] = 0;
                WideColorModeEnforced = MonitorGetWideColorModeEnforced(v235, &v231[1]);
                DeviceInterfaces = (struct DXGADAPTER *)WideColorModeEnforced;
                if ( WideColorModeEnforced >= 0 )
                {
                  if ( (v232 & 1) == 0 && !v225 || v222 )
                    v6 = 0;
                  v194.0 = v236.0;
                  *(_DWORD *)(a2 + 20) = (v231[1] != 0 ? 4 : 0) | (v223 ? 2 : 0) | v6 & 0xFFFFFFF9 | *(_DWORD *)(a2 + 20) & 0xFFFFFFF8;
                  ColorDepthFromPickedWireFormat = GetColorDepthFromPickedWireFormat(v194);
                  Value = v236.Value;
                  *(_DWORD *)(a2 + 28) = ColorDepthFromPickedWireFormat;
                  *(_DWORD *)(a2 + 24) = ConvertDmmToDisplayConfigColorEncoding(Value);
                  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a2 + 20) & 0xFFFFFFF7 | (*((_BYTE *)DXGGLOBAL::GetGlobal(
                                                                                           v198,
                                                                                           v197)
                                                                              + 304564) == 0
                                                                            ? 8
                                                                            : 0);
                  goto LABEL_259;
                }
              }
              else
              {
                if ( v191 != 10 )
                {
                  if ( v191 == 11 )
                  {
                    if ( !a1 )
                    {
                      v201 = WdLogNewEntry5_WdAssertion(v186, v185);
                      *(_QWORD *)(v201 + 24) = 5974LL;
                      WdLogEvent5_WdAssertion(v201);
                    }
                    v202 = 1000;
                    v233 = 1000;
                    if ( v223 && (v232 & 1) != 0 )
                    {
                      SDRWhiteLevel = MonitorGetSDRWhiteLevel(v235, &v233);
                      DeviceInterfaces = (struct DXGADAPTER *)SDRWhiteLevel;
                      if ( SDRWhiteLevel >= 0 )
                      {
                        v202 = v233;
                      }
                      else
                      {
                        v207 = (_QWORD *)WdLogNewEntry5_WdWarning(v205, v204, v206);
                        v207[3] = *((int *)v162 + 80);
                        v207[4] = *((unsigned int *)v162 + 79);
                        v207[5] = v9;
                        v207[6] = DeviceInterfaces;
                        WdLogEvent5_WdWarning(v207);
                        v202 = 3000;
                      }
                    }
                    *(_DWORD *)(a2 + 20) = v202;
                    goto LABEL_259;
                  }
                  if ( v191 == -18 )
                  {
                    if ( a1 )
                    {
                      v208 = WdLogNewEntry5_WdAssertion(v186, v185);
                      *(_QWORD *)(v208 + 24) = 6003LL;
                      WdLogEvent5_WdAssertion(v208);
                    }
                    if ( (unsigned int)(*(_DWORD *)(a2 + 20) - 1000) > 0x1388 )
                    {
                      LODWORD(DeviceInterfaces) = -1073741811;
                    }
                    else if ( v223 && (v232 & 1) != 0 )
                    {
                      v209 = MonitorSetSDRWhiteLevel(v235);
                      DeviceInterfaces = (struct DXGADAPTER *)v209;
                      if ( v209 >= 0 )
                      {
                        if ( v209 )
                        {
                          if ( v209 == 255 )
                            LODWORD(DeviceInterfaces) = 0;
                        }
                        else
                        {
                          if ( !*(_BYTE *)(a2 + 24) )
                            goto LABEL_259;
                          TriggerSDRWhiteLevelChangedWnf();
                          v248 = 0LL;
                          memset(v266, 0, sizeof(v266));
                          LODWORD(v266[0]) = 13;
                          DXGADAPTER::IsAdapterSessionized(v162, v213, 0LL, &v248);
                          SMgrGdiCallout(
                            v266,
                            v248,
                            v214,
                            0LL,
                            v214 & (unsigned __int64)v220,
                            v214 & (unsigned __int64)v221);
                        }
                      }
                      else
                      {
                        v212 = (_QWORD *)WdLogNewEntry5_WdError(v211, v210);
                        v212[3] = *((int *)v162 + 80);
                        v212[4] = *((unsigned int *)v162 + 79);
                        v212[5] = v9;
                        v212[6] = DeviceInterfaces;
                        WdLogEvent5_WdError(v212);
                      }
                    }
                    else
                    {
                      LODWORD(DeviceInterfaces) = -1073741637;
                    }
                    if ( *(_BYTE *)(a2 + 24) )
                      DxgkNotifyDisplayChange(0LL);
                  }
LABEL_259:
                  MonitorReleaseMonitorHandle(v162, v235, &DxgkDisplayConfigDeviceInfo);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v272, v215);
                  v70 = (DXGSESSIONMODECHANGELOCK *)&v226;
                  goto LABEL_69;
                }
                if ( a1 )
                {
                  v199 = WdLogNewEntry5_WdAssertion(v186, v185);
                  *(_QWORD *)(v199 + 24) = 5928LL;
                  WdLogEvent5_WdAssertion(v199);
                }
                if ( (v232 & 1) == 0 && !v225 || v222 )
                {
                  LODWORD(DeviceInterfaces) = -1073741637;
                  goto LABEL_259;
                }
                LOBYTE(v185) = *(_BYTE *)(a2 + 20) & 1;
                v200 = MonitorEnableDisableAdvancedColor(v235, v185);
                DeviceInterfaces = (struct DXGADAPTER *)v200;
                if ( v200 >= 0 )
                {
                  if ( v200 == 255 && (*(_BYTE *)(a2 + 20) & 1) != v223 )
                    LODWORD(DeviceInterfaces) = 0;
                  goto LABEL_259;
                }
              }
            }
          }
        }
        v187 = (_QWORD *)WdLogNewEntry5_WdError(v186, v185);
        v187[3] = *((int *)v162 + 80);
        v187[4] = *((unsigned int *)v162 + 79);
        v187[5] = v9;
        v187[6] = DeviceInterfaces;
        WdLogEvent5_WdError(v187);
        goto LABEL_259;
      }
      TargetBaseType = DxgkCreateLightweightDeviceAndContext((struct _LUID *)(a2 + 8));
LABEL_261:
      LODWORD(DeviceInterfaces) = TargetBaseType;
      goto LABEL_262;
    }
    if ( v11 == -19 )
    {
      v216 = DXGGLOBAL::GetGlobal(4294967274LL, v7);
      TargetBaseType = DXGGLOBAL::IterateAdaptersWithCallback(v216, SendColorimetricControlToDriverCallback, a2, 4LL);
      goto LABEL_261;
    }
    if ( v11 == -18 )
      goto LABEL_186;
    if ( v11 != -16 )
    {
      switch ( v11 )
      {
        case 0xFFFFFFF2:
          v118 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(4294967274LL, v7) + 1272);
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v262, v118, 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v262);
          v119 = *((_DWORD *)v118 + 15);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v262);
          *(_DWORD *)(a2 + 24) = v119;
          *(_DWORD *)(a2 + 32) = DXGADAPTERSOURCEHASH::GetHashBitMask(v118, v120);
          *(_DWORD *)(a2 + 28) = DXGADAPTERSOURCEHASH::GetHashBitShift(v118);
          v121 = *(_DWORD *)(a2 + 36);
          if ( (v121 & 2) != 0 )
            goto LABEL_262;
          v122 = (unsigned int *)(a2 + 20);
          v123 = (unsigned int *)(a2 + 16);
          if ( (v121 & 1) != 0 )
          {
            LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
                                          v118,
                                          *v122,
                                          (struct _LUID *)(a2 + 8),
                                          (unsigned int *)(a2 + 16));
            if ( (int)DeviceInterfaces >= 0 )
              goto LABEL_262;
            v87 = (_QWORD *)WdLogNewEntry5_WdError(v124, v7);
            v88 = *v122;
LABEL_110:
            v87[3] = v88;
LABEL_111:
            WdLogEvent5_WdError(v87);
            goto LABEL_262;
          }
          LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                        v118,
                                        (const struct _LUID *)(a2 + 8),
                                        *v123,
                                        (unsigned int *)(a2 + 20));
          if ( (int)DeviceInterfaces >= 0 )
            goto LABEL_262;
          v87 = (_QWORD *)WdLogNewEntry5_WdError(v125, v7);
          v87[3] = *(int *)(a2 + 12);
          v87[4] = *(unsigned int *)(a2 + 8);
          v117 = *v123;
          break;
        case 0xFFFFFFF3:
          v111 = *(_DWORD *)(a2 + 16);
          v112 = *(struct _LUID *)(a2 + 8);
          v230[1] = 0;
          v230[2] = 0;
          v237 = D3DKMDT_VOT_HD15;
          v238 = D3DKMDT_VOT_HD15;
          v239 = 0;
          LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(v112, v111, &v237, &v238, (__int64)&v239);
          if ( (int)DeviceInterfaces >= 0 )
          {
            v115 = (v230[1] != 0) | *(_DWORD *)(a2 + 32) & 0xFFFFFFFE;
            v116 = -(v230[2] != 0);
            *(_DWORD *)(a2 + 20) = v237;
            *(_DWORD *)(a2 + 24) = v238;
            v81 = v239;
            v7 = v116 & 2 | v115 & 0xFFFFFFFD;
            *(_DWORD *)(a2 + 32) = v7;
            goto LABEL_86;
          }
          v87 = (_QWORD *)WdLogNewEntry5_WdError(v114, v113);
          v87[3] = *(int *)(a2 + 12);
          v87[4] = *(unsigned int *)(a2 + 8);
          v117 = *(unsigned int *)(a2 + 16);
          break;
        case 0xFFFFFFF4:
          *(_DWORD *)(a2 + 20) = 0;
          DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v234, (struct _LUID *)(a2 + 8));
          v100 = v234[0];
          if ( v234[0] )
          {
            v259 = v234[0];
            v260 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v258);
            if ( *((_DWORD *)v100 + 50) != 1 )
            {
              v105 = WdLogNewEntry5_WdTrace(v104, v103);
              LODWORD(v9) = -1073741130;
              *(struct DXGADAPTER **)(v105 + 24) = v234[0];
              *(_QWORD *)(v105 + 32) = -1073741130LL;
              v35 = (DXGADAPTERSTOPRESETLOCKSHARED *)v258;
              goto LABEL_27;
            }
            v106 = v234[0];
            *(_DWORD *)(a2 + 20) ^= (*(_DWORD *)(a2 + 20) ^ (*((_DWORD *)v234[0] + 510) >> 2)) & 1;
            v107 = *(_DWORD *)(a2 + 20) ^ (*(_DWORD *)(a2 + 20) ^ (*((_DWORD *)v106 + 510) >> 2)) & 2;
            *(_DWORD *)(a2 + 20) = v107;
            v108 = v107 ^ ((unsigned __int8)v107 ^ (unsigned __int8)(*((_DWORD *)v106 + 510) >> 2)) & 4;
            *(_DWORD *)(a2 + 20) = v108;
            v109 = v108 ^ ((unsigned __int8)v108 ^ (unsigned __int8)(32 * *((_DWORD *)v106 + 510))) & 0x20;
            *(_DWORD *)(a2 + 20) = v109;
            v110 = v109 ^ ((unsigned __int8)v109 ^ (unsigned __int8)(8 * *((_DWORD *)v106 + 510))) & 0x10;
            v37 = (DXGADAPTERSTOPRESETLOCKSHARED *)v258;
            *(_DWORD *)(a2 + 20) = v110;
LABEL_29:
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v37);
            goto LABEL_262;
          }
LABEL_136:
          v101 = WdLogNewEntry5_WdTrace(v91, v90);
          *(_QWORD *)(v101 + 24) = *(int *)(a2 + 12);
          LowPart = *(unsigned int *)(a2 + 8);
LABEL_189:
          *(_QWORD *)(v101 + 32) = LowPart;
          LODWORD(v9) = -1073741811;
          goto LABEL_263;
        case 0xFFFFFFF6:
LABEL_120:
          DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v234, (struct _LUID *)(a2 + 8));
          v9 = (struct _DEVICE_OBJECT *)v234[0];
          if ( v234[0] )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v270, v234[0], 0LL);
            if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v270, 0LL) < 0 )
              goto LABEL_122;
            if ( (HIDWORD(v9[1].DriverObject) & 0x100) == 0 )
            {
              v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v93, v92, v94);
              v97[3] = v9;
              v97[4] = SLODWORD(v9->Reserved);
              v97[5] = HIDWORD(v9->DeviceObjectExtension);
              WdLogEvent5_WdWarning(v97);
              LODWORD(v9) = -1073741637;
LABEL_134:
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v270, v96);
              goto LABEL_263;
            }
            if ( *(_DWORD *)a2 == -10 )
            {
              if ( (int)ADAPTER_DISPLAY::DodGetRenderAdapter(
                          (ADAPTER_DISPLAY *)v9[8].DriverObject,
                          *(_DWORD *)(a2 + 16),
                          (struct _LUID *)(a2 + 20)) < 0 )
                goto LABEL_122;
            }
            else
            {
              if ( *(_DWORD *)a2 != 100 )
              {
                v99 = WdLogNewEntry5_WdAssertion(v93, v92);
                *(_QWORD *)(v99 + 24) = 5424LL;
                WdLogEvent5_WdAssertion(v99);
                goto LABEL_133;
              }
              v98 = *(_DWORD *)(a2 + 16);
              v264 = 0LL;
              v263 = 0LL;
              if ( (int)DXGADAPTER::GetVirtualMonitorInfo(
                          (DXGADAPTER *)v9,
                          v98,
                          (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&v263) < 0 )
              {
LABEL_122:
                v95 = (_QWORD *)WdLogNewEntry5_WdWarning(v93, v92, v94);
                v95[3] = v9;
                v95[4] = SLODWORD(v9->Reserved);
                v95[5] = HIDWORD(v9->DeviceObjectExtension);
                WdLogEvent5_WdWarning(v95);
LABEL_133:
                LODWORD(v9) = -1073741811;
                goto LABEL_134;
              }
              *(_DWORD *)(a2 + 20) = DWORD1(v263);
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v270, v92);
            goto LABEL_262;
          }
          goto LABEL_136;
        case 0xFFFFFFFA:
          if ( a1 )
          {
            v85 = WdLogNewEntry5_WdAssertion(4294967274LL, v7);
            *(_QWORD *)(v85 + 24) = 5327LL;
            WdLogEvent5_WdAssertion(v85);
          }
          if ( g_OSTestSigningEnabled && !*(_DWORD *)(a2 + 20) )
          {
            *((_DWORD *)DXGGLOBAL::GetGlobal(v12, v7) + 310) = 0;
            goto LABEL_262;
          }
          v86 = *(unsigned int *)(a2 + 20);
          if ( (unsigned int)(v86 - 1) <= 3 )
          {
            v89 = (unsigned int)(v86 - 1);
            if ( (_DWORD)v89 )
            {
              v89 = (unsigned int)(v89 - 1);
              if ( (_DWORD)v89 )
              {
                v89 = (unsigned int)(v89 - 1);
                if ( (_DWORD)v89 )
                {
                  if ( (_DWORD)v89 == 1 )
                    v6 = 4;
                }
                else
                {
                  v6 = 3;
                }
              }
              else
              {
                v6 = 2;
              }
            }
            *((_DWORD *)DXGGLOBAL::GetGlobal(v89, v7) + 310) = v6;
            goto LABEL_262;
          }
          LODWORD(DeviceInterfaces) = -1073741811;
          v87 = (_QWORD *)WdLogNewEntry5_WdError(v86, v7);
          v88 = *(int *)(a2 + 20);
          v87[4] = -1073741811LL;
          goto LABEL_110;
        case 0xFFFFFFFB:
          if ( !a1 )
          {
            v82 = WdLogNewEntry5_WdAssertion(4294967274LL, v7);
            *(_QWORD *)(v82 + 24) = 5317LL;
            WdLogEvent5_WdAssertion(v82);
          }
          v83 = DXGGLOBAL::GetGlobal(v12, v7);
          v84 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((_DWORD *)v83 + 310));
          if ( (unsigned int)(v84 - 1) <= 3 )
            v6 = v84;
          *(_DWORD *)(a2 + 20) = v6;
          goto LABEL_262;
        default:
          goto LABEL_97;
      }
      v87[5] = v117;
      goto LABEL_111;
    }
    v126 = *(struct _LUID *)(a2 + 8);
    v127 = *(unsigned int *)(a2 + 16);
    v245 = v126;
    DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v234, &v245);
    v130 = v234[0];
    if ( !v234[0] )
    {
      v101 = WdLogNewEntry5_WdTrace(v129, v128);
      HighPart = v245.HighPart;
LABEL_188:
      *(_QWORD *)(v101 + 24) = HighPart;
      LowPart = v126.LowPart;
      goto LABEL_189;
    }
    v224 = 0;
    v132 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v224, 0);
    v9 = (struct _DEVICE_OBJECT *)v132;
    if ( v132 < 0 )
    {
      v135 = WdLogNewEntry5_WdError(v134, v133);
      *(_QWORD *)(v135 + 24) = v9;
      WdLogEvent5_WdError(v135);
LABEL_185:
      v69 = (DXGSESSIONMODECHANGELOCK *)&v224;
      goto LABEL_203;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v271, v130, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v271, 1LL) < 0 )
    {
      v139 = (_QWORD *)WdLogNewEntry5_WdError(v137, v136);
      v139[3] = v130;
      v139[4] = *((int *)v130 + 80);
      v139[5] = *((unsigned int *)v130 + 79);
      WdLogEvent5_WdError(v139);
      LODWORD(v9) = -1073741811;
LABEL_184:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v271, v136);
      goto LABEL_185;
    }
    if ( !*((_QWORD *)v130 + 337) )
    {
      v140 = (_QWORD *)WdLogNewEntry5_WdWarning(v137, v136, v138);
      v140[3] = v130;
      v140[4] = *((int *)v130 + 80);
      v140[5] = *((unsigned int *)v130 + 79);
      WdLogEvent5_WdWarning(v140);
LABEL_166:
      LODWORD(v9) = -1073741637;
      goto LABEL_184;
    }
    if ( *(_DWORD *)(a2 + 64) && (*((int *)v130 + 582) < 9216 || (*((_DWORD *)v130 + 510) & 8) == 0) )
      goto LABEL_166;
    v246 = 0LL;
    v141 = MonitorGetMonitorHandle((__int64)v130, (unsigned int)v127, 1u, &DxgkDisplayConfigDeviceInfo, &v246);
    v9 = (struct _DEVICE_OBJECT *)v141;
    if ( v141 < 0 )
    {
      v144 = (_QWORD *)WdLogNewEntry5_WdError(v143, v142);
      v144[3] = *((int *)v130 + 80);
      v144[4] = *((unsigned int *)v130 + 79);
      v144[5] = v127;
      v144[6] = v9;
      WdLogEvent5_WdError(v144);
      goto LABEL_184;
    }
    v145 = v246;
    v240 = 0;
    MonitorIsMonitorAndLinkHDRCapable(v246, &v240);
    if ( (v240 & 1) != 0 && *(_DWORD *)(a2 + 64) )
    {
      MonitorReleaseMonitorHandle(v130, v145, &DxgkDisplayConfigDeviceInfo);
      goto LABEL_166;
    }
    v230[3] = 0;
    MonitorGetWideColorModeEnforced(v145, &v230[3]);
    LOBYTE(v146) = *(_DWORD *)(a2 + 64) != 0;
    v147 = MonitorSetEnforceWideColorMode(v145, v146);
    DeviceInterfaces = (struct DXGADAPTER *)v147;
    if ( v147 < 0 )
    {
      v158 = (_QWORD *)WdLogNewEntry5_WdError(v149, v148);
      v158[3] = *((int *)v130 + 80);
      v158[4] = *((unsigned int *)v130 + 79);
      v158[5] = v127;
      v158[6] = DeviceInterfaces;
      WdLogEvent5_WdError(v158);
    }
    else
    {
      v150 = v230[3];
      if ( !v230[3] || *(_DWORD *)(a2 + 64) || *(_DWORD *)(a2 + 56) )
      {
        LODWORD(DeviceInterfaces) = MonitorSetAdvancedColorParams(
                                      (_DWORD)v145,
                                      (int)a2 + 20,
                                      (int)a2 + 28,
                                      (int)a2 + 36,
                                      a2 + 44,
                                      *(_DWORD *)(a2 + 52),
                                      *(_DWORD *)(a2 + 56),
                                      *(_DWORD *)(a2 + 60));
      }
      else
      {
        v151 = MonitorSetDefaultAdvancedColorParams(v145);
        DeviceInterfaces = (struct DXGADAPTER *)v151;
        if ( v151 < 0 )
        {
          v154 = (_QWORD *)WdLogNewEntry5_WdError(v153, v152);
          v154[3] = *((int *)v130 + 80);
          v154[4] = *((unsigned int *)v130 + 79);
          v154[5] = v127;
          v154[6] = DeviceInterfaces;
          WdLogEvent5_WdError(v154);
LABEL_183:
          LODWORD(v9) = (_DWORD)DeviceInterfaces;
          goto LABEL_184;
        }
      }
      if ( (int)DeviceInterfaces > -1 )
      {
        MonitorReleaseMonitorHandle(v130, v145, &DxgkDisplayConfigDeviceInfo);
        if ( *(_DWORD *)(a2 + 64) == v150 )
        {
          if ( (_DWORD)DeviceInterfaces != 255 )
            LODWORD(DeviceInterfaces) = 255;
        }
        else
        {
          LODWORD(DeviceInterfaces) = 259;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v271, v157);
        v70 = (DXGSESSIONMODECHANGELOCK *)&v224;
        goto LABEL_69;
      }
      v155 = (_QWORD *)WdLogNewEntry5_WdError(v153, v152);
      v155[3] = *((int *)v130 + 80);
      v155[4] = *((unsigned int *)v130 + 79);
      v155[6] = (int)DeviceInterfaces;
      v155[5] = v127;
      WdLogEvent5_WdError(v155);
      LOBYTE(v156) = v150;
      MonitorSetEnforceWideColorMode(v145, v156);
    }
    MonitorReleaseMonitorHandle(v130, v145, &DxgkDisplayConfigDeviceInfo);
    goto LABEL_183;
  }
  v10 = WdLogNewEntry5_WdAssertion(v8, v7);
  *(_QWORD *)(v10 + 24) = 5027LL;
  WdLogEvent5_WdAssertion(v10);
LABEL_263:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v250, v7);
  if ( v252 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v217, &EventProfilerExit, v218, v250);
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v234);
  return (unsigned int)v9;
}
