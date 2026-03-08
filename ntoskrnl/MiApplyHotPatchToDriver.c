/*
 * XREFs of MiApplyHotPatchToDriver @ 0x140A321B0
 * Callers:
 *     MiLoadHotPatch @ 0x140A352A0 (MiLoadHotPatch.c)
 *     MiUnloadHotPatch @ 0x140A392C0 (MiUnloadHotPatch.c)
 * Callees:
 *     MiApplyHotPatchToLoadedDriver @ 0x140A323A8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiLogHotPatchOperationStatus @ 0x140A36298 (MiLogHotPatchOperationStatus.c)
 *     MiUnapplyDriverHotPatch @ 0x140A390F8 (MiUnapplyDriverHotPatch.c)
 */

__int64 __fastcall MiApplyHotPatchToDriver(int a1, int a2, __int64 a3, __int64 a4)
{
  PVOID *v4; // rdi
  int v5; // esi
  unsigned int v6; // ebx
  unsigned int v8; // eax

  v4 = (PVOID *)PsLoadedModuleList;
  v5 = a3;
  while ( 1 )
  {
    if ( v4 == &PsLoadedModuleList )
      return (unsigned int)-1073741515;
    if ( *((_DWORD *)v4 + 30) == a1 && *((_DWORD *)v4 + 39) == a2 && (*((_DWORD *)v4 + 49) & 0x420) == 0 )
      break;
    v4 = (PVOID *)*v4;
  }
  v6 = 0;
  if ( !v4 )
    return (unsigned int)-1073741515;
  if ( a3 )
  {
    if ( a4 )
    {
      v8 = MiApplyHotPatchToLoadedDriver(v4, a3, a4);
LABEL_15:
      v6 = v8;
      MiLogHotPatchOperationStatus(*((_DWORD *)v4 + 30), *((_DWORD *)v4 + 39), v5, v8, 1);
    }
  }
  else if ( v4[35] )
  {
    v8 = MiUnapplyDriverHotPatch(v4, v4 + 20, &PsLoadedModuleList);
    goto LABEL_15;
  }
  return v6;
}
