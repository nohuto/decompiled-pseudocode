/*
 * XREFs of EtwpLogFileNameRundown @ 0x14093DBDC
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x1407166EC (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x140716B20 (EtwpCheckGuidAccess.c)
 *     WmiTraceRundownNotify @ 0x1407C1D04 (WmiTraceRundownNotify.c)
 */

__int64 __fastcall EtwpLogFileNameRundown(__int64 *a1, int a2)
{
  __int64 result; // rax

  result = EtwpCheckGuidAccess(&FileProvGuid.Data1, 0x80u, 0LL);
  if ( (int)result >= 0 )
  {
    result = WmiTraceRundownNotify(*a1, a2);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
