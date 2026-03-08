/*
 * XREFs of MiCheckAndProcessCcAccessLog @ 0x1402DC3D4
 * Callers:
 *     MiEmptyAccessLogs @ 0x1402005B0 (MiEmptyAccessLogs.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402245D0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiReturnCcAccessLog @ 0x1402DC41C (MiReturnCcAccessLog.c)
 *     MiQueuePageAccessLog @ 0x14035B540 (MiQueuePageAccessLog.c)
 */

__int64 __fastcall MiCheckAndProcessCcAccessLog(__int64 a1, int a2)
{
  __int64 result; // rax
  _QWORD *v3; // rcx

  result = a1;
  if ( qword_140C67C40 )
  {
    v3 = (_QWORD *)_InterlockedExchange64(&qword_140C67C40, 0LL);
    if ( v3 )
    {
      if ( result - v3[2] > (unsigned __int64)PfKernelGlobals || a2 )
        return MiQueuePageAccessLog(v3);
      else
        return MiReturnCcAccessLog();
    }
  }
  return result;
}
