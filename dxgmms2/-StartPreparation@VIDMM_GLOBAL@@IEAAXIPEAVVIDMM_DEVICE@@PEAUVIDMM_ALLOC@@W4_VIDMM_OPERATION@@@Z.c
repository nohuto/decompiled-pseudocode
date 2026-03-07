// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::StartPreparation(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rcx
  unsigned int v7; // edi

  v6 = *(int *)(a1 + 8);
  v7 = 0;
  if ( (_DWORD)v6 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 64LL, a1, v6, a5);
  }
  ++*(_QWORD *)(a1 + 4624);
  *(_DWORD *)(a1 + 8) = a5;
  *(_DWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 7032) = a3;
  *(_QWORD *)(a1 + 7040) = a4;
  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 7016) )
    {
      do
        VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter((VIDMM_GLOBAL *)a1, v7++);
      while ( v7 < *(_DWORD *)(a1 + 7016) );
    }
  }
  else
  {
    VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter((VIDMM_GLOBAL *)a1, a2);
  }
}
