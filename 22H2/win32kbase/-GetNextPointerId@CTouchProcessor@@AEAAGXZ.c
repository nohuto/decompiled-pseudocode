/*
 * XREFs of ?GetNextPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C01C72F4
 * Callers:
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C01C007C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetNextPointerId(struct _KTHREAD **this)
{
  unsigned __int16 v2; // di

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8711);
  v2 = *((_WORD *)this + 52);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8723);
  if ( ++*((_WORD *)this + 52) < 2u )
    *((_WORD *)this + 52) = 2;
  return v2;
}
