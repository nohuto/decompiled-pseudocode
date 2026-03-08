/*
 * XREFs of ?DequeueMouseEvents@CMouseProcessor@@AEAA_KPEAURawMouseEvent@1@@Z @ 0x1C007C3C4
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C007AB10 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     ?_Dequeue@CMouseQueue@CMouseProcessor@@AEAAXPEAURawMouseEvent@2@@Z @ 0x1C007CD54 (-_Dequeue@CMouseQueue@CMouseProcessor@@AEAAXPEAURawMouseEvent@2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::DequeueMouseEvents(
        CMouseProcessor *this,
        struct CMouseProcessor::RawMouseEvent *a2)
{
  char *v2; // rbx
  __int64 v5; // rsi
  __int64 v6; // r14

  v2 = (char *)this + 2768;
  RIMLockExclusive((__int64)this + 2768);
  v5 = *((unsigned __int16 *)this + 1381);
  if ( *((_WORD *)this + 1381) )
  {
    v6 = *((unsigned __int16 *)this + 1381);
    do
    {
      CMouseProcessor::CMouseQueue::_Dequeue((CMouseProcessor *)((char *)this + 72), a2);
      a2 = (struct CMouseProcessor::RawMouseEvent *)((char *)a2 + 168);
      --v6;
    }
    while ( v6 );
  }
  if ( *((_WORD *)this + 1381) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6532LL);
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
