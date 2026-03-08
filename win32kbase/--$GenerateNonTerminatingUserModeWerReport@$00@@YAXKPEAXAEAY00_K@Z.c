/*
 * XREFs of ??$GenerateNonTerminatingUserModeWerReport@$00@@YAXKPEAXAEAY00_K@Z @ 0x1C027029C
 * Callers:
 *     ?ValidateInputSink@CompositionInputObject@@SAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x1C00B1394 (-ValidateInputSink@CompositionInputObject@@SAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall GenerateNonTerminatingUserModeWerReport<1>(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  _QWORD v6[20]; // [rsp+30h] [rbp-B8h] BYREF

  memset(v6, 0, 0x98uLL);
  v4 = *a3;
  v6[2] = 0LL;
  LODWORD(v6[0]) = -1073741816;
  LODWORD(v6[3]) = 1;
  v6[4] = v4;
  return WerSubmitUserCrashReport(-2LL, v6, 0LL, 30LL, 3);
}
