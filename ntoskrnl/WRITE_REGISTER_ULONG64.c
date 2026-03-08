/*
 * XREFs of WRITE_REGISTER_ULONG64 @ 0x14036DA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall WRITE_REGISTER_ULONG64(volatile ULONG64 *Register, ULONG64 Value)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  *Register = Value;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
}
