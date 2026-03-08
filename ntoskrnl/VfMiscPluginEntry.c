/*
 * XREFs of VfMiscPluginEntry @ 0x140ADD684
 * Callers:
 *     DifRegisterKernelPlugin @ 0x1405D2B20 (DifRegisterKernelPlugin.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     VfAvlInitializeTree @ 0x1405CF7F0 (VfAvlInitializeTree.c)
 *     DifIsPluginRunningWithoutReboot @ 0x1405D2A54 (DifIsPluginRunningWithoutReboot.c)
 *     DifRegisterPlugin @ 0x1405D2C50 (DifRegisterPlugin.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140AD7D64 (VfSettingsApplyMiscellaneousChecks.c)
 *     VfCtxInit @ 0x140AE19B4 (VfCtxInit.c)
 */

__int64 VfMiscPluginEntry()
{
  int v0; // edi
  int v1; // eax
  volatile __int32 *v2; // rcx
  int v3; // eax
  volatile __int32 *v4; // rcx
  const char *v6; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v7; // [rsp+30h] [rbp-D8h]
  __int64 (__fastcall *v8)(_QWORD *, __int64, __int64); // [rsp+38h] [rbp-D0h]
  __int64 v9; // [rsp+40h] [rbp-C8h]
  const char *v10; // [rsp+48h] [rbp-C0h]
  __int64 v11; // [rsp+50h] [rbp-B8h]
  __int64 (__fastcall *v12)(_QWORD *, __int64, __int64); // [rsp+58h] [rbp-B0h]
  __int64 v13; // [rsp+60h] [rbp-A8h]
  const char *v14; // [rsp+68h] [rbp-A0h]
  __int64 v15; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall *v16)(__int64, __int64); // [rsp+78h] [rbp-90h]
  __int64 v17; // [rsp+80h] [rbp-88h]
  const char *v18; // [rsp+88h] [rbp-80h]
  int v19; // [rsp+90h] [rbp-78h]
  __int64 (__fastcall *v20)(__int64); // [rsp+98h] [rbp-70h]
  __int64 v21; // [rsp+A0h] [rbp-68h]
  const char *v22; // [rsp+A8h] [rbp-60h]
  int v23; // [rsp+B0h] [rbp-58h]
  __int64 (__fastcall *v24)(__int64); // [rsp+B8h] [rbp-50h]
  __int64 v25; // [rsp+C0h] [rbp-48h]
  const char *v26; // [rsp+C8h] [rbp-40h]
  int v27; // [rsp+D0h] [rbp-38h]
  __int64 (__fastcall *v28)(__int64); // [rsp+D8h] [rbp-30h]
  __int64 v29; // [rsp+E0h] [rbp-28h]
  const char *v30; // [rsp+E8h] [rbp-20h]
  int v31; // [rsp+F0h] [rbp-18h]
  ULONG (__fastcall *v32)(__int64); // [rsp+F8h] [rbp-10h]
  __int64 v33; // [rsp+100h] [rbp-8h]
  const char *v34; // [rsp+108h] [rbp+0h]
  int v35; // [rsp+110h] [rbp+8h]
  __int64 (__fastcall *v36)(__int64, __int64, __int64); // [rsp+118h] [rbp+10h]
  __int64 v37; // [rsp+120h] [rbp+18h]
  const char *v38; // [rsp+128h] [rbp+20h]
  int v39; // [rsp+130h] [rbp+28h]
  __int64 (__fastcall *v40)(__int64, __int64, __int64); // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  const char *v42; // [rsp+148h] [rbp+40h]
  int v43; // [rsp+150h] [rbp+48h]
  __int64 (__fastcall *v44)(__int64); // [rsp+158h] [rbp+50h]
  __int64 (__fastcall *v45)(__int64); // [rsp+160h] [rbp+58h]
  const char *v46; // [rsp+168h] [rbp+60h]
  int v47; // [rsp+170h] [rbp+68h]
  __int64 (__fastcall *v48)(__int64); // [rsp+178h] [rbp+70h]
  __int64 (__fastcall *v49)(__int64); // [rsp+180h] [rbp+78h]
  const char *v50; // [rsp+188h] [rbp+80h]
  int v51; // [rsp+190h] [rbp+88h]
  __int64 (__fastcall *v52)(__int64); // [rsp+198h] [rbp+90h]
  __int64 (__fastcall *v53)(__int64); // [rsp+1A0h] [rbp+98h]
  const char *v54; // [rsp+1A8h] [rbp+A0h]
  int v55; // [rsp+1B0h] [rbp+A8h]
  __int64 (__fastcall *v56)(__int64); // [rsp+1B8h] [rbp+B0h]
  __int64 v57; // [rsp+1C0h] [rbp+B8h]
  const char *v58; // [rsp+1C8h] [rbp+C0h]
  int v59; // [rsp+1D0h] [rbp+C8h]
  __int64 (__fastcall *v60)(__int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v61; // [rsp+1E0h] [rbp+D8h]
  const char *v62; // [rsp+1E8h] [rbp+E0h]
  int v63; // [rsp+1F0h] [rbp+E8h]
  __int64 (__fastcall *v64)(__int64); // [rsp+1F8h] [rbp+F0h]
  __int64 v65; // [rsp+200h] [rbp+F8h]
  const char *v66; // [rsp+208h] [rbp+100h]
  int v67; // [rsp+210h] [rbp+108h]
  unsigned __int64 (__fastcall *v68)(__int64); // [rsp+218h] [rbp+110h]
  __int64 v69; // [rsp+220h] [rbp+118h]
  const char *v70; // [rsp+228h] [rbp+120h]
  int v71; // [rsp+230h] [rbp+128h]
  __int64 v72; // [rsp+238h] [rbp+130h]
  __int64 (__fastcall *v73)(__int64); // [rsp+240h] [rbp+138h]
  const char *v74; // [rsp+248h] [rbp+140h]
  int v75; // [rsp+250h] [rbp+148h]
  unsigned __int64 (__fastcall *v76)(__int64); // [rsp+258h] [rbp+150h]
  __int64 (__fastcall *v77)(__int64); // [rsp+260h] [rbp+158h]
  const char *v78; // [rsp+268h] [rbp+160h]
  int v79; // [rsp+270h] [rbp+168h]
  unsigned __int64 (__fastcall *v80)(__int64); // [rsp+278h] [rbp+170h]
  __int64 v81; // [rsp+280h] [rbp+178h]
  const char *v82; // [rsp+288h] [rbp+180h]
  int v83; // [rsp+290h] [rbp+188h]
  unsigned __int64 (__fastcall *v84)(__int64); // [rsp+298h] [rbp+190h]
  __int64 v85; // [rsp+2A0h] [rbp+198h]
  const char *v86; // [rsp+2A8h] [rbp+1A0h]
  int v87; // [rsp+2B0h] [rbp+1A8h]
  unsigned __int64 (__fastcall *v88)(__int64); // [rsp+2B8h] [rbp+1B0h]
  __int64 v89; // [rsp+2C0h] [rbp+1B8h]
  const char *v90; // [rsp+2C8h] [rbp+1C0h]
  int v91; // [rsp+2D0h] [rbp+1C8h]
  unsigned __int64 (__fastcall *v92)(__int64); // [rsp+2D8h] [rbp+1D0h]
  __int64 v93; // [rsp+2E0h] [rbp+1D8h]
  const char *v94; // [rsp+2E8h] [rbp+1E0h]
  int v95; // [rsp+2F0h] [rbp+1E8h]
  unsigned __int64 (__fastcall *v96)(__int64); // [rsp+2F8h] [rbp+1F0h]
  __int64 v97; // [rsp+300h] [rbp+1F8h]
  const char *v98; // [rsp+308h] [rbp+200h]
  int v99; // [rsp+310h] [rbp+208h]
  __int64 (__fastcall *v100)(__int64); // [rsp+318h] [rbp+210h]
  __int64 v101; // [rsp+320h] [rbp+218h]
  const char *v102; // [rsp+328h] [rbp+220h]
  int v103; // [rsp+330h] [rbp+228h]
  unsigned __int64 (__fastcall *v104)(__int64); // [rsp+338h] [rbp+230h]
  __int64 v105; // [rsp+340h] [rbp+238h]
  const char *v106; // [rsp+348h] [rbp+240h]
  int v107; // [rsp+350h] [rbp+248h]
  unsigned __int64 (__fastcall *v108)(__int64); // [rsp+358h] [rbp+250h]
  __int64 v109; // [rsp+360h] [rbp+258h]
  const char *v110; // [rsp+368h] [rbp+260h]
  int v111; // [rsp+370h] [rbp+268h]
  __int64 (__fastcall *v112)(__int64); // [rsp+378h] [rbp+270h]
  __int64 v113; // [rsp+380h] [rbp+278h]
  const char *v114; // [rsp+388h] [rbp+280h]
  int v115; // [rsp+390h] [rbp+288h]
  void (*v116)(); // [rsp+398h] [rbp+290h]
  __int64 v117; // [rsp+3A0h] [rbp+298h]
  const char *v118; // [rsp+3A8h] [rbp+2A0h]
  int v119; // [rsp+3B0h] [rbp+2A8h]
  void (*v120)(); // [rsp+3B8h] [rbp+2B0h]
  __int64 v121; // [rsp+3C0h] [rbp+2B8h]
  const char *v122; // [rsp+3C8h] [rbp+2C0h]
  int v123; // [rsp+3D0h] [rbp+2C8h]
  void (*v124)(); // [rsp+3D8h] [rbp+2D0h]
  __int64 v125; // [rsp+3E0h] [rbp+2D8h]
  const char *v126; // [rsp+3E8h] [rbp+2E0h]
  int v127; // [rsp+3F0h] [rbp+2E8h]
  void (*v128)(); // [rsp+3F8h] [rbp+2F0h]
  __int64 v129; // [rsp+400h] [rbp+2F8h]
  const char *v130; // [rsp+408h] [rbp+300h]
  int v131; // [rsp+410h] [rbp+308h]
  unsigned __int64 (__fastcall *v132)(__int64); // [rsp+418h] [rbp+310h]
  __int64 v133; // [rsp+420h] [rbp+318h]
  const char *v134; // [rsp+428h] [rbp+320h]
  int v135; // [rsp+430h] [rbp+328h]
  unsigned __int64 (__fastcall *v136)(__int64); // [rsp+438h] [rbp+330h]
  __int64 v137; // [rsp+440h] [rbp+338h]
  const char *v138; // [rsp+448h] [rbp+340h]
  int v139; // [rsp+450h] [rbp+348h]
  unsigned __int64 (__fastcall *v140)(__int64); // [rsp+458h] [rbp+350h]
  __int64 v141; // [rsp+460h] [rbp+358h]
  const char *v142; // [rsp+468h] [rbp+360h]
  int v143; // [rsp+470h] [rbp+368h]
  char (__fastcall *v144)(__int64); // [rsp+478h] [rbp+370h]
  __int64 v145; // [rsp+480h] [rbp+378h]
  const char *v146; // [rsp+488h] [rbp+380h]
  int v147; // [rsp+490h] [rbp+388h]
  char (__fastcall *v148)(__int64); // [rsp+498h] [rbp+390h]
  __int64 v149; // [rsp+4A0h] [rbp+398h]
  const char *v150; // [rsp+4A8h] [rbp+3A0h]
  int v151; // [rsp+4B0h] [rbp+3A8h]
  unsigned __int64 (__fastcall *v152)(__int64); // [rsp+4B8h] [rbp+3B0h]
  __int64 v153; // [rsp+4C0h] [rbp+3B8h]
  const char *v154; // [rsp+4C8h] [rbp+3C0h]
  int v155; // [rsp+4D0h] [rbp+3C8h]
  unsigned __int64 (__fastcall *v156)(__int64); // [rsp+4D8h] [rbp+3D0h]
  __int64 v157; // [rsp+4E0h] [rbp+3D8h]
  const char *v158; // [rsp+4E8h] [rbp+3E0h]
  int v159; // [rsp+4F0h] [rbp+3E8h]
  char (__fastcall *v160)(__int64); // [rsp+4F8h] [rbp+3F0h]
  __int64 v161; // [rsp+500h] [rbp+3F8h]
  const char *v162; // [rsp+508h] [rbp+400h]
  int v163; // [rsp+510h] [rbp+408h]
  BOOLEAN (__fastcall *v164)(__int64); // [rsp+518h] [rbp+410h]
  __int64 v165; // [rsp+520h] [rbp+418h]
  const char *v166; // [rsp+528h] [rbp+420h]
  int v167; // [rsp+530h] [rbp+428h]
  __int64 (__fastcall *v168)(__int64); // [rsp+538h] [rbp+430h]
  __int64 (__fastcall *v169)(__int64); // [rsp+540h] [rbp+438h]
  const char *v170; // [rsp+548h] [rbp+440h]
  int v171; // [rsp+550h] [rbp+448h]
  __int64 (__fastcall *v172)(__int64); // [rsp+558h] [rbp+450h]
  PVOID (__fastcall *v173)(__int64); // [rsp+560h] [rbp+458h]
  const char *v174; // [rsp+568h] [rbp+460h]
  int v175; // [rsp+570h] [rbp+468h]
  __int64 (__fastcall *v176)(__int64); // [rsp+578h] [rbp+470h]
  __int64 v177; // [rsp+580h] [rbp+478h]
  const char *v178; // [rsp+588h] [rbp+480h]
  int v179; // [rsp+590h] [rbp+488h]
  __int64 (__fastcall *v180)(__int64); // [rsp+598h] [rbp+490h]
  __int64 v181; // [rsp+5A0h] [rbp+498h]
  const char *v182; // [rsp+5A8h] [rbp+4A0h]
  int v183; // [rsp+5B0h] [rbp+4A8h]
  __int64 (__fastcall *v184)(__int64); // [rsp+5B8h] [rbp+4B0h]
  __int64 v185; // [rsp+5C0h] [rbp+4B8h]
  const char *v186; // [rsp+5C8h] [rbp+4C0h]
  int v187; // [rsp+5D0h] [rbp+4C8h]
  __int64 (__fastcall *v188)(__int64); // [rsp+5D8h] [rbp+4D0h]
  __int64 v189; // [rsp+5E0h] [rbp+4D8h]
  const char *v190; // [rsp+5E8h] [rbp+4E0h]
  int v191; // [rsp+5F0h] [rbp+4E8h]
  __int64 (__fastcall *v192)(__int64); // [rsp+5F8h] [rbp+4F0h]
  __int64 v193; // [rsp+600h] [rbp+4F8h]
  const char *v194; // [rsp+608h] [rbp+500h]
  int v195; // [rsp+610h] [rbp+508h]
  __int64 (__fastcall *v196)(__int64); // [rsp+618h] [rbp+510h]
  __int64 v197; // [rsp+620h] [rbp+518h]
  const char *v198; // [rsp+628h] [rbp+520h]
  int v199; // [rsp+630h] [rbp+528h]
  __int64 (__fastcall *v200)(__int64); // [rsp+638h] [rbp+530h]
  __int64 v201; // [rsp+640h] [rbp+538h]
  const char *v202; // [rsp+648h] [rbp+540h]
  int v203; // [rsp+650h] [rbp+548h]
  __int64 (__fastcall *v204)(__int64); // [rsp+658h] [rbp+550h]
  __int64 v205; // [rsp+660h] [rbp+558h]
  const char *v206; // [rsp+668h] [rbp+560h]
  int v207; // [rsp+670h] [rbp+568h]
  __int64 (__fastcall *v208)(__int64); // [rsp+678h] [rbp+570h]
  __int64 v209; // [rsp+680h] [rbp+578h]
  const char *v210; // [rsp+688h] [rbp+580h]
  int v211; // [rsp+690h] [rbp+588h]
  void (__fastcall *v212)(__int64); // [rsp+698h] [rbp+590h]
  __int64 v213; // [rsp+6A0h] [rbp+598h]
  const char *v214; // [rsp+6A8h] [rbp+5A0h]
  int v215; // [rsp+6B0h] [rbp+5A8h]
  __int64 (__fastcall *v216)(__int64); // [rsp+6B8h] [rbp+5B0h]
  void (__fastcall *v217)(__int64); // [rsp+6C0h] [rbp+5B8h]
  const char *v218; // [rsp+6C8h] [rbp+5C0h]
  int v219; // [rsp+6D0h] [rbp+5C8h]
  __int64 (__fastcall *v220)(__int64); // [rsp+6D8h] [rbp+5D0h]
  __int64 v221; // [rsp+6E0h] [rbp+5D8h]
  const char *v222; // [rsp+6E8h] [rbp+5E0h]
  int v223; // [rsp+6F0h] [rbp+5E8h]
  __int64 (__fastcall *v224)(__int64); // [rsp+6F8h] [rbp+5F0h]
  __int64 v225; // [rsp+700h] [rbp+5F8h]
  const char *v226; // [rsp+708h] [rbp+600h]
  int v227; // [rsp+710h] [rbp+608h]
  __int64 (__fastcall *v228)(__int64); // [rsp+718h] [rbp+610h]
  __int64 v229; // [rsp+720h] [rbp+618h]
  const char *v230; // [rsp+728h] [rbp+620h]
  int v231; // [rsp+730h] [rbp+628h]
  __int64 (__fastcall *v232)(__int64); // [rsp+738h] [rbp+630h]
  __int64 v233; // [rsp+740h] [rbp+638h]
  const char *v234; // [rsp+748h] [rbp+640h]
  int v235; // [rsp+750h] [rbp+648h]
  __int64 (__fastcall *v236)(__int64); // [rsp+758h] [rbp+650h]
  __int64 v237; // [rsp+760h] [rbp+658h]
  const char *v238; // [rsp+768h] [rbp+660h]
  int v239; // [rsp+770h] [rbp+668h]
  __int64 (__fastcall *v240)(__int64); // [rsp+778h] [rbp+670h]
  __int64 v241; // [rsp+780h] [rbp+678h]
  const char *v242; // [rsp+788h] [rbp+680h]
  int v243; // [rsp+790h] [rbp+688h]
  __int64 (__fastcall *v244)(__int64); // [rsp+798h] [rbp+690h]
  __int64 v245; // [rsp+7A0h] [rbp+698h]
  const char *v246; // [rsp+7A8h] [rbp+6A0h]
  int v247; // [rsp+7B0h] [rbp+6A8h]
  __int64 (__fastcall *v248)(__int64); // [rsp+7B8h] [rbp+6B0h]
  __int64 v249; // [rsp+7C0h] [rbp+6B8h]
  const char *v250; // [rsp+7C8h] [rbp+6C0h]
  int v251; // [rsp+7D0h] [rbp+6C8h]
  __int64 (__fastcall *v252)(__int64); // [rsp+7D8h] [rbp+6D0h]
  __int64 v253; // [rsp+7E0h] [rbp+6D8h]
  const char *v254; // [rsp+7E8h] [rbp+6E0h]
  int v255; // [rsp+7F0h] [rbp+6E8h]
  __int64 (__fastcall *v256)(__int64, __int64); // [rsp+7F8h] [rbp+6F0h]
  __int64 v257; // [rsp+800h] [rbp+6F8h]
  const char *v258; // [rsp+808h] [rbp+700h]
  int v259; // [rsp+810h] [rbp+708h]
  unsigned __int64 (__fastcall *v260)(__int64); // [rsp+818h] [rbp+710h]
  __int64 v261; // [rsp+820h] [rbp+718h]
  const char *v262; // [rsp+828h] [rbp+720h]
  int v263; // [rsp+830h] [rbp+728h]
  __int64 (__fastcall *v264)(__int64); // [rsp+838h] [rbp+730h]
  __int64 v265; // [rsp+840h] [rbp+738h]
  const char *v266; // [rsp+848h] [rbp+740h]
  int v267; // [rsp+850h] [rbp+748h]
  void (__fastcall *v268)(__int64); // [rsp+858h] [rbp+750h]
  __int64 v269; // [rsp+860h] [rbp+758h]
  const char *v270; // [rsp+868h] [rbp+760h]
  int v271; // [rsp+870h] [rbp+768h]
  void (__fastcall *v272)(__int64); // [rsp+878h] [rbp+770h]
  __int64 v273; // [rsp+880h] [rbp+778h]

  LODWORD(v7) = 323;
  v9 = 0LL;
  qword_140C36538 = (__int64)VfMiscPluginUnload;
  v6 = "MmAllocateContiguousMemory";
  v8 = VfMiscMmAllocateContiguousMemory_Entry;
  v10 = "MmAllocateContiguousMemoryEx";
  v12 = VfMiscMmAllocateContiguousMemoryEx_Entry;
  v14 = "KeReleaseQueuedSpinLock";
  v16 = VfMiscKeReleaseQueuedSpinLock_Entry;
  v18 = "KeInitializeEvent";
  v20 = VfMiscKeInitializeEvent_Entry;
  v22 = "KeInitializeMutant";
  v24 = VfMiscKeInitializeMutant_Entry;
  v26 = "KeInitializeMutex";
  v28 = VfMiscKeInitializeMutant_Entry;
  v30 = "KeInitializeTimerEx";
  v32 = VfMiscKeInitializeTimerEx_Entry;
  v34 = "KeWaitForSingleObject";
  v36 = VfMiscKeWaitForSingleObject_Entry;
  v38 = "KeWaitForMultipleObjects";
  v40 = VfMiscKeWaitForMultipleObjects_Entry;
  v42 = "ExInitializeLookasideListEx";
  v44 = VfMiscExInitializeLookasideListEx_Entry;
  v45 = VfMiscExInitializePagedLookasideList_Exit;
  v46 = "ExInitializeNPagedLookasideList";
  v48 = VfMiscExInitializeNPagedLookasideList_Entry;
  v49 = VfMiscExInitializePagedLookasideList_Exit;
  v50 = "ExInitializePagedLookasideList";
  v52 = VfMiscExInitializeNPagedLookasideList_Entry;
  v53 = VfMiscExInitializePagedLookasideList_Exit;
  v54 = "ExDeletePagedLookasideList";
  LODWORD(v11) = 324;
  v13 = 0LL;
  LODWORD(v15) = 294;
  v17 = 0LL;
  v19 = 261;
  v21 = 0LL;
  v23 = 263;
  v25 = 0LL;
  v27 = 264;
  v29 = 0LL;
  v31 = 267;
  v33 = 0LL;
  v35 = 320;
  v37 = 0LL;
  v39 = 319;
  v41 = 0LL;
  v43 = 43;
  v47 = 44;
  v51 = 45;
  v55 = 32;
  v57 = 0LL;
  v56 = VfMiscExDeleteLookasideListEx_Entry;
  v58 = "ExDeleteNPagedLookasideList";
  v60 = VfMiscExDeleteLookasideListEx_Entry;
  v62 = "ExDeleteLookasideListEx";
  v64 = VfMiscExDeleteLookasideListEx_Entry;
  v66 = "ObReferenceObjectByPointer";
  v68 = VfMiscObReferenceObjectByPointer_Entry;
  v70 = "ObReferenceObjectByHandle";
  v73 = VfMiscObReferenceObjectByHandle_Exit;
  v74 = "ObfReferenceObject";
  v76 = VfMiscObfDereferenceObject_Entry;
  v77 = VfMiscObfReferenceObject_Exit;
  v78 = "ObfReferenceObjectWithTag";
  v80 = VfMiscObfReferenceObjectWithTag_Entry;
  v82 = "ObfDereferenceObject";
  v84 = VfMiscObfDereferenceObject_Entry;
  v86 = "ObfDereferenceObjectWithTag";
  v88 = VfMiscObfReferenceObjectWithTag_Entry;
  v90 = "ObGetObjectSecurity";
  v92 = VfMiscObGetObjectSecurity_Entry;
  v94 = "ObReferenceObjectByPointerWithTag";
  v96 = VfMiscObReferenceObjectByPointerWithTag_Entry;
  v98 = "KeReleaseSpinLock";
  v100 = VfMiscKeReleaseSpinLock_Entry;
  v102 = "KeAcquireSpinLockAtDpcLevel";
  v104 = VfMiscKeAcquireSpinLockAtDpcLevel_Entry;
  v106 = "KeReleaseSpinLockFromDpcLevel";
  v108 = VfMiscObfDereferenceObject_Entry;
  v59 = 31;
  v61 = 0LL;
  v63 = 30;
  v65 = 0LL;
  v67 = 370;
  v69 = 0LL;
  v71 = 368;
  v72 = 0LL;
  v75 = 375;
  v79 = 376;
  v81 = 0LL;
  v83 = 373;
  v85 = 0LL;
  v87 = 374;
  v89 = 0LL;
  v91 = 367;
  v93 = 0LL;
  v95 = 371;
  v97 = 0LL;
  v99 = 296;
  v101 = 0LL;
  v103 = 248;
  v105 = 0LL;
  v107 = 298;
  v109 = 0LL;
  v110 = "KeAcquireSpinLockRaiseToDpc";
  v112 = VfMiscKeAcquireSpinLockRaiseToDpc_Entry;
  v114 = "IoConnectInterrupt";
  v116 = ViGenericVerifyNewRequest;
  v118 = "IoDisconnectInterrupt";
  v120 = ViGenericVerifyNewRequest;
  v122 = "IoConnectInterruptEx";
  v124 = ViGenericVerifyNewRequest;
  v126 = "IoDisconnectInterruptEx";
  v128 = ViGenericVerifyNewRequest;
  v130 = "KeReleaseMutex";
  v132 = VfMiscKeReleaseMutant_Entry;
  v134 = "KeInsertQueueDpc";
  v136 = VfMiscKeInsertQueueDpc_Entry;
  v138 = "KeRemoveQueueDpc";
  v140 = VfMiscKeRemoveQueueDpc_Entry;
  v142 = "KeTryToAcquireSpinLockAtDpcLevel";
  v144 = VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry;
  v146 = "KeAcquireInStackQueuedSpinLockAtDpcLevel";
  v148 = VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry;
  v150 = "KeAcquireInStackQueuedSpinLockForDpc";
  v152 = VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry;
  v154 = "KeSetEvent";
  v156 = VfMiscKeSetEvent_Entry;
  v158 = "IoFreeMdl";
  v160 = VfMiscIoFreeMdl_Entry;
  v162 = "IoInitializeWorkItem";
  v111 = 250;
  v113 = 0LL;
  v115 = 149;
  v117 = 0LL;
  v119 = 164;
  v121 = 0LL;
  v123 = 150;
  v125 = 0LL;
  v127 = 165;
  v129 = 0LL;
  v131 = 293;
  v133 = 0LL;
  v135 = 272;
  v137 = 0LL;
  v139 = 303;
  v141 = 0LL;
  v143 = 318;
  v145 = 0LL;
  v147 = 242;
  v149 = 0LL;
  v151 = 243;
  v153 = 0LL;
  v155 = 308;
  v157 = 0LL;
  v159 = 171;
  v161 = 0LL;
  v163 = 189;
  v164 = VfMiscIoInitializeWorkItem_Entry;
  v166 = "ExInitializeResourceLite";
  v168 = VfMiscExInitializeResourceLite_Entry;
  v169 = VfMiscExInitializeResourceLite_Exit;
  v170 = "ExDeleteResourceLite";
  v172 = VfMiscExDeleteResourceLite_Entry;
  v173 = VfMiscExDeleteResourceLite_Exit;
  v174 = "ExReleaseFastMutex";
  v176 = VfMiscExReleaseFastMutex_Entry;
  v178 = "ExAcquireFastMutexUnsafe";
  v180 = VfMiscExAcquireFastMutexUnsafe_Entry;
  v182 = "ExReleaseFastMutexUnsafe";
  v184 = VfMiscExReleaseFastMutexUnsafe_Entry;
  v186 = "ExfAcquirePushLockExclusive";
  v188 = VfMiscExfAcquirePushLockExclusive_Entry;
  v190 = "ExfAcquirePushLockShared";
  v192 = VfMiscExfAcquirePushLockExclusive_Entry;
  v194 = "ExfTryAcquirePushLockShared";
  v196 = VfMiscExfAcquirePushLockExclusive_Entry;
  v198 = "ExfReleasePushLock";
  v200 = VfMiscExfReleasePushLockShared_Entry;
  v202 = "ExfTryToWakePushLock";
  v204 = VfMiscExfReleasePushLockShared_Entry;
  v206 = "ExfReleasePushLockShared";
  v208 = VfMiscExfReleasePushLockShared_Entry;
  v210 = "MmUnmapLockedPages";
  v212 = VfMiscMmUnmapLockedPages_Entry;
  v214 = "MmBuildMdlForNonPagedPool";
  v165 = 0LL;
  v167 = 46;
  v171 = 33;
  v175 = 61;
  v177 = 0LL;
  v179 = 12;
  v181 = 0LL;
  v183 = 62;
  v185 = 0LL;
  v187 = 79;
  v189 = 0LL;
  v191 = 80;
  v193 = 0LL;
  v195 = 83;
  v197 = 0LL;
  v199 = 81;
  v201 = 0LL;
  v203 = 84;
  v205 = 0LL;
  v207 = 82;
  v209 = 0LL;
  v211 = 357;
  v213 = 0LL;
  v215 = 331;
  v219 = 13;
  v216 = VfMiscMmBuildMdlForNonPagedPool_Entry;
  v217 = VfMiscMmBuildMdlForNonPagedPool_Exit;
  v218 = "ExAcquireResourceExclusiveLite";
  v220 = VfMiscExAcquireSharedWaitForExclusive_Entry;
  v222 = "ExAcquireResourceSharedLite";
  v224 = VfMiscExAcquireSharedWaitForExclusive_Entry;
  v226 = "ExAcquireSharedStarveExclusive";
  v228 = VfMiscExAcquireSharedWaitForExclusive_Entry;
  v230 = "ExAcquireSharedWaitForExclusive";
  v232 = VfMiscExAcquireSharedWaitForExclusive_Entry;
  v234 = "ExReleaseResourceLite";
  v236 = VfMiscExReleaseResourceLite_Entry;
  v238 = "ExReleaseResourceAndLeaveCriticalRegion";
  v240 = VfMiscExReleaseResourceLite_Entry;
  v242 = "ExReleaseResourceAndLeavePriorityRegion";
  v244 = VfMiscExReleaseResourceLite_Entry;
  v246 = "ExReleaseResourceForThreadLite";
  v248 = VfMiscExReleaseResourceForThreadLite_Entry;
  v250 = "KeSynchronizeExecution";
  v252 = VfMiscKeSynchronizeExecution_Entry;
  v254 = "KeReleaseInStackQueuedSpinLock";
  v256 = VfMiscKeReleaseInStackQueuedSpinLock_Entry;
  v258 = "KeReleaseMutant";
  v260 = VfMiscKeReleaseMutant_Entry;
  v262 = "KeInitializeSemaphore";
  v264 = VfMiscKeInitializeSemaphore_Entry;
  v266 = "KeReleaseInStackQueuedSpinLockFromDpcLevel";
  v268 = VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry;
  v221 = 0LL;
  v223 = 14;
  v225 = 0LL;
  v227 = 19;
  v229 = 0LL;
  v231 = 20;
  v233 = 0LL;
  v235 = 66;
  v237 = 0LL;
  v239 = 63;
  v241 = 0LL;
  v243 = 64;
  v245 = 0LL;
  v247 = 65;
  v249 = 0LL;
  v251 = 313;
  v253 = 0LL;
  v255 = 288;
  v257 = 0LL;
  v259 = 292;
  v261 = 0LL;
  v263 = 265;
  v265 = 0LL;
  v267 = 290;
  v269 = 0LL;
  v270 = "KeReleaseInStackQueuedSpinLockForDpc";
  v271 = 289;
  v272 = VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry;
  v273 = 0LL;
  v0 = DifRegisterPlugin((__int64)&v6, 0x43u, 0xBu, &ViMiscSetting);
  if ( v0 >= 0 )
  {
    v1 = VfAvlInitializeTree(&ViLookasideAvl, 96LL, 0LL, (RTL_AVL_FREE_ROUTINE *)ViRemLockDelayFreeAvlNode);
    v2 = &ViLookasideInitialized;
    if ( v1 < 0 )
      v2 = &ViLookasideAllocationFailures;
    _InterlockedExchange(v2, 1);
    v3 = VfAvlInitializeTree(&ViResourceAvl, 104LL, 0LL, (RTL_AVL_FREE_ROUTINE *)ViRemLockDelayFreeAvlNode);
    v4 = &ViResourceInitialized;
    if ( v3 < 0 )
      v4 = &ViResourceNotTracked;
    _InterlockedExchange(v4, 1);
    if ( !DifIsPluginRunningWithoutReboot() )
      VfCtxInit();
    VfSettingsApplyMiscellaneousChecks();
  }
  return (unsigned int)v0;
}
