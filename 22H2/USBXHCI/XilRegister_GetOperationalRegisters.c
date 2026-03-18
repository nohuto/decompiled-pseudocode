/*
 * XREFs of XilRegister_GetOperationalRegisters @ 0x1C000824C
 * Callers:
 *     RootHub_PrepareHardware @ 0x1C0070700 (RootHub_PrepareHardware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilRegister_GetOperationalRegisters(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
