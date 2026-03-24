/*
 * XREFs of DrvModeChangeCompleteNotify @ 0x1C0163AB8
 * Callers:
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C01639FC (GreDwmCreatedBitmapRemotingOutput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvModeChangeCompleteNotify()
{
  __int64 result; // rax
  __int64 v1; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v2[1] = retaddr;
  v2[0] = 7LL;
  result = gDxgkInterface[52](v2);
  if ( (int)result < 0 )
  {
    v1 = WdLogNewEntry5_WdAssertion();
    return WdLogEvent5_WdAssertion(v1);
  }
  return result;
}
