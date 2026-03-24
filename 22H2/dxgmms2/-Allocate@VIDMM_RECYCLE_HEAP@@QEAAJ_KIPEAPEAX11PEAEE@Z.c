/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007B500
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C007B2E0 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0005710 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z @ 0x1C0005FC8 (-NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0015614 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0017928 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024D70 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005F0EC (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1C00742DC (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0074C60 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0074C90 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00796C4 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00797F8 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C007990C (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C0079B20 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0079C88 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0079E00 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007A0C8 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C007A160 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C007C200 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C007D644 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00850D0 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00855F0 (-VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0086784 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00871A8 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0087734 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00BF4CC (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00BF66C (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00BF740 (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00BF7B4 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00BFAD4 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C032C (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::Allocate(
        VIDMM_RECYCLE_HEAP *this,
        unsigned __int64 a2,
        __int64 a3,
        struct VIDMM_RECYCLE_MULTIRANGE **a4,
        void **a5,
        void **a6,
        unsigned __int8 *a7,
        unsigned __int8 a8)
{
  unsigned int v8; // ebp
  VIDMM_RECYCLE_HEAP *v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _RTL_BALANCED_NODE *v18; // rbx
  int AlignedRange; // eax
  int v20; // eax
  struct VIDMM_RECYCLE_MULTIRANGE *BlockAndRange; // r13
  int v22; // eax
  _QWORD *v23; // rax
  unsigned int v24; // r8d
  __int64 v25; // rdi
  __int64 v26; // rdx
  struct VIDMM_RECYCLE_RANGE *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // r14
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rax
  __int64 v44; // rcx
  struct _RTL_BALANCED_NODE **v45; // rcx
  struct VIDMM_RECYCLE_RANGE *i; // rdx
  int v47; // ecx
  int v48; // ecx
  void *v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rbx
  void (__fastcall *v54)(__int64, __int64); // rax
  unsigned __int64 v55; // r9
  _QWORD *v56; // r8
  _QWORD *v57; // r10
  unsigned __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rax
  _QWORD *v65; // rax
  struct _RTL_BALANCED_NODE *v66; // rbx
  struct _RTL_BALANCED_NODE *v67; // rax
  struct _RTL_BALANCED_NODE *v68; // rbx
  struct _RTL_BALANCED_NODE *v69; // rax
  struct _RTL_BALANCED_NODE *v70; // rbx
  struct _RTL_BALANCED_NODE *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // r8
  struct VIDMM_RECYCLE_MULTIRANGE *v74; // rbx
  __int64 v75; // rax
  __int64 v76; // r9
  struct VIDMM_RECYCLE_MULTIRANGE *v77; // rbx
  __int64 v78; // rax
  __int64 v79; // r9
  __int64 v80; // rdi
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  struct VIDMM_RECYCLE_RANGE *v82; // r14
  struct VIDMM_RECYCLE_RANGE *v83; // rbx
  VIDMM_RECYCLE_MULTIRANGE *Multirange; // rax
  VIDMM_RECYCLE_MULTIRANGE *v85; // rdi
  int v86; // ecx
  __int64 v87; // rdx
  __int64 v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rdi
  __int64 v91; // rdx
  __int64 v92; // rcx
  int v93; // ebx
  _QWORD *v94; // rax
  unsigned __int8 v95; // dl
  char *v96; // rcx
  VIDMM_RECYCLE_RANGE *PreviousRange; // rbx
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  struct VIDMM_RECYCLE_RANGE *j; // rax
  struct VIDMM_RECYCLE_RANGE *v102; // rbx
  struct VIDMM_RECYCLE_RANGE *v103; // r9
  struct VIDMM_RECYCLE_RANGE *v104; // r8
  int v105; // r10d
  int v106; // r11d
  struct VIDMM_RECYCLE_RANGE *v107; // rdi
  struct VIDMM_RECYCLE_RANGE *v108; // rdx
  VIDMM_RECYCLE_BLOCK *v109; // rbx
  VIDMM_RECYCLE_BLOCK *v110; // rcx
  struct VIDMM_RECYCLE_RANGE *v111; // rdi
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // r9
  int v115; // edx
  void *v116; // rcx
  __int64 v117; // rdx
  void *v118; // rcx
  struct VIDMM_RECYCLE_RANGE *v119; // rcx
  char v120; // r8
  struct VIDMM_RECYCLE_RANGE *v121; // r9
  unsigned __int8 v122; // dl
  _QWORD *v123; // rax
  __int64 v124; // rcx
  __int64 v125; // r8
  struct _RTL_BALANCED_NODE **v127; // [rsp+30h] [rbp-98h]
  struct VIDMM_RECYCLE_RANGE *v128; // [rsp+38h] [rbp-90h]
  int v129; // [rsp+40h] [rbp-88h] BYREF
  __int64 v130; // [rsp+48h] [rbp-80h]
  char v131; // [rsp+50h] [rbp-78h]
  __int64 v132; // [rsp+58h] [rbp-70h]
  _QWORD v133[2]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int8 v134; // [rsp+70h] [rbp-58h]
  _QWORD v135[2]; // [rsp+78h] [rbp-50h] BYREF
  char v136; // [rsp+88h] [rbp-40h]
  unsigned int v140; // [rsp+108h] [rbp+40h]

  v8 = 0;
  v10 = this;
  v129 = -1;
  v11 = (unsigned int)a3;
  v130 = 0LL;
  if ( (qword_1C0050010 & 2) != 0 )
  {
    v131 = 1;
    v129 = 8004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 8004);
  }
  else
  {
    v131 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12);
  v15 = v11;
  v132 = v11;
  v14[3] = v10;
  v14[4] = a2;
  v14[5] = v11;
  WdLogEvent5_WdEvent(v14);
  v133[1] = v11;
  v18 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v10 + 6);
  v133[0] = a2;
  v134 = a8;
  v127 = (struct _RTL_BALANCED_NODE **)((char *)v10 + 48);
  while ( v18 )
  {
    AlignedRange = VidMmFindAlignedRange(v133, v18);
    if ( AlignedRange >= 0 )
    {
      if ( AlignedRange <= 0 )
      {
        if ( !LODWORD(v18[1].Children[0]) )
        {
          VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v10, LODWORD(v18[3].ParentValue), v18);
          BlockAndRange = VIDMM_RECYCLE_HEAP::BuildIdleLockedMultirangeForRange(v10, (struct VIDMM_RECYCLE_RANGE *)v18);
          if ( BlockAndRange )
            goto LABEL_37;
          VIDMM_RECYCLE_HEAP::AddRangeToTree(v10, 0LL, v18);
          goto LABEL_35;
        }
        goto LABEL_33;
      }
      v18 = v18->Children[1];
    }
    else
    {
      v18 = v18->Children[0];
    }
  }
  v18 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v10 + 7);
  while ( v18 )
  {
    v20 = VidMmFindAlignedRange(v133, v18);
    if ( v20 >= 0 )
    {
      if ( v20 <= 0 )
      {
        if ( !LODWORD(v18[1].Children[0]) )
        {
          VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v10, LODWORD(v18[3].ParentValue), v18);
          BlockAndRange = VIDMM_RECYCLE_HEAP::BuildIdleCommittedMultirangeForRange(
                            v10,
                            (struct VIDMM_RECYCLE_RANGE *)v18);
          if ( BlockAndRange )
            goto LABEL_37;
          VIDMM_RECYCLE_HEAP::AddRangeToTree(v10, 1LL, v18);
          goto LABEL_35;
        }
LABEL_33:
        BlockAndRange = (struct VIDMM_RECYCLE_MULTIRANGE *)v18;
        goto LABEL_37;
      }
      v18 = v18->Children[1];
    }
    else
    {
      v18 = v18->Children[0];
    }
  }
  v18 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v10 + 8);
  if ( !v18 )
  {
LABEL_35:
    v23 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16);
    v23[3] = v10;
    v23[4] = a2;
    v23[5] = v15;
    WdLogEvent5_WdEvent(v23);
    BlockAndRange = VIDMM_RECYCLE_HEAP::CreateBlockAndRange(v10, a2, v24, a8);
    if ( !BlockAndRange )
    {
      LODWORD(v25) = -1073741801;
      goto LABEL_196;
    }
    goto LABEL_37;
  }
  while ( 1 )
  {
    v22 = VidMmFindAlignedRange(v133, v18);
    if ( v22 >= 0 )
      break;
    v18 = v18->Children[0];
LABEL_28:
    if ( !v18 )
      goto LABEL_35;
  }
  if ( v22 > 0 )
  {
    v18 = v18->Children[1];
    goto LABEL_28;
  }
  if ( LODWORD(v18[1].Children[0]) )
    goto LABEL_33;
  VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v10, LODWORD(v18[3].ParentValue), v18);
  BlockAndRange = VIDMM_RECYCLE_HEAP::BuildIdleFreeMultirangeForRange(v10, (struct VIDMM_RECYCLE_RANGE *)v18);
  if ( !BlockAndRange )
  {
    VIDMM_RECYCLE_HEAP::AddRangeToTree(v10, 2LL, v18);
    goto LABEL_35;
  }
LABEL_37:
  v26 = *((_QWORD *)BlockAndRange + 6);
  if ( *((_QWORD *)BlockAndRange + 5) - v26 > a2 )
    VIDMM_RECYCLE_MULTIRANGE::SplitAt(BlockAndRange, a2 + v26 - *((_QWORD *)BlockAndRange + 4));
  v27 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
  while ( 2 )
  {
    v128 = v27;
    v28 = WdLogNewEntry5_WdEvent(v17, v26);
    *(_QWORD *)(v28 + 24) = v27;
    WdLogEvent5_WdEvent(v28);
    v31 = *((_DWORD *)BlockAndRange + 54);
    if ( !v31 )
      goto LABEL_121;
    v32 = *((_QWORD *)v27 + 17);
    if ( !v32 )
      goto LABEL_121;
    v33 = WdLogNewEntry5_WdEvent(v30, v29);
    *(_QWORD *)(v33 + 24) = v32;
    WdLogEvent5_WdEvent(v33);
    v34 = *(int *)(v32 + 88);
    v35 = *(_QWORD *)(v32 + 32);
    v36 = *(_QWORD *)(v32 + 40);
    v37 = *((_QWORD *)BlockAndRange + 4);
    v38 = *((_QWORD *)BlockAndRange + 5);
    v140 = *(_DWORD *)(v32 + 88);
    v41 = WdLogNewEntry5_WdEvent(v40, v39);
    *(_QWORD *)(v41 + 24) = v32;
    *(_QWORD *)(v41 + 32) = v34;
    WdLogEvent5_WdEvent(v41);
    if ( (_DWORD)v34 )
    {
      if ( (_DWORD)v34 == 1 )
      {
        v45 = (struct _RTL_BALANCED_NODE **)((char *)this + 56);
      }
      else
      {
        if ( (_DWORD)v34 != 2 )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v34 - 1), v42);
          v43[3] = 270LL;
          v43[4] = 52LL;
          v43[5] = 16LL;
          v43[6] = v34;
          v43[7] = 0LL;
          WdLogEvent5_WdCriticalError(v43);
          goto LABEL_50;
        }
        v45 = (struct _RTL_BALANCED_NODE **)((char *)this + 64);
      }
    }
    else
    {
      v45 = v127;
    }
    RtlAvlRemoveNode(v45, v32);
LABEL_50:
    *(_DWORD *)(v32 + 88) = 3;
    if ( v37 > v35 )
    {
      if ( v38 >= v36 )
      {
        VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((struct VIDMM_RECYCLE_RANGE **)v32, *(_QWORD *)(v32 + 32), v37);
        v10 = this;
        v72 = (unsigned int)v34;
        v73 = v32;
LABEL_119:
        VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v10, v72, v73);
        goto LABEL_120;
      }
      v80 = *(_QWORD *)(v32 + 40);
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(*((VIDMM_RECYCLE_RANGE **)BlockAndRange + 9));
      v82 = *(struct VIDMM_RECYCLE_RANGE **)(v32 + 72);
      v83 = NextRange;
      VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((struct VIDMM_RECYCLE_RANGE **)v32, *(_QWORD *)(v32 + 32), v37);
      v10 = this;
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v140, v32);
      Multirange = (VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                                 *((_QWORD *)this + 1),
                                                 *(unsigned int *)(v32 + 216),
                                                 *(_QWORD *)(v32 + 80),
                                                 v38,
                                                 v80);
      v85 = Multirange;
      if ( Multirange )
      {
        *((_QWORD *)Multirange + 8) = v83;
        *((_QWORD *)Multirange + 9) = v82;
        VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(Multirange);
        v72 = v140;
        v73 = (__int64)v85;
        goto LABEL_119;
      }
      while ( 1 )
      {
        v86 = *((_DWORD *)v83 + 16);
        if ( v86 )
        {
          v30 = (unsigned int)(v86 - 4);
          if ( (_DWORD)v30 )
          {
            if ( (_DWORD)v30 != 1 )
              goto LABEL_138;
            v87 = 1LL;
          }
          else
          {
            v87 = 0LL;
          }
        }
        else
        {
          v87 = 2LL;
        }
        VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v87, v83);
LABEL_138:
        if ( v83 == v82 )
          goto LABEL_120;
        v83 = VIDMM_RECYCLE_RANGE::GetNextRange(v83);
      }
    }
    if ( v38 >= v36 )
    {
      for ( i = *(struct VIDMM_RECYCLE_RANGE **)(v32 + 64); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
      {
        v47 = *(_DWORD *)(v32 + 216);
        if ( v47 )
        {
          v48 = v47 - 1;
          if ( v48 )
          {
            if ( v48 == 1 )
              *((_QWORD *)i + 19) = 0LL;
          }
          else
          {
            *((_QWORD *)i + 18) = 0LL;
          }
        }
        else
        {
          *((_QWORD *)i + 17) = 0LL;
        }
        if ( i == *(struct VIDMM_RECYCLE_RANGE **)(v32 + 72) )
          break;
      }
      v10 = this;
      v49 = *(void **)(v32 + 96);
      v50 = *((_QWORD *)this + 1);
      if ( v49 )
      {
        ExFreePoolWithTag(v49, 0);
        *(_QWORD *)(v32 + 96) = 0LL;
      }
      VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent(*(_QWORD *)(v32 + 80), 1, v32);
      v30 = *(_QWORD *)(v32 + 80);
      v51 = *(_QWORD *)(v30 + 8) - 1LL;
      *(_QWORD *)(v30 + 8) = v51;
      if ( !*(_QWORD *)v30 && !v51 )
        VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'((VIDMM_RECYCLE_BLOCK *)v30);
      *(_BYTE *)(v32 + 232) = 1;
      *(_QWORD *)(v32 + 224) = 0LL;
      v52 = *(unsigned int *)(v50 + 1612);
      v53 = *(_QWORD *)(v50 + 1320);
      if ( (unsigned int)v52 >= 4 )
      {
        ++*(_DWORD *)(v53 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v53) < *(_WORD *)(v53 + 16) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v53, (PSLIST_ENTRY)v32);
        }
        else
        {
          v54 = *(void (__fastcall **)(__int64, __int64))(v53 + 56);
          ++*(_DWORD *)(v53 + 32);
          v54(v32, v53);
        }
        --*(_DWORD *)(v50 + 1680);
      }
      else
      {
        *(_QWORD *)(v50 + 8 * v52 + 1648) = v32;
        ++*(_DWORD *)(v50 + 1612);
        --*(_DWORD *)(v50 + 1680);
      }
      goto LABEL_120;
    }
    v55 = *(_QWORD *)(v32 + 40);
    v56 = *(_QWORD **)(v32 + 64);
    v57 = *(_QWORD **)(v32 + 72);
    while ( 1 )
    {
      v58 = v56[4];
      if ( v58 >= v55 || v56[5] <= v38 )
      {
        v44 = *(unsigned int *)(v32 + 216);
        if ( (_DWORD)v44 )
        {
          v44 = (unsigned int)(v44 - 1);
          if ( (_DWORD)v44 )
          {
            if ( (_DWORD)v44 == 1 )
              v56[19] = 0LL;
          }
          else
          {
            v56[18] = 0LL;
          }
        }
        else
        {
          v56[17] = 0LL;
        }
      }
      if ( v58 == v38 )
        *(_QWORD *)(v32 + 64) = v56;
      if ( v56[5] == v55 )
        *(_QWORD *)(v32 + 72) = v56;
      if ( v56 == v57 )
        break;
      v59 = v56[15];
      v60 = v56[9];
      v56 = 0LL;
      v44 = v60 + 72;
      if ( v59 != v44 )
        v56 = (_QWORD *)(v59 - 120);
    }
    *(_QWORD *)(v32 + 32) = v38;
    *(_QWORD *)(v32 + 40) = v55;
    *(_QWORD *)(v32 + 48) = v38;
    v61 = WdLogNewEntry5_WdEvent(v44, v58);
    *(_QWORD *)(v61 + 24) = v32;
    *(_QWORD *)(v61 + 32) = v34;
    WdLogEvent5_WdEvent(v61);
    v64 = *(_QWORD *)(v32 + 56);
    v135[0] = *(_QWORD *)(v32 + 40) - *(_QWORD *)(v32 + 32);
    v135[1] = v64;
    v136 = 0;
    if ( !(_DWORD)v34 )
    {
      LOBYTE(v63) = 0;
      v70 = *v127;
      if ( *v127 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v135, v70) < 0 )
          {
            v71 = v70->Children[0];
            if ( !v70->Children[0] )
            {
              LOBYTE(v63) = 0;
              break;
            }
          }
          else
          {
            v71 = v70->Children[1];
            if ( !v71 )
            {
              LOBYTE(v63) = 1;
              break;
            }
          }
          v70 = v71;
        }
      }
      RtlAvlInsertNodeEx(v127, v70, v63, v32);
      v10 = this;
      *(_DWORD *)(v32 + 88) = 0;
      goto LABEL_120;
    }
    if ( (_DWORD)v34 == 1 )
    {
      v10 = this;
      LOBYTE(v63) = 0;
      v68 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
      if ( v68 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v135, v68) < 0 )
          {
            v69 = v68->Children[0];
            if ( !v68->Children[0] )
            {
              LOBYTE(v63) = 0;
              break;
            }
          }
          else
          {
            v69 = v68->Children[1];
            if ( !v69 )
            {
              LOBYTE(v63) = 1;
              break;
            }
          }
          v68 = v69;
        }
      }
      RtlAvlInsertNodeEx((char *)this + 56, v68, v63, v32);
      *(_DWORD *)(v32 + 88) = v34;
      goto LABEL_120;
    }
    if ( (_DWORD)v34 != 2 )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v34 - 1), v62);
      v65[3] = 270LL;
      v65[4] = 52LL;
      v65[5] = 15LL;
      v65[6] = v34;
      v65[7] = 0LL;
      WdLogEvent5_WdCriticalError(v65);
      v10 = this;
      *(_DWORD *)(v32 + 88) = v34;
      goto LABEL_120;
    }
    v10 = this;
    LOBYTE(v63) = 0;
    v66 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
    if ( !v66 )
      goto LABEL_100;
    while ( 2 )
    {
      if ( (int)VidMmCompareForInsertAlignedRange(v135, v66) >= 0 )
      {
        v67 = v66->Children[1];
        if ( !v67 )
        {
          LOBYTE(v63) = 1;
          goto LABEL_100;
        }
        goto LABEL_98;
      }
      v67 = v66->Children[0];
      if ( v66->Children[0] )
      {
LABEL_98:
        v66 = v67;
        continue;
      }
      break;
    }
    LOBYTE(v63) = 0;
LABEL_100:
    RtlAvlInsertNodeEx((char *)this + 64, v66, v63, v32);
    *(_DWORD *)(v32 + 88) = v34;
LABEL_120:
    v27 = v128;
    *((_QWORD *)v128 + 17) = 0LL;
    v31 = *((_DWORD *)BlockAndRange + 54);
LABEL_121:
    if ( v31 != 1 )
    {
      v74 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v27 + 18);
      if ( v74 )
      {
        v75 = WdLogNewEntry5_WdEvent(v30, v29);
        *(_QWORD *)(v75 + 24) = v74;
        WdLogEvent5_WdEvent(v75);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap((VIDMM_RECYCLE_HEAP_MGR **)v10, v74, BlockAndRange, v76);
        *((_QWORD *)v27 + 18) = 0LL;
        v31 = *((_DWORD *)BlockAndRange + 54);
      }
    }
    if ( v31 != 2 )
    {
      v77 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v27 + 19);
      if ( v77 )
      {
        v78 = WdLogNewEntry5_WdEvent(v30, v29);
        *(_QWORD *)(v78 + 24) = v77;
        WdLogEvent5_WdEvent(v78);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap((VIDMM_RECYCLE_HEAP_MGR **)v10, v77, BlockAndRange, v79);
        *((_QWORD *)v27 + 19) = 0LL;
      }
    }
    if ( v27 != *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
    {
      v27 = VIDMM_RECYCLE_RANGE::GetNextRange(v27);
      continue;
    }
    break;
  }
  v88 = *((int *)BlockAndRange + 22);
  v89 = WdLogNewEntry5_WdEvent(v30, v29);
  v90 = v88;
  *(_QWORD *)(v89 + 24) = BlockAndRange;
  *(_QWORD *)(v89 + 32) = v88;
  WdLogEvent5_WdEvent(v89);
  if ( !(_DWORD)v88 )
  {
    v96 = (char *)v10 + 48;
    goto LABEL_147;
  }
  v93 = v88 - 1;
  if ( !v93 )
  {
    v96 = (char *)v10 + 56;
    goto LABEL_147;
  }
  if ( v93 == 1 )
  {
    v96 = (char *)v10 + 64;
LABEL_147:
    RtlAvlRemoveNode(v96, BlockAndRange);
    goto LABEL_148;
  }
  v94 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v92, v91);
  v94[3] = 270LL;
  v94[4] = 52LL;
  v94[5] = 16LL;
  v94[6] = v90;
  v94[7] = 0LL;
  WdLogEvent5_WdCriticalError(v94);
LABEL_148:
  PreviousRange = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
  *((_DWORD *)BlockAndRange + 22) = 3;
  while ( 1 )
  {
    v98 = VIDMM_RECYCLE_RANGE::Commit(PreviousRange, v95, a7);
    v25 = v98;
    if ( v98 < 0 )
      break;
    if ( PreviousRange == *((VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
    {
      for ( j = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8); ; j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
      {
        *((_QWORD *)j + 17) = 0LL;
        *((_QWORD *)j + 18) = 0LL;
        *((_QWORD *)j + 19) = 0LL;
        *((_QWORD *)j + 20) = BlockAndRange;
        if ( j == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
          break;
      }
      v102 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
      *((_DWORD *)BlockAndRange + 54) = 3;
      v103 = v102;
      v104 = v102;
      v105 = *((_DWORD *)v102 + 16);
      v106 = *((_DWORD *)v102 + 23);
      while ( 1 )
      {
        v107 = v102;
        if ( *((_DWORD *)v102 + 16) != v105 || *((_DWORD *)v102 + 23) != v106 )
        {
          if ( v103 != v104 )
            VIDMM_RECYCLE_MULTIRANGE::MergeRanges((VIDMM_RECYCLE_BLOCK **)BlockAndRange, v103, v104);
          v103 = v102;
        }
        if ( v102 == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
          break;
        v102 = VIDMM_RECYCLE_RANGE::GetNextRange(v102);
        v104 = v107;
      }
      if ( v103 != v102 )
        VIDMM_RECYCLE_MULTIRANGE::MergeRanges((VIDMM_RECYCLE_BLOCK **)BlockAndRange, v103, v102);
      if ( !*((_DWORD *)BlockAndRange + 54) )
      {
        v108 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
        if ( v108 == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) && !*((_DWORD *)v108 + 16) )
          VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)BlockAndRange + 10), v108);
      }
      v109 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)BlockAndRange + 10);
      v110 = v109;
      if ( *(_QWORD *)v109 == 1LL && !*((_DWORD *)BlockAndRange + 54) )
      {
        v111 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
        if ( !*((_DWORD *)v111 + 16) )
        {
          VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(*((_QWORD *)v109 + 4), 2LL, (__int64)BlockAndRange);
          VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
            *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)v109 + 4) + 8LL),
            BlockAndRange);
          VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)v109 + 4) + 8LL), v111);
          v110 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)BlockAndRange + 10);
        }
      }
      v112 = *((_QWORD *)BlockAndRange + 9);
      v113 = 0LL;
      v114 = *(_QWORD *)(v112 + 120);
      if ( v114 != *(_QWORD *)(v112 + 72) + 72LL )
        v113 = v114 - 120;
      if ( v113 && !*(_DWORD *)(v113 + 64) )
        VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(v110, v113);
      *a4 = BlockAndRange;
      v115 = **(_DWORD **)(*((_QWORD *)BlockAndRange + 10) + 32LL);
      if ( (unsigned int)(v115 - 3) > 3 || (unsigned int)(v115 - 5) <= 1 )
        v116 = (void *)*((_QWORD *)BlockAndRange + 6);
      else
        v116 = (void *)(*((_QWORD *)BlockAndRange + 20) + *((_QWORD *)BlockAndRange + 21));
      *a5 = v116;
      if ( a6 )
      {
        v117 = *((_QWORD *)BlockAndRange + 10);
        if ( (unsigned int)(**(_DWORD **)(v117 + 32) - 9) > 1 )
          v118 = 0LL;
        else
          v118 = (void *)(*((_QWORD *)BlockAndRange + 6) + *(_QWORD *)(v117 + 120) - *(_QWORD *)(v117 + 40));
        *a6 = v118;
      }
      v119 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
      v120 = 1;
      v121 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 9);
      while ( 1 )
      {
        v122 = 0;
        if ( *((_DWORD *)v119 + 20) <= 1u )
          v122 = v120;
        if ( v119 == v121 )
          break;
        v119 = VIDMM_RECYCLE_RANGE::GetNextRange(v119);
      }
      *a7 = v122;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 1) + 8LL) + 136LL) += *((_QWORD *)BlockAndRange + 5)
                                                                    - *((_QWORD *)BlockAndRange + 4);
      goto LABEL_197;
    }
    PreviousRange = VIDMM_RECYCLE_RANGE::GetNextRange(PreviousRange);
  }
  while ( PreviousRange != *((VIDMM_RECYCLE_RANGE **)BlockAndRange + 8) )
  {
    PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(PreviousRange);
    VIDMM_RECYCLE_RANGE::Decommit(PreviousRange);
  }
  v123 = (_QWORD *)WdLogNewEntry5_WdWarning(v100, v99);
  v123[3] = BlockAndRange;
  v123[4] = a2;
  v123[5] = v132;
  v123[6] = v25;
  v123[7] = **(_QWORD **)(*((_QWORD *)v10 + 1) + 8LL);
  WdLogEvent5_WdWarning(v123);
  VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(v10, BlockAndRange);
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)v10 + 1), BlockAndRange);
LABEL_196:
  v8 = v25;
LABEL_197:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v129);
  if ( v131 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v124, &EventProfilerExit, v125, v129);
  return v8;
}
