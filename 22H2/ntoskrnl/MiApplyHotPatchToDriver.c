/*
 * XREFs of MiApplyHotPatchToDriver @ 0x1408C9164
 * Callers:
 *     MiLoadHotPatch @ 0x1408CAC20 (MiLoadHotPatch.c)
 *     MiUnloadHotPatch @ 0x1408CE818 (MiUnloadHotPatch.c)
 *     MmRegisterHotPatch @ 0x140A9232C (MmRegisterHotPatch.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C9248 (MiApplyHotPatchToLoadedDriver.c)
 *     MiLogHotPatchOperationStatus @ 0x1408CBA90 (MiLogHotPatchOperationStatus.c)
 *     MiUnapplyDriverHotPatch @ 0x1408CE6F0 (MiUnapplyDriverHotPatch.c)
 */

__int64 __fastcall MiApplyHotPatchToDriver(int a1, int a2, __int64 a3, __int64 a4)
{
  PVOID *v4; // rdi
  unsigned int v9; // ebx
  unsigned int v10; // eax

  v4 = (PVOID *)PsLoadedModuleList;
  v9 = -1073741515;
  while ( v4 != &PsLoadedModuleList )
  {
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v4[6]) != 1
      && *((_DWORD *)v4 + 30) == a1
      && *((_DWORD *)v4 + 39) == a2
      && (*((_DWORD *)v4 + 49) & 0x21) == 0 )
    {
      v9 = 0;
      if ( a3 )
      {
        if ( !a4 )
          return v9;
        v10 = MiApplyHotPatchToLoadedDriver(v4, a3, a4);
      }
      else
      {
        if ( !v4[35] )
          return v9;
        v10 = MiUnapplyDriverHotPatch(v4);
      }
      v9 = v10;
      MiLogHotPatchOperationStatus(*((_DWORD *)v4 + 30), *((_DWORD *)v4 + 39), a3, v10, 1);
      return v9;
    }
    v4 = (PVOID *)*v4;
  }
  return v9;
}
