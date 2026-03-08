/*
 * XREFs of KeSetGroupMaskProcess @ 0x140296808
 * Callers:
 *     KeInitializeProcess @ 0x14070A0C8 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetGroupMaskProcess(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 636) = a2;
}
