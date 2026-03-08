/*
 * XREFs of VrpJobContextDelete @ 0x140A6F390
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x140737928 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x140A6F2D4 (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
