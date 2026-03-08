/*
 * XREFs of ?GetNextRootPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C01F61D4
 * Callers:
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C01EEF38 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetNextRootPointerId(struct _KTHREAD **this)
{
  unsigned __int16 v2; // di
  unsigned __int16 v3; // cx

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8834);
  v2 = *((_WORD *)this + 52);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8840);
  v3 = (*((_WORD *)this + 52) + 1) & 0x3FFF;
  *((_WORD *)this + 52) = v3;
  if ( v3 < 2u )
    *((_WORD *)this + 52) = 2;
  return v2;
}
