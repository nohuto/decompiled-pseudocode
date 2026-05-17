/*
 * XREFs of RtlControlStackTraceDataBase @ 0x180100F48
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 *     RtlSetProcessDebugInformation @ 0x1800D83A0 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     RtlpInitializeStackTraceDatabase @ 0x180101410 (RtlpInitializeStackTraceDatabase.c)
 */

__int64 __fastcall RtlControlStackTraceDataBase(unsigned int a1, int a2, _QWORD *a3)
{
  if ( a1 >= 3 )
    return 3221225711LL;
  if ( a1 )
    return 3221225474LL;
  if ( a2 != 24 )
    return 3221225712LL;
  if ( a3 )
    return RtlpInitializeStackTraceDatabase(*a3, a3[1], a3[2]);
  return 3221225713LL;
}
