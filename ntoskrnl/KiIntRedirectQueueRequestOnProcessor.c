/*
 * XREFs of KiIntRedirectQueueRequestOnProcessor @ 0x14057E460
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x1402B7620 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140230C90 (HalRequestIpiSpecifyVector.c)
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall KiIntRedirectQueueRequestOnProcessor(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  unsigned int v3; // edi
  __int64 result; // rax
  _DWORD v5[68]; // [rsp+30h] [rbp-128h] BYREF

  v3 = BugCheckParameter3;
  v5[0] = 2097153;
  memset(&v5[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v5, v3);
  result = HalRequestIpiSpecifyVector(0, (__int64)v5, a2);
  if ( (int)result < 0 )
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x103uLL, v3, (int)result);
  return result;
}
