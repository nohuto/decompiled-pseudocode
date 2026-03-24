/*
 * XREFs of MiCompareHotPatchNodes @ 0x1408C9880
 * Callers:
 *     MiFindHotPatchRecord @ 0x14075D298 (MiFindHotPatchRecord.c)
 *     MiDeleteHotPatchRecord @ 0x1408C9A4C (MiDeleteHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x1408CA9F0 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1408CAB44 (MiInsertSecureImageActivePatch.c)
 *     MiUnloadHotPatch @ 0x1408CE818 (MiUnloadHotPatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCompareHotPatchNodes(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 >= *(_DWORD *)(a2 + 24) )
  {
    if ( v2 > *(_DWORD *)(a2 + 24) )
      return 1LL;
    v3 = *(_DWORD *)(a1 + 28);
    if ( v3 >= *(_DWORD *)(a2 + 28) )
      return v3 > *(_DWORD *)(a2 + 28);
  }
  return 0xFFFFFFFFLL;
}
