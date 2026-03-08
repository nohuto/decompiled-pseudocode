/*
 * XREFs of PopCoalescingCheck @ 0x14058B3E4
 * Callers:
 *     PopScanIdleList @ 0x1402BC8E0 (PopScanIdleList.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x1402BCB34 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x1402BCB88 (PopCheckForWork.c)
 */

__int64 __fastcall PopCoalescingCheck(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx

  v3 = a2;
  if ( a1 )
  {
    if ( a3 )
    {
      if ( a2 > a1 )
        return a1 / 0x3E8 + 1;
    }
    else if ( MEMORY[0xFFFFF78000000008] - PopCoalescingLastFlushTime >= 10000000
                                                                       * (unsigned __int64)(unsigned int)PopCoalescingFlushInterval )
    {
      PopGetPolicyWorker(32);
      PopCheckForWork();
    }
  }
  return v3;
}
