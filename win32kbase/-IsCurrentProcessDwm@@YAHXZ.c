/*
 * XREFs of ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00AAB24
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsCurrentProcessDwm(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rcx
  _BOOL8 result; // rax

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  result = 0LL;
  if ( CurrentProcess )
    return CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  return result;
}
