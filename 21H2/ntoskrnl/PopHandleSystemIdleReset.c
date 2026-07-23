/*
 * XREFs of PopHandleSystemIdleReset @ 0x140577864
 * Callers:
 *     PopResetIdleTime @ 0x14024EAF0 (PopResetIdleTime.c)
 * Callees:
 *     PopCheckForWork @ 0x14026F4C0 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14026FD50 (PopGetPolicyWorker.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall PopHandleSystemIdleReset(int a1)
{
  __int64 result; // rax

  if ( !PopPlatformAoAc )
    KeBugCheckEx(0xA0u, 0xAuLL, 0x102uLL, 0LL, 0LL);
  if ( a1 == 2 )
  {
    _InterlockedOr(&PopPendingSystemIdleResetMask, 4u);
    PopGetPolicyWorker(128);
    return PopCheckForWork();
  }
  return result;
}
