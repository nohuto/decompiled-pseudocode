/*
 * XREFs of PopSuspendResumeInvocation @ 0x14077983C
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1408E3B0C (PopDirectedDripsSendSuspendResumeNotification.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopSuspendResumeInvocation(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C54428 )
  {
    LOBYTE(a2) = a1[4];
    LOBYTE(a3) = a1[5];
    LOBYTE(a4) = a1[6];
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))qword_140C54428)(*(unsigned int *)a1, a2, a3, a4);
  }
  return result;
}
