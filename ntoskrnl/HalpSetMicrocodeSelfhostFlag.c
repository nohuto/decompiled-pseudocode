/*
 * XREFs of HalpSetMicrocodeSelfhostFlag @ 0x1405198A0
 * Callers:
 *     HalpLoadMicrocode @ 0x140931BD0 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpSetMicrocodeSelfhostFlag(char a1)
{
  __int64 result; // rax
  char v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  result = 0LL;
  if ( McMicrocodeOperation )
    return ((__int64 (__fastcall *)(__int64, char *, __int64, _QWORD, _DWORD))McMicrocodeOperation)(
             3LL,
             &v2,
             1LL,
             0LL,
             0);
  return result;
}
