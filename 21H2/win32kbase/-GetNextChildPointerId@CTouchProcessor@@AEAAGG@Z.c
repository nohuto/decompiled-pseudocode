/*
 * XREFs of ?GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z @ 0x1C0191C08
 * Callers:
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C018C558 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetNextChildPointerId(struct _KTHREAD **this, unsigned __int16 a2)
{
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // ax

  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 8171);
  if ( !a2 )
  {
    a2 = *((_WORD *)this + 52);
    v4 = a2;
    if ( !a2 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 8181);
      v4 = *((_WORD *)this + 52);
    }
    v5 = v4 + 1;
    *((_WORD *)this + 52) = v5;
    if ( v5 < 0x4000u )
      *((_WORD *)this + 52) = 0x4000;
  }
  return a2;
}
