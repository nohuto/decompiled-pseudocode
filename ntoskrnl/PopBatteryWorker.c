void PopBatteryWorker()
{
  unsigned int v0; // esi
  struct _KTHREAD *CurrentThread; // rax
  int WnfStateData; // eax
  __int64 v3; // rcx
  int v4; // r14d
  __int64 *i; // rbx
  __int64 *j; // rbx
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int32 v9; // r15d
  bool v10; // di
  __int64 v11; // rax
  unsigned __int32 v12; // r13d
  __int64 k; // rbx
  __int64 v14; // rbx
  char v15; // al
  __int64 v16; // rcx
  unsigned int v17; // r9d
  __int64 v18; // r8
  int v19; // r10d
  int v20; // r12d
  unsigned int v21; // r15d
  int v22; // ebx
  char v23; // di
  int v24; // ecx
  int v25; // ebx
  __int64 *m; // rbx
  unsigned __int8 v27; // al
  unsigned int v28; // ebx
  __int64 v29; // rax
  const CHAR *v30; // rsi
  const CHAR *v31; // r12
  const CHAR *v32; // r13
  const CHAR *v33; // rdx
  char v34; // r8
  const CHAR *v35; // rdx
  unsigned __int8 v36; // r8
  unsigned __int8 v37; // r11
  const CHAR *v38; // rdx
  char v39; // r8
  const CHAR *v40; // rdx
  char v41; // r8
  const CHAR *v42; // rdx
  char v43; // r8
  const CHAR *v44; // rdx
  char v45; // r8
  const CHAR *v46; // rdx
  const CHAR *v47; // r8
  const CHAR *v48; // rdx
  int v49; // r9d
  unsigned int v50; // r10d
  __int64 v51; // r11
  unsigned int v52; // eax
  unsigned __int64 v53; // rax
  char v54; // bl
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 *v58; // rbx
  __int64 v59; // rsi
  __int64 **v60; // rcx
  _DWORD *v61; // rsi
  int v62; // edx
  int EstimatedTime; // eax
  int v64; // ecx
  int v65; // eax
  __int64 v66; // r11
  int v67; // esi
  int v68; // eax
  bool v69; // di
  int v70; // eax
  int v71; // edi
  int v72; // eax
  int v73; // eax
  unsigned int v74; // eax
  int v75; // eax
  __int64 v76; // rcx
  __int64 *v77; // rdi
  int v78; // eax
  unsigned int v79; // ecx
  int updated; // esi
  int v81; // r9d
  const CHAR *v82; // rdx
  const CHAR *v83; // r9
  const CHAR *v84; // rdx
  const CHAR *v85; // r9
  unsigned __int8 v86; // r8
  const CHAR *v87; // rdx
  const CHAR *v88; // r9
  const CHAR *v89; // rdx
  char v90; // r8
  unsigned __int8 v91; // r8
  unsigned __int8 v92; // r11
  char v93; // r8
  const CHAR *v94; // rdx
  char v95; // r8
  const CHAR *v96; // rdx
  char v97; // r8
  const CHAR *v98; // rdx
  char v99; // r8
  const CHAR *v100; // rdx
  const CHAR *v101; // rdx
  unsigned int v102; // r10d
  __int64 v103; // r11
  unsigned int v104; // eax
  unsigned __int64 v105; // rax
  const CHAR *v106; // rdx
  int v107; // r9d
  __int64 v108; // r11
  int v109; // eax
  signed __int32 v110[8]; // [rsp+8h] [rbp-100h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  int *v112; // [rsp+30h] [rbp-D8h]
  __int64 v113; // [rsp+38h] [rbp-D0h]
  __int64 v114; // [rsp+40h] [rbp-C8h]
  __int64 v115; // [rsp+48h] [rbp-C0h]
  char v116; // [rsp+58h] [rbp-B0h]
  bool v117; // [rsp+59h] [rbp-AFh] BYREF
  bool v118; // [rsp+5Ah] [rbp-AEh] BYREF
  int v119; // [rsp+5Ch] [rbp-ACh]
  unsigned __int32 v120; // [rsp+60h] [rbp-A8h]
  int v121; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v122; // [rsp+68h] [rbp-A0h] BYREF
  int v123; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v124; // [rsp+74h] [rbp-94h] BYREF
  int v125; // [rsp+78h] [rbp-90h] BYREF
  int v126; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v127; // [rsp+80h] [rbp-88h] BYREF
  int v128; // [rsp+84h] [rbp-84h] BYREF
  int v129; // [rsp+88h] [rbp-80h] BYREF
  int v130; // [rsp+90h] [rbp-78h] BYREF
  __int64 v131; // [rsp+94h] [rbp-74h]
  unsigned int v132; // [rsp+9Ch] [rbp-6Ch]
  int v133; // [rsp+A0h] [rbp-68h] BYREF
  int v134; // [rsp+A4h] [rbp-64h]
  __int64 v135; // [rsp+A8h] [rbp-60h] BYREF
  int v136; // [rsp+B0h] [rbp-58h]
  BOOL v137; // [rsp+B4h] [rbp-54h] BYREF
  int v138; // [rsp+B8h] [rbp-50h] BYREF
  int v139; // [rsp+BCh] [rbp-4Ch] BYREF
  __int64 v140; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v141; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v142; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v143; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v144; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v145; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v146; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v147; // [rsp+F8h] [rbp-10h]
  __int128 v148; // [rsp+108h] [rbp+0h] BYREF
  __int128 v149; // [rsp+118h] [rbp+10h]
  _BYTE v150[24]; // [rsp+128h] [rbp+20h] BYREF
  int v151; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v152; // [rsp+148h] [rbp+40h] BYREF
  int *v153; // [rsp+168h] [rbp+60h]
  __int64 v154; // [rsp+170h] [rbp+68h]
  char v155[16]; // [rsp+178h] [rbp+70h] BYREF
  char v156[16]; // [rsp+188h] [rbp+80h] BYREF
  char v157[16]; // [rsp+198h] [rbp+90h] BYREF
  char v158[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v159[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  char v160[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  char v161[16]; // [rsp+1D8h] [rbp+D0h] BYREF
  char v162[16]; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned int *v163; // [rsp+1F8h] [rbp+F0h]
  __int64 v164; // [rsp+200h] [rbp+F8h]
  int *v165; // [rsp+208h] [rbp+100h]
  __int64 v166; // [rsp+210h] [rbp+108h]
  int *v167; // [rsp+218h] [rbp+110h]
  __int64 v168; // [rsp+220h] [rbp+118h]
  int *v169; // [rsp+228h] [rbp+120h]
  __int64 v170; // [rsp+230h] [rbp+128h]
  __int64 *v171; // [rsp+238h] [rbp+130h]
  __int64 v172; // [rsp+240h] [rbp+138h]
  char *v173; // [rsp+248h] [rbp+140h]
  __int64 v174; // [rsp+250h] [rbp+148h]
  int *v175; // [rsp+258h] [rbp+150h]
  __int64 v176; // [rsp+260h] [rbp+158h]
  __int64 *v177; // [rsp+268h] [rbp+160h]
  __int64 v178; // [rsp+270h] [rbp+168h]
  unsigned int *v179; // [rsp+278h] [rbp+170h]
  __int64 v180; // [rsp+280h] [rbp+178h]
  int *v181; // [rsp+288h] [rbp+180h]
  __int64 v182; // [rsp+290h] [rbp+188h]
  __int64 *v183; // [rsp+298h] [rbp+190h]
  __int64 v184; // [rsp+2A0h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR v185; // [rsp+2A8h] [rbp+1A0h] BYREF
  int *v186; // [rsp+2C8h] [rbp+1C0h]
  __int64 v187; // [rsp+2D0h] [rbp+1C8h]
  char v188[16]; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v189[16]; // [rsp+2E8h] [rbp+1E0h] BYREF
  char v190[16]; // [rsp+2F8h] [rbp+1F0h] BYREF
  char v191[16]; // [rsp+308h] [rbp+200h] BYREF
  char v192[16]; // [rsp+318h] [rbp+210h] BYREF
  char v193[16]; // [rsp+328h] [rbp+220h] BYREF
  char v194[16]; // [rsp+338h] [rbp+230h] BYREF
  char v195[16]; // [rsp+348h] [rbp+240h] BYREF
  unsigned int *v196; // [rsp+358h] [rbp+250h]
  __int64 v197; // [rsp+360h] [rbp+258h]
  int *v198; // [rsp+368h] [rbp+260h]
  __int64 v199; // [rsp+370h] [rbp+268h]
  char *v200; // [rsp+378h] [rbp+270h]
  __int64 v201; // [rsp+380h] [rbp+278h]
  __int64 *v202; // [rsp+388h] [rbp+280h]
  __int64 v203; // [rsp+390h] [rbp+288h]
  int *v204; // [rsp+398h] [rbp+290h]
  __int64 v205; // [rsp+3A0h] [rbp+298h]
  int *v206; // [rsp+3A8h] [rbp+2A0h]
  __int64 v207; // [rsp+3B0h] [rbp+2A8h]
  int *v208; // [rsp+3B8h] [rbp+2B0h]
  __int64 v209; // [rsp+3C0h] [rbp+2B8h]
  unsigned int *v210; // [rsp+3C8h] [rbp+2C0h]
  __int64 v211; // [rsp+3D0h] [rbp+2C8h]
  char v212[16]; // [rsp+3D8h] [rbp+2D0h] BYREF
  int *v213; // [rsp+3E8h] [rbp+2E0h]
  __int64 v214; // [rsp+3F0h] [rbp+2E8h]
  __int64 *v215; // [rsp+3F8h] [rbp+2F0h]
  __int64 v216; // [rsp+400h] [rbp+2F8h]
  struct _EVENT_DATA_DESCRIPTOR v217; // [rsp+408h] [rbp+300h] BYREF
  bool *v218; // [rsp+428h] [rbp+320h]
  __int64 v219; // [rsp+430h] [rbp+328h]
  int *v220; // [rsp+438h] [rbp+330h]
  __int64 v221; // [rsp+440h] [rbp+338h]
  int *v222; // [rsp+448h] [rbp+340h]
  __int64 v223; // [rsp+450h] [rbp+348h]
  char v224[16]; // [rsp+458h] [rbp+350h] BYREF
  char v225[16]; // [rsp+468h] [rbp+360h] BYREF
  char v226[16]; // [rsp+478h] [rbp+370h] BYREF
  char v227[16]; // [rsp+488h] [rbp+380h] BYREF
  __int64 *v228; // [rsp+498h] [rbp+390h]
  __int64 v229; // [rsp+4A0h] [rbp+398h]
  struct _EVENT_DATA_DESCRIPTOR v230; // [rsp+4A8h] [rbp+3A0h] BYREF
  __int64 *v231; // [rsp+4C8h] [rbp+3C0h]
  __int64 v232; // [rsp+4D0h] [rbp+3C8h]

  v0 = 0;
  v140 = 0LL;
  v142 = 0LL;
  v144 = 0LL;
  v117 = 0;
  v148 = 0LL;
  v149 = 0LL;
  v151 = 0;
  memset(v150, 0, sizeof(v150));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  v141 = 0LL;
  v112 = &v133;
  v136 = 0;
  Timeout = (PLARGE_INTEGER)&v141;
  v133 = 8;
  WnfStateData = ZwQueryWnfStateData((__int64)&WNF_PO_DISCHARGE_START_FILETIME, 0LL);
  LODWORD(v3) = 1;
  if ( WnfStateData == -1073741670 || WnfStateData == -1073741431 )
  {
    v4 = 0;
  }
  else if ( !WnfStateData && v133 == 8 )
  {
    v4 = (v141 != 0) + 2;
  }
  else
  {
    v4 = 1;
  }
  for ( i = (__int64 *)qword_140C3CB70; i != &qword_140C3CB70; i = (__int64 *)*i )
    IoCancelIrp((PIRP)*(i - 1));
  for ( j = (__int64 *)qword_140C3CB70; j != &qword_140C3CB70; j = (__int64 *)*j )
    KeWaitForSingleObject(j + 2, Executive, 0, 0, 0LL);
  LOBYTE(v7) = 0;
  v116 = 0;
  while ( 1 )
  {
    v8 = 1LL;
    v7 = (unsigned __int8)v7;
    v9 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v10 = (v9 & 2) != 0;
    if ( (v9 & 8) != 0 )
      v7 = 1;
    v119 = v7;
    if ( (v9 & 0x10) != 0 )
    {
      PopAcquirePolicyLock(v3);
      PopResetCBTriggers(0x80u);
      PopReleasePolicyLock(v56, v55, v57);
      v8 = 1LL;
    }
    v11 = qword_140C3CB70;
    v12 = v9 >> 6;
    LOBYTE(v12) = (v9 & 0x40) != 0;
    v120 = v12;
    if ( (__int64 *)qword_140C3CB70 != &qword_140C3CB70 )
    {
      do
      {
        v58 = *(__int64 **)v11;
        v59 = v11 - 64;
        if ( *(_DWORD *)(v11 - 64 + 104) == 2 )
        {
          if ( v58[1] != v11 || (v60 = *(__int64 ***)(v11 + 8), *v60 != (__int64 *)v11) )
            __fastfail(3u);
          *v60 = v58;
          v58[1] = (__int64)v60;
          *(_QWORD *)v11 = 0LL;
          --dword_140C3CB54;
          ++dword_140C3CBB8;
          byte_140C3CB58 = 1;
          if ( (int)PopBatteryReadTag(v11 - 64) < 0 )
            PopBatteryWaitTag(v59);
          v8 = 1LL;
          v10 = 1;
        }
        v11 = (__int64)v58;
      }
      while ( v58 != &qword_140C3CB70 );
      v0 = 0;
    }
    for ( k = qword_140C3CB60; (__int64 *)k != &qword_140C3CB60; k = *(_QWORD *)k )
    {
      if ( *(_DWORD *)(k + 104) == 1 )
      {
        KeWaitForSingleObject((PVOID)(k + 80), Executive, 0, 0, 0LL);
        if ( (int)PopBatteryInitialize(k) < 0 )
        {
          PopBatteryWaitTag(k);
          v8 = 1LL;
        }
        else
        {
          v8 = 1LL;
          v10 = 1;
        }
      }
    }
    v14 = qword_140C3CB70;
    if ( (__int64 *)qword_140C3CB70 != &qword_140C3CB70 )
    {
      do
      {
        v147 = *(_OWORD *)(v14 + 84);
        if ( (int)PopBatteryQueryStatus(v14 - 64) >= 0 )
        {
          PopAccountBatteryEnergyChange(v14 - 64);
          v61 = (_DWORD *)(v14 + 88);
          v62 = *(_DWORD *)(v14 + 84);
          if ( (((unsigned __int8)v62 ^ (unsigned __int8)v147) & 7) != 0 )
          {
            v116 = 1;
          }
          else if ( DWORD1(v147) != *v61 || HIDWORD(v147) != *(_DWORD *)(v14 + 96) )
          {
            LOBYTE(v119) = 1;
          }
          EstimatedTime = -1;
          if ( (v62 & 2) != 0 )
          {
            EstimatedTime = PopBatteryQueryEstimatedTime(v14 - 64, 0LL);
            v62 = *(_DWORD *)(v14 + 84);
          }
          v64 = 0;
          *(_DWORD *)(v14 + 100) = EstimatedTime;
          if ( EstimatedTime != -1 )
            v64 = EstimatedTime;
          v65 = *(_DWORD *)(v14 + 96);
          LODWORD(v115) = v64;
          LODWORD(v114) = v65;
          LODWORD(v113) = *(_DWORD *)(v14 + 92);
          LODWORD(v112) = *v61;
          LODWORD(Timeout) = v62;
          DbgPrintEx(
            0x92u,
            3u,
            "\n"
            "Battery Status [%p]\n"
            "|-- PowerState = 0x%08x\n"
            "|-- Capacity   = %u\n"
            "|-- Voltage    = %u\n"
            "|-- Rate       = %d\n"
            "|-- Est Time   = %u\n",
            v14 - 64,
            Timeout,
            v112,
            v113,
            v114,
            v115);
          v0 = 0;
        }
        else
        {
          *(_DWORD *)(v14 + 40) = 2;
          PopBatteryQueueWork(1u);
        }
        v14 = *(_QWORD *)v14;
      }
      while ( (__int64 *)v14 != &qword_140C3CB70 );
      LOBYTE(v12) = v120;
    }
    if ( v10 )
    {
      PopBatteryUpdateCompositeInformation();
      PopMaxChargeRate = 0LL;
      v15 = 1;
      v116 = 1;
    }
    else
    {
      v15 = v116;
    }
    if ( (v9 & 4) != 0 || v15 )
    {
      if ( PopEstimateSpoilerMask )
      {
        PopEstimateSpoiledUntilTime = -1LL;
        KeCancelTimer(&stru_140C3A0E0);
      }
      else
      {
        PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
        KiSetTimerEx((__int64)&stru_140C3A0E0, -300000000LL, 0, 0, (__int64)&PopPostSpoilingRefresh);
      }
    }
    v140 = -1LL;
    v16 = 0xFFFFFFFFLL;
    v130 = 0;
    v17 = 0x80000000;
    v132 = 0x80000000;
    v18 = 0xFFFFFFFFLL;
    v131 = -1LL;
    v19 = -1;
    v20 = 0;
    v134 = 0;
    v21 = -1;
    if ( dword_140C3CB54 )
    {
      v66 = qword_140C3CB70;
      v22 = v130;
      if ( (__int64 *)qword_140C3CB70 != &qword_140C3CB70 )
      {
        do
        {
          v8 = *(unsigned int *)(v66 + 84);
          v67 = *(_DWORD *)(v66 + 84) & 0x67 | 8;
          v68 = *(_DWORD *)(v66 + 84);
          if ( (v68 & 0xA) != 0xA )
            v67 = *(_DWORD *)(v66 + 84) & 0x67;
          v69 = (v68 & 0x11) == 17;
          v70 = *(_DWORD *)(v66 + 84) & 0x10;
          v71 = 16 * ((v130 & 0x10) == 0 && v69);
          if ( (v8 & 1) != 0 )
            v72 = v70 != 0 ? 2 : 8;
          else
            v72 = v70 != 0 ? 1 : 4;
          v20 |= v72;
          v73 = *(_DWORD *)(v66 + 88);
          v22 = v67 | v71 ^ v22;
          v130 = v22;
          if ( v73 == -1 )
          {
            v0 = 0;
          }
          else
          {
            v0 = 0;
            if ( v19 == -1 )
              v19 = 0;
            v19 += v73;
            LODWORD(v131) = v19;
          }
          v74 = *(_DWORD *)(v66 + 92);
          if ( v74 != -1 )
          {
            if ( (_DWORD)v18 == -1 )
              v18 = 0LL;
            if ( v74 > (unsigned int)v18 )
              v18 = v74;
            HIDWORD(v131) = v18;
          }
          v75 = *(_DWORD *)(v66 + 96);
          v16 = 0x80000000LL;
          if ( v75 != 0x80000000 )
          {
            if ( v17 == 0x80000000 )
              v17 = 0;
            v17 += v75;
            v132 = v17;
          }
          v66 = *(_QWORD *)v66;
        }
        while ( (__int64 *)v66 != &qword_140C3CB70 );
        LOBYTE(v12) = v120;
        v134 = v20;
      }
      if ( (v22 & 2) != 0 )
      {
        v22 &= ~4u;
        v130 = v22;
      }
      if ( (v22 & 1) != 0 )
      {
        if ( (v22 & 4) != 0 )
          v140 = PopEstimateChargeTime(v16, v8, v18);
      }
      else
      {
        v76 = qword_140C3CB70;
        if ( (__int64 *)qword_140C3CB70 != &qword_140C3CB70 )
        {
          do
          {
            v18 = *(unsigned int *)(v76 + 100);
            if ( (unsigned int)(v18 - 1) <= 0xFFFFFFFD )
              v0 -= 3600 * *(_DWORD *)(v76 + 88) / (unsigned int)v18;
            v76 = *(_QWORD *)v76;
          }
          while ( (__int64 *)v76 != &qword_140C3CB70 );
          if ( v0 )
          {
            v77 = (__int64 *)qword_140C3CB70;
            do
            {
              v78 = PopBatteryQueryEstimatedTime(v77 - 8, v0);
              if ( v78 != -1 )
              {
                v79 = 0;
                if ( v21 != -1 )
                  v79 = v21;
                v21 = v78 + v79;
              }
              v77 = (__int64 *)*v77;
            }
            while ( v77 != &qword_140C3CB70 );
            LOBYTE(v20) = v134;
            LOBYTE(v12) = v120;
          }
        }
      }
    }
    else
    {
      LOBYTE(v22) = 1;
      v130 = 1;
      if ( v4 == 3 && (unsigned __int64)KiQueryUnbiasedInterruptTime() >= 0x11E1A300 )
        v4 = 1;
    }
    v23 = v130 & 1;
    if ( v4 == 2 && !v23 || v4 == 3 && v23 )
      v4 = 1;
    v24 = v22 & 0x10;
    if ( (unk_140C3CB80 & 0x10) == v24
      || (LODWORD(v113) = 0,
          LODWORD(v112) = 0,
          Timeout = 0LL,
          v117 = v24 != 0,
          v137 = v24 != 0,
          updated = ZwUpdateWnfStateData((__int64)&WNF_PO_BATTERY_CHARGE_LIMITING_MODE, (__int64)&v117),
          PopSetPowerSettingValueAcDc(&GUID_BATTERY_CHARGE_LIMITING_MODE, 4u, &v137),
          (unsigned int)dword_140C03928 <= 5)
      || !tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
    {
      v0 = 0;
    }
    else
    {
      v218 = &v118;
      v82 = "DC + BCL";
      v138 = updated;
      v220 = &v138;
      v139 = v81;
      v0 = 0;
      v118 = v117;
      v222 = &v139;
      v219 = 1LL;
      if ( (v20 & 1) == 0 )
        v82 = "-";
      v221 = 4LL;
      v223 = 4LL;
      tlgCreate1Sz_char((__int64)v224, v82);
      v84 = "AC + BCL";
      if ( (v20 & 2) == 0 )
        v84 = v83;
      tlgCreate1Sz_char((__int64)v225, v84);
      v87 = "DC + !BCL";
      if ( ((unsigned __int8)v20 & v86) == 0 )
        v87 = v85;
      tlgCreate1Sz_char((__int64)v226, v87);
      v89 = "AC + !BCL";
      if ( (v20 & 8) == 0 )
        v89 = v88;
      tlgCreate1Sz_char((__int64)v227, v89);
      v145 = 0x1000000LL;
      v228 = &v145;
      v229 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)&dword_140030A5C,
        0LL,
        0LL,
        0xAu,
        &v217);
    }
    if ( (v22 & 0x20) != 0 )
      v25 = ((v22 & 0x40) != 0) + 1;
    else
      v25 = 0;
    if ( (_DWORD)qword_140C3CCFC != v25 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&PopWeakChargerLock);
      LODWORD(qword_140C3CCFC) = v25;
      PopWeakChargerNotificationBatteryMiniport = v25;
      PopReleaseRwLock((ULONG_PTR)&PopWeakChargerLock);
      LOBYTE(v12) = 1;
    }
    PopBatteryApplyCompositeState(&v130, v21, v18);
    if ( (_BYTE)v12 )
    {
      LOBYTE(v3) = v23;
      PopEvaluateWeakChargerState(v3);
    }
    _InterlockedAnd(&PopBatteryWorkRequests, 0xFFFFFFDF);
    qword_140C3CD08 = MEMORY[0xFFFFF78000000008];
    _InterlockedOr(v110, 0);
    if ( qword_140C3CD10 )
      ExfUnblockPushLock(&qword_140C3CD10, 0LL);
    if ( _InterlockedCompareExchange(&PopBatteryWorkRequests, 0, 0x80000000) == 0x80000000 )
      break;
    LOBYTE(v7) = v119;
  }
  for ( m = (__int64 *)qword_140C3CB70; m != &qword_140C3CB70; m = (__int64 *)*m )
    PopBatteryQueryStatus(m - 8);
  if ( !PopUserBatteryChargingEstimator )
  {
    LODWORD(v113) = 0;
    LODWORD(v112) = 0;
    Timeout = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_CHARGE_ESTIMATE, (__int64)&v140);
  }
  v27 = PopBatteryEstimatesSpoiled();
  v28 = v27;
  if ( !PopDisableBatteryDischargeEstimator )
  {
    if ( v21 == -1 || v27 )
      v29 = -1LL;
    else
      v29 = v21;
    LODWORD(v113) = 0;
    LODWORD(v112) = 0;
    v142 = v29;
    Timeout = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_DISCHARGE_ESTIMATE, (__int64)&v142);
  }
  v30 = "AC Power";
  v31 = "Battery Discharging";
  v32 = "Battery Charging";
  if ( (unsigned int)dword_140C03928 > 5 && tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
  {
    v126 = dword_140C3CB54;
    v154 = 4LL;
    v153 = &v126;
    v33 = "AC Power";
    if ( (unk_140C3CB80 & 1) == 0 )
      v33 = "DC Power";
    tlgCreate1Sz_char((__int64)v155, v33);
    v35 = "Battery Discharging";
    if ( (v34 & 2) == 0 )
      v35 = "-";
    tlgCreate1Sz_char((__int64)v156, v35);
    v38 = "Battery Charging";
    if ( (v36 & v37) == 0 )
      v38 = "-";
    tlgCreate1Sz_char((__int64)v157, v38);
    v40 = "Battery Critical";
    if ( (v39 & 8) == 0 )
      v40 = "-";
    tlgCreate1Sz_char((__int64)v158, v40);
    v42 = "Battery charge limiting mode";
    if ( (v41 & 0x10) == 0 )
      v42 = "-";
    tlgCreate1Sz_char((__int64)v159, v42);
    v44 = "Battery charging state power supply present";
    if ( (v43 & 0x20) == 0 )
      v44 = "-";
    tlgCreate1Sz_char((__int64)v160, v44);
    v46 = "Battery charging state adequate";
    if ( (v45 & 0x40) == 0 )
      v46 = "-";
    tlgCreate1Sz_char((__int64)v161, v46);
    v48 = "Platform BCL Enabled";
    if ( (byte_140C3CD58 & 1) == 0 )
      v48 = v47;
    tlgCreate1Sz_char((__int64)v162, v48);
    if ( (_DWORD)MEMORY[0x140C3CBA4] )
      v52 = (((unsigned int)MEMORY[0x140C3CBA4] >> 1) + 100 * DWORD1(unk_140C3CB80)) / (unsigned int)MEMORY[0x140C3CBA4];
    else
      v52 = v50;
    v127 = v52;
    v163 = &v127;
    v164 = v51;
    if ( (_DWORD)MEMORY[0x140C3CBA4] )
      v53 = 100000 * (unsigned __int64)DWORD1(unk_140C3CB80) / (unsigned int)MEMORY[0x140C3CBA4];
    else
      LODWORD(v53) = v50;
    v128 = v53;
    v121 = MEMORY[0x140C3CBA4];
    v165 = &v128;
    v129 = DWORD1(unk_140C3CB80);
    v167 = &v129;
    v169 = &v121;
    v122 = *((_QWORD *)&unk_140C3CB80 + 1);
    v171 = &v122;
    v173 = (char *)&v122 + 4;
    v123 = PopDisableBatteryDischargeEstimator;
    v175 = &v123;
    v135 = v21;
    v177 = &v135;
    v179 = &v124;
    v181 = &v125;
    v183 = &v146;
    v125 = v49;
    v166 = v51;
    v168 = v51;
    v170 = v51;
    v172 = v51;
    v174 = v51;
    v176 = v51;
    v178 = 8LL;
    v124 = v28;
    v180 = v51;
    v182 = v51;
    v146 = 0x1000000LL;
    v184 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C03928,
      (unsigned __int8 *)byte_140030C4B,
      0LL,
      0LL,
      0x16u,
      &v152);
  }
  v54 = v116;
  LOBYTE(v119) = v116 | v119;
  if ( (_BYTE)v119 )
  {
    *(_DWORD *)v150 = dword_140C3CBB4;
    v148 = unk_140C3CB94;
    v151 = dword_140C3CB50;
    LODWORD(v113) = 0;
    LODWORD(v112) = 0;
    *(_OWORD *)&v150[4] = unk_140C3CB80;
    *(_DWORD *)&v150[20] = dword_140C3CB54;
    v149 = MEMORY[0x140C3CBA4];
    Timeout = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_COMPOSITE_BATTERY, (__int64)&v148);
    if ( (unsigned int)dword_140C03928 > 5 && tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
    {
      v186 = &v125;
      v125 = dword_140C3CB54;
      if ( (unk_140C3CB80 & 1) == 0 )
        v30 = "DC Power";
      v187 = 4LL;
      tlgCreate1Sz_char((__int64)v188, v30);
      if ( (v90 & 2) == 0 )
        v31 = "-";
      tlgCreate1Sz_char((__int64)v189, v31);
      if ( (v91 & v92) == 0 )
        v32 = "-";
      tlgCreate1Sz_char((__int64)v190, v32);
      v94 = "Battery Critical";
      if ( (v93 & 8) == 0 )
        v94 = "-";
      tlgCreate1Sz_char((__int64)v191, v94);
      v96 = "Battery charge limiting mode";
      if ( (v95 & 0x10) == 0 )
        v96 = "-";
      tlgCreate1Sz_char((__int64)v192, v96);
      v98 = "Battery charging state power supply present";
      if ( (v97 & 0x20) == 0 )
        v98 = "-";
      tlgCreate1Sz_char((__int64)v193, v98);
      v100 = "Battery charging state adequate";
      if ( (v99 & 0x40) == 0 )
        v100 = "-";
      tlgCreate1Sz_char((__int64)v194, v100);
      v101 = "Platform BCL Enabled";
      if ( (byte_140C3CD58 & 1) == 0 )
        v101 = "-";
      tlgCreate1Sz_char((__int64)v195, v101);
      if ( (_DWORD)MEMORY[0x140C3CBA4] )
        v104 = (((unsigned int)MEMORY[0x140C3CBA4] >> 1) + 100 * DWORD1(unk_140C3CB80))
             / (unsigned int)MEMORY[0x140C3CBA4];
      else
        v104 = 0;
      v124 = v104;
      v196 = &v124;
      v197 = v103;
      if ( (_DWORD)MEMORY[0x140C3CBA4] )
        v105 = 100000 * (unsigned __int64)DWORD1(unk_140C3CB80) / (unsigned int)MEMORY[0x140C3CBA4];
      else
        LODWORD(v105) = 0;
      v106 = "Relative Capacity Unit";
      v123 = v105;
      v199 = v103;
      v198 = &v123;
      HIDWORD(v122) = DWORD1(unk_140C3CB80);
      v200 = (char *)&v122 + 4;
      v202 = &v122;
      v121 = DWORD2(unk_140C3CB80);
      v204 = &v121;
      v129 = HIDWORD(unk_140C3CB80);
      v206 = &v129;
      v128 = dword_140C3CB50;
      v208 = &v128;
      v210 = &v127;
      if ( (unk_140C3CB94 & 0x40000000) == 0 )
        v106 = "mWh Unit";
      v201 = v103;
      LODWORD(v122) = MEMORY[0x140C3CBA4];
      v203 = v103;
      v205 = v103;
      v207 = v103;
      v209 = v103;
      v127 = v102;
      v211 = v103;
      tlgCreate1Sz_char((__int64)v212, v106);
      v213 = &v126;
      v126 = HIDWORD(unk_140C3CB94);
      v215 = &v135;
      LODWORD(v135) = v107;
      v214 = v108;
      v216 = v108;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)&dword_140030E54,
        0LL,
        0LL,
        0x16u,
        &v185);
    }
    if ( v4 == 1 )
    {
      if ( v23 )
        v143 = 0LL;
      else
        v143 = MEMORY[0xFFFFF78000000014];
      LODWORD(v113) = 0;
      LODWORD(v112) = 0;
      Timeout = 0LL;
      ZwUpdateWnfStateData((__int64)&WNF_PO_DISCHARGE_START_FILETIME, (__int64)&v143);
    }
    if ( v54 )
    {
      HIDWORD(v144) = -1;
      LODWORD(v113) = 0;
      LODWORD(v112) = 0;
      Timeout = 0LL;
      v109 = ZwUpdateWnfStateData((__int64)&WNF_PO_POWER_STATE_CHANGE, (__int64)&v144);
      if ( (unsigned int)dword_140C03928 > 5 )
      {
        LODWORD(v135) = v109;
        v232 = 4LL;
        v231 = &v135;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C03928,
          (unsigned __int8 *)byte_140030BA8,
          0LL,
          0LL,
          3u,
          &v230);
      }
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopCB);
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
