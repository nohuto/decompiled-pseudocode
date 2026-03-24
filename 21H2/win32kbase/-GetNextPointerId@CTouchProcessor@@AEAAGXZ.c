/*
 * XREFs of ?GetNextPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C0191D24
 * Callers:
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C018C558 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetNextPointerId(struct _KTHREAD **this)
{
  unsigned __int16 v2; // di
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // ax

  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 8111);
  v2 = *((_WORD *)this + 52);
  v3 = v2;
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 8123);
    v3 = *((_WORD *)this + 52);
  }
  v4 = v3 + 1;
  *((_WORD *)this + 52) = v4;
  if ( v4 < 2u )
    *((_WORD *)this + 52) = 2;
  return v2;
}
