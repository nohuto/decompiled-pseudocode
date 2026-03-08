/*
 * XREFs of ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0097470
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00853FC (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?IntegrateMultirangeIntoTrees_To_Remove@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0085854 (-IntegrateMultirangeIntoTrees_To_Remove@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C0096738 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0099390 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C0099FC0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C009B840 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C00A9448 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F58C0 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F5994 (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F5A08 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1C00F5B60 (-CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z.c)
 * Callees:
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00B0440 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_HEAP::AddMultirangeToTree(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // rsi
  struct _RTL_BALANCED_NODE *v9; // rbx
  struct _RTL_BALANCED_NODE *v10; // rax
  struct _RTL_BALANCED_NODE *v11; // rax
  __int64 result; // rax
  struct _RTL_BALANCED_NODE *v13; // rax
  _QWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  char v15; // [rsp+40h] [rbp-18h]

  v4 = a2;
  WdLogSingleEntry2(4LL, a3, a2);
  v7 = *(_QWORD *)(a3 + 56);
  v14[0] = *(_QWORD *)(a3 + 40) - *(_QWORD *)(a3 + 32);
  v14[1] = v7;
  v15 = 0;
  switch ( (_DWORD)v4 )
  {
    case 0:
      v8 = a1 + 6;
      LOBYTE(v6) = 0;
      v9 = (struct _RTL_BALANCED_NODE *)a1[6];
      if ( !v9 )
        break;
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v14, v9) < 0 )
        {
          v13 = v9->Children[0];
          if ( !v9->Children[0] )
          {
LABEL_22:
            LOBYTE(v6) = 0;
            goto LABEL_15;
          }
        }
        else
        {
          v13 = v9->Children[1];
          if ( !v13 )
          {
LABEL_14:
            LOBYTE(v6) = 1;
            goto LABEL_15;
          }
        }
        v9 = v13;
      }
    case 1:
      v8 = a1 + 7;
      LOBYTE(v6) = 0;
      v9 = (struct _RTL_BALANCED_NODE *)a1[7];
      if ( v9 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v14, v9) < 0 )
          {
            v11 = v9->Children[0];
            if ( !v9->Children[0] )
              goto LABEL_22;
          }
          else
          {
            v11 = v9->Children[1];
            if ( !v11 )
              goto LABEL_14;
          }
          v9 = v11;
        }
      }
      break;
    case 2:
      v8 = a1 + 8;
      LOBYTE(v6) = 0;
      v9 = (struct _RTL_BALANCED_NODE *)a1[8];
      if ( v9 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v14, v9) < 0 )
          {
            v10 = v9->Children[0];
            if ( !v9->Children[0] )
              goto LABEL_22;
          }
          else
          {
            v10 = v9->Children[1];
            if ( !v10 )
              goto LABEL_14;
          }
          v9 = v10;
        }
      }
      break;
    default:
      g_DxgMmsBugcheckExportIndex = 1;
      result = WdLogSingleEntry5(0LL, 270LL, 52LL, 15LL, v4, 0LL);
      goto LABEL_16;
  }
LABEL_15:
  result = RtlAvlInsertNodeEx(v8, v9, v6, a3);
LABEL_16:
  *(_DWORD *)(a3 + 88) = v4;
  return result;
}
