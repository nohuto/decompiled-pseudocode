// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rbp
  int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rcx

  v6 = a2;
  WdLogSingleEntry2(3LL, a3, a2);
  if ( !a2 )
  {
    v9 = a1 + 48;
    goto LABEL_8;
  }
  v7 = a2 - 1;
  if ( !v7 )
  {
    v9 = a1 + 56;
    goto LABEL_8;
  }
  if ( v7 == 1 )
  {
    v9 = a1 + 64;
LABEL_8:
    result = RtlAvlRemoveNode(v9, a3);
    goto LABEL_9;
  }
  g_DxgMmsBugcheckExportIndex = 1;
  result = WdLogSingleEntry5(0LL, 270LL, 52LL, 14LL, v6, 0LL);
LABEL_9:
  *(_DWORD *)(a3 + 88) = 3;
  return result;
}
