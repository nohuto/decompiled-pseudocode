/*
 * XREFs of StorPortWriteRegisterUchar @ 0x1C003A460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorPortWriteRegisterUchar(__int64 a1, _BYTE *a2, char a3)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  *a2 = a3;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
}
