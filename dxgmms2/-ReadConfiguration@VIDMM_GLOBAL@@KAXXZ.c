void VIDMM_GLOBAL::ReadConfiguration(void)
{
  int v0; // ebx
  unsigned __int64 v1; // rsi
  __int64 PhysicalMemoryRanges; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rax
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int *v9; // r14
  ULONG v10; // esi
  __int64 v11; // r15
  unsigned int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v19; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v20; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v21; // [rsp+64h] [rbp-A4h] BYREF
  int v22; // [rsp+68h] [rbp-A0h] BYREF
  int v23; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v24; // [rsp+70h] [rbp-98h] BYREF
  int v25; // [rsp+74h] [rbp-94h] BYREF
  int v26; // [rsp+78h] [rbp-90h] BYREF
  int v27; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v28; // [rsp+80h] [rbp-88h] BYREF
  int v29; // [rsp+84h] [rbp-84h] BYREF
  int v30; // [rsp+88h] [rbp-80h] BYREF
  int v31; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v32; // [rsp+90h] [rbp-78h] BYREF
  int v33; // [rsp+94h] [rbp-74h] BYREF
  int v34; // [rsp+98h] [rbp-70h] BYREF
  int v35; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v36; // [rsp+A0h] [rbp-68h] BYREF
  int v37; // [rsp+A4h] [rbp-64h] BYREF
  int v38; // [rsp+A8h] [rbp-60h] BYREF
  int v39; // [rsp+ACh] [rbp-5Ch] BYREF
  int v40; // [rsp+B0h] [rbp-58h] BYREF
  int v41; // [rsp+B4h] [rbp-54h] BYREF
  int v42; // [rsp+B8h] [rbp-50h] BYREF
  int v43; // [rsp+BCh] [rbp-4Ch] BYREF
  int v44; // [rsp+C0h] [rbp-48h] BYREF
  int v45; // [rsp+C4h] [rbp-44h] BYREF
  int v46; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v47; // [rsp+CCh] [rbp-3Ch] BYREF
  int v48; // [rsp+D0h] [rbp-38h] BYREF
  int v49; // [rsp+D4h] [rbp-34h] BYREF
  int v50; // [rsp+D8h] [rbp-30h] BYREF
  int v51; // [rsp+DCh] [rbp-2Ch] BYREF
  unsigned int v52; // [rsp+E0h] [rbp-28h] BYREF
  int v53; // [rsp+E4h] [rbp-24h] BYREF
  int v54; // [rsp+E8h] [rbp-20h] BYREF
  int v55; // [rsp+ECh] [rbp-1Ch] BYREF
  int v56; // [rsp+F0h] [rbp-18h] BYREF
  int v57; // [rsp+F4h] [rbp-14h] BYREF
  int v58; // [rsp+F8h] [rbp-10h] BYREF
  int v59; // [rsp+FCh] [rbp-Ch] BYREF
  int v60; // [rsp+100h] [rbp-8h] BYREF
  int v61; // [rsp+104h] [rbp-4h] BYREF
  int v62; // [rsp+108h] [rbp+0h] BYREF
  int v63; // [rsp+10Ch] [rbp+4h] BYREF
  int v64; // [rsp+110h] [rbp+8h] BYREF
  int v65; // [rsp+114h] [rbp+Ch] BYREF
  int v66; // [rsp+118h] [rbp+10h] BYREF
  int v67; // [rsp+11Ch] [rbp+14h] BYREF
  int v68; // [rsp+120h] [rbp+18h] BYREF
  int v69; // [rsp+124h] [rbp+1Ch] BYREF
  int v70; // [rsp+128h] [rbp+20h] BYREF
  int v71; // [rsp+12Ch] [rbp+24h] BYREF
  int v72; // [rsp+130h] [rbp+28h] BYREF
  int v73; // [rsp+134h] [rbp+2Ch] BYREF
  int v74; // [rsp+138h] [rbp+30h] BYREF
  int v75; // [rsp+13Ch] [rbp+34h] BYREF
  int v76; // [rsp+140h] [rbp+38h] BYREF
  int v77; // [rsp+144h] [rbp+3Ch] BYREF
  int v78; // [rsp+148h] [rbp+40h] BYREF
  int v79; // [rsp+14Ch] [rbp+44h] BYREF
  int v80; // [rsp+150h] [rbp+48h] BYREF
  int v81; // [rsp+154h] [rbp+4Ch] BYREF
  int v82; // [rsp+158h] [rbp+50h] BYREF
  int v83; // [rsp+15Ch] [rbp+54h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+160h] [rbp+58h] BYREF
  struct _UNICODE_STRING String; // [rsp+170h] [rbp+68h] BYREF
  __int64 v86; // [rsp+180h] [rbp+78h] BYREF
  __int64 v87; // [rsp+188h] [rbp+80h] BYREF
  __int64 v88; // [rsp+190h] [rbp+88h] BYREF
  __int128 v89; // [rsp+198h] [rbp+90h]
  __int128 v90; // [rsp+1A8h] [rbp+A0h]
  __int128 v91; // [rsp+1B8h] [rbp+B0h]
  __int64 v92; // [rsp+1C8h] [rbp+C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 v94; // [rsp+1E0h] [rbp+D8h] BYREF
  SIZE_T v95; // [rsp+1E8h] [rbp+E0h]
  __int64 v96; // [rsp+1F0h] [rbp+E8h] BYREF
  PHYSICAL_ADDRESS v97; // [rsp+1F8h] [rbp+F0h]
  __int64 v98; // [rsp+200h] [rbp+F8h] BYREF
  PHYSICAL_ADDRESS v99; // [rsp+208h] [rbp+100h]
  _OWORD v100[126]; // [rsp+218h] [rbp+110h] BYREF
  char v101; // [rsp+9F8h] [rbp+8F0h] BYREF
  _BYTE v102[64]; // [rsp+A08h] [rbp+900h] BYREF

  v0 = 0;
  v1 = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRangesEx(0LL);
  v3 = (_QWORD *)PhysicalMemoryRanges;
  if ( PhysicalMemoryRanges )
  {
    v4 = *(_QWORD *)(PhysicalMemoryRanges + 8);
    v5 = 0;
    while ( v4 )
    {
      v1 += v4;
      v4 = v3[2 * (unsigned int)++v5 + 1];
    }
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    _InterlockedAdd(&dword_1C0076890, 1u);
    WdLogSingleEntry1(6LL, 47LL);
    DxgkLogInternalTriageEvent(v16, 262145LL);
    v1 = 0x20000000LL;
  }
  qword_1C0076290 = v1;
  v22 = 25;
  v18 = 25;
  qword_1C0076288 = v1;
  v23 = 40;
  v19 = 40;
  v53 = 0;
  v20 = 0;
  v54 = 10;
  v55 = 15;
  v35 = 15;
  v34 = 10;
  v56 = 5;
  v36 = 5;
  v57 = 300;
  v37 = 300;
  v6 = 256;
  if ( v1 > 0x20000000 )
    v6 = 1024;
  v63 = 10;
  v59 = v6;
  v25 = v6;
  v7 = 0x800000;
  if ( v1 > 0x20000000 )
    v7 = 0x2000000;
  v29 = 10;
  v61 = v7;
  v27 = v7;
  v8 = 0x400000;
  if ( v1 > 0x20000000 )
    v8 = 0x1000000;
  v58 = 0;
  v62 = v8;
  v28 = v8;
  v24 = 0;
  v60 = 4;
  v26 = 4;
  v65 = 1;
  v31 = 1;
  v66 = 1;
  v33 = 1;
  v64 = g_IsInternalRelease != 0 ? 0x40 : 0;
  v30 = v64;
  v68 = 0x100000;
  v38 = 0x100000;
  v67 = 1;
  v32 = 1;
  v73 = 8;
  v43 = 8;
  v69 = 0x800000;
  v39 = 0x800000;
  v70 = 60;
  v40 = 60;
  v71 = 60;
  v41 = 60;
  v72 = 1;
  v42 = 1;
  v74 = 2;
  v44 = 2;
  v75 = 0;
  v45 = 0;
  v76 = 0;
  v46 = 0;
  v78 = 1;
  v48 = 1;
  v77 = 200;
  v47 = 200;
  v79 = 4096;
  v49 = 4096;
  v81 = 20;
  v51 = 20;
  v88 = 0xFFFFFFFFLL;
  v99.QuadPart = 0xFFFFFFFFLL;
  v82 = 900;
  v52 = 900;
  *(_QWORD *)&v100[1] = L"PinnedMemoryLimit";
  *((_QWORD *)&v100[1] + 1) = &v18;
  *((_QWORD *)&v100[2] + 1) = &v22;
  *((_QWORD *)&v100[4] + 1) = L"PinnedApertureMemoryLimit";
  *(_QWORD *)&v100[5] = &v19;
  *(_QWORD *)&v100[6] = &v23;
  *(_QWORD *)&v100[8] = L"PagesHistory";
  *((_QWORD *)&v100[8] + 1) = &v20;
  *((_QWORD *)&v100[9] + 1) = &v53;
  *((_QWORD *)&v100[11] + 1) = L"MemTransferThreshold";
  *(_QWORD *)&v100[12] = &v34;
  *(_QWORD *)&v100[13] = &v54;
  *(_QWORD *)&v100[15] = L"ExcessiveMemTransferFlipThreshold";
  *((_QWORD *)&v100[15] + 1) = &v35;
  *((_QWORD *)&v100[16] + 1) = &v55;
  v80 = 6;
  v50 = 6;
  v86 = 0LL;
  v94 = 16LL;
  v95 = 0LL;
  v87 = 0LL;
  v96 = 16LL;
  v97.QuadPart = 0LL;
  v98 = 16LL;
  *(_QWORD *)&v100[0] = 0LL;
  DWORD2(v100[0]) = 288;
  LODWORD(v100[2]) = 67108868;
  LODWORD(v100[3]) = 4;
  *((_QWORD *)&v100[3] + 1) = 0LL;
  LODWORD(v100[4]) = 288;
  DWORD2(v100[5]) = 67108868;
  DWORD2(v100[6]) = 4;
  *(_QWORD *)&v100[7] = 0LL;
  DWORD2(v100[7]) = 288;
  LODWORD(v100[9]) = 67108868;
  LODWORD(v100[10]) = 4;
  *((_QWORD *)&v100[10] + 1) = 0LL;
  LODWORD(v100[11]) = 288;
  DWORD2(v100[12]) = 67108868;
  DWORD2(v100[13]) = 4;
  *(_QWORD *)&v100[14] = 0LL;
  DWORD2(v100[14]) = 288;
  LODWORD(v100[16]) = 67108868;
  LODWORD(v100[17]) = 4;
  *((_QWORD *)&v100[17] + 1) = 0LL;
  LODWORD(v100[18]) = 288;
  *((_QWORD *)&v100[18] + 1) = L"ExcessiveMemTransferPenalty";
  *(_QWORD *)&v100[19] = &v36;
  *(_QWORD *)&v100[20] = &v56;
  *(_QWORD *)&v100[22] = L"EventThrottleThreshold";
  *((_QWORD *)&v100[22] + 1) = &v37;
  *((_QWORD *)&v100[23] + 1) = &v57;
  *((_QWORD *)&v100[25] + 1) = L"DisablePrefetching";
  *(_QWORD *)&v100[26] = &v24;
  *(_QWORD *)&v100[27] = &v58;
  *(_QWORD *)&v100[29] = L"NbDmaBufferLimitPerDevice";
  *((_QWORD *)&v100[29] + 1) = &v25;
  *((_QWORD *)&v100[30] + 1) = &v59;
  *((_QWORD *)&v100[32] + 1) = L"NbCddDmaBufferLimitPerDevice";
  *(_QWORD *)&v100[33] = &v26;
  *(_QWORD *)&v100[34] = &v60;
  *(_QWORD *)&v100[36] = L"DmaBufferBytesLimitAllDevices";
  *((_QWORD *)&v100[36] + 1) = &v27;
  *((_QWORD *)&v100[37] + 1) = &v61;
  *((_QWORD *)&v100[39] + 1) = L"DmaBufferListBytesLimitAllDevices";
  *(_QWORD *)&v100[40] = &v28;
  *(_QWORD *)&v100[41] = &v62;
  *(_QWORD *)&v100[43] = L"NbDmaBufferLimitCompareWatermark";
  *((_QWORD *)&v100[43] + 1) = &v29;
  *((_QWORD *)&v100[44] + 1) = &v63;
  *((_QWORD *)&v100[46] + 1) = L"NbPagingHistoryRecords";
  DWORD2(v100[19]) = 67108868;
  DWORD2(v100[20]) = 4;
  *(_QWORD *)&v100[21] = 0LL;
  DWORD2(v100[21]) = 288;
  LODWORD(v100[23]) = 67108868;
  LODWORD(v100[24]) = 4;
  *((_QWORD *)&v100[24] + 1) = 0LL;
  LODWORD(v100[25]) = 288;
  DWORD2(v100[26]) = 67108868;
  DWORD2(v100[27]) = 4;
  *(_QWORD *)&v100[28] = 0LL;
  DWORD2(v100[28]) = 288;
  LODWORD(v100[30]) = 67108868;
  LODWORD(v100[31]) = 4;
  *((_QWORD *)&v100[31] + 1) = 0LL;
  LODWORD(v100[32]) = 288;
  DWORD2(v100[33]) = 67108868;
  DWORD2(v100[34]) = 4;
  *(_QWORD *)&v100[35] = 0LL;
  DWORD2(v100[35]) = 288;
  LODWORD(v100[37]) = 67108868;
  LODWORD(v100[38]) = 4;
  *((_QWORD *)&v100[38] + 1) = 0LL;
  LODWORD(v100[39]) = 288;
  DWORD2(v100[40]) = 67108868;
  DWORD2(v100[41]) = 4;
  *(_QWORD *)&v100[42] = 0LL;
  DWORD2(v100[42]) = 288;
  LODWORD(v100[44]) = 67108868;
  LODWORD(v100[45]) = 4;
  *((_QWORD *)&v100[45] + 1) = 0LL;
  LODWORD(v100[46]) = 288;
  DWORD2(v100[47]) = 67108868;
  *(_QWORD *)&v100[47] = &v30;
  *(_QWORD *)&v100[48] = &v64;
  *(_QWORD *)&v100[50] = L"PinDWMAllocationBackingStore";
  *((_QWORD *)&v100[50] + 1) = &v31;
  *((_QWORD *)&v100[51] + 1) = &v65;
  *((_QWORD *)&v100[53] + 1) = L"RemovePagesFromWorkingSetOnPagingForDwm";
  *(_QWORD *)&v100[54] = &v33;
  *(_QWORD *)&v100[55] = &v66;
  *(_QWORD *)&v100[57] = L"UseUnreset";
  *((_QWORD *)&v100[57] + 1) = &v32;
  *((_QWORD *)&v100[58] + 1) = &v67;
  *((_QWORD *)&v100[60] + 1) = L"PrivateHeapPackingThreshold";
  *(_QWORD *)&v100[61] = &v38;
  *(_QWORD *)&v100[62] = &v68;
  *(_QWORD *)&v100[64] = L"PrivateHeapPackingBlockSize";
  *((_QWORD *)&v100[64] + 1) = &v39;
  *((_QWORD *)&v100[65] + 1) = &v69;
  *((_QWORD *)&v100[67] + 1) = L"EvictTemporaryPeriod";
  *(_QWORD *)&v100[68] = &v40;
  *(_QWORD *)&v100[69] = &v70;
  *(_QWORD *)&v100[71] = L"EvictUnusedPeriod";
  *((_QWORD *)&v100[71] + 1) = &v41;
  *((_QWORD *)&v100[72] + 1) = &v71;
  *((_QWORD *)&v100[74] + 1) = L"ProcessPendingOfferPeriod";
  DWORD2(v100[48]) = 4;
  *(_QWORD *)&v100[49] = 0LL;
  DWORD2(v100[49]) = 288;
  LODWORD(v100[51]) = 67108868;
  LODWORD(v100[52]) = 4;
  *((_QWORD *)&v100[52] + 1) = 0LL;
  LODWORD(v100[53]) = 288;
  DWORD2(v100[54]) = 67108868;
  DWORD2(v100[55]) = 4;
  *(_QWORD *)&v100[56] = 0LL;
  DWORD2(v100[56]) = 288;
  LODWORD(v100[58]) = 67108868;
  LODWORD(v100[59]) = 4;
  *((_QWORD *)&v100[59] + 1) = 0LL;
  LODWORD(v100[60]) = 288;
  DWORD2(v100[61]) = 67108868;
  DWORD2(v100[62]) = 4;
  *(_QWORD *)&v100[63] = 0LL;
  DWORD2(v100[63]) = 288;
  LODWORD(v100[65]) = 67108868;
  LODWORD(v100[66]) = 4;
  *((_QWORD *)&v100[66] + 1) = 0LL;
  LODWORD(v100[67]) = 288;
  DWORD2(v100[68]) = 67108868;
  DWORD2(v100[69]) = 4;
  *(_QWORD *)&v100[70] = 0LL;
  DWORD2(v100[70]) = 288;
  LODWORD(v100[72]) = 67108868;
  LODWORD(v100[73]) = 4;
  *((_QWORD *)&v100[73] + 1) = 0LL;
  LODWORD(v100[74]) = 288;
  *(_QWORD *)&v100[75] = &v42;
  *(_QWORD *)&v100[76] = &v72;
  *(_QWORD *)&v100[78] = L"ProcessSysmemOfferPeriod";
  *((_QWORD *)&v100[78] + 1) = &v43;
  *((_QWORD *)&v100[79] + 1) = &v73;
  *((_QWORD *)&v100[81] + 1) = L"SegmentBalancingPolicy";
  *(_QWORD *)&v100[82] = &v44;
  *(_QWORD *)&v100[83] = &v74;
  *(_QWORD *)&v100[85] = L"BugcheckOnApertureCorruption";
  *((_QWORD *)&v100[85] + 1) = &v45;
  *((_QWORD *)&v100[86] + 1) = &v75;
  *((_QWORD *)&v100[88] + 1) = L"QuickApertureCorruptionCheck";
  *(_QWORD *)&v100[89] = &v46;
  *(_QWORD *)&v100[90] = &v76;
  *(_QWORD *)&v100[92] = L"DirectFlipMemoryRequirement";
  *((_QWORD *)&v100[92] + 1) = &v47;
  *((_QWORD *)&v100[93] + 1) = &v77;
  *((_QWORD *)&v100[95] + 1) = L"CommitProcessHeapOnDemand";
  *(_QWORD *)&v100[96] = &v48;
  *(_QWORD *)&v100[97] = &v78;
  *(_QWORD *)&v100[99] = L"SegmentCleanupSizeThreshold";
  *((_QWORD *)&v100[99] + 1) = &v49;
  *((_QWORD *)&v100[100] + 1) = &v79;
  *((_QWORD *)&v100[102] + 1) = L"SegmentCleanupCountThreshold";
  *(_QWORD *)&v100[103] = &v50;
  DWORD2(v100[75]) = 67108868;
  DWORD2(v100[76]) = 4;
  *(_QWORD *)&v100[77] = 0LL;
  DWORD2(v100[77]) = 288;
  LODWORD(v100[79]) = 67108868;
  LODWORD(v100[80]) = 4;
  *((_QWORD *)&v100[80] + 1) = 0LL;
  LODWORD(v100[81]) = 288;
  DWORD2(v100[82]) = 67108868;
  DWORD2(v100[83]) = 4;
  *(_QWORD *)&v100[84] = 0LL;
  DWORD2(v100[84]) = 288;
  LODWORD(v100[86]) = 67108868;
  LODWORD(v100[87]) = 4;
  *((_QWORD *)&v100[87] + 1) = 0LL;
  LODWORD(v100[88]) = 288;
  DWORD2(v100[89]) = 67108868;
  DWORD2(v100[90]) = 4;
  *(_QWORD *)&v100[91] = 0LL;
  DWORD2(v100[91]) = 288;
  LODWORD(v100[93]) = 67108868;
  LODWORD(v100[94]) = 4;
  *((_QWORD *)&v100[94] + 1) = 0LL;
  LODWORD(v100[95]) = 288;
  DWORD2(v100[96]) = 67108868;
  DWORD2(v100[97]) = 4;
  *(_QWORD *)&v100[98] = 0LL;
  DWORD2(v100[98]) = 288;
  LODWORD(v100[100]) = 67108868;
  LODWORD(v100[101]) = 4;
  *((_QWORD *)&v100[101] + 1) = 0LL;
  LODWORD(v100[102]) = 288;
  DWORD2(v100[103]) = 67108868;
  DWORD2(v100[105]) = 288;
  LODWORD(v100[107]) = 67108868;
  *(_QWORD *)&v100[104] = &v80;
  *(_QWORD *)&v100[106] = L"SegmentCleanupTime";
  *((_QWORD *)&v100[106] + 1) = &v51;
  *((_QWORD *)&v100[107] + 1) = &v81;
  *((_QWORD *)&v100[109] + 1) = L"PhysicalHeapSize";
  *(_QWORD *)&v100[110] = &v94;
  *(_QWORD *)&v100[111] = &v86;
  *(_QWORD *)&v100[113] = L"PhysicalHeapLowestAddress";
  *((_QWORD *)&v100[113] + 1) = &v96;
  *((_QWORD *)&v100[114] + 1) = &v87;
  *((_QWORD *)&v100[116] + 1) = L"PhysicalHeapHighestAddress";
  *(_QWORD *)&v100[117] = &v98;
  *(_QWORD *)&v100[118] = &v88;
  *(_QWORD *)&v100[120] = L"SelfRefreshVramForceEvictionTimer";
  *((_QWORD *)&v100[120] + 1) = &v52;
  *((_QWORD *)&v100[121] + 1) = &v82;
  LODWORD(v100[109]) = 288;
  DWORD2(v100[110]) = 184549387;
  DWORD2(v100[111]) = 8;
  DWORD2(v100[112]) = 288;
  LODWORD(v100[114]) = 184549387;
  LODWORD(v100[115]) = 8;
  LODWORD(v100[116]) = 288;
  DWORD2(v100[117]) = 184549387;
  DWORD2(v100[118]) = 8;
  DWORD2(v100[119]) = 288;
  LODWORD(v100[121]) = 67108868;
  *((_QWORD *)&v100[125] + 1) = 0LL;
  DWORD2(v100[104]) = 4;
  *(_QWORD *)&v100[105] = 0LL;
  LODWORD(v100[108]) = 4;
  *((_QWORD *)&v100[108] + 1) = 0LL;
  *(_QWORD *)&v100[112] = 0LL;
  *((_QWORD *)&v100[115] + 1) = 0LL;
  *(_QWORD *)&v100[119] = 0LL;
  LODWORD(v100[122]) = 4;
  *(_OWORD *)((char *)&v100[122] + 8) = 0LL;
  *(_OWORD *)((char *)&v100[123] + 8) = 0LL;
  *(_OWORD *)((char *)&v100[124] + 8) = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v100, 0LL, 0LL);
  v9 = dword_1C00762B8;
  memset(dword_1C00762B8, 0, sizeof(dword_1C00762B8));
  memset(v100, 0, sizeof(v100));
  v10 = 0;
  v11 = 0LL;
  do
  {
    memset(v102, 0, sizeof(v102));
    *(_QWORD *)&Destination.Length = 0x400000LL;
    Destination.Buffer = (PWSTR)v102;
    DestinationString = 0LL;
    String = 0LL;
    RtlInitUnicodeString(&DestinationString, L"MaxSegmentSize");
    if ( RtlAppendUnicodeStringToString(&Destination, &DestinationString) >= 0 )
    {
      *(_DWORD *)&String.Length = 0x100000;
      String.Buffer = (PWSTR)&v101;
      if ( RtlIntegerToUnicodeString(v10, 0, &String) >= 0 && RtlAppendUnicodeStringToString(&Destination, &String) >= 0 )
      {
        *(_QWORD *)&v90 = Destination.Buffer;
        *(_QWORD *)&v89 = 0LL;
        *((_QWORD *)&v90 + 1) = &v21;
        *((_QWORD *)&v89 + 1) = 288LL;
        *((_QWORD *)&v91 + 1) = &v83;
        v100[1] = v90;
        v100[0] = v89;
        *(_QWORD *)&v91 = 67108868LL;
        v92 = 4LL;
        v100[2] = v91;
        *(_QWORD *)&v100[3] = 4LL;
        v83 = 0;
        v21 = 0;
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v100, 0LL, 0LL);
        v12 = v21;
        *v9 = v21;
        if ( v12 )
        {
          v17 = (v12 + 4095) & 0xFFFFF000;
          if ( v17 < 0x800000 )
            v17 = 0x800000;
          *v9 = v17;
          WdLogSingleEntry2(4LL, v11, v17);
        }
      }
    }
    ++v10;
    ++v11;
    ++v9;
  }
  while ( v10 < 0x20 );
  WdLogSingleEntry1(4LL, v18);
  v13 = v22;
  if ( v18 < 0x5A )
    v13 = v18;
  dword_1C00762A8 = v13;
  v14 = v23;
  if ( v19 < 0x5A )
    v14 = v19;
  dword_1C00762AC = v14;
  v15 = 0x7FFFFFF;
  dword_1C00762B0 = 0;
  if ( v20 < 0x7FFFFFF )
    v15 = v20;
  dword_1C00762B4 = v15;
  dword_1C00763B8 = v25;
  dword_1C00763BC = v26;
  dword_1C00763C0 = v27;
  dword_1C00763C4 = v28;
  dword_1C00763C8 = v29;
  dword_1C00763CC = v30;
  qword_1C00763D0 = (unsigned int)(v34 << 20);
  dword_1C00763D8 = v35;
  dword_1C00763DC = v36;
  dword_1C00763E8 = v38;
  dword_1C00763EC = v39;
  dword_1C0076410 = v44;
  qword_1C00763E0 = (unsigned int)(10000000 * v37);
  qword_1C00763F0 = (unsigned int)(10000000 * v40);
  qword_1C00763F8 = (unsigned int)(10000000 * v41);
  qword_1C0076400 = (unsigned int)(10000000 * v42);
  qword_1C0076408 = (unsigned int)(10000000 * v43);
  VIDMM_GLOBAL::_Config = (v45 != 0 ? 0x10 : 0) | (v31 != 0 ? 2 : 0) | (VIDMM_GLOBAL::_Config ^ (VIDMM_GLOBAL::_Config ^ v24) & 1) & 0xFFFFFFE1 | (4 * (v33 & 1 | (unsigned __int8)(2 * (v32 & 1)))) & 0xEF;
  dword_1C0076274 = v46 != 0;
  qword_1C0076280 = (unsigned __int64)v47 << 20;
  LOBYTE(v0) = v48 != 0;
  qword_1C0076440 = (unsigned int)(v49 << 10);
  dword_1C0076448 = v50;
  NumberOfBytes = v95;
  LowestAcceptableAddress = v97;
  HighestAcceptableAddress = v99;
  qword_1C0076450 = (unsigned int)(10000 * v51);
  dword_1C0076278 = v0;
  qword_1C0076600 = 10000000LL * v52;
  VIDMM_GLOBAL::ReadCommitLimitInformation();
  VIDMM_GLOBAL::ReadWorkingSetConfiguration();
  VIDMM_GLOBAL::ReadUnusedAllocationConfiguration();
  VIDMM_GLOBAL::ReadPreparationPeriodConfiguration();
  VIDMM_GLOBAL::ReadHeapConfiguration();
  VIDMM_GLOBAL::ReadPowerConfiguration();
  VIDMM_GLOBAL::ReadGpuVaPagingHistoryConfiguration();
  VIDMM_GLOBAL::ReadGpuVaConfiguration();
  VIDMM_GLOBAL::ReadPagingConfiguration();
  VIDMM_GLOBAL::ReadTestAndStagingConfiguration();
  VIDMM_GLOBAL::ReadVPRConfiguration();
  VIDMM_GLOBAL::ReadBudgetConfiguration();
}
