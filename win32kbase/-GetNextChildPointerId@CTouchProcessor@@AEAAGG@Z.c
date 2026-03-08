/*
 * XREFs of ?GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z @ 0x1C01F6020
 * Callers:
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C01EEF38 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetNextChildPointerId(struct _KTHREAD **this, unsigned __int16 a2)
{
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8862);
  if ( !a2 )
  {
    a2 = *((_WORD *)this + 52);
    if ( !a2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8872);
    if ( ++*((_WORD *)this + 52) < 0x4000u )
      *((_WORD *)this + 52) = 0x4000;
  }
  return a2;
}
