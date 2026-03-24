/*
 * XREFs of VrpJobContextDelete @ 0x140882830
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x1405D61B0 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x1408827A4 (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
