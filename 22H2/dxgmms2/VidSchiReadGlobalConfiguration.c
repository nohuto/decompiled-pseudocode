/*
 * XREFs of VidSchiReadGlobalConfiguration @ 0x1C008F48C
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C008E2C0 (VidSchInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     VidSchiReadNodeConfiguration @ 0x1C0090200 (VidSchiReadNodeConfiguration.c)
 */

bool __fastcall VidSchiReadGlobalConfiguration(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  int v4; // edi
  bool v5; // sf
  bool v6; // of
  int NodeConfiguration; // eax
  __int64 v8; // r8
  unsigned int v9; // ecx
  __int64 v10; // r11
  int *v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // r9d
  _DWORD *v14; // rax
  int *v15; // rax
  int v16; // r10d
  int *v17; // rax
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // edx
  __int64 v21; // rdx
  bool v22; // zf
  __int64 v23; // rcx
  int v24; // ecx
  int v25; // eax
  bool IsEnabled; // al
  int v27; // ecx
  _QWORD *v28; // r8
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // rax
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // edx
  unsigned int v36; // edx
  int v37; // ecx
  unsigned int v38; // edx
  unsigned int v39; // ecx
  bool v40; // cc
  __int64 v41; // rdx
  int v42; // eax
  bool result; // al
  _DWORD *v44; // rax
  __int64 v45; // rax
  int v46; // eax
  unsigned int v47; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v48; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v49; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v50; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v51; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v52; // [rsp+4Ch] [rbp-BCh] BYREF
  int v53; // [rsp+50h] [rbp-B8h] BYREF
  int v54; // [rsp+54h] [rbp-B4h] BYREF
  int v55; // [rsp+58h] [rbp-B0h] BYREF
  int v56; // [rsp+5Ch] [rbp-ACh] BYREF
  int v57; // [rsp+60h] [rbp-A8h] BYREF
  int v58; // [rsp+64h] [rbp-A4h] BYREF
  int v59; // [rsp+68h] [rbp-A0h] BYREF
  int v60; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v61; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v62; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v63; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v64; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v65; // [rsp+80h] [rbp-88h] BYREF
  int v66; // [rsp+84h] [rbp-84h] BYREF
  int v67; // [rsp+88h] [rbp-80h] BYREF
  int v68; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v69; // [rsp+90h] [rbp-78h] BYREF
  int v70; // [rsp+94h] [rbp-74h] BYREF
  int v71; // [rsp+98h] [rbp-70h] BYREF
  int v72; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v73; // [rsp+A0h] [rbp-68h] BYREF
  int v74; // [rsp+A4h] [rbp-64h] BYREF
  int v75; // [rsp+A8h] [rbp-60h] BYREF
  int v76; // [rsp+ACh] [rbp-5Ch] BYREF
  int v77; // [rsp+B0h] [rbp-58h] BYREF
  int v78; // [rsp+B4h] [rbp-54h] BYREF
  int v79; // [rsp+B8h] [rbp-50h] BYREF
  int v80; // [rsp+BCh] [rbp-4Ch] BYREF
  BOOL v81; // [rsp+C0h] [rbp-48h] BYREF
  int v82; // [rsp+C4h] [rbp-44h] BYREF
  int v83; // [rsp+C8h] [rbp-40h] BYREF
  int v84; // [rsp+CCh] [rbp-3Ch] BYREF
  int v85; // [rsp+D0h] [rbp-38h] BYREF
  int v86; // [rsp+D4h] [rbp-34h] BYREF
  int v87; // [rsp+D8h] [rbp-30h] BYREF
  int v88; // [rsp+DCh] [rbp-2Ch] BYREF
  int v89; // [rsp+E0h] [rbp-28h] BYREF
  int v90; // [rsp+E4h] [rbp-24h] BYREF
  int v91; // [rsp+E8h] [rbp-20h] BYREF
  int v92; // [rsp+ECh] [rbp-1Ch] BYREF
  int v93; // [rsp+F0h] [rbp-18h] BYREF
  int v94; // [rsp+F4h] [rbp-14h] BYREF
  int v95; // [rsp+F8h] [rbp-10h] BYREF
  int v96; // [rsp+FCh] [rbp-Ch] BYREF
  int v97; // [rsp+100h] [rbp-8h] BYREF
  int v98; // [rsp+104h] [rbp-4h] BYREF
  int v99; // [rsp+108h] [rbp+0h] BYREF
  int v100; // [rsp+10Ch] [rbp+4h] BYREF
  int v101; // [rsp+110h] [rbp+8h] BYREF
  int v102; // [rsp+114h] [rbp+Ch] BYREF
  int v103; // [rsp+118h] [rbp+10h] BYREF
  int v104; // [rsp+11Ch] [rbp+14h] BYREF
  int v105; // [rsp+120h] [rbp+18h] BYREF
  unsigned int v106; // [rsp+124h] [rbp+1Ch] BYREF
  int v107; // [rsp+128h] [rbp+20h] BYREF
  int v108; // [rsp+12Ch] [rbp+24h] BYREF
  int v109; // [rsp+130h] [rbp+28h] BYREF
  BOOL v110; // [rsp+134h] [rbp+2Ch] BYREF
  _QWORD v111[232]; // [rsp+138h] [rbp+30h] BYREF

  v83 = 25000;
  v82 = 0;
  v84 = 50000;
  v2 = *(_DWORD *)(a1 + 220);
  v88 = 0;
  v85 = 1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 16;
  v86 = 2;
  v104 = 16;
  v87 = 3;
  v89 = 0;
  v90 = 1;
  v91 = 1;
  v92 = 0;
  v95 = 0;
  v93 = 20;
  v94 = 2;
  v54 = 7;
  v97 = 0;
  v98 = 900;
  v99 = 1000;
  v96 = 1;
  v100 = 8;
  v101 = 0;
  v66 = 10;
  v102 = 1;
  v103 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v105 = 100;
  v73 = 64;
  v106 = v2;
  v6 = __OFSUB__(*(_DWORD *)(v3 + 2596), 2000);
  v5 = *(_DWORD *)(v3 + 2596) - 2000 < 0;
  v56 = 0;
  v49 = 25000;
  v110 = v5 == v6;
  v81 = v110;
  v50 = 50000;
  v58 = 1;
  v55 = 2;
  v51 = 3;
  v79 = 0;
  v57 = 0;
  v59 = 1;
  v75 = 1;
  v76 = 0;
  v77 = 0;
  v52 = 20;
  v78 = 2;
  v53 = 7;
  v60 = 0;
  v68 = 900;
  v69 = 1000;
  v74 = 1;
  v71 = 8;
  v67 = 0;
  v65 = 10;
  v61 = 1;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v70 = 16;
  v72 = 100;
  v47 = 64;
  v80 = 0;
  v48 = v2;
  if ( *(int *)(v3 + 2596) >= 1300 && *(_BYTE *)(v3 + 2533) )
  {
    v54 = 1;
    v53 = 1;
  }
  memset(v111, 0, 0x738uLL);
  v111[7] = 0LL;
  LODWORD(v111[1]) = 288;
  LODWORD(v111[4]) = 67108868;
  LODWORD(v111[6]) = 4;
  v111[2] = L"AutoSyncToCPUPriority";
  v111[3] = &v56;
  v111[5] = &v82;
  v111[9] = L"QuantumUnit";
  v111[10] = &v49;
  v111[12] = &v83;
  v111[16] = L"PreemptionQuantumUnit";
  v111[17] = &v50;
  v111[19] = &v84;
  v111[23] = L"EnablePreemption";
  v111[24] = &v58;
  v111[26] = &v85;
  v111[30] = L"HwQueuedRenderPacketGroupLimit";
  v111[31] = &v55;
  v111[33] = &v86;
  v111[37] = L"QueuedPresentLimit";
  v111[38] = &v51;
  v111[40] = &v87;
  v111[44] = L"InitDriverFenceId";
  v111[45] = &v79;
  v111[47] = &v88;
  v111[51] = L"CarryOverUsedQuantum";
  LODWORD(v111[8]) = 288;
  LODWORD(v111[11]) = 67108868;
  LODWORD(v111[13]) = 4;
  v111[14] = 0LL;
  LODWORD(v111[15]) = 288;
  LODWORD(v111[18]) = 67108868;
  LODWORD(v111[20]) = 4;
  v111[21] = 0LL;
  LODWORD(v111[22]) = 288;
  LODWORD(v111[25]) = 67108868;
  LODWORD(v111[27]) = 4;
  v111[28] = 0LL;
  LODWORD(v111[29]) = 288;
  LODWORD(v111[32]) = 67108868;
  LODWORD(v111[34]) = 4;
  v111[35] = 0LL;
  LODWORD(v111[36]) = 288;
  LODWORD(v111[39]) = 67108868;
  LODWORD(v111[41]) = 4;
  v111[42] = 0LL;
  LODWORD(v111[43]) = 288;
  LODWORD(v111[46]) = 67108868;
  LODWORD(v111[48]) = 4;
  v111[49] = 0LL;
  LODWORD(v111[50]) = 288;
  v111[52] = &v57;
  v111[54] = &v89;
  v111[58] = L"EnableFlipImmediateSwFlipQueue";
  v111[59] = &v59;
  v111[61] = &v90;
  v111[65] = L"AdjustWorkerThreadPriority";
  v111[66] = &v75;
  v111[68] = &v91;
  v111[72] = L"CountFlipTowardHwLimit";
  v111[73] = &v76;
  v111[75] = &v92;
  v111[79] = L"NumberOfDmaPacketPool";
  v111[80] = &v52;
  v111[82] = &v93;
  v111[86] = L"ProfileLevel";
  v111[87] = &v78;
  v111[89] = &v94;
  v111[93] = L"VSyncIdleTimeout";
  v111[94] = &v53;
  v111[96] = &v54;
  v111[100] = L"CountPresentTowardHwLimit";
  v111[101] = &v77;
  v111[103] = &v95;
  v111[107] = L"EnableContextDelay";
  v111[108] = &v74;
  LODWORD(v111[53]) = 67108868;
  LODWORD(v111[55]) = 4;
  v111[56] = 0LL;
  LODWORD(v111[57]) = 288;
  LODWORD(v111[60]) = 67108868;
  LODWORD(v111[62]) = 4;
  v111[63] = 0LL;
  LODWORD(v111[64]) = 288;
  LODWORD(v111[67]) = 67108868;
  LODWORD(v111[69]) = 4;
  v111[70] = 0LL;
  LODWORD(v111[71]) = 288;
  LODWORD(v111[74]) = 67108868;
  LODWORD(v111[76]) = 4;
  v111[77] = 0LL;
  LODWORD(v111[78]) = 288;
  LODWORD(v111[81]) = 67108868;
  LODWORD(v111[83]) = 4;
  v111[84] = 0LL;
  LODWORD(v111[85]) = 288;
  LODWORD(v111[88]) = 67108868;
  LODWORD(v111[90]) = 4;
  v111[91] = 0LL;
  LODWORD(v111[92]) = 288;
  LODWORD(v111[95]) = 67108868;
  LODWORD(v111[97]) = 4;
  v111[98] = 0LL;
  LODWORD(v111[99]) = 288;
  LODWORD(v111[102]) = 67108868;
  LODWORD(v111[104]) = 4;
  v111[105] = 0LL;
  LODWORD(v111[106]) = 288;
  LODWORD(v111[109]) = 67108868;
  v111[110] = &v96;
  v111[114] = L"LogDriverVSyncCallback";
  v111[115] = &v60;
  v111[117] = &v97;
  v111[121] = L"MaximumAllowedPreemptionDelay";
  v111[122] = &v68;
  v111[124] = &v98;
  v111[128] = L"ContextSchedulingPenaltyDelay";
  v111[129] = &v69;
  v111[131] = &v99;
  v111[135] = L"BackgroundProcessMaximumAllowedPreemptionDelay";
  v111[136] = &v71;
  v111[138] = &v100;
  v111[142] = L"ForceEnableFlipFenceModel";
  v111[143] = &v67;
  v111[145] = &v101;
  v111[149] = L"YieldPercentage";
  v111[150] = &v65;
  v111[152] = &v66;
  v111[156] = L"ForegroundPriorityBoost";
  v111[157] = &v61;
  v111[159] = &v102;
  v111[163] = L"ForceFlipTrueImmediateMode";
  v111[164] = &v62;
  LODWORD(v111[111]) = 4;
  v111[112] = 0LL;
  LODWORD(v111[113]) = 288;
  LODWORD(v111[116]) = 67108868;
  LODWORD(v111[118]) = 4;
  v111[119] = 0LL;
  LODWORD(v111[120]) = 288;
  LODWORD(v111[123]) = 67108868;
  LODWORD(v111[125]) = 4;
  v111[126] = 0LL;
  LODWORD(v111[127]) = 288;
  LODWORD(v111[130]) = 67108868;
  LODWORD(v111[132]) = 4;
  v111[133] = 0LL;
  LODWORD(v111[134]) = 288;
  LODWORD(v111[137]) = 67108868;
  LODWORD(v111[139]) = 4;
  v111[140] = 0LL;
  LODWORD(v111[141]) = 288;
  LODWORD(v111[144]) = 67108868;
  LODWORD(v111[146]) = 4;
  v111[147] = 0LL;
  LODWORD(v111[148]) = 288;
  LODWORD(v111[151]) = 67108868;
  LODWORD(v111[153]) = 4;
  v111[154] = 0LL;
  LODWORD(v111[155]) = 288;
  LODWORD(v111[158]) = 67108868;
  LODWORD(v111[160]) = 4;
  v111[161] = 0LL;
  LODWORD(v111[162]) = 288;
  LODWORD(v111[165]) = 67108868;
  LODWORD(v111[167]) = 4;
  v111[166] = &v103;
  v111[170] = L"MaxYieldInterval";
  v111[171] = &v70;
  v111[173] = &v104;
  v111[177] = L"MaxFocusGpuQuantumWithoutPresent";
  v111[178] = &v72;
  v111[180] = &v105;
  v111[184] = L"HistoryLogSize";
  v111[185] = &v47;
  v111[187] = &v73;
  v111[191] = L"HwQueuePacketCap";
  v111[192] = &v48;
  v111[194] = &v106;
  v111[198] = L"FlipDoNotFlipMode";
  v111[199] = &v63;
  v111[201] = &v107;
  v111[205] = L"DdiSuspendMode";
  v111[206] = &v64;
  v111[208] = &v108;
  v111[212] = L"PfnCpuOverride";
  v111[213] = &v80;
  v111[215] = &v109;
  v111[219] = L"PerSourceCustomDuration";
  v111[220] = &v81;
  v111[168] = 0LL;
  LODWORD(v111[169]) = 288;
  LODWORD(v111[172]) = 67108868;
  LODWORD(v111[174]) = 4;
  v111[175] = 0LL;
  LODWORD(v111[176]) = 288;
  LODWORD(v111[179]) = 67108868;
  LODWORD(v111[181]) = 4;
  v111[182] = 0LL;
  LODWORD(v111[183]) = 288;
  LODWORD(v111[186]) = 67108868;
  LODWORD(v111[188]) = 4;
  v111[189] = 0LL;
  LODWORD(v111[190]) = 288;
  LODWORD(v111[193]) = 67108868;
  LODWORD(v111[195]) = 4;
  v111[196] = 0LL;
  LODWORD(v111[197]) = 288;
  LODWORD(v111[200]) = 67108868;
  LODWORD(v111[202]) = 4;
  v111[203] = 0LL;
  LODWORD(v111[204]) = 288;
  LODWORD(v111[207]) = 67108868;
  LODWORD(v111[209]) = 4;
  v111[210] = 0LL;
  LODWORD(v111[211]) = 288;
  LODWORD(v111[214]) = 67108868;
  LODWORD(v111[216]) = 4;
  v111[217] = 0LL;
  LODWORD(v111[218]) = 288;
  LODWORD(v111[221]) = 67108868;
  v111[222] = &v110;
  LODWORD(v111[223]) = 4;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Scheduler", v111, 0LL, 0LL);
  NodeConfiguration = VidSchiReadNodeConfiguration(a1, *(_QWORD *)(a1 + 2480));
  v9 = 0;
  if ( *(_DWORD *)(a1 + 72) )
  {
    v10 = NodeConfiguration;
    do
    {
      if ( v10 < 0 )
        goto LABEL_7;
      v44 = *(_DWORD **)(a1 + 2480);
      v12 = v9;
      if ( v9 < *(_DWORD *)(a1 + 2520) )
        v44 += v9;
      if ( !*v44 )
      {
LABEL_7:
        v11 = *(int **)(a1 + 2480);
        v12 = v9;
        if ( v9 < *(_DWORD *)(a1 + 2520) )
          v11 += v9;
        *v11 = v55;
      }
      v8 = *(_QWORD *)(a1 + 2480);
      v13 = *(_DWORD *)(a1 + 2520);
      v14 = (_DWORD *)(v8 + 4 * v12);
      if ( v9 >= v13 )
        v14 = *(_DWORD **)(a1 + 2480);
      if ( *v14 <= 1u )
      {
        v16 = 1;
      }
      else
      {
        v15 = (int *)(v8 + 4 * v12);
        if ( v9 >= v13 )
          v15 = *(int **)(a1 + 2480);
        v16 = *v15;
      }
      v17 = (int *)(v8 + 4 * v12);
      if ( v9 >= v13 )
        v17 = *(int **)(a1 + 2480);
      ++v9;
      *v17 = v16;
    }
    while ( v9 < *(_DWORD *)(a1 + 72) );
  }
  v18 = v62;
  *(_DWORD *)(a1 + 2448) = (v61 != 0 ? 0x400 : 0) | (v60 != 0 ? 0x100 : 0) | (v59 != 0 ? 0x10 : 0) | (v58 != 0) | (v57 != 0 ? 4 : 0) | (v56 != 0 ? 2 : 0) | *(_DWORD *)(a1 + 2448) & 0xFFFFFAE8;
  if ( v18 <= 2 )
    *(_DWORD *)(a1 + 2460) = v18;
  if ( v63 <= 2 )
    *(_DWORD *)(a1 + 2464) = v63;
  if ( v64 <= 2 )
    *(_DWORD *)(a1 + 2468) = v64;
  v19 = v65;
  v20 = v66;
  *(_QWORD *)(a1 + 2696) = 1000LL;
  *(_QWORD *)(a1 + 2704) = 2500LL;
  *(_QWORD *)(a1 + 2712) = 5000LL;
  *(_QWORD *)(a1 + 2720) = 10000LL;
  *(_QWORD *)(a1 + 2728) = 25000LL;
  if ( (unsigned int)(v19 - 1) <= 0x53 )
    v20 = v19;
  *(_QWORD *)(a1 + 2736) = 50000LL;
  *(_DWORD *)(a1 + 200) = v20;
  v21 = (unsigned int)(v20 + 15);
  v22 = v67 == 0;
  *(_DWORD *)(a1 + 204) = v21;
  *(_QWORD *)(a1 + 2744) = 100000LL;
  v23 = (unsigned int)(10000 * v68);
  *(_BYTE *)(a1 + 57) = !v22;
  *(_QWORD *)(a1 + 2752) = 250000LL;
  *(_QWORD *)(a1 + 2760) = 500000LL;
  *(_QWORD *)(a1 + 2672) = v23;
  *(_QWORD *)(a1 + 2680) = (unsigned int)(10000 * v69);
  *(_QWORD *)(a1 + 2768) = (unsigned int)(10000 * v70);
  *(_QWORD *)(a1 + 2688) = (unsigned int)(10000 * v71);
  *(_QWORD *)(a1 + 2776) = (unsigned int)(10000 * v72);
  v24 = v47;
  if ( v47 < 0x10 )
  {
    v24 = 16;
LABEL_58:
    v47 = v24;
    goto LABEL_30;
  }
  if ( v47 > 0x10000 )
  {
    v24 = 0x10000;
    v47 = 0x10000;
    goto LABEL_30;
  }
  if ( ((v47 - 1) & v47) != 0 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v47, v21, v8);
    *(_QWORD *)(v45 + 24) = v47;
    WdLogEvent5_WdAssertion(v45);
    v24 = v73;
    goto LABEL_58;
  }
LABEL_30:
  *(_DWORD *)(a1 + 216) = v24;
  v25 = 14;
  if ( v48 <= 0xE )
  {
    v25 = v48;
    if ( !v48 )
      v25 = 1;
  }
  v48 = v25;
  *(_DWORD *)(a1 + 220) = v25;
  if ( !v74 || (IsEnabled = TdrIsEnabled(), v27 = 512, !IsEnabled) )
    v27 = 0;
  v28 = (_QWORD *)(a1 + 2584);
  v29 = 0LL;
  *(_DWORD *)(a1 + 2448) = v27 | *(_DWORD *)(a1 + 2448) & 0xFFFFFDFF;
  do
  {
    v30 = 1;
    if ( v49 > 1 )
      v30 = v49;
    v31 = (unsigned int)(v30 * *(_DWORD *)((char *)&gulQuantumMultiplierTableByPriorityClass + v29));
    v32 = 1;
    if ( v50 > 1 )
      v32 = v50;
    *(v28 - 6) = v31;
    v33 = *(_DWORD *)((char *)&gulPreemptionQuantumMultiplierTableByPriorityClass + v29);
    v29 += 4LL;
    *v28++ = (unsigned int)(v32 * v33);
  }
  while ( v29 < 24 );
  v34 = 1;
  v35 = *(_DWORD *)(a1 + 2448);
  if ( v51 > 1 )
    v34 = v51;
  *(_DWORD *)(a1 + 2472) = v34;
  v36 = (v76 != 0 ? 0x40 : 0) | (v75 != 0 ? 0x20 : 0) | v35 & 0xFFFFFF9F;
  v37 = -(v77 != 0);
  *(_DWORD *)(a1 + 6344) = v78;
  v38 = v37 & 0x80 | v36 & 0xFFFFFF7F;
  v39 = v53;
  v40 = v52 <= 0x10;
  *(_DWORD *)(a1 + 2448) = v38;
  if ( !v40 )
    v4 = v52;
  v41 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 2532) = v4;
  *(_DWORD *)(a1 + 2324) = v39;
  if ( *(int *)(v41 + 2596) < 1300 )
  {
    if ( v39 >= 4 )
    {
      v46 = v39;
      if ( v39 > 0xFFFFFFFD )
        v46 = -3;
      *(_DWORD *)(a1 + 2324) = v46;
    }
    else
    {
      *(_DWORD *)(a1 + 2324) = 4;
    }
  }
  v42 = v79;
  *(_DWORD *)(a1 + 2664) = v79;
  *(_DWORD *)(a1 + 2656) = v42;
  *(_DWORD *)(a1 + 2648) = v42;
  *(_DWORD *)(a1 + 2640) = v42;
  *(_DWORD *)(a1 + 2632) = v42;
  switch ( v80 )
  {
    case 0:
      if ( (**(_DWORD **)(v41 + 2600) & 0x1000) == 0 )
        break;
LABEL_49:
      *(_DWORD *)(a1 + 224) = 1;
      break;
    case 1:
      goto LABEL_49;
    case 2:
      *(_DWORD *)(a1 + 224) = 2;
      break;
    case 3:
      *(_DWORD *)(a1 + 224) = 0;
      break;
  }
  result = v81;
  *(_BYTE *)(a1 + 6505) = v81;
  return result;
}
