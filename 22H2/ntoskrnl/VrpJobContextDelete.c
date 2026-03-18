/*
 * XREFs of VrpJobContextDelete @ 0x140A72090
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x14077C308 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x140A71FD4 (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
