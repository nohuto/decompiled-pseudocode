// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::RemoveDMAReferences(struct VIDMM_ALLOC *a1, int a2)
{
  __int64 v4; // r8

  if ( *((_DWORD *)a1 + 39) < a2 )
  {
    v4 = *((int *)a1 + 39);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 41LL, a1, v4, 0LL);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 39, -a2);
}
