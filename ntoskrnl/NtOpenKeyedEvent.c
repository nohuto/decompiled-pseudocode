/*
 * XREFs of NtOpenKeyedEvent @ 0x140A01D50
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1406C39E0 (ObOpenObjectByName.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtOpenKeyedEvent(_QWORD *a1, int a2, __int64 a3)
{
  char PreviousMode; // r8
  __int64 result; // rax
  __int64 v7; // [rsp+88h] [rbp+20h] BYREF

  v7 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *a1 = 0LL;
  result = ObOpenObjectByName(a3, (__int64)ExpKeyedEventObjectType, PreviousMode, 0LL, a2, 0LL, (__int64)&v7);
  if ( (int)result >= 0 )
    *a1 = v7;
  return result;
}
