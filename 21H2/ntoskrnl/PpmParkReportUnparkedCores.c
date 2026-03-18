/*
 * XREFs of PpmParkReportUnparkedCores @ 0x14023A820
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KiSubtractAffinityEx @ 0x1402FEDA0 (KiSubtractAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     PpmPerfQueueAction @ 0x140345110 (PpmPerfQueueAction.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 */

char PpmParkReportUnparkedCores()
{
  __int64 Prcb; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+32h] [rbp-16h]
  __int16 v5; // [rsp+36h] [rbp-12h]
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( !PpmIsParkingEnabled
    || !(unsigned int)KiSubtractAffinityEx(
                        &PpmPerfChangedCoreParkingMask,
                        &PpmPerfNewCoreParkingMask,
                        &PpmPerfNewUnparkedMask,
                        HIWORD(PpmPerfNewUnparkedMask)) )
  {
    return 1;
  }
  PpmCheckCount = KeCountSetBitsAffinityEx(&PpmPerfNewUnparkedMask);
  v2[1] = qword_140C0D118;
  v3 = 0;
  v2[0] = &PpmPerfNewUnparkedMask;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v6, v2) )
  {
    Prcb = KeGetPrcb(v6);
    PpmPerfQueueAction(Prcb, 1LL);
  }
  return 0;
}
