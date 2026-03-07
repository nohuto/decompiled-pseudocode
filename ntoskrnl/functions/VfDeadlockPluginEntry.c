__int64 VfDeadlockPluginEntry()
{
  int v0; // ebx
  const char *v2; // [rsp+20h] [rbp-E0h] BYREF
  int v3; // [rsp+28h] [rbp-D8h]
  __int64 v4; // [rsp+30h] [rbp-D0h]
  __int64 (__fastcall *v5)(); // [rsp+38h] [rbp-C8h]
  const char *v6; // [rsp+40h] [rbp-C0h]
  int v7; // [rsp+48h] [rbp-B8h]
  __int64 v8; // [rsp+50h] [rbp-B0h]
  __int64 (__fastcall *v9)(); // [rsp+58h] [rbp-A8h]
  const char *v10; // [rsp+60h] [rbp-A0h]
  int v11; // [rsp+68h] [rbp-98h]
  __int64 v12; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v13)(); // [rsp+78h] [rbp-88h]
  const char *v14; // [rsp+80h] [rbp-80h]
  int v15; // [rsp+88h] [rbp-78h]
  __int64 v16; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v17)(); // [rsp+98h] [rbp-68h]
  const char *v18; // [rsp+A0h] [rbp-60h]
  int v19; // [rsp+A8h] [rbp-58h]
  __int64 v20; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v21)(); // [rsp+B8h] [rbp-48h]
  const char *v22; // [rsp+C0h] [rbp-40h]
  int v23; // [rsp+C8h] [rbp-38h]
  __int64 v24; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall *v25)(); // [rsp+D8h] [rbp-28h]
  const char *v26; // [rsp+E0h] [rbp-20h]
  int v27; // [rsp+E8h] [rbp-18h]
  __int64 v28; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v29)(); // [rsp+F8h] [rbp-8h]
  const char *v30; // [rsp+100h] [rbp+0h]
  int v31; // [rsp+108h] [rbp+8h]
  __int64 v32; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v33)(); // [rsp+118h] [rbp+18h]
  const char *v34; // [rsp+120h] [rbp+20h]
  int v35; // [rsp+128h] [rbp+28h]
  __int64 v36; // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v37)(); // [rsp+138h] [rbp+38h]
  const char *v38; // [rsp+140h] [rbp+40h]
  int v39; // [rsp+148h] [rbp+48h]
  __int64 v40; // [rsp+150h] [rbp+50h]
  __int64 (__fastcall *v41)(); // [rsp+158h] [rbp+58h]
  const char *v42; // [rsp+160h] [rbp+60h]
  int v43; // [rsp+168h] [rbp+68h]
  __int64 v44; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v45)(); // [rsp+178h] [rbp+78h]
  const char *v46; // [rsp+180h] [rbp+80h]
  int v47; // [rsp+188h] [rbp+88h]
  __int64 v48; // [rsp+190h] [rbp+90h]
  __int64 (__fastcall *v49)(); // [rsp+198h] [rbp+98h]
  const char *v50; // [rsp+1A0h] [rbp+A0h]
  int v51; // [rsp+1A8h] [rbp+A8h]
  __int64 v52; // [rsp+1B0h] [rbp+B0h]
  __int64 (__fastcall *v53)(); // [rsp+1B8h] [rbp+B8h]
  const char *v54; // [rsp+1C0h] [rbp+C0h]
  int v55; // [rsp+1C8h] [rbp+C8h]
  __int64 v56; // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v57)(); // [rsp+1D8h] [rbp+D8h]
  const char *v58; // [rsp+1E0h] [rbp+E0h]
  int v59; // [rsp+1E8h] [rbp+E8h]
  __int64 v60; // [rsp+1F0h] [rbp+F0h]
  __int64 (__fastcall *v61)(); // [rsp+1F8h] [rbp+F8h]
  const char *v62; // [rsp+200h] [rbp+100h]
  int v63; // [rsp+208h] [rbp+108h]
  __int64 v64; // [rsp+210h] [rbp+110h]
  __int64 (__fastcall *v65)(); // [rsp+218h] [rbp+118h]
  const char *v66; // [rsp+220h] [rbp+120h]
  int v67; // [rsp+228h] [rbp+128h]
  __int64 v68; // [rsp+230h] [rbp+130h]
  __int64 (__fastcall *v69)(); // [rsp+238h] [rbp+138h]
  const char *v70; // [rsp+240h] [rbp+140h]
  int v71; // [rsp+248h] [rbp+148h]
  __int64 v72; // [rsp+250h] [rbp+150h]
  __int64 (__fastcall *v73)(); // [rsp+258h] [rbp+158h]
  const char *v74; // [rsp+260h] [rbp+160h]
  int v75; // [rsp+268h] [rbp+168h]
  __int64 (__fastcall *v76)(); // [rsp+270h] [rbp+170h]
  __int64 v77; // [rsp+278h] [rbp+178h]
  const char *v78; // [rsp+280h] [rbp+180h]
  int v79; // [rsp+288h] [rbp+188h]
  __int64 (__fastcall *v80)(); // [rsp+290h] [rbp+190h]
  __int64 v81; // [rsp+298h] [rbp+198h]
  const char *v82; // [rsp+2A0h] [rbp+1A0h]
  int v83; // [rsp+2A8h] [rbp+1A8h]
  __int64 (__fastcall *v84)(); // [rsp+2B0h] [rbp+1B0h]
  __int64 v85; // [rsp+2B8h] [rbp+1B8h]
  const char *v86; // [rsp+2C0h] [rbp+1C0h]
  int v87; // [rsp+2C8h] [rbp+1C8h]
  __int64 (__fastcall *v88)(); // [rsp+2D0h] [rbp+1D0h]
  __int64 v89; // [rsp+2D8h] [rbp+1D8h]
  const char *v90; // [rsp+2E0h] [rbp+1E0h]
  int v91; // [rsp+2E8h] [rbp+1E8h]
  __int64 (__fastcall *v92)(); // [rsp+2F0h] [rbp+1F0h]
  __int64 v93; // [rsp+2F8h] [rbp+1F8h]
  const char *v94; // [rsp+300h] [rbp+200h]
  int v95; // [rsp+308h] [rbp+208h]
  __int64 (__fastcall *v96)(); // [rsp+310h] [rbp+210h]
  __int64 v97; // [rsp+318h] [rbp+218h]
  const char *v98; // [rsp+320h] [rbp+220h]
  int v99; // [rsp+328h] [rbp+228h]
  __int64 (__fastcall *v100)(); // [rsp+330h] [rbp+230h]
  __int64 v101; // [rsp+338h] [rbp+238h]
  const char *v102; // [rsp+340h] [rbp+240h]
  int v103; // [rsp+348h] [rbp+248h]
  __int64 v104; // [rsp+350h] [rbp+250h]
  __int64 (__fastcall *v105)(); // [rsp+358h] [rbp+258h]
  const char *v106; // [rsp+360h] [rbp+260h]
  int v107; // [rsp+368h] [rbp+268h]
  __int64 v108; // [rsp+370h] [rbp+270h]
  __int64 (__fastcall *v109)(); // [rsp+378h] [rbp+278h]
  const char *v110; // [rsp+380h] [rbp+280h]
  int v111; // [rsp+388h] [rbp+288h]
  __int64 v112; // [rsp+390h] [rbp+290h]
  __int64 v113; // [rsp+398h] [rbp+298h]
  const char *v114; // [rsp+3A0h] [rbp+2A0h]
  int v115; // [rsp+3A8h] [rbp+2A8h]
  __int64 v116; // [rsp+3B0h] [rbp+2B0h]
  __int64 v117; // [rsp+3B8h] [rbp+2B8h]
  const char *v118; // [rsp+3C0h] [rbp+2C0h]
  int v119; // [rsp+3C8h] [rbp+2C8h]
  __int64 v120; // [rsp+3D0h] [rbp+2D0h]
  __int64 (__fastcall *v121)(); // [rsp+3D8h] [rbp+2D8h]
  const char *v122; // [rsp+3E0h] [rbp+2E0h]
  int v123; // [rsp+3E8h] [rbp+2E8h]
  __int64 v124; // [rsp+3F0h] [rbp+2F0h]
  __int64 (__fastcall *v125)(); // [rsp+3F8h] [rbp+2F8h]
  const char *v126; // [rsp+400h] [rbp+300h]
  int v127; // [rsp+408h] [rbp+308h]
  __int64 (__fastcall *v128)(); // [rsp+410h] [rbp+310h]
  __int64 v129; // [rsp+418h] [rbp+318h]
  const char *v130; // [rsp+420h] [rbp+320h]
  int v131; // [rsp+428h] [rbp+328h]
  __int64 (__fastcall *v132)(); // [rsp+430h] [rbp+330h]
  __int64 v133; // [rsp+438h] [rbp+338h]
  const char *v134; // [rsp+440h] [rbp+340h]
  int v135; // [rsp+448h] [rbp+348h]
  __int64 v136; // [rsp+450h] [rbp+350h]
  __int64 (__fastcall *v137)(); // [rsp+458h] [rbp+358h]

  v3 = 74;
  v4 = 0LL;
  qword_140C36608 = (__int64)ViDeadlockPluginUnload;
  v7 = 11;
  v2 = "ExTryToAcquireFastMutex";
  v8 = 0LL;
  v5 = ViDeadlockExTryToAcquireFastMutex_Exit;
  v11 = 12;
  v6 = "ExAcquireFastMutex";
  v12 = 0LL;
  v9 = ViDeadlockExAcquireFastMutex_Exit;
  v10 = "ExAcquireFastMutexUnsafe";
  v13 = ViDeadlockExAcquireFastMutexUnsafe_Exit;
  v18 = "KeTryToAcquireSpinLockAtDpcLevel";
  v21 = ViDeadlockKeTryToAcquireSpinLockAtDpcLevel_Exit;
  v22 = "KeAcquireInStackQueuedSpinLock";
  v25 = ViDeadlockKeAcquireInStackQueuedSpinLockRaiseToSynch_Exit;
  v26 = "KeAcquireInStackQueuedSpinLockAtDpcLevel";
  v29 = ViDeadlockKeAcquireInStackQueuedSpinLockRaiseToSynch_Exit;
  v30 = "KeAcquireInStackQueuedSpinLockForDpc";
  v33 = ViDeadlockKeAcquireInStackQueuedSpinLockRaiseToSynch_Exit;
  v34 = "KeWaitForSingleObject";
  v37 = ViDeadlockKeWaitForSingleObject_Exit;
  v38 = "KeWaitForMultipleObjects";
  v41 = ViDeadlockKeWaitForMultipleObjects_Exit;
  v42 = "ExAcquireResourceExclusiveLite";
  v45 = ViDeadlockExAcquireSharedStarveExclusive_Exit;
  v46 = "ExEnterCriticalRegionAndAcquireResourceExclusive";
  v49 = ViDeadlockExEnterCriticalRegionAndAcquireResourceExclusive_Exit;
  v50 = "ExEnterPriorityRegionAndAcquireResourceExclusive";
  v14 = "KeInitializeMutant";
  v15 = 263;
  v16 = 0LL;
  v17 = ViDeadlockKeInitializeMutant_Exit;
  v19 = 318;
  v20 = 0LL;
  v23 = 241;
  v24 = 0LL;
  v27 = 242;
  v28 = 0LL;
  v31 = 243;
  v32 = 0LL;
  v35 = 320;
  v36 = 0LL;
  v39 = 319;
  v40 = 0LL;
  v43 = 13;
  v44 = 0LL;
  v47 = 34;
  v48 = 0LL;
  v51 = 37;
  v52 = 0LL;
  v55 = 14;
  v53 = ViDeadlockExEnterCriticalRegionAndAcquireResourceExclusive_Exit;
  v54 = "ExAcquireResourceSharedLite";
  v57 = ViDeadlockExAcquireSharedStarveExclusive_Exit;
  v58 = "ExEnterCriticalRegionAndAcquireResourceShared";
  v61 = ViDeadlockExEnterCriticalRegionAndAcquireResourceExclusive_Exit;
  v62 = "ExEnterPriorityRegionAndAcquireResourceShared";
  v65 = ViDeadlockExEnterCriticalRegionAndAcquireResourceExclusive_Exit;
  v66 = "ExAcquireSharedStarveExclusive";
  v69 = ViDeadlockExAcquireSharedStarveExclusive_Exit;
  v70 = "ExAcquireSharedWaitForExclusive";
  v73 = ViDeadlockExAcquireSharedStarveExclusive_Exit;
  v74 = "ExReleaseFastMutex";
  v76 = ViDeadlockExReleaseFastMutex_Entry;
  v78 = "ExReleaseFastMutexUnsafe";
  v80 = ViDeadlockExReleaseFastMutexUnsafe_Entry;
  v82 = "KeReleaseMutex";
  v84 = ViDeadlockKeReleaseMutex_Entry;
  v86 = "KeReleaseMutant";
  v88 = ViDeadlockKeReleaseMutant_Entry;
  v90 = "KeReleaseInStackQueuedSpinLock";
  v92 = ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry;
  v94 = "KeReleaseInStackQueuedSpinLockFromDpcLevel";
  v96 = ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry;
  v98 = "KeReleaseInStackQueuedSpinLockForDpc";
  v100 = ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry;
  v102 = "KeInitializeMutex";
  v105 = ViDeadlockKeInitializeMutex_Exit;
  v56 = 0LL;
  v59 = 35;
  v60 = 0LL;
  v63 = 38;
  v64 = 0LL;
  v67 = 19;
  v68 = 0LL;
  v71 = 20;
  v72 = 0LL;
  v75 = 61;
  v77 = 0LL;
  v79 = 62;
  v81 = 0LL;
  v83 = 293;
  v85 = 0LL;
  v87 = 292;
  v89 = 0LL;
  v91 = 288;
  v93 = 0LL;
  v95 = 290;
  v97 = 0LL;
  v99 = 289;
  v101 = 0LL;
  v103 = 264;
  v104 = 0LL;
  v106 = "KeInitializeMutant";
  v107 = 263;
  v110 = "ExFreePool";
  v109 = ViDeadlockKeInitializeMutant_Exit;
  v114 = "ExFreePoolWithTag";
  v108 = 0LL;
  v118 = "KeAcquireSpinLockRaiseToDpc";
  v111 = 39;
  v121 = ViDeadlockKeAcquireSpinLockRaiseToDpc_Exit;
  v122 = "KeAcquireSpinLockAtDpcLevel";
  v125 = ViDeadlockKeAcquireSpinLockRaiseToDpc_Exit;
  v126 = "KeReleaseSpinLock";
  v128 = ViDeadlockKeReleaseSpinLock_Entry;
  v130 = "KeReleaseSpinLockFromDpcLevel";
  v132 = ViDeadlockKeReleaseSpinLockFromDpcLevel_Entry;
  v134 = "KeAcquireInStackQueuedSpinLockRaiseToSynch";
  v137 = ViDeadlockKeAcquireInStackQueuedSpinLockRaiseToSynch_Exit;
  v112 = 0LL;
  v113 = 0LL;
  v115 = 40;
  v116 = 0LL;
  v117 = 0LL;
  v119 = 250;
  v120 = 0LL;
  v123 = 248;
  v124 = 0LL;
  v127 = 296;
  v129 = 0LL;
  v131 = 298;
  v133 = 0LL;
  v135 = 244;
  v136 = 0LL;
  v0 = DifRegisterPlugin((__int64)&v2, 0x22u, 5u, &ViDeadlockPluginSettings);
  if ( v0 >= 0 )
  {
    if ( ViDeadlockGlobals )
      ViDeadlockDetectionApplySettings(1LL);
    else
      VfDeadlockInitialize();
  }
  return (unsigned int)v0;
}
