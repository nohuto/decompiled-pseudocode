/*
 * XREFs of WdHwpWriteRegisterUShort @ 0x14036DA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WdHwpWriteRegisterUShort(_WORD *a1, __int16 a2)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  *a1 = a2;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
}
