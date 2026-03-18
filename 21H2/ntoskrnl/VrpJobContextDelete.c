/*
 * XREFs of VrpJobContextDelete @ 0x1407F8750
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x1407F612C (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x1407F8780 (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
