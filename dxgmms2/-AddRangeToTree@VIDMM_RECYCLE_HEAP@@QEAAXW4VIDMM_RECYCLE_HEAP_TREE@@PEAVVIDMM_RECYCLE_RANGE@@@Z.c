/*
 * XREFs of ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F5734
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00853FC (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?IntegrateMultirangeIntoTrees_To_Remove@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0085854 (-IntegrateMultirangeIntoTrees_To_Remove@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C00971B8 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0099390 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C009B840 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C009C2F0 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C009CCE0 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 *     ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1C00F5B60 (-CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z.c)
 * Callees:
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00B0440 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_HEAP::AddRangeToTree(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v6; // r8
  char v7; // bl
  ULONG_PTR v8; // rax
  __int64 result; // rax
  _QWORD *v10; // r14
  struct _RTL_BALANCED_NODE *v11; // rdi
  struct _RTL_BALANCED_NODE *v12; // rax
  struct _RTL_BALANCED_NODE *v13; // rax
  struct _RTL_BALANCED_NODE *v14; // rax
  ULONG_PTR v15[2]; // [rsp+30h] [rbp-38h] BYREF
  char v16; // [rsp+40h] [rbp-28h]

  v4 = a2;
  WdLogSingleEntry2(3LL, a3, a2);
  v7 = 0;
  v8 = *(_QWORD *)(a3 + 56);
  v15[0] = *(_QWORD *)(a3 + 40) - *(_QWORD *)(a3 + 32);
  v15[1] = v8;
  v16 = 0;
  switch ( (_DWORD)v4 )
  {
    case 0:
      v10 = a1 + 6;
      v11 = (struct _RTL_BALANCED_NODE *)a1[6];
      if ( v11 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v15, v11) < 0 )
          {
            v14 = v11->Children[0];
            if ( !v11->Children[0] )
              goto LABEL_9;
          }
          else
          {
            v14 = v11->Children[1];
            if ( !v14 )
            {
LABEL_8:
              v7 = 1;
              goto LABEL_9;
            }
          }
          v11 = v14;
        }
      }
      goto LABEL_9;
    case 1:
      v10 = a1 + 7;
      v11 = (struct _RTL_BALANCED_NODE *)a1[7];
      if ( v11 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v15, v11) < 0 )
          {
            v13 = v11->Children[0];
            if ( !v11->Children[0] )
              goto LABEL_9;
          }
          else
          {
            v13 = v11->Children[1];
            if ( !v13 )
              goto LABEL_8;
          }
          v11 = v13;
        }
      }
      goto LABEL_9;
    case 2:
      v10 = a1 + 8;
      v11 = (struct _RTL_BALANCED_NODE *)a1[8];
      if ( v11 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v15, v11) < 0 )
          {
            v12 = v11->Children[0];
            if ( !v11->Children[0] )
              break;
          }
          else
          {
            v12 = v11->Children[1];
            if ( !v12 )
              goto LABEL_8;
          }
          v11 = v12;
        }
      }
LABEL_9:
      LOBYTE(v6) = v7;
      result = RtlAvlInsertNodeEx(v10, v11, v6, a3);
      goto LABEL_10;
  }
  g_DxgMmsBugcheckExportIndex = 1;
  result = WdLogSingleEntry5(0LL, 270LL, 52LL, 13LL, v4, 0LL);
LABEL_10:
  *(_DWORD *)(a3 + 88) = v4;
  return result;
}
