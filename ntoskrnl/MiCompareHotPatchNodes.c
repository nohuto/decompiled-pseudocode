/*
 * XREFs of MiCompareHotPatchNodes @ 0x140A33944
 * Callers:
 *     MiDeleteHotPatchRecord @ 0x140A33BA4 (MiDeleteHotPatchRecord.c)
 *     MiFindHotPatchRecord @ 0x140A33EBC (MiFindHotPatchRecord.c)
 *     MiGetAllRegisteredPatches @ 0x140A342EC (MiGetAllRegisteredPatches.c)
 *     MiInsertHotPatchRecord @ 0x140A34E80 (MiInsertHotPatchRecord.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140A35010 (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x140A35124 (MiInsertSecureImageActivePatch.c)
 *     MiUnloadHotPatch @ 0x140A392C0 (MiUnloadHotPatch.c)
 *     MmRegisterHotPatches @ 0x140B7092C (MmRegisterHotPatches.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCompareHotPatchNodes(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // edx

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 >= *(_DWORD *)(a2 + 24) )
  {
    if ( v2 > *(_DWORD *)(a2 + 24) )
      return 1LL;
    v3 = *(_DWORD *)(a1 + 28);
    v4 = *(_DWORD *)(a2 + 28);
    if ( v3 >= v4 )
      return v3 > v4;
  }
  return 0xFFFFFFFFLL;
}
