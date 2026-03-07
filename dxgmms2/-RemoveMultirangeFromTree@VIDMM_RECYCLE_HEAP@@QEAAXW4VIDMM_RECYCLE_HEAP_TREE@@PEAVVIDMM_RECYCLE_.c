// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rbp
  int v7; // ebx
  __int64 v8; // rcx
  __int64 result; // rax

  v6 = a2;
  WdLogSingleEntry2(4LL, a3, a2);
  if ( a2 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        result = WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v6, 0LL);
        goto LABEL_6;
      }
      v8 = a1 + 64;
    }
    else
    {
      v8 = a1 + 56;
    }
  }
  else
  {
    v8 = a1 + 48;
  }
  result = RtlAvlRemoveNode(v8, a3);
LABEL_6:
  *(_DWORD *)(a3 + 88) = 3;
  return result;
}
