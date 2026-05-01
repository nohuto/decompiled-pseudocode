/*
 * XREFs of CrmLogStateMonitorIsTelemetryState @ 0x18002BD88
 * Callers:
 *     CrmLogStateMonitorStateSet @ 0x18002BBD4 (CrmLogStateMonitorStateSet.c)
 *     CrmLogStateMonitorStop @ 0x18003659C (CrmLogStateMonitorStop.c)
 *     CrmLogStateMonitorRundown @ 0x18003B0F0 (CrmLogStateMonitorRundown.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrmLogStateMonitorIsTelemetryState(unsigned __int64 a1)
{
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned int)a1 <= 0x22 )
  {
    v1 = 0x50001FFF8LL;
    if ( _bittest64(&v1, a1) )
      return 1;
  }
  return result;
}
