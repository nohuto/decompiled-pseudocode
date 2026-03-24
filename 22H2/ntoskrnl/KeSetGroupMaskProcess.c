/*
 * XREFs of KeSetGroupMaskProcess @ 0x14035ADC4
 * Callers:
 *     KeInitializeProcess @ 0x140703B8C (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetGroupMaskProcess(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 636) = a2;
}
