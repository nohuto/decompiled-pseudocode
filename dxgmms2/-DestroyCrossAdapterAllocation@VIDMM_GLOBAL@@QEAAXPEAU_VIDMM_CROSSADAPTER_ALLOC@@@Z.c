// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::DestroyCrossAdapterAllocation(VIDMM_GLOBAL *this, struct _VIDMM_CROSSADAPTER_ALLOC *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  void *v5; // rcx

  v3 = *((int *)a2 + 11);
  if ( __PAIR64__(v3, *((_DWORD *)a2 + 10)) )
  {
    v4 = *((int *)a2 + 10);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 65LL, a2, v4, v3);
  }
  v5 = (void *)*((_QWORD *)a2 + 1);
  if ( v5 )
    MmUnsecureVirtualMemory(v5);
  operator delete(a2);
}
