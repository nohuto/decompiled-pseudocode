/*
 * XREFs of ?IsLastMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x1C01CE150
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0088C10 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::IsLastMsgData(struct _KTHREAD **this, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbx
  _BOOL8 result; // rax

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v4 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 != *(_QWORD *)(a2 + 8) )
    return 0LL;
  if ( *v4 != a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( v4[1] != a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_WORD *)v4 - 112) != *(_WORD *)(a2 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  result = 0LL;
  if ( *((_DWORD *)v4 - 50) == 3 )
    return *((_DWORD *)v4 - 55) == 0;
  return result;
}
