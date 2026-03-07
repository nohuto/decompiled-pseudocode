void CcPostVolumeTelemetry()
{
  char v0; // r13
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // r14
  __int64 *v5; // r12
  __int64 *v6; // r15
  bool v7; // al
  unsigned __int8 OldIrql; // r14
  __int64 v9; // r8
  __int64 v10; // r10
  unsigned int i; // eax
  __int64 v12; // rcx
  __int64 *v13; // rdi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  __int16 v21; // r9
  __int16 v22; // r9
  __int64 v23; // [rsp+170h] [rbp-778h]
  __int64 v24; // [rsp+170h] [rbp-778h]
  __int64 v25; // [rsp+178h] [rbp-770h]
  __int64 v26; // [rsp+178h] [rbp-770h]
  __int64 v27; // [rsp+180h] [rbp-768h]
  __int64 v28; // [rsp+180h] [rbp-768h]
  __int64 v29; // [rsp+188h] [rbp-760h]
  __int64 v30; // [rsp+188h] [rbp-760h]
  __int64 v31; // [rsp+190h] [rbp-758h]
  __int64 v32; // [rsp+190h] [rbp-758h]
  __int64 v33; // [rsp+198h] [rbp-750h]
  __int64 v34; // [rsp+198h] [rbp-750h]
  __int64 v35; // [rsp+1A0h] [rbp-748h]
  __int64 v36; // [rsp+1A0h] [rbp-748h]
  __int64 v37; // [rsp+1A8h] [rbp-740h]
  __int64 v38; // [rsp+1B0h] [rbp-738h]
  __int64 v39; // [rsp+1B8h] [rbp-730h]
  __int64 v40; // [rsp+1C0h] [rbp-728h]
  __int64 v41; // [rsp+1C8h] [rbp-720h]
  __int64 v42; // [rsp+1D0h] [rbp-718h]
  __int64 v43; // [rsp+1D8h] [rbp-710h]
  __int64 v44; // [rsp+1E0h] [rbp-708h]
  __int64 v45; // [rsp+1E8h] [rbp-700h]
  __int64 v46; // [rsp+1F0h] [rbp-6F8h]
  _WORD v47[2]; // [rsp+270h] [rbp-678h] BYREF
  unsigned int v48; // [rsp+274h] [rbp-674h]
  int v49; // [rsp+278h] [rbp-670h] BYREF
  __int16 v50; // [rsp+280h] [rbp-668h] BYREF
  __int16 v51; // [rsp+284h] [rbp-664h] BYREF
  __int16 v52; // [rsp+288h] [rbp-660h] BYREF
  __int16 v53; // [rsp+28Ch] [rbp-65Ch] BYREF
  __int16 v54; // [rsp+290h] [rbp-658h] BYREF
  __int16 v55; // [rsp+294h] [rbp-654h] BYREF
  __int16 v56; // [rsp+298h] [rbp-650h] BYREF
  __int16 v57; // [rsp+29Ch] [rbp-64Ch] BYREF
  __int16 v58; // [rsp+2A0h] [rbp-648h] BYREF
  __int16 v59; // [rsp+2A4h] [rbp-644h] BYREF
  unsigned int v60; // [rsp+2A8h] [rbp-640h]
  __int64 v61; // [rsp+2B0h] [rbp-638h]
  PVOID P; // [rsp+2B8h] [rbp-630h]
  __int64 v63; // [rsp+2C0h] [rbp-628h] BYREF
  __int64 v64; // [rsp+2C8h] [rbp-620h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+2D0h] [rbp-618h] BYREF
  __int64 v66; // [rsp+2E8h] [rbp-600h] BYREF
  __int64 v67; // [rsp+2F0h] [rbp-5F8h] BYREF
  __int64 v68; // [rsp+2F8h] [rbp-5F0h] BYREF
  __int64 v69; // [rsp+300h] [rbp-5E8h] BYREF
  __int64 v70; // [rsp+308h] [rbp-5E0h] BYREF
  __int64 v71; // [rsp+310h] [rbp-5D8h] BYREF
  __int64 v72; // [rsp+318h] [rbp-5D0h] BYREF
  __int64 v73; // [rsp+320h] [rbp-5C8h] BYREF
  __int64 v74; // [rsp+328h] [rbp-5C0h] BYREF
  __int64 v75; // [rsp+330h] [rbp-5B8h] BYREF
  __int64 v76; // [rsp+338h] [rbp-5B0h] BYREF
  __int64 v77; // [rsp+340h] [rbp-5A8h] BYREF
  __int64 v78; // [rsp+348h] [rbp-5A0h] BYREF
  __int64 v79; // [rsp+350h] [rbp-598h] BYREF
  __int64 v80; // [rsp+358h] [rbp-590h] BYREF
  __int64 v81; // [rsp+360h] [rbp-588h] BYREF
  __int64 v82; // [rsp+368h] [rbp-580h] BYREF
  __int64 v83; // [rsp+370h] [rbp-578h] BYREF
  __int64 v84; // [rsp+378h] [rbp-570h] BYREF
  __int64 v85; // [rsp+380h] [rbp-568h] BYREF
  __int64 v86; // [rsp+388h] [rbp-560h] BYREF
  __int64 v87; // [rsp+390h] [rbp-558h] BYREF
  __int64 v88; // [rsp+398h] [rbp-550h] BYREF
  __int64 v89; // [rsp+3A0h] [rbp-548h] BYREF
  __int64 v90; // [rsp+3A8h] [rbp-540h] BYREF
  __int64 v91; // [rsp+3B0h] [rbp-538h] BYREF
  __int64 v92; // [rsp+3B8h] [rbp-530h] BYREF
  __int64 v93; // [rsp+3C0h] [rbp-528h] BYREF
  __int64 v94; // [rsp+3C8h] [rbp-520h] BYREF
  __int64 v95; // [rsp+3D0h] [rbp-518h] BYREF
  __int64 v96; // [rsp+3D8h] [rbp-510h] BYREF
  __int64 v97; // [rsp+3E0h] [rbp-508h] BYREF
  __int64 v98; // [rsp+3E8h] [rbp-500h] BYREF
  __int64 v99; // [rsp+3F0h] [rbp-4F8h] BYREF
  __int64 v100; // [rsp+3F8h] [rbp-4F0h] BYREF
  __int64 v101; // [rsp+400h] [rbp-4E8h] BYREF
  __int64 v102; // [rsp+408h] [rbp-4E0h] BYREF
  __int64 v103; // [rsp+410h] [rbp-4D8h] BYREF
  __int64 v104; // [rsp+418h] [rbp-4D0h] BYREF
  __int64 v105; // [rsp+420h] [rbp-4C8h] BYREF
  __int64 v106; // [rsp+428h] [rbp-4C0h] BYREF
  __int64 v107; // [rsp+430h] [rbp-4B8h] BYREF
  __int64 v108; // [rsp+438h] [rbp-4B0h] BYREF
  __int64 v109; // [rsp+440h] [rbp-4A8h] BYREF
  __int64 v110; // [rsp+448h] [rbp-4A0h] BYREF
  __int64 v111; // [rsp+450h] [rbp-498h] BYREF
  __int64 v112; // [rsp+458h] [rbp-490h] BYREF
  __int64 v113; // [rsp+460h] [rbp-488h] BYREF
  __int64 v114; // [rsp+468h] [rbp-480h] BYREF
  __int64 v115; // [rsp+470h] [rbp-478h] BYREF
  __int64 v116; // [rsp+478h] [rbp-470h] BYREF
  __int64 v117; // [rsp+480h] [rbp-468h] BYREF
  __int64 v118; // [rsp+488h] [rbp-460h] BYREF
  __int64 v119; // [rsp+490h] [rbp-458h] BYREF
  __int64 v120; // [rsp+498h] [rbp-450h]
  __int64 *v121; // [rsp+4A0h] [rbp-448h]
  struct _EVENT_DATA_DESCRIPTOR v122[2]; // [rsp+4B0h] [rbp-438h] BYREF
  __int64 *v123; // [rsp+4D0h] [rbp-418h]
  __int64 v124; // [rsp+4D8h] [rbp-410h]
  _WORD *v125; // [rsp+4E0h] [rbp-408h]
  __int64 v126; // [rsp+4E8h] [rbp-400h]
  __int64 *v127; // [rsp+4F0h] [rbp-3F8h]
  __int64 v128; // [rsp+4F8h] [rbp-3F0h]
  __int64 *v129; // [rsp+500h] [rbp-3E8h]
  __int64 v130; // [rsp+508h] [rbp-3E0h]
  __int64 *v131; // [rsp+510h] [rbp-3D8h]
  __int64 v132; // [rsp+518h] [rbp-3D0h]
  __int64 *v133; // [rsp+520h] [rbp-3C8h]
  __int64 v134; // [rsp+528h] [rbp-3C0h]
  __int64 *v135; // [rsp+530h] [rbp-3B8h]
  __int64 v136; // [rsp+538h] [rbp-3B0h]
  __int64 *v137; // [rsp+540h] [rbp-3A8h]
  __int64 v138; // [rsp+548h] [rbp-3A0h]
  __int64 *v139; // [rsp+550h] [rbp-398h]
  __int64 v140; // [rsp+558h] [rbp-390h]
  __int64 *v141; // [rsp+560h] [rbp-388h]
  __int64 v142; // [rsp+568h] [rbp-380h]
  __int64 *v143; // [rsp+570h] [rbp-378h]
  __int64 v144; // [rsp+578h] [rbp-370h]
  __int64 *v145; // [rsp+580h] [rbp-368h]
  __int64 v146; // [rsp+588h] [rbp-360h]
  __int64 *v147; // [rsp+590h] [rbp-358h]
  __int64 v148; // [rsp+598h] [rbp-350h]
  __int64 *v149; // [rsp+5A0h] [rbp-348h]
  __int64 v150; // [rsp+5A8h] [rbp-340h]
  __int64 *v151; // [rsp+5B0h] [rbp-338h]
  __int64 v152; // [rsp+5B8h] [rbp-330h]
  __int64 *v153; // [rsp+5C0h] [rbp-328h]
  __int64 v154; // [rsp+5C8h] [rbp-320h]
  __int64 *v155; // [rsp+5D0h] [rbp-318h]
  __int64 v156; // [rsp+5D8h] [rbp-310h]
  __int64 *v157; // [rsp+5E0h] [rbp-308h]
  __int64 v158; // [rsp+5E8h] [rbp-300h]
  __int64 *v159; // [rsp+5F0h] [rbp-2F8h]
  __int64 v160; // [rsp+5F8h] [rbp-2F0h]
  __int64 *v161; // [rsp+600h] [rbp-2E8h]
  __int64 v162; // [rsp+608h] [rbp-2E0h]
  __int64 *v163; // [rsp+610h] [rbp-2D8h]
  __int64 v164; // [rsp+618h] [rbp-2D0h]
  __int64 *v165; // [rsp+620h] [rbp-2C8h]
  __int64 v166; // [rsp+628h] [rbp-2C0h]
  __int64 *v167; // [rsp+630h] [rbp-2B8h]
  __int64 v168; // [rsp+638h] [rbp-2B0h]
  __int64 *v169; // [rsp+640h] [rbp-2A8h]
  __int64 v170; // [rsp+648h] [rbp-2A0h]
  __int64 *v171; // [rsp+650h] [rbp-298h]
  __int64 v172; // [rsp+658h] [rbp-290h]
  __int64 *v173; // [rsp+660h] [rbp-288h]
  __int64 v174; // [rsp+668h] [rbp-280h]
  __int64 *v175; // [rsp+670h] [rbp-278h]
  __int64 v176; // [rsp+678h] [rbp-270h]
  __int64 *v177; // [rsp+680h] [rbp-268h]
  __int64 v178; // [rsp+688h] [rbp-260h]
  __int64 *v179; // [rsp+690h] [rbp-258h]
  __int64 v180; // [rsp+698h] [rbp-250h]
  __int64 *v181; // [rsp+6A0h] [rbp-248h]
  __int64 v182; // [rsp+6A8h] [rbp-240h]
  __int64 *v183; // [rsp+6B0h] [rbp-238h]
  __int64 v184; // [rsp+6B8h] [rbp-230h]
  __int64 *v185; // [rsp+6C0h] [rbp-228h]
  __int64 v186; // [rsp+6C8h] [rbp-220h]
  __int64 *v187; // [rsp+6D0h] [rbp-218h]
  __int64 v188; // [rsp+6D8h] [rbp-210h]
  __int64 *v189; // [rsp+6E0h] [rbp-208h]
  __int64 v190; // [rsp+6E8h] [rbp-200h]
  __int64 *v191; // [rsp+6F0h] [rbp-1F8h]
  __int64 v192; // [rsp+6F8h] [rbp-1F0h]
  __int64 *v193; // [rsp+700h] [rbp-1E8h]
  __int64 v194; // [rsp+708h] [rbp-1E0h]
  __int64 *v195; // [rsp+710h] [rbp-1D8h]
  __int64 v196; // [rsp+718h] [rbp-1D0h]
  __int64 *v197; // [rsp+720h] [rbp-1C8h]
  __int64 v198; // [rsp+728h] [rbp-1C0h]
  __int64 *v199; // [rsp+730h] [rbp-1B8h]
  __int64 v200; // [rsp+738h] [rbp-1B0h]
  __int64 *v201; // [rsp+740h] [rbp-1A8h]
  __int64 v202; // [rsp+748h] [rbp-1A0h]
  __int64 *v203; // [rsp+750h] [rbp-198h]
  __int64 v204; // [rsp+758h] [rbp-190h]
  __int64 *v205; // [rsp+760h] [rbp-188h]
  __int64 v206; // [rsp+768h] [rbp-180h]
  char v207[16]; // [rsp+770h] [rbp-178h] BYREF
  __int16 *v208; // [rsp+780h] [rbp-168h]
  __int64 v209; // [rsp+788h] [rbp-160h]
  _QWORD *v210; // [rsp+790h] [rbp-158h]
  __int64 v211; // [rsp+798h] [rbp-150h]
  __int16 *v212; // [rsp+7A0h] [rbp-148h]
  __int64 v213; // [rsp+7A8h] [rbp-140h]
  _QWORD *v214; // [rsp+7B0h] [rbp-138h]
  __int64 v215; // [rsp+7B8h] [rbp-130h]
  __int16 *v216; // [rsp+7C0h] [rbp-128h]
  __int64 v217; // [rsp+7C8h] [rbp-120h]
  _QWORD *v218; // [rsp+7D0h] [rbp-118h]
  __int64 v219; // [rsp+7D8h] [rbp-110h]
  __int16 *v220; // [rsp+7E0h] [rbp-108h]
  __int64 v221; // [rsp+7E8h] [rbp-100h]
  _QWORD *v222; // [rsp+7F0h] [rbp-F8h]
  __int64 v223; // [rsp+7F8h] [rbp-F0h]
  __int16 *v224; // [rsp+800h] [rbp-E8h]
  __int64 v225; // [rsp+808h] [rbp-E0h]
  _QWORD *v226; // [rsp+810h] [rbp-D8h]
  __int64 v227; // [rsp+818h] [rbp-D0h]
  __int16 *v228; // [rsp+820h] [rbp-C8h]
  __int64 v229; // [rsp+828h] [rbp-C0h]
  _QWORD *v230; // [rsp+830h] [rbp-B8h]
  __int64 v231; // [rsp+838h] [rbp-B0h]
  __int16 *v232; // [rsp+840h] [rbp-A8h]
  __int64 v233; // [rsp+848h] [rbp-A0h]
  _QWORD *v234; // [rsp+850h] [rbp-98h]
  __int64 v235; // [rsp+858h] [rbp-90h]
  __int16 *v236; // [rsp+860h] [rbp-88h]
  __int64 v237; // [rsp+868h] [rbp-80h]
  _QWORD *v238; // [rsp+870h] [rbp-78h]
  __int64 v239; // [rsp+878h] [rbp-70h]
  __int16 *v240; // [rsp+880h] [rbp-68h]
  __int64 v241; // [rsp+888h] [rbp-60h]
  _QWORD *v242; // [rsp+890h] [rbp-58h]
  __int64 v243; // [rsp+898h] [rbp-50h]
  __int16 *v244; // [rsp+8A0h] [rbp-48h]
  __int64 v245; // [rsp+8A8h] [rbp-40h]
  _QWORD *v246; // [rsp+8B0h] [rbp-38h]
  __int64 v247; // [rsp+8B8h] [rbp-30h]

  v0 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v48 = 0;
  v60 = 0;
  v1 = MEMORY[0xFFFFF78000000014];
  v2 = MEMORY[0xFFFFF78000000014] - qword_140C5F4D0;
  v3 = MEMORY[0xFFFFF78000000014] - qword_140C5F4D8;
  if ( MEMORY[0xFFFFF78000000014] - qword_140C5F4D0 >= unk_140C5F4E8 || qword_140C5F4F8 <= 0 )
  {
    if ( v3 >= qword_140C5F4F0 || !qword_140C5F4F8 )
      v0 = 1;
    ++qword_140C5F4F8;
    v4 = qword_140C5F508 + 10;
    v61 = qword_140C5F508 + 10;
    P = ExAllocatePoolWithTag((POOL_TYPE)1536, 2480 * (qword_140C5F508 + 10), 0x65546343u);
    if ( P )
    {
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
      v5 = (__int64 *)CcVolumeCacheMapList;
      v120 = CcVolumeCacheMapList;
      while ( v5 != &CcVolumeCacheMapList && v60 < v4 )
      {
        v6 = v5 - 2;
        v121 = v5 - 2;
        ++v60;
        v7 = v5[43] || v6[46] || v6[47] || v6[105] || v6[106] || v6[107];
        if ( v7 || v0 && CcHasVolumeCumulativeTelemetryChanged(v5 - 2) )
        {
          CcAggregateCumulativeVolumeTelemetry(v6 + 28);
          memmove((char *)P + 2480 * v48, v6 + 28, 0x9B0uLL);
          memset(v6 + 30, 0, 0x4D0uLL);
          if ( v0 )
            memset(v6 + 184, 0, 0x4D0uLL);
          v5 = (__int64 *)*v5;
          v120 = (__int64)v5;
          ++v48;
          v4 = v61;
        }
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v20 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      CcAggregateCumulativeGlobalTelemetry();
      if ( (Microsoft_Windows_Kernel_CacheEnableBits & 1) != 0 )
        McTemplateK0xxxxxxxxxxxxxxxxxq_EtwWriteTransfer(
          (unsigned int)Microsoft_Windows_Kernel_CacheEnableBits,
          (__int64)((unsigned __int128)(v2 * (__int128)0x6666666666666667LL) >> 64) >> 2,
          v9,
          v2 / 10,
          qword_140C5F510,
          qword_140C5F518,
          qword_140C5F548,
          qword_140C5F550,
          qword_140C5F558,
          qword_140C5F560,
          qword_140C5F568,
          qword_140C5F570,
          qword_140C5F578,
          qword_140C5F580,
          qword_140C5F588,
          qword_140C5F520,
          qword_140C5F528,
          qword_140C5F530,
          qword_140C5F538,
          qword_140C5F540);
      CcResetGlobalTelemetry();
      v10 = 0LL;
      if ( v0 )
      {
        if ( (unsigned int)dword_140C03738 > 5 && tlgKeywordOn((__int64)&dword_140C03738, 0x400000000000LL) )
        {
          v66 = 0x1000000LL;
          v123 = &v66;
          v124 = 8LL;
          v47[0] = v21;
          v125 = v47;
          v126 = 2LL;
          v67 = v3 / 10;
          v127 = &v67;
          v128 = 8LL;
          v49 = CcNumberNumaNodes;
          v129 = (__int64 *)&v49;
          v130 = 4LL;
          v68 = qword_140C5F590;
          v131 = &v68;
          v132 = 8LL;
          v69 = qword_140C5F598;
          v133 = &v69;
          v134 = 8LL;
          v70 = qword_140C5F5C8;
          v135 = &v70;
          v136 = 8LL;
          v71 = qword_140C5F5D0;
          v137 = &v71;
          v138 = 8LL;
          v72 = qword_140C5F5D8;
          v139 = &v72;
          v140 = 8LL;
          v73 = qword_140C5F5E0;
          v141 = &v73;
          v142 = 8LL;
          v74 = qword_140C5F5E8;
          v143 = &v74;
          v144 = 8LL;
          v75 = qword_140C5F5F0;
          v145 = &v75;
          v146 = 8LL;
          v76 = qword_140C5F5F8;
          v147 = &v76;
          v148 = 8LL;
          v77 = qword_140C5F600;
          v149 = &v77;
          v150 = 8LL;
          v78 = qword_140C5F608;
          v151 = &v78;
          v152 = 8LL;
          v79 = qword_140C5F5A0;
          v153 = &v79;
          v154 = 8LL;
          v80 = qword_140C5F5A8;
          v155 = &v80;
          v156 = 8LL;
          v81 = qword_140C5F5B0;
          v157 = &v81;
          v158 = 8LL;
          v64 = qword_140C5F5B8;
          v159 = &v64;
          v160 = 8LL;
          v63 = qword_140C5F5C0;
          v161 = &v63;
          v162 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C03738,
            (unsigned __int8 *)byte_14002984D,
            0LL,
            0LL,
            0x16u,
            v122);
          v10 = 0LL;
        }
        qword_140C5F590 = v10;
        qword_140C5F598 = v10;
        qword_140C5F5A0 = v10;
        qword_140C5F5A8 = v10;
        qword_140C5F5B0 = v10;
        qword_140C5F5B8 = v10;
        qword_140C5F5C0 = v10;
        qword_140C5F5C8 = v10;
        qword_140C5F5D0 = v10;
        qword_140C5F5D8 = v10;
        qword_140C5F5E0 = v10;
        qword_140C5F5E8 = v10;
        qword_140C5F5F0 = v10;
        qword_140C5F5F8 = v10;
        qword_140C5F600 = v10;
        qword_140C5F608 = v10;
        qword_140C5F4D8 = v1;
      }
      for ( i = v10; ; i = v49 + 1 )
      {
        v49 = i;
        v12 = i;
        if ( i >= (unsigned __int64)v48 )
          break;
        v13 = (__int64 *)((char *)P + 2480 * i);
        v14 = v13[14];
        if ( v14 )
          v15 = 100 * (v14 - v13[15]) / v14;
        else
          v15 = v10;
        v61 = v15;
        if ( (Microsoft_Windows_Kernel_CacheEnableBits & 1) != 0 )
          McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer(
            i,
            v2 / 10,
            v14,
            (__int64)P + 2480 * i,
            v2 / 10,
            v13[2],
            v13[3],
            v13[4],
            v13[5],
            v13[6],
            v13[7],
            v13[23],
            v13[24],
            v13[25],
            v13[26],
            v13[8],
            v13[9],
            v13[10],
            v13[11],
            v13[12],
            v13[13],
            v14,
            v13[15],
            v13[16],
            v15,
            v13[20],
            v13[21],
            v13[22],
            v13[17],
            v13[18],
            v13[19],
            v13[27],
            v13[28],
            v13[77],
            v13[78],
            v13[79],
            v13[80],
            v13[81],
            v13[130],
            v13[131]);
        if ( (Microsoft_Windows_Kernel_CacheEnableBits & 1) != 0 )
        {
          v46 = v13[141];
          v45 = v13[140];
          v44 = v13[139];
          v43 = v13[138];
          v42 = v13[137];
          v41 = v13[136];
          v40 = v13[135];
          v39 = v13[134];
          v38 = v13[133];
          v37 = v13[132];
          v35 = v13[76];
          v33 = v13[75];
          v31 = v13[74];
          v29 = v13[73];
          v27 = v13[72];
          v25 = v13[71];
          v23 = v13[70];
          McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer(
            v12,
            v2 / 10,
            v14,
            (__int64)v13,
            v2 / 10,
            v13[29],
            v13[30],
            v13[31],
            v13[32],
            v13[33],
            v13[34],
            v13[35],
            v13[36],
            v13[37],
            v13[38],
            v13[39],
            v13[40],
            v13[41],
            v13[42],
            v13[43],
            v13[44],
            v13[45],
            v13[46],
            v13[47],
            v13[48],
            v13[49],
            v13[50],
            v13[51],
            v13[52],
            v13[53],
            v13[54],
            v13[55],
            v13[56],
            v13[57],
            v13[58],
            v13[59],
            v13[60],
            v13[61],
            v13[62],
            v13[63],
            v13[64],
            v13[65],
            v13[66],
            v13[67],
            v13[68],
            v13[69],
            v23,
            v25,
            v27,
            v29,
            v31,
            v33,
            v35,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46);
        }
        if ( (Microsoft_Windows_Kernel_CacheEnableBits & 1) != 0 )
        {
          v36 = v13[129];
          v34 = v13[128];
          v32 = v13[127];
          v30 = v13[126];
          v28 = v13[125];
          v26 = v13[124];
          v24 = v13[123];
          McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer(
            v12,
            v2 / 10,
            v14,
            (__int64)v13,
            v2 / 10,
            v13[82],
            v13[83],
            v13[84],
            v13[85],
            v13[86],
            v13[87],
            v13[88],
            v13[89],
            v13[90],
            v13[91],
            v13[92],
            v13[93],
            v13[94],
            v13[95],
            v13[96],
            v13[97],
            v13[98],
            v13[99],
            v13[100],
            v13[101],
            v13[102],
            v13[103],
            v13[104],
            v13[105],
            v13[106],
            v13[107],
            v13[108],
            v13[109],
            v13[110],
            v13[111],
            v13[112],
            v13[113],
            v13[114],
            v13[115],
            v13[116],
            v13[117],
            v13[118],
            v13[119],
            v13[120],
            v13[121],
            v13[122],
            v24,
            v26,
            v28,
            v30,
            v32,
            v34,
            v36);
        }
        v10 = 0LL;
        if ( v0 && (unsigned int)dword_140C03738 > 5 && tlgKeywordOn((__int64)&dword_140C03738, 0x400000000000LL) )
        {
          v63 = 0x1000000LL;
          v123 = &v63;
          v124 = 8LL;
          v47[0] = v22;
          v125 = v47;
          v126 = 2LL;
          v127 = v13;
          v128 = 16LL;
          v64 = v2 / 10;
          v129 = &v64;
          v130 = 8LL;
          v82 = v13[156];
          v131 = &v82;
          v132 = 8LL;
          v83 = v13[157];
          v133 = &v83;
          v134 = 8LL;
          v84 = v13[158];
          v135 = &v84;
          v136 = 8LL;
          v85 = v13[159];
          v137 = &v85;
          v138 = 8LL;
          v86 = v13[160];
          v139 = &v86;
          v140 = 8LL;
          v87 = v13[161];
          v141 = &v87;
          v142 = 8LL;
          v88 = v13[177];
          v143 = &v88;
          v144 = 8LL;
          v89 = v13[178];
          v145 = &v89;
          v146 = 8LL;
          v90 = v13[179];
          v147 = &v90;
          v148 = 8LL;
          v91 = v13[180];
          v149 = &v91;
          v150 = 8LL;
          v92 = v13[162];
          v151 = &v92;
          v152 = 8LL;
          v93 = v13[163];
          v153 = &v93;
          v154 = 8LL;
          v94 = v13[164];
          v155 = &v94;
          v156 = 8LL;
          v95 = v13[165];
          v157 = &v95;
          v158 = 8LL;
          v96 = v13[166];
          v159 = &v96;
          v160 = 8LL;
          v97 = v13[167];
          v161 = &v97;
          v162 = 8LL;
          v98 = v13[168];
          v163 = &v98;
          v164 = 8LL;
          v99 = v13[169];
          v165 = &v99;
          v166 = 8LL;
          v100 = v61;
          v167 = &v100;
          v168 = 8LL;
          v101 = v13[170];
          v169 = &v101;
          v170 = 8LL;
          v102 = v13[174];
          v171 = &v102;
          v172 = 8LL;
          v103 = v13[175];
          v173 = &v103;
          v174 = 8LL;
          v104 = v13[176];
          v175 = &v104;
          v176 = 8LL;
          v105 = v13[171];
          v177 = &v105;
          v178 = 8LL;
          v106 = v13[172];
          v179 = &v106;
          v180 = 8LL;
          v107 = v13[173];
          v181 = &v107;
          v182 = 8LL;
          v108 = v13[181];
          v183 = &v108;
          v184 = 8LL;
          v109 = v13[182];
          v185 = &v109;
          v186 = 8LL;
          v110 = v13[231];
          v187 = &v110;
          v188 = 8LL;
          v111 = v13[232];
          v189 = &v111;
          v190 = 8LL;
          v112 = v13[233];
          v191 = &v112;
          v192 = 8LL;
          v113 = v13[234];
          v193 = &v113;
          v194 = 8LL;
          v114 = v13[235];
          v195 = &v114;
          v196 = 8LL;
          v115 = v13[284];
          v197 = &v115;
          v198 = 8LL;
          v116 = v13[285];
          v199 = &v116;
          v200 = 8LL;
          v117 = v13[177];
          v201 = &v117;
          v202 = 8LL;
          v118 = v13[178];
          v203 = &v118;
          v204 = 8LL;
          v119 = v13[179];
          v205 = &v119;
          v206 = 8LL;
          tlgCreate1Sz_wchar_t(
            (__int64)v207,
            (const size_t *)L"256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 2000ms, 6000ms, 10000ms, 20000ms, 20000+ms");
          v50 = 12;
          v208 = &v50;
          v209 = 2LL;
          v210 = v13 + 183;
          v211 = 96LL;
          v51 = 12;
          v212 = &v51;
          v213 = 2LL;
          v214 = v13 + 195;
          v215 = 96LL;
          v52 = 12;
          v216 = &v52;
          v217 = 2LL;
          v218 = v13 + 207;
          v219 = 96LL;
          v53 = 12;
          v220 = &v53;
          v221 = 2LL;
          v222 = v13 + 219;
          v223 = 96LL;
          v54 = 12;
          v224 = &v54;
          v225 = 2LL;
          v226 = v13 + 236;
          v227 = 96LL;
          v55 = 12;
          v228 = &v55;
          v229 = 2LL;
          v230 = v13 + 248;
          v231 = 96LL;
          v56 = 12;
          v232 = &v56;
          v233 = 2LL;
          v234 = v13 + 260;
          v235 = 96LL;
          v57 = 12;
          v236 = &v57;
          v237 = 2LL;
          v238 = v13 + 272;
          v239 = 96LL;
          v58 = 12;
          v240 = &v58;
          v241 = 2LL;
          v242 = v13 + 286;
          v243 = 96LL;
          v59 = 12;
          v244 = &v59;
          v245 = 2LL;
          v246 = v13 + 298;
          v247 = 96LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C03738,
            (unsigned __int8 *)byte_1400292A1,
            0LL,
            0LL,
            0x41u,
            v122);
          v10 = 0LL;
        }
      }
      qword_140C5F4D0 = v1;
      ExFreePoolWithTag(P, 0);
    }
  }
}
