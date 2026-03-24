/*
 * XREFs of PopHandleSystemIdleReset @ 0x140577564
 * Callers:
 *     PopResetIdleTime @ 0x140329C20 (PopResetIdleTime.c)
 * Callees:
 *     PopCheckForWork @ 0x14034A290 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14034AB20 (PopGetPolicyWorker.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
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
