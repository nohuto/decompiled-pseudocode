/*
 * XREFs of PfSnLogStreamDelete @ 0x140773D30
 * Callers:
 *     PfSnNameRemoveAll @ 0x140773CE0 (PfSnNameRemoveAll.c)
 * Callees:
 *     PfSnTraceGetLogEntry @ 0x14030841C (PfSnTraceGetLogEntry.c)
 *     PfSnGetNLLogEntry @ 0x1407A3E08 (PfSnGetNLLogEntry.c)
 *     PfSnFailProcessTrace @ 0x14097C804 (PfSnFailProcessTrace.c)
 */

__int64 __fastcall PfSnLogStreamDelete(__int64 a1, __int64 a2)
{
  int LogEntry; // ebx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 NLLogEntry; // rax
  _OWORD *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  LogEntry = PfSnTraceGetLogEntry(a2, 4u, &v9);
  if ( LogEntry < 0 )
  {
    PfSnFailProcessTrace(a2);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = v9;
    *v9 = 0LL;
    *v6 = 29LL;
    v6[1] = v5;
    NLLogEntry = PfSnGetNLLogEntry(v6, 3LL, 40LL, *(unsigned int *)(a1 + 40), *(_DWORD *)(a1 + 44));
    *(_DWORD *)(NLLogEntry + 16) &= 0xFFFFFFFC;
    LogEntry = 0;
    *(_QWORD *)(NLLogEntry + 24) = *(_QWORD *)(a1 + 16);
  }
  return (unsigned int)LogEntry;
}
