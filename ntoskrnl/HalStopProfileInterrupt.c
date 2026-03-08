/*
 * XREFs of HalStopProfileInterrupt @ 0x140504F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalStopProfileInterrupt(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))HalpProfileInterface[2])(a1, 0LL);
}
