/*
 * XREFs of ?CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ @ 0x1C001CFE0
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGADAPTER::CheckMcdmDdiOverall(DXGADAPTER *this)
{
  int v3; // eax
  int v4; // esi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  int v53; // edx
  int v54; // ecx
  int v55; // r8d
  int v56; // edx
  int v57; // ecx
  int v58; // r8d
  int v59; // edx
  int v60; // ecx
  int v61; // r8d
  int v62; // edx
  int v63; // ecx
  int v64; // r8d
  int v65; // edx
  int v66; // ecx
  int v67; // r8d
  int v68; // edx
  int v69; // ecx
  int v70; // r8d
  int v71; // edx
  int v72; // ecx
  int v73; // r8d
  int v74; // edx
  int v75; // ecx
  int v76; // r8d
  int v77; // edx
  int v78; // ecx
  int v79; // r8d
  int v80; // edx
  int v81; // ecx
  int v82; // r8d
  int v83; // edx
  int v84; // ecx
  int v85; // r8d
  int v86; // edx
  int v87; // ecx
  int v88; // r8d
  int v89; // edx
  int v90; // ecx
  int v91; // r8d
  int v92; // edx
  int v93; // ecx
  int v94; // r8d
  int v95; // edx
  int v96; // ecx
  int v97; // r8d
  int v98; // edx
  int v99; // ecx
  int v100; // r8d
  int v101; // edx
  int v102; // ecx
  int v103; // r8d
  int v104; // edx
  int v105; // ecx
  int v106; // r8d
  int v107; // edx
  int v108; // ecx
  int v109; // r8d
  int v110; // edx
  int v111; // ecx
  int v112; // r8d
  int v113; // edx
  int v114; // ecx
  int v115; // r8d
  int v116; // edx
  int v117; // ecx
  int v118; // r8d
  int v119; // edx
  int v120; // ecx
  int v121; // r8d
  int v122; // edx
  int v123; // ecx
  int v124; // r8d
  int v125; // edx
  int v126; // ecx
  int v127; // r8d
  int v128; // edx
  int v129; // ecx
  int v130; // r8d
  int v131; // edx
  int v132; // ecx
  int v133; // r8d
  int v134; // edx
  int v135; // ecx
  int v136; // r8d
  int v137; // edx
  int v138; // ecx
  int v139; // r8d
  int v140; // edx
  int v141; // ecx
  int v142; // r8d
  int v143; // edx
  int v144; // ecx
  int v145; // r8d
  int v146; // edx
  int v147; // ecx
  int v148; // r8d
  int v149; // edx
  int v150; // ecx
  int v151; // r8d
  int v152; // edx
  int v153; // ecx
  int v154; // r8d
  int v155; // edx
  int v156; // ecx
  int v157; // r8d
  int v158; // edx
  int v159; // ecx
  int v160; // r8d
  int v161; // edx
  int v162; // ecx
  int v163; // r8d
  int v164; // edx
  int v165; // ecx
  int v166; // r8d
  int v167; // edx
  int v168; // ecx
  int v169; // r8d
  int v170; // edx
  int v171; // ecx
  int v172; // r8d
  int v173; // edx
  int v174; // ecx
  int v175; // r8d
  int v176; // edx
  int v177; // ecx
  int v178; // r8d
  int v179; // edx
  int v180; // ecx
  int v181; // r8d
  int v182; // edx
  int v183; // ecx
  int v184; // r8d
  int v185; // edx
  int v186; // ecx
  int v187; // r8d
  int v188; // edx
  int v189; // ecx
  int v190; // r8d
  int v191; // edx
  int v192; // ecx
  int v193; // r8d
  int v194; // edx
  int v195; // ecx
  int v196; // r8d
  int v197; // edx
  int v198; // ecx
  int v199; // r8d
  int v200; // edx
  int v201; // ecx
  int v202; // r8d
  int v203; // edx
  int v204; // ecx
  int v205; // r8d
  int v206; // edx
  int v207; // ecx
  int v208; // r8d
  int v209; // edx
  int v210; // ecx
  int v211; // r8d
  int v212; // edx
  int v213; // ecx
  int v214; // r8d
  int v215; // edx
  int v216; // ecx
  int v217; // r8d
  int v218; // edx
  int v219; // ecx
  int v220; // r8d
  int v221; // edx
  int v222; // ecx
  int v223; // r8d
  int v224; // edx
  int v225; // ecx
  int v226; // r8d
  int v227; // edx
  int v228; // ecx
  int v229; // r8d
  int v230; // edx
  int v231; // ecx
  int v232; // r8d
  int v233; // edx
  int v234; // ecx
  int v235; // r8d
  int v236; // edx
  int v237; // ecx
  int v238; // r8d
  int v239; // edx
  int v240; // ecx
  int v241; // r8d
  int v242; // edx
  int v243; // ecx
  int v244; // r8d
  int v245; // edx
  int v246; // ecx
  int v247; // r8d
  __int64 v248; // rdx
  int v249; // edx
  int v250; // ecx
  int v251; // r8d
  int v252; // edx
  int v253; // ecx
  int v254; // r8d

  if ( (*((_DWORD *)this + 698) & 8) == 0 )
    return 0LL;
  v3 = *((_DWORD *)this + 109);
  if ( (v3 & 8) != 0 || (v3 & 0x4000) != 0 )
    return 0LL;
  v4 = 0;
  if ( !*((_QWORD *)this + 56) )
  {
    WdLogSingleEntry1(2LL, 75LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v6,
        v5,
        v7,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiQueryAdapterInfo is required.",
        75LL,
        0LL,
        0LL,
        0LL,
        0LL);
    v4 = 1;
  }
  if ( !*((_QWORD *)this + 67) )
  {
    WdLogSingleEntry1(2LL, 77LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v9,
        v8,
        v10,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiBuildPagingBuffer is required.",
        77LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 113) )
  {
    WdLogSingleEntry1(2LL, 78LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v12,
        v11,
        v13,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiCalibrateGpuClock is required.",
        78LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 90) )
  {
    WdLogSingleEntry1(2LL, 79LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v15,
        v14,
        v16,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiCloseAllocation is required.",
        79LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 74) )
  {
    WdLogSingleEntry1(2LL, 80LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v18,
        v17,
        v19,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiCollectDbgInfo is required.",
        80LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 58) )
  {
    WdLogSingleEntry1(2LL, 81LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v21,
        v20,
        v22,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiCreateAllocation is required.",
        81LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 96) )
  {
    WdLogSingleEntry1(2LL, 82LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v24,
        v23,
        v25,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiCreateContext is required.",
        82LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 57) )
  {
    WdLogSingleEntry1(2LL, 83LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v27,
        v26,
        v28,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiCreateDevice is required.",
        83LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 60) )
  {
    WdLogSingleEntry1(2LL, 84LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v30,
        v29,
        v31,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiDescribeAllocation is required.",
        84LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 59) )
  {
    WdLogSingleEntry1(2LL, 85LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v33,
        v32,
        v34,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiDestroyAllocation is required.",
        85LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 97) )
  {
    WdLogSingleEntry1(2LL, 86LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v36,
        v35,
        v37,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiDestroyContext is required.",
        86LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 88) )
  {
    WdLogSingleEntry1(2LL, 87LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v39,
        v38,
        v40,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiDestroyDevice is required.",
        87LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 114) )
  {
    WdLogSingleEntry1(2LL, 89LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v42,
        v41,
        v43,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiFormatHistoryBuffer is required.",
        89LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 109) )
  {
    WdLogSingleEntry1(2LL, 90LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v45,
        v44,
        v46,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiGetNodeMetadata is required.",
        90LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 61) )
  {
    WdLogSingleEntry1(2LL, 91LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v48,
        v47,
        v49,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiGetStandardAllocationDriverData is required.",
        91LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 89) )
  {
    WdLogSingleEntry1(2LL, 93LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v51,
        v50,
        v52,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiOpenAllocation is required.",
        93LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 66) )
  {
    WdLogSingleEntry1(2LL, 94LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v54,
        v53,
        v55,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiPreemptCommand is required.",
        94LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 56) )
  {
    WdLogSingleEntry1(2LL, 95LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v57,
        v56,
        v58,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiQueryAdapterInfo is required.",
        95LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 100) )
  {
    WdLogSingleEntry1(2LL, 96LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v60,
        v59,
        v61,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiQueryDependentEngineGroup is required.",
        96LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 101) )
  {
    WdLogSingleEntry1(2LL, 98LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v63,
        v62,
        v64,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiQueryEngineStatus is required.",
        98LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 102) )
  {
    WdLogSingleEntry1(2LL, 101LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v66,
        v65,
        v67,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiResetEngine is required.",
        101LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 71) )
  {
    WdLogSingleEntry1(2LL, 102LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v69,
        v68,
        v70,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiResetFromTimeout is required.",
        102LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 72) )
  {
    WdLogSingleEntry1(2LL, 103LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v72,
        v71,
        v73,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiRestartFromTimeout is required.",
        103LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 125) )
  {
    WdLogSingleEntry1(2LL, 105LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v75,
        v74,
        v76,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiSetStablePowerState is required.",
        105LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( !*((_QWORD *)this + 162) )
  {
    WdLogSingleEntry1(2LL, 106LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v78,
        v77,
        v79,
        0,
        0,
        -1,
        (__int64)L"DxgkDdiSetVirtualMachineData is required.",
        106LL,
        0LL,
        0LL,
        0LL,
        0LL);
    ++v4;
  }
  if ( *((_QWORD *)this + 81) )
  {
    WdLogSingleEntry1(2LL, 115LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v81,
          v80,
          v82,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiCommitVidPn is not used.",
          115LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 62) )
  {
    WdLogSingleEntry1(2LL, 116LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v84,
          v83,
          v85,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiAcquireSwizzlingRange is not used.",
          116LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 112) )
  {
    WdLogSingleEntry1(2LL, 117LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v87,
          v86,
          v88,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiCheckMultiPlaneOverlaySupport is not used.",
          117LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 123) )
  {
    WdLogSingleEntry1(2LL, 118LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v90,
          v89,
          v91,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiCheckMultiPlaneOverlaySupport2 is not used.",
          118LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 127) )
  {
    WdLogSingleEntry1(2LL, 119LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v93,
          v92,
          v94,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiCheckMultiPlaneOverlaySupport3 is not used.",
          119LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))this + 166) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    WdLogSingleEntry1(2LL, 120LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v96,
          v95,
          v97,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiControlDiagnosticReporting is not used.",
          120LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 86) )
  {
    WdLogSingleEntry1(2LL, 121LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v99,
          v98,
          v100,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiControlInterrupt is not used.",
          121LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 111) )
  {
    WdLogSingleEntry1(2LL, 122LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v102,
          v101,
          v103,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiControlInterrupt2 is not used.",
          122LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 174) )
  {
    WdLogSingleEntry1(2LL, 123LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v105,
          v104,
          v106,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiControlInterrupt3 is not used.",
          123LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((__int64 (__fastcall **)())this + 134) != W32kStub_GreSfmOpenTokenEvent )
  {
    WdLogSingleEntry1(2LL, 124LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v108,
          v107,
          v109,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiControlModeBehavior is not used.",
          124LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 87) )
  {
    WdLogSingleEntry1(2LL, 126LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v111,
          v110,
          v112,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiCreateOverlay is not used.",
          126LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 142) )
  {
    WdLogSingleEntry1(2LL, 127LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v114,
          v113,
          v115,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiCreatePeriodicFrameNotification is not used.",
          127LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 154) )
  {
    WdLogSingleEntry1(2LL, 128LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v117,
          v116,
          v118,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiCreateProtectedSession is not used.",
          128LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 95) )
  {
    WdLogSingleEntry1(2LL, 129LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v120,
          v119,
          v121,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiDestroyOverlay is not used.",
          129LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 143) )
  {
    WdLogSingleEntry1(2LL, 130LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v123,
          v122,
          v124,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiDestroyPeriodicFrameNotification is not used.",
          130LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 155) )
  {
    WdLogSingleEntry1(2LL, 131LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v126,
          v125,
          v127,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiDestroyProtectedSession is not used.",
          131LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 149) )
  {
    WdLogSingleEntry1(2LL, 132LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v129,
          v128,
          v130,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiDisplayDetectControl is not used.",
          132LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 78) )
  {
    WdLogSingleEntry1(2LL, 133LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v132,
          v131,
          v133,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiEnumVidPnCofuncModality is not used.",
          133LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 151) )
  {
    WdLogSingleEntry1(2LL, 134LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v135,
          v134,
          v136,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiExchangePreStartInfo is not used.",
          134LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 94) )
  {
    WdLogSingleEntry1(2LL, 135LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v138,
          v137,
          v139,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiFlipOverlay is not used.",
          135LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 152) )
  {
    WdLogSingleEntry1(2LL, 136LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v141,
          v140,
          v142,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiGetMultiPlaneOverlayCaps is not used.",
          136LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 153) )
  {
    WdLogSingleEntry1(2LL, 137LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v144,
          v143,
          v145,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiGetPostCompositionCaps is not used.",
          137LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 84) )
  {
    WdLogSingleEntry1(2LL, 138LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v147,
          v146,
          v148,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiGetScanLine is not used.",
          138LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 76) )
  {
    WdLogSingleEntry1(2LL, 139LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v150,
          v149,
          v151,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiIsSupportedVidPn is not used.",
          139LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 158) )
  {
    WdLogSingleEntry1(2LL, 141LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v153,
          v152,
          v154,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiNotifyFocusPresent is not used.",
          141LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 129) )
  {
    WdLogSingleEntry1(2LL, 142LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v156,
          v155,
          v157,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiPostMultiPlaneOverlayPresent is not used.",
          142LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 92) )
  {
    WdLogSingleEntry1(2LL, 143LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v159,
          v158,
          v160,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiPresent is not used.",
          143LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 168) )
  {
    WdLogSingleEntry1(2LL, 144LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v162,
          v161,
          v163,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiPresentToHwQueue is not used.",
          144LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 150) )
  {
    WdLogSingleEntry1(2LL, 145LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v165,
          v164,
          v166,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiQueryConnectionChange is not used.",
          145LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 75) )
  {
    WdLogSingleEntry1(2LL, 146LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v168,
          v167,
          v169,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiQueryCurrentFence is not used.",
          146LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((__int64 (__fastcall **)())this + 165) != W32kStub_UserRemoveWindowedSwapChain )
  {
    WdLogSingleEntry1(2LL, 147LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v171,
          v170,
          v172,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiQueryDiagnosticTypesSupport is not used.",
          147LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 77) )
  {
    WdLogSingleEntry1(2LL, 149LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v174,
          v173,
          v175,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiRecommendFunctionalVidPn is not used.",
          149LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 83) )
  {
    WdLogSingleEntry1(2LL, 150LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v177,
          v176,
          v178,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiRecommendMonitorModes is not used.",
          150LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 63) )
  {
    WdLogSingleEntry1(2LL, 152LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v180,
          v179,
          v181,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiReleaseSwizzlingRange is not used.",
          152LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 115) )
  {
    WdLogSingleEntry1(2LL, 153LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v183,
          v182,
          v184,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiRenderGdi is not used.",
          153LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 99) )
  {
    WdLogSingleEntry1(2LL, 154LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v186,
          v185,
          v187,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiRenderKm is not used.",
          154LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 98) )
  {
    WdLogSingleEntry1(2LL, 155LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v189,
          v188,
          v190,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetDisplayPrivateDriverFormat is not used.",
          155LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 68) )
  {
    WdLogSingleEntry1(2LL, 156LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v192,
          v191,
          v193,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetPalette is not used.",
          156LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 69) )
  {
    WdLogSingleEntry1(2LL, 157LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v195,
          v194,
          v196,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetPointerPosition is not used.",
          157LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 70) )
  {
    WdLogSingleEntry1(2LL, 158LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v198,
          v197,
          v199,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetPointerShape is not used.",
          158LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 110) )
  {
    WdLogSingleEntry1(2LL, 159LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v201,
          v200,
          v202,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetPowerPState is not used.",
          159LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 148) )
  {
    WdLogSingleEntry1(2LL, 160LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v204,
          v203,
          v205,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetTargetAdjustedColorimetry is not used.",
          160LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 147) )
  {
    WdLogSingleEntry1(2LL, 162LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v207,
          v206,
          v208,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetTargetAnalogCopyProtection is not used.",
          162LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 146) )
  {
    WdLogSingleEntry1(2LL, 163LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v210,
          v209,
          v211,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetTargetContentType is not used.",
          163LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 145) )
  {
    WdLogSingleEntry1(2LL, 164LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v213,
          v212,
          v214,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetTargetGamma is not used.",
          164LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 144) )
  {
    WdLogSingleEntry1(2LL, 165LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v216,
          v215,
          v217,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetTimingsFromVidPn is not used.",
          165LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 126) )
  {
    WdLogSingleEntry1(2LL, 166LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v219,
          v218,
          v220,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetVideoProtectedRegion is not used.",
          166LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 79) )
  {
    WdLogSingleEntry1(2LL, 167LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v222,
          v221,
          v223,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetVidPnSourceAddress is not used.",
          167LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 108) )
  {
    WdLogSingleEntry1(2LL, 168LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v225,
          v224,
          v226,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetVidPnSourceAddressWithMultiPlaneOverlay is not used.",
          168LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 124) )
  {
    WdLogSingleEntry1(2LL, 169LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v228,
          v227,
          v229,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetVidPnSourceAddressWithMultiPlaneOverlay2 is not used.",
          169LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 128) )
  {
    WdLogSingleEntry1(2LL, 170LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v231,
          v230,
          v232,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetVidPnSourceAddressWithMultiPlaneOverlay3 is not used.",
          170LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 80) )
  {
    WdLogSingleEntry1(2LL, 171LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v234,
          v233,
          v235,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetVidPnSourceVisibility is not used.",
          171LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 85) )
  {
    WdLogSingleEntry1(2LL, 172LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v237,
          v236,
          v238,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiStopCapture is not used.",
          172LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 82) )
  {
    WdLogSingleEntry1(2LL, 177LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v240,
          v239,
          v241,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiUpdateActiveVidPnPresentPath is not used.",
          177LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 135) )
  {
    WdLogSingleEntry1(2LL, 178LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v243,
          v242,
          v244,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiUpdateMonitorLinkInfo is not used.",
          178LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 93) )
  {
    WdLogSingleEntry1(2LL, 179LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v246,
          v245,
          v247,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiUpdateOverlay is not used.",
          179LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v248 = *((_QWORD *)this + 107);
  if ( (*((_DWORD *)this + 570) & 0x10) != 0 )
  {
    if ( !v248 )
    {
      WdLogSingleEntry1(2LL, 185LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v250,
          v249,
          v251,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiCancelCommand is required.",
          185LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++v4;
    }
  }
  else if ( v248 )
  {
    WdLogSingleEntry1(2LL, 185LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v253,
          v252,
          v254,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiCancelCommand is not used.",
          185LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( !v4 )
  {
    *((_QWORD *)this + 92) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    if ( !*((_QWORD *)this + 65) )
      *((_QWORD *)this + 65) = DXGADAPTER::DefaultDdiSubmitCommand;
    return 0LL;
  }
  return 3221225561LL;
}
