/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C009CCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002198 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00199C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage @ 0x1C001A5BC (Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00853FC (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?IntegrateMultirangeIntoTrees_To_Remove@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0085854 (-IntegrateMultirangeIntoTrees_To_Remove@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C008675C (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0096940 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0096EB4 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0099800 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0099D0C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C009AA38 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C009AF28 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C009AF50 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009B76C (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C009B840 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C009C2F0 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C009E640 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C00A9448 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00B0440 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00B0AD0 (-VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B3404 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F5734 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F58C0 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F5994 (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F5A08 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00F5CFC (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F6618 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Allocate(
        VIDMM_RECYCLE_HEAP_MGR **a1,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        void **a5,
        void **a6,
        void **a7,
        unsigned __int8 *a8,
        unsigned __int8 a9,
        char a10)
{
  __int64 v10; // r13
  int v11; // r15d
  unsigned __int64 v12; // r12
  VIDMM_RECYCLE_HEAP_MGR **v13; // r14
  __int64 v14; // rcx
  VIDMM_RECYCLE_HEAP_MGR **v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int8 v22; // di
  __int64 v23; // rsi
  int v24; // eax
  VIDMM_RECYCLE_HEAP_MGR **v25; // rcx
  VIDMM_RECYCLE_HEAP_MGR **v26; // rbx
  __int64 v27; // rcx
  VIDMM_RECYCLE_HEAP_MGR **v30; // r15
  VIDMM_RECYCLE_HEAP_MGR **v31; // r14
  VIDMM_RECYCLE_HEAP_MGR *v32; // rdi
  int AlignedRange; // eax
  struct VIDMM_RECYCLE_MULTIRANGE *BlockAndRange; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rdi
  unsigned __int64 i; // r14
  __int64 v39; // rax
  int v40; // eax
  int v41; // eax
  unsigned int v42; // r8d
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // r15
  int v50; // eax
  __int64 v51; // rax
  PVOID v52; // rsi
  CCHAR LeastSignificantBit; // al
  __int64 v54; // rax
  __int64 v55; // r15
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rcx
  struct VIDMM_RECYCLE_RANGE *j; // rdi
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  __int64 v64; // r14
  __int64 v65; // r8
  struct _RTL_BALANCED_NODE *v66; // rdi
  __int64 v67; // rax
  struct _RTL_BALANCED_NODE *v68; // rax
  __int64 v69; // r14
  __int64 v70; // r8
  struct _RTL_BALANCED_NODE *v71; // rdi
  __int64 v72; // rax
  struct _RTL_BALANCED_NODE *v73; // rax
  __int64 v74; // r14
  __int64 v75; // r8
  struct _RTL_BALANCED_NODE *v76; // rdi
  __int64 v77; // rax
  struct _RTL_BALANCED_NODE *v78; // rax
  struct VIDMM_RECYCLE_RANGE *k; // rdi
  struct VIDMM_RECYCLE_MULTIRANGE *v80; // rsi
  struct VIDMM_RECYCLE_MULTIRANGE *v81; // rsi
  struct VIDMM_RECYCLE_MULTIRANGE *v82; // rsi
  int v83; // edi
  __int64 v84; // rsi
  int v85; // edi
  unsigned __int8 v86; // dl
  VIDMM_RECYCLE_HEAP_MGR **v87; // rcx
  VIDMM_RECYCLE_RANGE *v88; // rdi
  int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // r8
  struct VIDMM_RECYCLE_RANGE *m; // rax
  struct VIDMM_RECYCLE_RANGE *v93; // r8
  struct VIDMM_RECYCLE_RANGE *v94; // rdi
  struct VIDMM_RECYCLE_RANGE *v95; // r9
  struct VIDMM_RECYCLE_RANGE *v96; // rax
  int v97; // r11d
  int v98; // r10d
  struct VIDMM_RECYCLE_RANGE *v99; // r14
  struct VIDMM_RECYCLE_RANGE *v100; // rdx
  _QWORD *v101; // rdi
  _QWORD *v102; // rcx
  struct VIDMM_RECYCLE_RANGE *v103; // rsi
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // r9
  int v107; // edx
  void *v108; // rax
  char v109; // r8
  struct VIDMM_RECYCLE_RANGE *v110; // rax
  struct VIDMM_RECYCLE_RANGE *v111; // r9
  __int64 v112; // rcx
  __int64 v113; // r8
  bool v114; // [rsp+50h] [rbp-91h] BYREF
  char v115; // [rsp+51h] [rbp-90h]
  VIDMM_RECYCLE_HEAP_MGR **v116; // [rsp+58h] [rbp-89h]
  VIDMM_RECYCLE_HEAP_MGR **v117; // [rsp+60h] [rbp-81h]
  __int64 v118; // [rsp+68h] [rbp-79h]
  VIDMM_RECYCLE_HEAP_MGR **v119; // [rsp+70h] [rbp-71h]
  char v120; // [rsp+78h] [rbp-69h]
  int v121; // [rsp+80h] [rbp-61h] BYREF
  __int64 v122; // [rsp+88h] [rbp-59h]
  char v123; // [rsp+90h] [rbp-51h]
  int v124; // [rsp+98h] [rbp-49h]
  __int64 v125; // [rsp+A0h] [rbp-41h] BYREF
  __int64 v126; // [rsp+A8h] [rbp-39h]
  char v127; // [rsp+B0h] [rbp-31h]
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // [rsp+B8h] [rbp-29h]
  _QWORD v129[2]; // [rsp+C0h] [rbp-21h] BYREF
  unsigned __int8 v130; // [rsp+D0h] [rbp-11h]

  v10 = a3;
  v119 = a1 + 166;
  v120 = 0;
  v11 = a4;
  v12 = a2;
  v13 = a1;
  if ( a1 == (VIDMM_RECYCLE_HEAP_MGR **)-1328LL )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(v14, 262146LL);
  }
  v15 = v119;
  KeEnterCriticalRegion();
  if ( v15[3] == KeGetCurrentThread() )
  {
    if ( *((int *)v15 + 8) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      DxgkLogInternalTriageEvent(v17, 262146LL);
    }
    ++*((_DWORD *)v15 + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15 + 1, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v19 = *((_DWORD *)v15 + 9);
        if ( v19 != -1 && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v18, v19);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v15 + 2);
      ExAcquirePushLockExclusiveEx(v15 + 1, 0LL);
    }
    if ( v15[3] )
    {
      WdLogSingleEntry1(1LL, 515LL);
      DxgkLogInternalTriageEvent(v20, 262146LL);
    }
    if ( *((_DWORD *)v15 + 8) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(v21, 262146LL);
    }
    v15[3] = KeGetCurrentThread();
    *((_DWORD *)v15 + 8) = 1;
  }
  v22 = a9;
  LODWORD(v23) = -1073741823;
  v120 = 1;
  v115 = 0;
  while ( 2 )
  {
    if ( a10 )
    {
      switch ( v11 )
      {
        case 1:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 92,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 2:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 101,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 3:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 110,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 4:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 119,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 5:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 128,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 6:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 137,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 7:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 146,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 8:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 155,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        default:
          goto LABEL_42;
      }
      goto LABEL_42;
    }
    if ( v11 != 2 )
    {
      switch ( v11 )
      {
        case 1:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 2,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 3:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 20,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 4:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 29,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 5:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 38,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 6:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 47,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 7:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 56,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 8:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 65,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 9:
          v25 = v13 + 74;
          goto LABEL_40;
        case 10:
          v25 = v13 + 83;
LABEL_40:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v25,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  a7,
                  a8,
                  v22);
LABEL_41:
          LODWORD(v23) = v24;
          break;
        default:
          break;
      }
LABEL_42:
      if ( (int)v23 < 0 )
        goto LABEL_196;
      break;
    }
    v30 = v13 + 11;
    v116 = v13 + 11;
    v121 = -1;
    v122 = 0LL;
    if ( (qword_1C0076010 & 2) != 0 )
    {
      v123 = 1;
      v121 = 8004;
      if ( byte_1C00769C1 < 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerEnter, (__int64)a5, 8004);
    }
    else
    {
      v123 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry();
    v118 = v10;
    WdLogSingleEntry3(4LL, v13 + 11, v12, v10);
    v31 = v13 + 17;
    v130 = v22;
    v32 = v30[6];
    v129[0] = v12;
    v129[1] = v10;
    v117 = v30 + 6;
    if ( v32 )
    {
      do
      {
        AlignedRange = VidMmFindAlignedRange(v129, (struct _RTL_BALANCED_NODE *)v32);
        if ( AlignedRange >= 0 )
        {
          if ( AlignedRange <= 0 )
            break;
          v32 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v32 + 1);
        }
        else
        {
          v32 = *(VIDMM_RECYCLE_HEAP_MGR **)v32;
        }
      }
      while ( v32 );
      if ( v32 )
      {
        if ( !*((_DWORD *)v32 + 6) )
        {
          VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v30, *((unsigned int *)v32 + 22), v32);
          BlockAndRange = VIDMM_RECYCLE_HEAP::BuildIdleLockedMultirangeForRange((VIDMM_RECYCLE_HEAP *)v30, v32);
          if ( !BlockAndRange )
          {
            v35 = 0LL;
LABEL_95:
            VIDMM_RECYCLE_HEAP::AddRangeToTree(v30, v35, v32);
LABEL_96:
            WdLogSingleEntry3(4LL, v30, v12, v10);
            v22 = a9;
            BlockAndRange = VIDMM_RECYCLE_HEAP::CreateBlockAndRange((VIDMM_RECYCLE_HEAP *)v30, v12, v42, a9);
            if ( !BlockAndRange )
            {
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v121);
              if ( v123 && byte_1C00769C1 < 0 )
                McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v121);
              LODWORD(v23) = -1073741801;
              goto LABEL_195;
            }
            goto LABEL_67;
          }
          goto LABEL_67;
        }
LABEL_66:
        BlockAndRange = v32;
        goto LABEL_67;
      }
    }
    v32 = v30[7];
    if ( !v32 )
      goto LABEL_85;
    do
    {
      v40 = VidMmFindAlignedRange(v129, (struct _RTL_BALANCED_NODE *)v32);
      if ( v40 >= 0 )
      {
        if ( v40 <= 0 )
          break;
        v32 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v32 + 1);
      }
      else
      {
        v32 = *(VIDMM_RECYCLE_HEAP_MGR **)v32;
      }
    }
    while ( v32 );
    if ( !v32 )
    {
LABEL_85:
      v32 = v30[8];
      if ( !v32 )
        goto LABEL_96;
      do
      {
        v41 = VidMmFindAlignedRange(v129, (struct _RTL_BALANCED_NODE *)v32);
        if ( v41 >= 0 )
        {
          if ( v41 <= 0 )
            break;
          v32 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v32 + 1);
        }
        else
        {
          v32 = *(VIDMM_RECYCLE_HEAP_MGR **)v32;
        }
      }
      while ( v32 );
      if ( !v32 )
        goto LABEL_96;
      if ( !*((_DWORD *)v32 + 6) )
      {
        VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v30, *((unsigned int *)v32 + 22), v32);
        BlockAndRange = VIDMM_RECYCLE_HEAP::BuildIdleFreeMultirangeForRange((VIDMM_RECYCLE_HEAP *)v30, v32);
        if ( !BlockAndRange )
        {
          v35 = 2LL;
          goto LABEL_95;
        }
        goto LABEL_67;
      }
      goto LABEL_66;
    }
    if ( *((_DWORD *)v32 + 6) )
      goto LABEL_66;
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v30, *((unsigned int *)v32 + 22), v32);
    BlockAndRange = VIDMM_RECYCLE_HEAP::BuildIdleCommittedMultirangeForRange((VIDMM_RECYCLE_HEAP *)v30, v32);
    if ( !BlockAndRange )
    {
      v35 = 1LL;
      goto LABEL_95;
    }
LABEL_67:
    v36 = *((_QWORD *)BlockAndRange + 6);
    if ( *((_QWORD *)BlockAndRange + 5) - v36 <= v12 )
      goto LABEL_160;
    NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
    for ( i = v36 + v12; NextRange; NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange) )
    {
      if ( *((_QWORD *)NextRange + 4) <= i && *((_QWORD *)NextRange + 5) > i )
        break;
    }
    v39 = *((_QWORD *)NextRange + 4);
    if ( v39 == i )
    {
      PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(NextRange);
    }
    else
    {
      v114 = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(NextRange, i - v39, &v114);
      if ( !v114 )
      {
        WdLogSingleEntry2(
          3LL,
          BlockAndRange,
          **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)BlockAndRange + 10) + 32LL) + 8LL) + 8LL));
        v31 = v30 + 6;
        goto LABEL_160;
      }
      if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9)
        && *((_QWORD *)NextRange + 5) != *((_QWORD *)BlockAndRange + 5) )
      {
        *((_QWORD *)BlockAndRange + 9) = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
      v45 = *((_QWORD *)NextRange + 15);
      v46 = *((_QWORD *)NextRange + 9);
      PreviousRange = NextRange;
      NextRange = 0LL;
      if ( v45 != v46 + 72 )
        NextRange = (struct VIDMM_RECYCLE_RANGE *)(v45 - 120);
    }
    v47 = *((_QWORD *)BlockAndRange + 10);
    v48 = *((_QWORD *)BlockAndRange + 5);
    v124 = *((_DWORD *)BlockAndRange + 54);
    v49 = *(_QWORD *)(*(_QWORD *)(v47 + 32) + 8LL);
    v50 = *(_DWORD *)(v49 + 1620);
    if ( v50 )
    {
      v51 = (unsigned int)(v50 - 1);
      v52 = *(PVOID *)(v49 + 8 * v51 + 1656);
      *(_QWORD *)(v49 + 8 * v51 + 1656) = 0LL;
      --*(_DWORD *)(v49 + 1620);
    }
    else
    {
      v52 = ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v49 + 1320));
    }
    if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage() )
    {
      if ( !v52 )
        goto LABEL_159;
      ++*(_DWORD *)(v49 + 1688);
    }
    else if ( !v52 )
    {
      goto LABEL_159;
    }
    WdLogSingleEntry1(4LL, v52);
    *((_QWORD *)v52 + 4) = i;
    *((_QWORD *)v52 + 8) = 0LL;
    *((_QWORD *)v52 + 9) = 0LL;
    *((_DWORD *)v52 + 54) = v124;
    *((_DWORD *)v52 + 6) = 1;
    *((_QWORD *)v52 + 10) = v47;
    *((_QWORD *)v52 + 5) = v48;
    *((_QWORD *)v52 + 6) = i;
    *((_WORD *)v52 + 64) = 0;
    ++*(_QWORD *)(v47 + 8);
    LeastSignificantBit = RtlFindLeastSignificantBit(*((_QWORD *)v52 + 4));
    if ( LeastSignificantBit < 0 )
      v54 = 0LL;
    else
      v54 = 1LL << LeastSignificantBit;
    *((_QWORD *)v52 + 7) = v54;
    v55 = *((_QWORD *)v52 + 10);
    *((_QWORD *)v52 + 11) = 3LL;
    *((_QWORD *)v52 + 12) = 0LL;
    *((_QWORD *)v52 + 13) = 0LL;
    *((_QWORD *)v52 + 14) = 0LL;
    *((_QWORD *)v52 + 15) = 0LL;
    *((_BYTE *)v52 + 130) = 0;
    *((_QWORD *)v52 + 17) = 0LL;
    *((_QWORD *)v52 + 18) = 0LL;
    *((_QWORD *)v52 + 24) = 0LL;
    *((_WORD *)v52 + 76) = 0;
    *((_QWORD *)v52 + 20) = 0LL;
    *((_QWORD *)v52 + 21) = 0LL;
    *((_QWORD *)v52 + 23) = 0LL;
    *((_QWORD *)v52 + 22) = 0LL;
    *((_QWORD *)v52 + 25) = 0LL;
    *((_QWORD *)v52 + 26) = 0LL;
    *((_BYTE *)v52 + 232) = 0;
    *((_QWORD *)v52 + 28) = 0LL;
    v56 = *(_QWORD *)(v55 + 136);
    if ( v56 )
    {
      v57 = *(_QWORD *)(v56 + 24) + 144LL * *(_QWORD *)(v56 + 32);
      *(_DWORD *)v57 = 0;
      *(_QWORD *)(v57 + 8) = v52;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v57 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v55 + 136) + 32LL);
      v58 = *(_QWORD *)(v55 + 136);
      if ( *(_QWORD *)(v58 + 32) == *(_QWORD *)(v58 + 48) )
      {
        *(_QWORD *)(v58 + 32) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v55 + 136) + 40LL) = 1;
      }
    }
    *((_QWORD *)v52 + 8) = NextRange;
    *((_QWORD *)v52 + 9) = *((_QWORD *)BlockAndRange + 9);
    *((_QWORD *)BlockAndRange + 9) = PreviousRange;
    *((_QWORD *)BlockAndRange + 5) = i;
    for ( j = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v52 + 8); ; j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
    {
      v60 = *((_DWORD *)v52 + 54);
      if ( v60 )
      {
        v61 = v60 - 1;
        if ( v61 )
        {
          if ( v61 == 1 )
          {
            *((_QWORD *)j + 19) = v52;
          }
          else
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, 0LL, 0LL);
          }
        }
        else
        {
          *((_QWORD *)j + 18) = v52;
        }
      }
      else
      {
        *((_QWORD *)j + 17) = v52;
      }
      if ( j == *((struct VIDMM_RECYCLE_RANGE **)v52 + 9) )
        break;
    }
    v62 = *((_DWORD *)BlockAndRange + 54);
    if ( !v62 )
    {
      v74 = *(_QWORD *)(*((_QWORD *)BlockAndRange + 10) + 32LL);
      WdLogSingleEntry2(4LL, v52, 2LL);
      LOBYTE(v75) = 0;
      v76 = *(struct _RTL_BALANCED_NODE **)(v74 + 64);
      v77 = *((_QWORD *)v52 + 7);
      v125 = *((_QWORD *)v52 + 5) - *((_QWORD *)v52 + 4);
      v126 = v77;
      v127 = 0;
      if ( v76 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(&v125, v76) < 0 )
          {
            v78 = v76->Children[0];
            if ( !v76->Children[0] )
            {
              LOBYTE(v75) = 0;
              break;
            }
          }
          else
          {
            v78 = v76->Children[1];
            if ( !v78 )
            {
              LOBYTE(v75) = 1;
              break;
            }
          }
          v76 = v78;
        }
      }
      RtlAvlInsertNodeEx(v74 + 64, v76, v75, v52);
      *((_DWORD *)v52 + 22) = 2;
      goto LABEL_159;
    }
    v63 = v62 - 1;
    if ( !v63 )
    {
      v69 = *(_QWORD *)(*((_QWORD *)BlockAndRange + 10) + 32LL);
      WdLogSingleEntry2(4LL, v52, 1LL);
      LOBYTE(v70) = 0;
      v71 = *(struct _RTL_BALANCED_NODE **)(v69 + 56);
      v72 = *((_QWORD *)v52 + 7);
      v125 = *((_QWORD *)v52 + 5) - *((_QWORD *)v52 + 4);
      v126 = v72;
      v127 = 0;
      if ( v71 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(&v125, v71) < 0 )
          {
            v73 = v71->Children[0];
            if ( !v71->Children[0] )
            {
              LOBYTE(v70) = 0;
              break;
            }
          }
          else
          {
            v73 = v71->Children[1];
            if ( !v73 )
            {
              LOBYTE(v70) = 1;
              break;
            }
          }
          v71 = v73;
        }
      }
      RtlAvlInsertNodeEx(v69 + 56, v71, v70, v52);
      *((_DWORD *)v52 + 22) = 1;
      goto LABEL_159;
    }
    if ( v63 != 1 )
      goto LABEL_159;
    v64 = *(_QWORD *)(*((_QWORD *)BlockAndRange + 10) + 32LL);
    WdLogSingleEntry2(4LL, v52, 0LL);
    LOBYTE(v65) = 0;
    v66 = *(struct _RTL_BALANCED_NODE **)(v64 + 48);
    v67 = *((_QWORD *)v52 + 7);
    v125 = *((_QWORD *)v52 + 5) - *((_QWORD *)v52 + 4);
    v126 = v67;
    v127 = 0;
    if ( !v66 )
      goto LABEL_142;
    while ( (int)VidMmCompareForInsertAlignedRange(&v125, v66) >= 0 )
    {
      v68 = v66->Children[1];
      if ( !v68 )
      {
        LOBYTE(v65) = 1;
        goto LABEL_142;
      }
LABEL_140:
      v66 = v68;
    }
    v68 = v66->Children[0];
    if ( v66->Children[0] )
      goto LABEL_140;
    LOBYTE(v65) = 0;
LABEL_142:
    RtlAvlInsertNodeEx(v64 + 48, v66, v65, v52);
    *((_DWORD *)v52 + 22) = 0;
LABEL_159:
    v10 = v118;
    v12 = a2;
    v31 = v117;
    v30 = v116;
LABEL_160:
    for ( k = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8); ; k = VIDMM_RECYCLE_RANGE::GetNextRange(k) )
    {
      WdLogSingleEntry1(4LL, k);
      if ( *((_DWORD *)BlockAndRange + 54) )
      {
        v80 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)k + 17);
        if ( v80 )
        {
          WdLogSingleEntry1(4LL, *((_QWORD *)k + 17));
          VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap((VIDMM_RECYCLE_HEAP *)v30, v80, BlockAndRange);
          *((_QWORD *)k + 17) = 0LL;
        }
      }
      if ( *((_DWORD *)BlockAndRange + 54) != 1 )
      {
        v81 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)k + 18);
        if ( v81 )
        {
          WdLogSingleEntry1(4LL, *((_QWORD *)k + 18));
          VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap((VIDMM_RECYCLE_HEAP *)v30, v81, BlockAndRange);
          *((_QWORD *)k + 18) = 0LL;
        }
      }
      if ( *((_DWORD *)BlockAndRange + 54) != 2 )
      {
        v82 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)k + 19);
        if ( v82 )
        {
          WdLogSingleEntry1(4LL, *((_QWORD *)k + 19));
          VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap((VIDMM_RECYCLE_HEAP *)v30, v82, BlockAndRange);
          *((_QWORD *)k + 19) = 0LL;
        }
      }
      if ( k == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
        break;
    }
    v83 = *((_DWORD *)BlockAndRange + 22);
    v84 = v83;
    WdLogSingleEntry2(4LL, BlockAndRange, v83);
    if ( !v83 )
    {
      v87 = v31;
      goto LABEL_179;
    }
    v85 = v83 - 1;
    if ( !v85 )
    {
      v87 = v30 + 7;
      goto LABEL_179;
    }
    if ( v85 == 1 )
    {
      v87 = v30 + 8;
LABEL_179:
      RtlAvlRemoveNode(v87, BlockAndRange);
      goto LABEL_180;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v84, 0LL);
LABEL_180:
    v88 = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
    *((_DWORD *)BlockAndRange + 22) = 3;
    while ( 1 )
    {
      v89 = VIDMM_RECYCLE_RANGE::Commit(v88, v86, a8);
      v23 = v89;
      if ( v89 < 0 )
        break;
      if ( v88 == *((VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
      {
        for ( m = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8); ; m = VIDMM_RECYCLE_RANGE::GetNextRange(m) )
        {
          *((_QWORD *)m + 17) = 0LL;
          *((_QWORD *)m + 18) = 0LL;
          *((_QWORD *)m + 19) = 0LL;
          *((_QWORD *)m + 20) = BlockAndRange;
          v93 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 9);
          if ( m == v93 )
            break;
        }
        v94 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
        *((_DWORD *)BlockAndRange + 54) = 3;
        v95 = v94;
        v96 = v94;
        v97 = *((_DWORD *)v94 + 16);
        v98 = *((_DWORD *)v94 + 23);
        while ( 1 )
        {
          v99 = v94;
          if ( *((_DWORD *)v94 + 16) != v97 || *((_DWORD *)v94 + 23) != v98 )
          {
            if ( v95 != v96 )
            {
              VIDMM_RECYCLE_MULTIRANGE::MergeRanges(BlockAndRange, v95, v96);
              v93 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 9);
            }
            v95 = v94;
          }
          if ( v94 == v93 )
            break;
          v94 = VIDMM_RECYCLE_RANGE::GetNextRange(v94);
          v96 = v99;
        }
        if ( v95 != v94 )
          VIDMM_RECYCLE_MULTIRANGE::MergeRanges(BlockAndRange, v95, v94);
        if ( !*((_DWORD *)BlockAndRange + 54) )
        {
          v100 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
          if ( v100 == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) && !*((_DWORD *)v100 + 16) )
            VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)BlockAndRange + 10), v100);
        }
        v101 = (_QWORD *)*((_QWORD *)BlockAndRange + 10);
        v102 = v101;
        if ( *v101 == 1LL && !*((_DWORD *)BlockAndRange + 54) )
        {
          v103 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
          if ( !*((_DWORD *)v103 + 16) )
          {
            VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v101[4], 2, (__int64)BlockAndRange);
            VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(v101[4] + 8LL), BlockAndRange);
            VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*(VIDMM_RECYCLE_HEAP_MGR **)(v101[4] + 8LL), v103);
            v102 = (_QWORD *)*((_QWORD *)BlockAndRange + 10);
          }
        }
        v104 = *((_QWORD *)BlockAndRange + 9);
        v105 = 0LL;
        v106 = *(_QWORD *)(v104 + 120);
        if ( v106 != *(_QWORD *)(v104 + 72) + 72LL )
          v105 = v106 - 120;
        if ( v105 && !*(_DWORD *)(v105 + 64) )
          VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(v102, v105);
        *a5 = BlockAndRange;
        v107 = **(_DWORD **)(*((_QWORD *)BlockAndRange + 10) + 32LL);
        if ( (unsigned int)(v107 - 3) > 3 || (unsigned int)(v107 - 5) <= 1 )
          v108 = (void *)*((_QWORD *)BlockAndRange + 6);
        else
          v108 = (void *)(*((_QWORD *)BlockAndRange + 20) + *((_QWORD *)BlockAndRange + 21));
        v109 = 1;
        *a6 = v108;
        v110 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
        v111 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 9);
        while ( 1 )
        {
          if ( *((_DWORD *)v110 + 20) > 1u )
            v109 = 0;
          if ( v110 == v111 )
            break;
          v110 = VIDMM_RECYCLE_RANGE::GetNextRange(v110);
        }
        *a8 = v109;
        *(_QWORD *)(*((_QWORD *)v30[1] + 1) + 136LL) += *((_QWORD *)BlockAndRange + 5) - *((_QWORD *)BlockAndRange + 4);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v121);
        if ( v123 && byte_1C00769C1 < 0 )
          McTemplateK0q_EtwWriteTransfer(v112, &EventProfilerExit, v113, v121);
        LODWORD(v23) = 0;
        goto LABEL_43;
      }
      v88 = VIDMM_RECYCLE_RANGE::GetNextRange(v88);
    }
    while ( v88 != *((VIDMM_RECYCLE_RANGE **)BlockAndRange + 8) )
    {
      v88 = VIDMM_RECYCLE_RANGE::GetPreviousRange(v88);
      VIDMM_RECYCLE_RANGE::Decommit(v88);
    }
    WdLogSingleEntry5(3LL, BlockAndRange, v12, v10, v23, **((_QWORD **)v30[1] + 1));
    if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage() )
    {
      VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees((VIDMM_RECYCLE_HEAP *)v30, BlockAndRange);
      goto LABEL_190;
    }
    if ( !VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees_To_Remove((VIDMM_RECYCLE_HEAP *)v30, BlockAndRange) )
LABEL_190:
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v30[1], BlockAndRange);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v121);
    if ( v123 && byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer(v90, &EventProfilerExit, v91, v121);
    v22 = a9;
LABEL_195:
    v11 = a4;
    v10 = a3;
    v13 = a1;
LABEL_196:
    if ( !v115 )
    {
      VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList((VIDMM_RECYCLE_HEAP_MGR *)v13, 0, 0);
      v115 = 1;
      continue;
    }
    break;
  }
LABEL_43:
  if ( v120 )
  {
    v26 = v119;
    v120 = 0;
    if ( v119[3] != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v119, 0LL, 0LL);
    if ( *((int *)v26 + 8) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(v27, 262146LL);
    }
    if ( (*((_DWORD *)v26 + 8))-- == 1 )
    {
      v26[3] = 0LL;
      ExReleasePushLockExclusiveEx(v26 + 1, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v23;
}
