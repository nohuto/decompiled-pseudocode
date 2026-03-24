/*
 * XREFs of ?NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z @ 0x1C00A726C
 * Callers:
 *     NotifySetPointerGraphicDevice @ 0x1C00A7240 (NotifySetPointerGraphicDevice.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::NotifySetPointerGraphicDevice(__int64 a1, int a2)
{
  __int64 v4; // rbx

  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1991LL);
  v4 = a1 + 3816;
  RIMLockExclusive(v4);
  if ( *(_BYTE *)(v4 + 16) && a2 > 0 )
  {
    if ( a2 <= 2 )
    {
      if ( *(_BYTE *)(v4 + 17) )
        *(_BYTE *)(v4 + 17) = 0;
    }
    else if ( a2 == 3 )
    {
      *(_BYTE *)(v4 + 17) = 1;
    }
  }
  *(_QWORD *)(v4 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
