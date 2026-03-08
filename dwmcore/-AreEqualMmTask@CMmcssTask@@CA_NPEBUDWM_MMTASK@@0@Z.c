/*
 * XREFs of ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x1800CE33C
 * Callers:
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800CD9D0 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800CDC70 (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CMmcssTask::AreEqualMmTask(LPCWCH lpString1, LPCWCH lpString2)
{
  char v3; // cl
  int v5; // eax

  if ( lpString1 == lpString2 )
    return 1;
  v3 = 0;
  if ( lpString1 && lpString2 )
  {
    v5 = *((_DWORD *)lpString1 + 32);
    if ( v5 != *((_DWORD *)lpString2 + 32) || !v5 || *((_DWORD *)lpString1 + 33) != *((_DWORD *)lpString2 + 33) )
      return CompareStringOrdinal(lpString1, 64, lpString2, 64, 0) == 2;
    return 1;
  }
  return v3;
}
