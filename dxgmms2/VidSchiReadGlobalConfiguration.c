bool __fastcall VidSchiReadGlobalConfiguration(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  int v4; // edi
  bool v5; // sf
  bool v6; // of
  int NodeConfiguration; // eax
  unsigned int v8; // ecx
  __int64 v9; // r11
  unsigned int v10; // r9d
  int *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // r9d
  _DWORD *v15; // rax
  int *v16; // rax
  int v17; // r10d
  int *v18; // rax
  int v19; // ecx
  int v20; // ecx
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ecx
  int v26; // eax
  bool IsEnabled; // al
  int v28; // ecx
  _QWORD *v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  bool v33; // cc
  int v34; // eax
  __int64 v35; // rax
  int v36; // eax
  int v37; // edx
  unsigned int v38; // edx
  int v39; // ecx
  unsigned int v40; // edx
  unsigned int v41; // ecx
  __int64 v42; // rdx
  int v43; // eax
  bool result; // al
  _DWORD *v45; // rax
  __int64 v46; // rcx
  int v47; // eax
  unsigned int v48; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v49; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v50; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v51; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v52; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v53; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v54; // [rsp+70h] [rbp-98h] BYREF
  int v55; // [rsp+74h] [rbp-94h] BYREF
  int v56; // [rsp+78h] [rbp-90h] BYREF
  int v57; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v58; // [rsp+80h] [rbp-88h] BYREF
  int v59; // [rsp+84h] [rbp-84h] BYREF
  int v60; // [rsp+88h] [rbp-80h] BYREF
  int v61; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v62; // [rsp+90h] [rbp-78h] BYREF
  int v63; // [rsp+94h] [rbp-74h] BYREF
  int v64; // [rsp+98h] [rbp-70h] BYREF
  int v65; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v66; // [rsp+A0h] [rbp-68h] BYREF
  int v67; // [rsp+A4h] [rbp-64h] BYREF
  int v68; // [rsp+A8h] [rbp-60h] BYREF
  int v69; // [rsp+ACh] [rbp-5Ch] BYREF
  int v70; // [rsp+B0h] [rbp-58h] BYREF
  int v71; // [rsp+B4h] [rbp-54h] BYREF
  int v72; // [rsp+B8h] [rbp-50h] BYREF
  int v73; // [rsp+BCh] [rbp-4Ch] BYREF
  int v74; // [rsp+C0h] [rbp-48h] BYREF
  int v75; // [rsp+C4h] [rbp-44h] BYREF
  int v76; // [rsp+C8h] [rbp-40h] BYREF
  int v77; // [rsp+CCh] [rbp-3Ch] BYREF
  int v78; // [rsp+D0h] [rbp-38h] BYREF
  int v79; // [rsp+D4h] [rbp-34h] BYREF
  int v80; // [rsp+D8h] [rbp-30h] BYREF
  int v81; // [rsp+DCh] [rbp-2Ch] BYREF
  BOOL v82; // [rsp+E0h] [rbp-28h] BYREF
  int v83; // [rsp+E4h] [rbp-24h] BYREF
  int v84; // [rsp+E8h] [rbp-20h] BYREF
  int v85; // [rsp+ECh] [rbp-1Ch] BYREF
  int v86; // [rsp+F0h] [rbp-18h] BYREF
  int v87; // [rsp+F4h] [rbp-14h] BYREF
  int v88; // [rsp+F8h] [rbp-10h] BYREF
  int v89; // [rsp+FCh] [rbp-Ch] BYREF
  int v90; // [rsp+100h] [rbp-8h] BYREF
  int v91; // [rsp+104h] [rbp-4h] BYREF
  int v92; // [rsp+108h] [rbp+0h] BYREF
  int v93; // [rsp+10Ch] [rbp+4h] BYREF
  int v94; // [rsp+110h] [rbp+8h] BYREF
  int v95; // [rsp+114h] [rbp+Ch] BYREF
  int v96; // [rsp+118h] [rbp+10h] BYREF
  int v97; // [rsp+11Ch] [rbp+14h] BYREF
  int v98; // [rsp+120h] [rbp+18h] BYREF
  int v99; // [rsp+124h] [rbp+1Ch] BYREF
  int v100; // [rsp+128h] [rbp+20h] BYREF
  int v101; // [rsp+12Ch] [rbp+24h] BYREF
  int v102; // [rsp+130h] [rbp+28h] BYREF
  int v103; // [rsp+134h] [rbp+2Ch] BYREF
  int v104; // [rsp+138h] [rbp+30h] BYREF
  int v105; // [rsp+13Ch] [rbp+34h] BYREF
  int v106; // [rsp+140h] [rbp+38h] BYREF
  unsigned int v107; // [rsp+144h] [rbp+3Ch] BYREF
  int v108; // [rsp+148h] [rbp+40h] BYREF
  int v109; // [rsp+14Ch] [rbp+44h] BYREF
  int v110; // [rsp+150h] [rbp+48h] BYREF
  BOOL v111; // [rsp+154h] [rbp+4Ch] BYREF
  _QWORD v112[232]; // [rsp+158h] [rbp+50h] BYREF

  v84 = 25000;
  v83 = 0;
  v85 = 50000;
  v2 = *(_DWORD *)(a1 + 228);
  v89 = 0;
  v86 = 1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 16;
  v87 = 2;
  v105 = 16;
  v88 = 3;
  v90 = 0;
  v91 = 1;
  v92 = 1;
  v93 = 0;
  v96 = 0;
  v94 = 20;
  v95 = 2;
  v55 = 7;
  v98 = 0;
  v99 = 900;
  v100 = 1000;
  v97 = 1;
  v101 = 8;
  v102 = 0;
  v67 = 10;
  v103 = 1;
  v104 = 0;
  v108 = 0;
  v109 = 0;
  v110 = 0;
  v106 = 100;
  v74 = 64;
  v107 = v2;
  v6 = __OFSUB__(*(_DWORD *)(v3 + 2820), 2000);
  v5 = *(_DWORD *)(v3 + 2820) - 2000 < 0;
  v57 = 0;
  v50 = 25000;
  v111 = v5 == v6;
  v82 = v111;
  v51 = 50000;
  v59 = 1;
  v56 = 2;
  v52 = 3;
  v80 = 0;
  v58 = 0;
  v60 = 1;
  v76 = 1;
  v77 = 0;
  v78 = 0;
  v53 = 20;
  v79 = 2;
  v54 = 7;
  v61 = 0;
  v69 = 900;
  v70 = 1000;
  v75 = 1;
  v72 = 8;
  v68 = 0;
  v66 = 10;
  v62 = 1;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v71 = 16;
  v73 = 100;
  v48 = 64;
  v81 = 0;
  v49 = v2;
  if ( *(int *)(v3 + 2820) >= 1300 && *(_BYTE *)(v3 + 2757) )
  {
    v55 = 1;
    v54 = 1;
  }
  memset(v112, 0, 0x738uLL);
  v112[7] = 0LL;
  LODWORD(v112[1]) = 288;
  LODWORD(v112[4]) = 67108868;
  LODWORD(v112[6]) = 4;
  v112[2] = L"AutoSyncToCPUPriority";
  v112[3] = &v57;
  v112[5] = &v83;
  v112[9] = L"QuantumUnit";
  v112[10] = &v50;
  v112[12] = &v84;
  v112[16] = L"PreemptionQuantumUnit";
  v112[17] = &v51;
  v112[19] = &v85;
  v112[23] = L"EnablePreemption";
  v112[24] = &v59;
  v112[26] = &v86;
  v112[30] = L"HwQueuedRenderPacketGroupLimit";
  v112[31] = &v56;
  v112[33] = &v87;
  v112[37] = L"QueuedPresentLimit";
  v112[38] = &v52;
  v112[40] = &v88;
  v112[44] = L"InitDriverFenceId";
  v112[45] = &v80;
  v112[47] = &v89;
  v112[51] = L"CarryOverUsedQuantum";
  LODWORD(v112[8]) = 288;
  LODWORD(v112[11]) = 67108868;
  LODWORD(v112[13]) = 4;
  v112[14] = 0LL;
  LODWORD(v112[15]) = 288;
  LODWORD(v112[18]) = 67108868;
  LODWORD(v112[20]) = 4;
  v112[21] = 0LL;
  LODWORD(v112[22]) = 288;
  LODWORD(v112[25]) = 67108868;
  LODWORD(v112[27]) = 4;
  v112[28] = 0LL;
  LODWORD(v112[29]) = 288;
  LODWORD(v112[32]) = 67108868;
  LODWORD(v112[34]) = 4;
  v112[35] = 0LL;
  LODWORD(v112[36]) = 288;
  LODWORD(v112[39]) = 67108868;
  LODWORD(v112[41]) = 4;
  v112[42] = 0LL;
  LODWORD(v112[43]) = 288;
  LODWORD(v112[46]) = 67108868;
  LODWORD(v112[48]) = 4;
  v112[49] = 0LL;
  LODWORD(v112[50]) = 288;
  v112[52] = &v58;
  v112[54] = &v90;
  v112[58] = L"EnableFlipImmediateSwFlipQueue";
  v112[59] = &v60;
  v112[61] = &v91;
  v112[65] = L"AdjustWorkerThreadPriority";
  v112[66] = &v76;
  v112[68] = &v92;
  v112[72] = L"CountFlipTowardHwLimit";
  v112[73] = &v77;
  v112[75] = &v93;
  v112[79] = L"NumberOfDmaPacketPool";
  v112[80] = &v53;
  v112[82] = &v94;
  v112[86] = L"ProfileLevel";
  v112[87] = &v79;
  v112[89] = &v95;
  v112[93] = L"VSyncIdleTimeout";
  v112[94] = &v54;
  v112[96] = &v55;
  v112[100] = L"CountPresentTowardHwLimit";
  v112[101] = &v78;
  v112[103] = &v96;
  v112[107] = L"EnableContextDelay";
  v112[108] = &v75;
  LODWORD(v112[53]) = 67108868;
  LODWORD(v112[55]) = 4;
  v112[56] = 0LL;
  LODWORD(v112[57]) = 288;
  LODWORD(v112[60]) = 67108868;
  LODWORD(v112[62]) = 4;
  v112[63] = 0LL;
  LODWORD(v112[64]) = 288;
  LODWORD(v112[67]) = 67108868;
  LODWORD(v112[69]) = 4;
  v112[70] = 0LL;
  LODWORD(v112[71]) = 288;
  LODWORD(v112[74]) = 67108868;
  LODWORD(v112[76]) = 4;
  v112[77] = 0LL;
  LODWORD(v112[78]) = 288;
  LODWORD(v112[81]) = 67108868;
  LODWORD(v112[83]) = 4;
  v112[84] = 0LL;
  LODWORD(v112[85]) = 288;
  LODWORD(v112[88]) = 67108868;
  LODWORD(v112[90]) = 4;
  v112[91] = 0LL;
  LODWORD(v112[92]) = 288;
  LODWORD(v112[95]) = 67108868;
  LODWORD(v112[97]) = 4;
  v112[98] = 0LL;
  LODWORD(v112[99]) = 288;
  LODWORD(v112[102]) = 67108868;
  LODWORD(v112[104]) = 4;
  v112[105] = 0LL;
  LODWORD(v112[106]) = 288;
  LODWORD(v112[109]) = 67108868;
  v112[110] = &v97;
  v112[114] = L"LogDriverVSyncCallback";
  v112[115] = &v61;
  v112[117] = &v98;
  v112[121] = L"MaximumAllowedPreemptionDelay";
  v112[122] = &v69;
  v112[124] = &v99;
  v112[128] = L"ContextSchedulingPenaltyDelay";
  v112[129] = &v70;
  v112[131] = &v100;
  v112[135] = L"BackgroundProcessMaximumAllowedPreemptionDelay";
  v112[136] = &v72;
  v112[138] = &v101;
  v112[142] = L"ForceEnableFlipFenceModel";
  v112[143] = &v68;
  v112[145] = &v102;
  v112[149] = L"YieldPercentage";
  v112[150] = &v66;
  v112[152] = &v67;
  v112[156] = L"ForegroundPriorityBoost";
  v112[157] = &v62;
  v112[159] = &v103;
  v112[163] = L"ForceFlipTrueImmediateMode";
  v112[164] = &v63;
  LODWORD(v112[111]) = 4;
  v112[112] = 0LL;
  LODWORD(v112[113]) = 288;
  LODWORD(v112[116]) = 67108868;
  LODWORD(v112[118]) = 4;
  v112[119] = 0LL;
  LODWORD(v112[120]) = 288;
  LODWORD(v112[123]) = 67108868;
  LODWORD(v112[125]) = 4;
  v112[126] = 0LL;
  LODWORD(v112[127]) = 288;
  LODWORD(v112[130]) = 67108868;
  LODWORD(v112[132]) = 4;
  v112[133] = 0LL;
  LODWORD(v112[134]) = 288;
  LODWORD(v112[137]) = 67108868;
  LODWORD(v112[139]) = 4;
  v112[140] = 0LL;
  LODWORD(v112[141]) = 288;
  LODWORD(v112[144]) = 67108868;
  LODWORD(v112[146]) = 4;
  v112[147] = 0LL;
  LODWORD(v112[148]) = 288;
  LODWORD(v112[151]) = 67108868;
  LODWORD(v112[153]) = 4;
  v112[154] = 0LL;
  LODWORD(v112[155]) = 288;
  LODWORD(v112[158]) = 67108868;
  LODWORD(v112[160]) = 4;
  v112[161] = 0LL;
  LODWORD(v112[162]) = 288;
  LODWORD(v112[165]) = 67108868;
  LODWORD(v112[167]) = 4;
  v112[166] = &v104;
  v112[170] = L"MaxYieldInterval";
  v112[171] = &v71;
  v112[173] = &v105;
  v112[177] = L"MaxFocusGpuQuantumWithoutPresent";
  v112[178] = &v73;
  v112[180] = &v106;
  v112[184] = L"HistoryLogSize";
  v112[185] = &v48;
  v112[187] = &v74;
  v112[191] = L"HwQueuePacketCap";
  v112[192] = &v49;
  v112[194] = &v107;
  v112[198] = L"FlipDoNotFlipMode";
  v112[199] = &v64;
  v112[201] = &v108;
  v112[205] = L"DdiSuspendMode";
  v112[206] = &v65;
  v112[208] = &v109;
  v112[212] = L"PfnCpuOverride";
  v112[213] = &v81;
  v112[215] = &v110;
  v112[219] = L"PerSourceCustomDuration";
  v112[220] = &v82;
  v112[168] = 0LL;
  LODWORD(v112[169]) = 288;
  LODWORD(v112[172]) = 67108868;
  LODWORD(v112[174]) = 4;
  v112[175] = 0LL;
  LODWORD(v112[176]) = 288;
  LODWORD(v112[179]) = 67108868;
  LODWORD(v112[181]) = 4;
  v112[182] = 0LL;
  LODWORD(v112[183]) = 288;
  LODWORD(v112[186]) = 67108868;
  LODWORD(v112[188]) = 4;
  v112[189] = 0LL;
  LODWORD(v112[190]) = 288;
  LODWORD(v112[193]) = 67108868;
  LODWORD(v112[195]) = 4;
  v112[196] = 0LL;
  LODWORD(v112[197]) = 288;
  LODWORD(v112[200]) = 67108868;
  LODWORD(v112[202]) = 4;
  v112[203] = 0LL;
  LODWORD(v112[204]) = 288;
  LODWORD(v112[207]) = 67108868;
  LODWORD(v112[209]) = 4;
  v112[210] = 0LL;
  LODWORD(v112[211]) = 288;
  LODWORD(v112[214]) = 67108868;
  LODWORD(v112[216]) = 4;
  v112[217] = 0LL;
  LODWORD(v112[218]) = 288;
  LODWORD(v112[221]) = 67108868;
  v112[222] = &v111;
  LODWORD(v112[223]) = 4;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Scheduler", v112, 0LL, 0LL);
  NodeConfiguration = VidSchiReadNodeConfiguration(a1, *(_QWORD *)(a1 + 2568));
  v8 = 0;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v9 = NodeConfiguration;
    do
    {
      v10 = *(_DWORD *)(a1 + 2608);
      if ( v9 < 0 )
        goto LABEL_7;
      v45 = *(_DWORD **)(a1 + 2568);
      v12 = v8;
      if ( v8 < v10 )
        v45 += v8;
      if ( !*v45 )
      {
LABEL_7:
        v11 = *(int **)(a1 + 2568);
        v12 = v8;
        if ( v8 < v10 )
          v11 += v8;
        *v11 = v56;
      }
      v13 = *(_QWORD *)(a1 + 2568);
      v14 = *(_DWORD *)(a1 + 2608);
      v15 = (_DWORD *)(v13 + 4 * v12);
      if ( v8 >= v14 )
        v15 = *(_DWORD **)(a1 + 2568);
      if ( *v15 <= 1u )
      {
        v17 = 1;
      }
      else
      {
        v16 = (int *)(v13 + 4 * v12);
        if ( v8 >= v14 )
          v16 = *(int **)(a1 + 2568);
        v17 = *v16;
      }
      v18 = (int *)(v13 + 4 * v12);
      if ( v8 >= v14 )
        v18 = *(int **)(a1 + 2568);
      ++v8;
      *v18 = v17;
    }
    while ( v8 < *(_DWORD *)(a1 + 80) );
  }
  v19 = v63;
  *(_DWORD *)(a1 + 2536) = (v62 != 0 ? 0x400 : 0) | (v61 != 0 ? 0x100 : 0) | (v60 != 0 ? 0x10 : 0) | (v59 != 0) | (v58 != 0 ? 4 : 0) | (v57 != 0 ? 2 : 0) | *(_DWORD *)(a1 + 2536) & 0xFFFFFAE8;
  if ( !v19 || (unsigned int)(v19 - 1) <= 1 )
    *(_DWORD *)(a1 + 2548) = v19;
  if ( !v64 || (unsigned int)(v64 - 1) <= 1 )
    *(_DWORD *)(a1 + 2552) = v64;
  if ( !v65 || (unsigned int)(v65 - 1) <= 1 )
    *(_DWORD *)(a1 + 2556) = v65;
  v20 = v66;
  if ( (unsigned int)(v66 - 1) > 0x53 )
    v20 = v67;
  v21 = v68 == 0;
  *(_DWORD *)(a1 + 208) = v20;
  *(_DWORD *)(a1 + 212) = v20 + 15;
  v22 = (unsigned int)(10000 * v69);
  *(_BYTE *)(a1 + 57) = !v21;
  *(_QWORD *)(a1 + 2792) = 1000LL;
  *(_QWORD *)(a1 + 2800) = 2500LL;
  *(_QWORD *)(a1 + 2808) = 5000LL;
  *(_QWORD *)(a1 + 2768) = v22;
  v23 = (unsigned int)(10000 * v70);
  *(_QWORD *)(a1 + 2816) = 10000LL;
  *(_QWORD *)(a1 + 2824) = 25000LL;
  *(_QWORD *)(a1 + 2832) = 50000LL;
  *(_QWORD *)(a1 + 2840) = 100000LL;
  *(_QWORD *)(a1 + 2776) = v23;
  v24 = (unsigned int)(10000 * v71);
  *(_QWORD *)(a1 + 2848) = 250000LL;
  *(_QWORD *)(a1 + 2856) = 500000LL;
  *(_QWORD *)(a1 + 2864) = v24;
  *(_QWORD *)(a1 + 2784) = (unsigned int)(10000 * v72);
  *(_QWORD *)(a1 + 2872) = (unsigned int)(10000 * v73);
  v25 = v48;
  if ( v48 < 0x10 )
  {
    v25 = 16;
LABEL_64:
    v48 = v25;
    goto LABEL_30;
  }
  if ( v48 > 0x10000 )
  {
    v25 = 0x10000;
    v48 = 0x10000;
    goto LABEL_30;
  }
  if ( ((v48 - 1) & v48) != 0 )
  {
    WdLogSingleEntry1(1LL, v48);
    DxgkLogInternalTriageEvent(v46, 0x40000LL);
    v25 = v74;
    goto LABEL_64;
  }
LABEL_30:
  *(_DWORD *)(a1 + 224) = v25;
  v26 = 14;
  if ( v49 <= 0xE )
  {
    v26 = v49;
    if ( !v49 )
      v26 = 1;
  }
  v49 = v26;
  *(_DWORD *)(a1 + 228) = v26;
  if ( !v75 || (IsEnabled = TdrIsEnabled(), v28 = 512, !IsEnabled) )
    v28 = 0;
  v29 = (_QWORD *)(a1 + 2680);
  v30 = v28 | *(_DWORD *)(a1 + 2536) & 0xFFFFFDFF;
  v31 = 0LL;
  *(_DWORD *)(a1 + 2536) = v30;
  do
  {
    v32 = 1;
    if ( v50 > 1 )
      v32 = v50;
    v33 = v51 <= 1;
    *(v29 - 6) = (unsigned int)(*(_DWORD *)((char *)&gulQuantumMultiplierTableByPriorityClass + v31) * v32);
    v34 = 1;
    if ( !v33 )
      v34 = v51;
    v35 = (unsigned int)(*(_DWORD *)((char *)&gulPreemptionQuantumMultiplierTableByPriorityClass + v31) * v34);
    v31 += 4LL;
    *v29++ = v35;
  }
  while ( v31 < 24 );
  v36 = 1;
  v37 = *(_DWORD *)(a1 + 2536);
  if ( v52 > 1 )
    v36 = v52;
  *(_DWORD *)(a1 + 2560) = v36;
  v38 = (v77 != 0 ? 0x40 : 0) | (v76 != 0 ? 0x20 : 0) | v37 & 0xFFFFFF9F;
  v39 = -(v78 != 0);
  *(_DWORD *)(a1 + 6472) = v79;
  v40 = v39 & 0x80 | v38 & 0xFFFFFF7F;
  v41 = v54;
  v33 = v53 <= 0x10;
  *(_DWORD *)(a1 + 2536) = v40;
  if ( !v33 )
    v4 = v53;
  v42 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 2620) = v4;
  *(_DWORD *)(a1 + 2404) = v41;
  if ( *(int *)(v42 + 2820) < 1300 )
  {
    if ( v41 >= 4 )
    {
      v47 = v41;
      if ( v41 > 0xFFFFFFFD )
        v47 = -3;
      *(_DWORD *)(a1 + 2404) = v47;
    }
    else
    {
      *(_DWORD *)(a1 + 2404) = 4;
    }
  }
  v43 = v80;
  *(_DWORD *)(a1 + 2760) = v80;
  *(_DWORD *)(a1 + 2752) = v43;
  *(_DWORD *)(a1 + 2744) = v43;
  *(_DWORD *)(a1 + 2736) = v43;
  *(_DWORD *)(a1 + 2728) = v43;
  switch ( v81 )
  {
    case 0:
      if ( (**(_DWORD **)(v42 + 2824) & 0x1000) == 0 )
        break;
LABEL_49:
      *(_DWORD *)(a1 + 232) = 1;
      break;
    case 1:
      goto LABEL_49;
    case 2:
      *(_DWORD *)(a1 + 232) = 2;
      break;
    case 3:
      *(_DWORD *)(a1 + 232) = 0;
      break;
  }
  result = v82;
  *(_BYTE *)(a1 + 6633) = v82;
  return result;
}
