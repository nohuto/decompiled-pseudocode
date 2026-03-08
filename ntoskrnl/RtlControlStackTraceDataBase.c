/*
 * XREFs of RtlControlStackTraceDataBase @ 0x1405A70C4
 * Callers:
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     RtlpInitializeStackTraceDatabase @ 0x1409B77E8 (RtlpInitializeStackTraceDatabase.c)
 */

__int64 __fastcall RtlControlStackTraceDataBase(__int64 a1, __int64 a2, _QWORD *a3)
{
  if ( a3 )
    return RtlpInitializeStackTraceDatabase(*a3, a3[1], a3[2]);
  else
    return 3221225713LL;
}
