/*
 * XREFs of ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005D110
 * Callers:
 *     ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C005D008 (-CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXG.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C0061028 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C008A578 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008B81C (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00013FC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001668 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00016E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001FC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00179F8 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0023328 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C0023390 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0023530 (-AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL.c)
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0023930 (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C0023CF8 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C00240BC (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     ?VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0026DF0 (-VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0065E90 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0066FF0 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@IEAAEKK@Z @ 0x1C006F3F4 (-CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@IEAAEKK@Z.c)
 *     VidSchDestroySyncObject @ 0x1C0081B70 (VidSchDestroySyncObject.c)
 *     VidSchCreateSyncObject @ 0x1C0081D80 (VidSchCreateSyncObject.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C00849E0 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0084EC0 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z @ 0x1C0084FD0 (-VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C008502C (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C0085590 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C00857FC (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0088D7C (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C008C2C0 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C00AD950 (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateOneAllocation(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        _D3DDDI_SEGMENTPREFERENCE a9,
        struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D a10,
        int a11,
        VIDMM_GLOBAL *a12,
        __int64 a13,
        __int64 a14,
        UINT a15,
        unsigned __int8 a16,
        __int64 a17,
        unsigned __int8 a18,
        volatile signed __int32 *a19,
        _D3DDDI_SEGMENTPREFERENCE **a20)
{
  char v20; // r14
  VIDMM_GLOBAL *v24; // r12
  __int64 v25; // rdx
  signed int v26; // ebx
  VIDMM_GLOBAL *v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // r13d
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  bool v32; // cf
  __int64 v33; // rax
  unsigned int v35; // edi
  __int64 CurrentProcess; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r11d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int Value; // ebx
  __int64 v45; // rcx
  int v46; // esi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  char v50; // r9
  int v51; // r13d
  int IsEnabledDeviceUsage; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  POOL_TYPE v56; // r9d
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  int v62; // r9d
  int v63; // r9d
  int v64; // eax
  __int64 v65; // rcx
  unsigned int v66; // eax
  __int64 v67; // rdx
  int v68; // ecx
  unsigned __int8 v69; // al
  __int64 v70; // rcx
  unsigned __int8 v71; // al
  ULONG v72; // edx
  SIZE_T v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // rcx
  _D3DDDI_SEGMENTPREFERENCE *v76; // r13
  _QWORD *v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  int SyncObject; // r12d
  _OWORD *v83; // rax
  __int64 v84; // rcx
  void *v85; // rcx
  __int64 v86; // rax
  __int64 v87; // r8
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rcx
  VIDMM_GLOBAL *v94; // r9
  int v95; // eax
  volatile signed __int32 *v96; // rax
  struct VIDMM_PARTITION *v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rdx
  unsigned __int64 v100; // r12
  _QWORD *v101; // rax
  unsigned __int64 v102; // rcx
  unsigned __int64 v103; // rcx
  int v104; // r8d
  __int64 v105; // rdx
  __int64 v106; // r8
  UINT v107; // eax
  unsigned int *v108; // rax
  int v109; // ecx
  int v110; // ecx
  int v111; // ecx
  int v112; // edi
  int v113; // eax
  __int64 v114; // rcx
  char v115; // al
  __int64 v116; // rax
  __int64 v117; // rax
  VIDMM_GLOBAL *v118; // rdi
  unsigned __int8 v119; // r8
  char v120; // r11
  unsigned int v121; // edx
  __int64 v122; // rax
  _DWORD *v123; // r10
  unsigned int v124; // edx
  unsigned __int64 v125; // rcx
  int v126; // eax
  int v127; // edx
  unsigned int v128; // r12d
  VIDMM_GLOBAL *v129; // rsi
  unsigned int v130; // edx
  unsigned int v131; // ecx
  UINT v132; // edi
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  int v134; // eax
  unsigned int v135; // eax
  struct VIDMM_PARTITION *v136; // rcx
  int v137; // edx
  UINT v138; // ecx
  int v139; // eax
  __int64 v140; // rcx
  bool v141; // zf
  __int64 v142; // rdi
  unsigned int *v143; // rbx
  __int16 v144; // r12
  unsigned int v145; // edx
  __int64 v146; // r8
  unsigned int v147; // r9d
  unsigned int v148; // r10d
  unsigned int v149; // r11d
  unsigned int v150; // eax
  unsigned int v151; // ebx
  __int64 v152; // rbx
  unsigned __int64 v153; // rcx
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // rdx
  __int64 i; // rbx
  __int64 v158; // rax
  KSPIN_LOCK *v159; // rdx
  __int64 v160; // rdx
  VIDMM_GLOBAL *v161; // rcx
  int *v162; // rbx
  __int64 v163; // rdi
  _QWORD *v164; // rax
  DXGFASTMUTEX *v165; // rcx
  int v166; // [rsp+50h] [rbp-138h]
  int v167; // [rsp+68h] [rbp-120h]
  char v168; // [rsp+E0h] [rbp-A8h]
  unsigned __int8 v169; // [rsp+108h] [rbp-80h]
  unsigned __int8 v170; // [rsp+109h] [rbp-7Fh]
  unsigned __int8 v171; // [rsp+10Ah] [rbp-7Eh]
  bool v172; // [rsp+10Bh] [rbp-7Dh] BYREF
  _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 v173; // [rsp+10Ch] [rbp-7Ch] BYREF
  unsigned int v174; // [rsp+110h] [rbp-78h]
  int v175; // [rsp+114h] [rbp-74h]
  int v176; // [rsp+118h] [rbp-70h] BYREF
  unsigned int v177[2]; // [rsp+120h] [rbp-68h]
  __int64 Current; // [rsp+128h] [rbp-60h]
  unsigned int v179; // [rsp+130h] [rbp-58h] BYREF
  int v180; // [rsp+134h] [rbp-54h]
  int v181; // [rsp+138h] [rbp-50h] BYREF
  struct VIDMM_PARTITION *v182; // [rsp+140h] [rbp-48h]
  unsigned __int64 v183; // [rsp+148h] [rbp-40h]
  unsigned __int64 v184; // [rsp+150h] [rbp-38h]
  __int64 v185; // [rsp+158h] [rbp-30h]
  int v186; // [rsp+160h] [rbp-28h]
  int v187[20]; // [rsp+168h] [rbp-20h] BYREF
  VIDMM_GLOBAL *v188; // [rsp+208h] [rbp+80h]
  int v190; // [rsp+218h] [rbp+90h]
  unsigned __int8 v191; // [rsp+218h] [rbp+90h]
  unsigned int v192; // [rsp+218h] [rbp+90h]
  int v194; // [rsp+250h] [rbp+C8h]
  unsigned __int8 v195; // [rsp+250h] [rbp+C8h]
  char v196; // [rsp+250h] [rbp+C8h]

  v188 = a1;
  v20 = (char)a10;
  v173.0 = a10;
  v24 = a1;
  Current = (__int64)DXGPROCESS::GetCurrent();
  v26 = (signed int)a10;
  LOBYTE(v27) = *(_BYTE *)(Current + 347);
  if ( ((unsigned __int8)v27 & 0x20) != 0 && ((unsigned __int8)v27 & 0x40) == 0 && !a17 && (*(_BYTE *)&a10 & 1) != 0 )
  {
    v26 = *(_DWORD *)&a10 & 0xFFFF7FFF;
    v173.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(*(_DWORD *)&a10 & 0xFFFF7FFF);
  }
  v182 = *(struct VIDMM_PARTITION **)(*(_QWORD *)(a2 + 8) + 288LL);
  v28 = 0;
  if ( *((_DWORD *)v24 + 1750) != 1 )
    v28 = a3;
  v29 = v28;
  *(_QWORD *)v177 = v28;
  v185 = *((_QWORD *)v24 + 5027) + 1584LL * v28;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v27) + 24) = a2;
    v30 = (_QWORD *)WdLogNewEntry5_WdTrace(a2);
    v30[5] = 0LL;
    v30[4] = a6;
    v30[6] = a7;
    v30[7] = a8;
    v30[3] = a4;
    v31 = (_QWORD *)WdLogNewEntry5_WdTrace(a8);
    v31[4] = (unsigned int)v26;
    v27 = a12;
    v31[5] = a12;
    v31[3] = a9.Value;
  }
  *a20 = 0LL;
  v32 = *((_DWORD *)v24 + 8) < 0x5023u;
  v180 = 0x40000;
  if ( v32 && (v26 & 0x40000) != 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v27, v25, 1LL);
    *(_QWORD *)(v33 + 24) = 2478LL;
LABEL_13:
    WdLogEvent5_WdAssertion(v33);
    return 3221225485LL;
  }
  if ( (v26 & 0x20000) != 0 )
  {
    if ( (v26 & 2) != 0
      || (v26 & 4) != 0
      && (v27 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)v24 + 3) + 348LL), ((unsigned __int8)v27 & 8) == 0)
      || (v26 & 0x100000) != 0
      || (v26 & 0x80000) != 0
      || (v26 & 8) != 0
      || (v26 & 0x10) != 0
      || (v26 & 0x20) != 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v27, 0x20000LL, 1LL);
      *(_QWORD *)(v33 + 24) = 2497LL;
      goto LABEL_13;
    }
    v26 &= 0xFFFBFFFE;
    v173.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v26;
  }
  if ( (v26 & 1) == 0 || (LOBYTE(v175) = 1, (v26 & 0x40000) != 0) )
    LOBYTE(v175) = 0;
  if ( *((_BYTE *)v24 + 40168)
    || (v35 = v26, CurrentProcess = PsGetCurrentProcess(v27, 0x20000LL, 1LL), !PsGetProcessWow64Process(CurrentProcess)) )
  {
    v35 = v26;
    if ( (v26 & 0x20000000) == 0
      && (v26 & 0x40000000) == 0
      && v26 >= 0
      && (v26 & 0x10000000) == 0
      && (v26 & 8) == 0
      && (v26 & 0x400000) == 0
      && (v26 & 0x20000) == 0
      && !a17 )
    {
      v35 = v26 & 0xFFFBFFFF;
      LOBYTE(v175) = 1;
      v173.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(v26 & 0xFFFBFFFF);
    }
  }
  if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(v27, a9, a7) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v38, v37, v39);
    *(_QWORD *)(v33 + 24) = 2555LL;
    goto LABEL_13;
  }
  if ( dword_1C00504B0 && (v35 & 1) == 0 )
  {
    if ( (*(_BYTE *)&a9.0 & 0x1F) != 0 )
    {
      v38 = (*(_BYTE *)&a9.0 & 0x1Fu) - 1;
      v40 = 1 << ((*(_BYTE *)&a9.0 & 0x1F) - 1);
      goto LABEL_47;
    }
    v179 = 0;
    if ( !VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(v24, v29, v40, 0x1001u, &v179) )
    {
      v40 = v179;
LABEL_47:
      a7 = v40;
      goto LABEL_50;
    }
    v40 = a7;
  }
LABEL_50:
  if ( !a4 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v38, v37, v39);
    *(_QWORD *)(v33 + 24) = 2595LL;
    goto LABEL_13;
  }
  if ( ((v35 | (v35 >> 1)) & 0x1000) != 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v38, v37, v39);
    *(_QWORD *)(v33 + 24) = 2603LL;
    goto LABEL_13;
  }
  v181 = 0;
  v176 = 0;
  if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
          v24,
          v29,
          v40,
          &v173,
          a4,
          a5,
          a17 != 0,
          (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v176) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v42, v41, v43);
    *(_QWORD *)(v33 + 24) = 2614LL;
    goto LABEL_13;
  }
  Value = v173.Value;
  v45 = 1LL;
  if ( (v173.Value & 0x40000) != 0 )
  {
    if ( (*(_BYTE *)&v173.0 & 1) == 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(1LL, v41, v43);
      *(_QWORD *)(v33 + 24) = 2629LL;
      goto LABEL_13;
    }
    if ( (*(_BYTE *)&v173.0 & 2) != 0 || (*(_BYTE *)&v173.0 & 0x20) != 0 || (*(_BYTE *)&v173.0 & 0x10) != 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(1LL, v41, v43);
      *(_QWORD *)(v33 + 24) = 2641LL;
      goto LABEL_13;
    }
  }
  v46 = v176;
  v183 = a5 & -(__int64)((v176 & 4) != 0);
  if ( a8 )
  {
    if ( !VIDMM_GLOBAL::VerifySegmentSet(v24, v29, a8, 1u, 0LL) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v48, v47, v49);
      *(_QWORD *)(v33 + 24) = 2673LL;
      goto LABEL_13;
    }
    if ( VIDMM_GLOBAL::VerifySegmentSetAny(v24, v29, a8, 0x20u) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v45, v41, v43);
      *(_QWORD *)(v33 + 24) = 2688LL;
      goto LABEL_13;
    }
  }
  v50 = 1;
  v51 = (Value >> 1) & 1;
  if ( v51 )
  {
    if ( (Value & 1) == 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v45, v41, v43);
      *(_QWORD *)(v33 + 24) = 2706LL;
      goto LABEL_13;
    }
    if ( (Value & 0x20000000) != 0 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v45, v41, v43);
      *(_QWORD *)(v33 + 24) = 2719LL;
      goto LABEL_13;
    }
  }
  v190 = (Value >> 2) & 1;
  if ( v190 && (Value & 0x800000) == 0 )
  {
    if ( *((_BYTE *)v24 + 7081) )
    {
      if ( !VIDMM_GLOBAL::VerifySegmentSet(v24, v177[0], a8, 0x10u, 0LL) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v45, v41, v43);
        *(_QWORD *)(v33 + 24) = 2752LL;
        goto LABEL_13;
      }
      v50 = 1;
    }
    else
    {
      v45 = *(unsigned int *)(*((_QWORD *)v24 + 3) + 348LL);
      if ( (v45 & 8) == 0 && !VIDMM_GLOBAL::VerifySegmentSet(v24, v177[0], a8, 1u, 0LL) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v45, v41, v43);
        *(_QWORD *)(v33 + 24) = 2759LL;
        goto LABEL_13;
      }
    }
  }
  v194 = *(_DWORD *)&v50 & (Value >> 29);
  if ( v194 && (v51 || (Value & 8) != 0 || (Value & 0x20) != 0 || (Value & 0x40000000) != 0) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v45, v41, v43);
    *(_QWORD *)(v33 + 24) = 2779LL;
    goto LABEL_13;
  }
  IsEnabledDeviceUsage = Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage();
  v56 = PagedPool;
  if ( IsEnabledDeviceUsage && (a11 & 1) != 0 )
  {
    if ( (v46 & 1) == 0 || (v57 = v194) == 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v54, v53, v55);
      *(_QWORD *)(v33 + 24) = 2788LL;
      goto LABEL_13;
    }
  }
  else
  {
    v57 = v194;
  }
  if ( (Value & 0x100000) != 0 && (!v57 || !a19 || (v46 & 1) == 0) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v54, v53, v55);
    *(_QWORD *)(v33 + 24) = 2800LL;
    goto LABEL_13;
  }
  if ( a17 && (v51 || (Value & 0x100) != 0 || (Value & 0x200) != 0 || (Value & 0x40000000) != 0) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v54, a17, v55);
    *(_QWORD *)(v33 + 24) = 2820LL;
    goto LABEL_13;
  }
  v58 = (Value >> 26) & 1;
  if ( ((Value >> 26) & 1) != 0 )
  {
    if ( (Value & 8) == 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v58, a17, v55);
      *(_QWORD *)(v33 + 24) = 2836LL;
      goto LABEL_13;
    }
  }
  else if ( (Value & 8) == 0 )
  {
    goto LABEL_121;
  }
  if ( (Value & 1) != 0 && !(_DWORD)v58 && !a17
    || v51
    || v57
    || (Value & 0x10) != 0
    || (Value & 0x20) != 0
    || (v55 = 0x80000000LL, (Value & 0x80000000) != 0)
    || (Value & 0x40000000) != 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v58, a17, v55);
    *(_QWORD *)(v33 + 24) = 2869LL;
    goto LABEL_13;
  }
LABEL_121:
  v59 = (Value >> 4) & 1;
  if ( ((Value >> 4) & 1) != 0 && (v51 || (Value & 0x20) != 0 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v59, a17, 0x80000000LL);
    *(_QWORD *)(v33 + 24) = 2891LL;
    goto LABEL_13;
  }
  v60 = (Value >> 5) & 1;
  if ( ((Value >> 5) & 1) != 0 && (v51 || v57 || (_DWORD)v59 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v59, v60, 0x80000000LL);
    *(_QWORD *)(v33 + 24) = 2915LL;
    goto LABEL_13;
  }
  v61 = Value >> 31;
  if ( (Value & 0x80000000) == 0 )
  {
    if ( (Value & 0x40000000) != 0 )
    {
      if ( v51
        || v190 && (v63 = *(_DWORD *)(*((_QWORD *)v24 + 3) + 348LL), (v63 & 0x10) == 0) && (v63 & 8) == 0
        || (_DWORD)v59
        || (_DWORD)v60 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
        *(_QWORD *)(v33 + 24) = 2963LL;
        goto LABEL_13;
      }
      v56 = PagedPool;
      if ( (*(_DWORD *)(*((_QWORD *)v24 + 3) + 2060LL) & 0x200) == 0 )
        Value |= 1u;
      v64 = (unsigned __int8)v175;
      if ( (Value & 1) != 0 )
        v64 = 1;
      Value |= 0x20000000u;
      v173.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
      v175 = v64;
    }
  }
  else
  {
    if ( v51 )
      goto LABEL_143;
    if ( v190 )
    {
      v62 = *(_DWORD *)(*((_QWORD *)v24 + 3) + 348LL);
      if ( (v62 & 0x10) == 0 && (v62 & 8) == 0 )
        goto LABEL_143;
      v56 = PagedPool;
    }
    if ( (_DWORD)v59 || (_DWORD)v60 || (Value & 0x40000000) != 0 )
    {
LABEL_143:
      v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
      *(_QWORD *)(v33 + 24) = 2939LL;
      goto LABEL_13;
    }
  }
  if ( ((Value >> 28) & 1) != 0 )
  {
    v65 = *((_QWORD *)v24 + 3);
    v66 = Value & 0xEFFF7FBF;
    v67 = *(unsigned int *)(v65 + 348);
    if ( (v67 & 8) != 0 || (v67 & 0x10) != 0 )
      v66 = Value & 0xEFFF7FBB;
    if ( v66 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v65, v67, v61);
      *(_QWORD *)(v33 + 24) = 3005LL;
      goto LABEL_13;
    }
    if ( !VIDMM_GLOBAL::VerifySegmentSet(v24, v177[0], a8, 1u, 0LL) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
      *(_QWORD *)(v33 + 24) = 3015LL;
      goto LABEL_13;
    }
  }
  if ( (Value & 0x400000) != 0 )
  {
    if ( (Value & 0x20000000) == 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
      *(_QWORD *)(v33 + 24) = 3031LL;
      goto LABEL_13;
    }
    if ( !a13 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
      *(_QWORD *)(v33 + 24) = 3041LL;
      goto LABEL_13;
    }
  }
  if ( (Value & 0x4000) != 0 )
  {
    if ( ((unsigned __int8)Value & (unsigned __int8)v56) == 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
      *(_QWORD *)(v33 + 24) = 3053LL;
      goto LABEL_13;
    }
    if ( (Value & 2) != 0
      || (Value & 8) != 0
      || (Value & 0x10) != 0
      || (Value & 0x20) != 0
      || (Value & 0x40) != 0
      || (Value & 0x100) != 0
      || (Value & 0x200) != 0
      || (Value & 0x40000) != 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
      *(_QWORD *)(v33 + 24) = Value;
      goto LABEL_13;
    }
  }
  if ( (VIDMM_GLOBAL::_Config & 2) != 0 )
  {
    if ( DXGPROCESS::GetCurrent() )
      v68 = *((unsigned __int8 *)DXGPROCESS::GetCurrent() + 346);
    else
      v68 = 0;
    if ( !v68 || ((Value >> 28) & 1) != 0 )
    {
      v56 = PagedPool;
    }
    else
    {
      v56 = PagedPool;
      if ( (Value & 0x40000000) == 0 )
      {
        Value |= 0x8000000u;
        v173.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
      }
    }
  }
  v70 = Current;
  LOBYTE(v61) = 0;
  LOBYTE(v60) = 0;
  v191 = 0;
  v69 = 0;
  v170 = 0;
  v171 = 0;
  LOBYTE(v70) = *(_BYTE *)(Current + 347);
  v169 = 0;
  v195 = 0;
  if ( (v70 & 0x20) == 0 || a17 )
  {
    v72 = 825256278;
    v73 = 504LL;
  }
  else
  {
    v170 = v56;
    if ( (Value & 0x10) != 0 )
    {
      LOBYTE(v61) = v56;
      v171 = v56;
    }
    else if ( ((unsigned __int8)Value & (unsigned __int8)v56) != 0 )
    {
      v69 = v56 & ((unsigned __int8)v70 >> 6);
      v195 = v69;
      if ( (Value & 0x8000) != 0 )
      {
        if ( !v69 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v70, v60, v61);
          *(_QWORD *)(v33 + 24) = 3112LL;
          goto LABEL_13;
        }
      }
      else
      {
        v195 = v56 & ((unsigned __int8)v70 >> 6);
      }
      LOBYTE(v60) = v56 ^ v69;
      v169 = v56 ^ v69;
      v191 = v56 ^ v69;
      if ( (Value & 0x20000000) != 0 )
      {
        v191 = v56;
        v169 = v56 ^ v69;
        v195 = v56 & ((unsigned __int8)v70 >> 6);
      }
    }
    v71 = v60 | v69;
    v72 = 1630562646;
    if ( (unsigned __int8)v61 | v71 )
      v73 = 544LL;
    else
      v73 = 512LL;
  }
  v74 = operator new(v73, v72, v61, v56);
  v76 = (_D3DDDI_SEGMENTPREFERENCE *)v74;
  if ( v74 )
  {
    v74[43] = 0LL;
    v74[59] = 0LL;
    v77 = v74 + 23;
    *v77 = v77;
    v77[1] = v77;
  }
  else
  {
    v76 = 0LL;
  }
  if ( !v76 )
  {
    _InterlockedIncrement(&dword_1C0050674);
    v78 = WdLogNewEntry5_WdLowResource(v75);
    *(_QWORD *)(v78 + 24) = 3159LL;
    WdLogEvent5_WdLowResource(v78);
    return 3221225495LL;
  }
  v76[19].Value ^= (v76[19].Value ^ v177[0]) & 0x3F;
  v79 = operator new[](0x28uLL, 0x38326956u, (POOL_TYPE)512);
  if ( v79 )
  {
    *v79 = 0LL;
    v79[1] = 0LL;
    v79[2] = 0LL;
    *((_DWORD *)v79 + 6) = 0;
    *((_DWORD *)v79 + 7) = 13;
    *((_DWORD *)v79 + 8) = 53;
  }
  else
  {
    v79 = 0LL;
  }
  *(_QWORD *)&v76[78].0 = v79;
  if ( !v79 )
  {
    _InterlockedIncrement(&dword_1C0050724);
    v80 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v80 + 24) = 3173LL;
LABEL_216:
    WdLogEvent5_WdLowResource(v80);
    SyncObject = -1073741801;
LABEL_324:
    v118 = v188;
LABEL_325:
    if ( (v76[21].Value & 0x40) != 0 )
      VIDMM_GLOBAL::UncommitGlobalBackingStore(v118, (struct _VIDMM_GLOBAL_ALLOC *)v76, 1);
    v155 = *(_QWORD *)&v76[124].0;
    if ( v155 )
    {
      if ( *(_QWORD *)(v155 + 24) )
      {
        v156 = *(_QWORD *)&v76[124].0;
        for ( i = 0LL; i < 16; i += 8LL )
        {
          v158 = *(_QWORD *)(v155 + 24);
          if ( *(_QWORD *)(i + v158) )
          {
            VidSchDestroySyncObject(*(PVOID *)(i + v158));
            v155 = *(_QWORD *)&v76[124].0;
            v156 = v155;
          }
        }
        operator delete(*(void **)(v156 + 24));
        v155 = *(_QWORD *)&v76[124].0;
      }
      if ( *(_QWORD *)(v155 + 16) )
      {
        VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(*(int **)(v155 + 16), v81);
        v155 = *(_QWORD *)&v76[124].0;
      }
      operator delete((void *)v155);
    }
    v159 = *(KSPIN_LOCK **)&v76[122].0;
    if ( v159 )
    {
      VIDMM_GLOBAL::FreeCrossAdapterDataDpc((VIDMM_GLOBAL *)v155, v159, (struct _VIDMM_GLOBAL_ALLOC *)v76);
      v161 = (VIDMM_GLOBAL *)(unsigned int)_InterlockedDecrement(*(volatile signed __int32 **)&v76[122].0);
      if ( (_DWORD)v161 )
      {
        if ( (int)v161 < 0 )
        {
          v162 = *(int **)&v76[122].0;
          v163 = *v162;
          v164 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v161, v160);
          v164[7] = 0LL;
          v164[3] = 270LL;
          v164[4] = 66LL;
          v164[5] = v162;
          v164[6] = v163;
          WdLogEvent5_WdCriticalError(v164);
        }
      }
      else
      {
        VIDMM_GLOBAL::DestroyCrossAdapterAllocation(v161, *(struct _VIDMM_CROSSADAPTER_ALLOC **)&v76[122].0);
        *(_QWORD *)a19 = 0LL;
      }
    }
    v165 = *(DXGFASTMUTEX **)&v76[78].0;
    if ( v165 )
      DXGFASTMUTEX::`scalar deleting destructor'(v165);
    _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v76);
    return (unsigned int)SyncObject;
  }
  v83 = operator new[](0x28uLL, 0x32346956u, (POOL_TYPE)512);
  *(_QWORD *)&v76[124].0 = v83;
  if ( !v83 )
  {
    _InterlockedIncrement(&dword_1C0050780);
    v80 = WdLogNewEntry5_WdLowResource(v84);
    *(_QWORD *)(v80 + 24) = 3186LL;
    goto LABEL_216;
  }
  *v83 = 0LL;
  v83[1] = 0LL;
  *((_QWORD *)v83 + 4) = 0LL;
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 624LL) + 57LL) )
  {
    if ( (Value & 0x40000000) != 0 || (Value & 0x80000000) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)&v76[124].0 + 24LL) = operator new[](0xA8uLL, 0x33306956u, (POOL_TYPE)512);
      v85 = *(void **)(*(_QWORD *)&v76[124].0 + 24LL);
      if ( v85 )
      {
        memset(v85, 0, 0xA8uLL);
        v174 = 0;
        Current = 16LL;
        LODWORD(v184) = 1000 * (v177[0] + 1);
        while ( 1 )
        {
          memset(v187, 0, sizeof(v187));
          v86 = *(_QWORD *)&v76[124].0;
          v87 = (int)v174;
          v187[1] |= 0x80u;
          v88 = *(_QWORD *)(v86 + 24);
          v187[0] = 5;
          v89 = v174 * (unsigned int)v184 + 100LL;
          *(_QWORD *)(Current + v88) = v89;
          v90 = *((_QWORD *)v24 + 2);
          *(_QWORD *)&v187[2] = v89;
          v91 = *(_QWORD *)(v90 + 624);
          v92 = *(_QWORD *)&v76[124].0;
          v186 = (((_DWORD)v87 != 1) + 7) & 0x7FFFFFFF;
          SyncObject = VidSchCreateSyncObject(
                         v91,
                         0,
                         (int)v187,
                         v186,
                         0LL,
                         0LL,
                         (PVOID)(*(_QWORD *)(v92 + 24) + 8 * v87),
                         0LL);
          if ( SyncObject < 0 )
            goto LABEL_324;
          Current += 8LL;
          v24 = v188;
          if ( (int)++v174 >= 2 )
            goto LABEL_231;
        }
      }
      _InterlockedIncrement(&dword_1C005066C);
      v80 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v80 + 24) = 3203LL;
      goto LABEL_216;
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)&v76[124].0 + 16LL) = operator new[](0xCuLL, 0x33306956u, (POOL_TYPE)512);
    v93 = *(_QWORD *)(*(_QWORD *)&v76[124].0 + 16LL);
    if ( !v93 )
    {
      _InterlockedIncrement(&dword_1C005066C);
      v80 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v80 + 24) = 3257LL;
      goto LABEL_216;
    }
    *(_QWORD *)v93 = 0LL;
    *(_DWORD *)(v93 + 8) = 0;
    _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)&v76[124].0 + 16LL));
    Value = v173.Value;
    v46 = v176;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v76[124].0 + 16LL) + 4LL) = -((v173.Value & 0x100000) == 0);
  }
LABEL_231:
  v94 = a12;
  if ( a12 )
  {
    v95 = *((_DWORD *)a12 + 1);
    if ( (v95 & 0x8000) != 0 )
    {
      v76[19].Value |= 0x800u;
      v95 = *((_DWORD *)a12 + 1);
    }
    if ( (v95 & 0x10000) != 0 )
    {
      v76[20].Value |= 0x400u;
      v76[19].Value |= 0x400000u;
    }
  }
  v96 = a19;
  if ( a19 )
    v96 = *(volatile signed __int32 **)a19;
  *(_QWORD *)&v76[122].0 = v96;
  if ( v96 )
  {
    _InterlockedAdd(v96, 1u);
    SyncObject = VIDMM_GLOBAL::AllocateCrossAdapterDataDpc(
                   v24,
                   *(struct _VIDMM_CROSSADAPTER_ALLOC **)&v76[122].0,
                   (struct _VIDMM_GLOBAL_ALLOC *)v76);
    if ( SyncObject < 0 )
      goto LABEL_324;
    Value = v173.Value;
    v46 = v176;
    v94 = a12;
  }
  v97 = v182;
  *(_QWORD *)&v76->0 = a4;
  v98 = (*((_DWORD *)v97 + 18) & 1) != 0 ? 0xFFFF : 4095;
  v99 = (unsigned int)v98;
  v100 = ~v98 & (v98 + a4);
  Current = v100;
  if ( a4 > v100 )
  {
    v101 = (_QWORD *)WdLogNewEntry5_WdAssertion(v98, (unsigned int)v98, a4);
    v102 = a4;
LABEL_243:
    v101[3] = v102;
LABEL_323:
    WdLogEvent5_WdAssertion(v101);
    SyncObject = -1073741811;
    goto LABEL_324;
  }
  v103 = ~v98 & (v183 + v98);
  v184 = v103;
  if ( v183 > v103 )
  {
    v101 = (_QWORD *)WdLogNewEntry5_WdAssertion(v103, v99, a4);
    v102 = v183;
    goto LABEL_243;
  }
  if ( v100 > 0xFFFF0000 && (v76[20].Value & 0x400) == 0 )
  {
    v101 = (_QWORD *)WdLogNewEntry5_WdAssertion(v103, v99, a4);
    v101[3] = 3348LL;
    goto LABEL_323;
  }
  v104 = v99 + a6;
  v105 = (unsigned int)~(_DWORD)v99;
  v106 = (unsigned int)v105 & v104;
  v174 = v106;
  if ( a6 > (unsigned int)v106 )
  {
    v101 = (_QWORD *)WdLogNewEntry5_WdAssertion(v103, v105, v106);
    v102 = a6;
    goto LABEL_243;
  }
  if ( v106 + v100 < v100 || v106 + v103 < v103 )
  {
    v101 = (_QWORD *)WdLogNewEntry5_WdAssertion(v103, v105, v106);
    v153 = v184;
    v154 = v174;
    v101[3] = v100;
    v101[4] = v153;
    v101[5] = v100;
    v101[6] = v154;
    goto LABEL_323;
  }
  if ( (Value & 0x10000000) != 0 )
  {
    Value |= 8u;
    v173.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
  }
  *(_QWORD *)&v76[88].0 = a13;
  if ( (Value & 0x20000000) == 0 || (Value & 0x10) != 0 )
    v180 = 0;
  v107 = v76[20].Value;
  v76[38].Value = 0;
  v76[20].Value = v180 | v107 & 0xFFFBFFFF;
  v108 = *(unsigned int **)&v76[124].0;
  *(_QWORD *)&v76[6].0 = v103;
  *(_QWORD *)&v76[4].0 = v100;
  *(_QWORD *)&v76[2].0 = v100;
  v76[8].Value = v106;
  *v108 = Value;
  v76[30].Value = 0;
  v76[76].Value = 0;
  v76[16].Value = a8;
  v76[17].Value = a7;
  v109 = (v76[19].Value ^ (v46 << 7)) & 0x80;
  v76[18].0 = a9.0;
  v110 = v76[19].Value ^ v109;
  *(_QWORD *)&v76[10].0 = v94;
  LODWORD(v108) = v110 ^ ((unsigned __int8)v110 ^ (unsigned __int8)(32 * v46)) & 0x40;
  v111 = (unsigned __int8)v175;
  v76[19].Value = (unsigned int)v108;
  v76[20].Value = v76[20].Value & 0xFFFE0F7F | (v111 << 7) & 0xFFFE0FFF | (v191 << 16) | (v170 << 12) & 0xFFFF1FFF | (v171 << 15) | (v169 << 13) & 0xFFFFBFFF | (v195 << 14);
  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
  {
    v112 = v76[20].Value ^ (v76[20].Value ^ (a11 << 21)) & 0x200000;
    v76[20].Value = v112;
    if ( a12 && (*((_DWORD *)a12 + 1) & 0x200000) != 0 )
      v113 = 0x400000;
    else
      v113 = 0;
    v76[20].Value = v113 | v112 & 0xFFBFFFFF;
  }
  if ( v170 )
  {
    v114 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
    v115 = *(_BYTE *)(v114 + 347);
    if ( (v115 & 0x20) != 0 )
      v116 = *(_QWORD *)(v114 + 496);
    else
      v116 = v114 & -(__int64)((v115 & 0x10) != 0);
    v117 = *(_QWORD *)(v116 + 64);
    if ( v117 )
      v117 = *(_QWORD *)(v117 + 8);
    *(_QWORD *)&v76[126].0 = v117;
  }
  v118 = v188;
  v119 = 0;
  v120 = 1;
  if ( (Value & 1) != 0 )
  {
    if ( ((*(_DWORD *)(*((_QWORD *)v188 + 3) + 348LL) & 8) != 0
       || VIDMM_GLOBAL::CheckForCpuVisibleMemorySegment(v188, v177[0], a7))
      && !a18 )
    {
      v119 = v120;
    }
    else
    {
      v119 = 0;
    }
  }
  v121 = v76[20].Value & 0xFFF7FFFF | (v119 << 19);
  v122 = v76[19].Value & 0x3F;
  v76[20].Value = v121;
  v123 = *(_DWORD **)(1584 * v122 + *((_QWORD *)v188 + 5027) + 440);
  if ( ((unsigned __int8)*((_DWORD *)v182 + 18) & (unsigned __int8)v120) != 0 )
  {
    v124 = v121 | 0x100;
  }
  else
  {
    if ( dword_1C00504B4
      && (**(_DWORD **)(*((_QWORD *)v188 + 3) + 2600LL) & 0x4000) == 0
      && (v46 & 2) != 0
      && v123
      && ((*v123 & 0x200) != 0 || dword_1C00504B4 == 2)
      && ((v125 = *(_QWORD *)&v76[2].0, !(_WORD)v125) || v125 > (unsigned int)dword_1C00504B8)
      && !v119 )
    {
      v126 = 256;
    }
    else
    {
      v126 = 0;
    }
    v124 = v126 | v121 & 0xFFFFFEFF;
  }
  v76[20].Value = v124;
  SyncObject = VIDMM_GLOBAL::CommitGlobalBackingStore(v188, (struct _VIDMM_GLOBAL_ALLOC *)v76);
  if ( SyncObject < 0 )
    goto LABEL_325;
  if ( (Value & 0x4000) != 0 )
    v76[20].Value |= 0x20u;
  if ( (*(_BYTE *)(v185 + 436) & 3) != 0 )
  {
    v127 = 1 << (*(_WORD *)(v185 + 28) - *(_BYTE *)(v185 + 20));
    v76[16].Value |= v127;
    if ( (v46 & 2) != 0 && (Value & 0x8000) == 0 )
      v76[17].Value |= v127;
  }
  v128 = v177[0];
  v129 = v188;
  v130 = v177[0];
  *(_QWORD *)&v76[12].0 = a14;
  *(_QWORD *)&v76[28].0 = a17;
  v131 = v76[19].Value & 0xF7FFFFFF | (a17 != 0 ? 0x8000000 : 0);
  v76[19].Value = v131 ^ (v131 ^ (a16 << 28)) & 0x10000000;
  v76[92].Value = a15;
  *(_QWORD *)&v76[74].0 = v76 + 72;
  *(_QWORD *)&v76[72].0 = v76 + 72;
  v76[116].Value = -1;
  v76[117].Value = -1;
  v132 = v76[19].Value;
  v172 = (v132 & 0x80) != 0;
  MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(v188, v130, a9, &v172);
  v76[19].Value = v132 ^ ((unsigned __int16)v132 ^ (v172 << 10)) & 0x400;
  if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
          v188,
          v128,
          a7,
          MostPreferredSegment,
          (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v181) )
    return 3221225485LL;
  v134 = v76[19].Value ^ (v76[19].Value ^ (v181 << 12)) & 0xF0000 ^ (*(_WORD *)&v76[19].0 ^ (unsigned __int16)((_WORD)v181 << 12)) & 0xF000;
  if ( (Value & 0x10) != 0 || (Value & 0x20) != 0 )
    *((_BYTE *)&v76[22].0 + 1) = 1;
  v76[19].Value = v134 ^ (v134 ^ (a18 << 8)) & 0x100;
  v135 = VIDMM_GLOBAL::AdapterId(v188);
  v136 = v182;
  *(_QWORD *)&v76[120].0 = *((_QWORD *)v182 + 5) + 376LL * v135;
  VidMmiReferencePartition(v136);
  v137 = **(_DWORD **)&v76[124].0;
  if ( (v137 & 0x2003A) != 0
    || (v138 = v76[20].Value, (v138 & 0x2000) != 0)
    || (v76[19].Value & 0x100) != 0
    || (v138 & 0x400) != 0
    || (v137 & 0x40000000) != 0 )
  {
    v138 = v76[20].Value;
    v139 = 0;
  }
  else
  {
    v139 = 0x20000;
  }
  v140 = v139 | v138 & 0xFFFDFFFF;
  v141 = bTracingEnabled == 0;
  v76[20].Value = v140;
  if ( v141 )
    goto LABEL_318;
  v142 = *(_QWORD *)&v76[10].0;
  v143 = v142 ? *(unsigned int **)(v142 + 24) : 0LL;
  v144 = *(_WORD *)&v76[19].0 & 0x3F;
  v182 = *(struct VIDMM_PARTITION **)(a2 + 24);
  v183 = *((_QWORD *)v188 + 3);
  v185 = *(_QWORD *)&v76[88].0;
  *(_QWORD *)v177 = PsGetCurrentProcessId();
  LOBYTE(v188) = 0;
  v140 = 0LL;
  LOBYTE(v192) = 0;
  LOBYTE(v145) = 0;
  v196 = 0;
  v146 = 0LL;
  LOBYTE(v147) = 0;
  LOBYTE(v148) = 0;
  LOBYTE(v149) = 0;
  if ( v143 )
  {
    v140 = *v143;
    v145 = v143[1];
    v146 = v143[2];
    v147 = v143[3];
    v148 = v143[4];
    v149 = v143[5];
    LODWORD(v188) = v143[6];
    v192 = v143[7];
    v150 = v143[8];
    v151 = v143[9];
    v196 = v150;
  }
  else
  {
    LOBYTE(v151) = 0;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) == 0 )
  {
LABEL_318:
    v152 = Current;
  }
  else
  {
    v168 = v151;
    v152 = Current;
    McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
      v140,
      &EventCreateAdapterAllocation,
      v146,
      *(__int64 *)v177,
      (char)v182,
      v183,
      v20,
      Current,
      v174,
      v166,
      a7,
      *(_BYTE *)&a9.0,
      v167,
      a8,
      a15,
      (char)v76,
      v142,
      0,
      v140,
      v145,
      v146,
      v147,
      v148,
      v149,
      (char)v188,
      v192,
      v196,
      v168,
      0,
      v185,
      v144,
      a18);
  }
  ++*((_DWORD *)v129 + 1910);
  *((_QWORD *)v129 + 956) += v152;
  *((_QWORD *)v129 + 5023) += v152;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v140) + 24) = v76;
  *a20 = v76;
  return 0LL;
}
