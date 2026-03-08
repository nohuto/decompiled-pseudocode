/*
 * XREFs of ViDeadlockCheckStackLimits @ 0x140AD5CDC
 * Callers:
 *     ViDeadlockCanProceed @ 0x140ABD79A (ViDeadlockCanProceed.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     IoGetStackLimits @ 0x1403129C0 (IoGetStackLimits.c)
 */

ULONG ViDeadlockCheckStackLimits()
{
  ULONG result; // eax
  unsigned __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v2; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v1 = (unsigned __int64)&v1;
  IoGetStackLimits(&v2, &v3);
  result = v1;
  if ( v1 < v2 || (result = v1, v1 > v3) )
  {
    if ( VfVerifyMode > 2 )
    {
      result = ViStackSwitchAlreadyReported;
      if ( !ViStackSwitchAlreadyReported )
      {
        result = DbgPrintEx(0x5Du, 0, "DVRF: Driver switched stacks using an unsupported method!\n");
        ViStackSwitchAlreadyReported = 1;
      }
    }
  }
  return result;
}
