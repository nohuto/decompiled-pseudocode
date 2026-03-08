/*
 * XREFs of PpmParkReportUnparkedCores @ 0x1402EAA30
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PpmPerfQueueAction @ 0x1402363D4 (PpmPerfQueueAction.c)
 *     KeCountSetBitsAffinityEx @ 0x140237550 (KeCountSetBitsAffinityEx.c)
 *     KiSubtractAffinityEx @ 0x1402D4CBC (KiSubtractAffinityEx.c)
 */

char PpmParkReportUnparkedCores()
{
  __int64 Prcb; // rax
  unsigned __int16 *v2[2]; // [rsp+20h] [rbp-28h] BYREF
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
                        (char *)&PpmPerfNewCoreParkingMask,
                        &PpmPerfNewUnparkedMask,
                        HIWORD(PpmPerfNewUnparkedMask)) )
  {
    return 1;
  }
  PpmCheckCount = KeCountSetBitsAffinityEx((unsigned __int16 *)&PpmPerfNewUnparkedMask);
  v2[1] = (unsigned __int16 *)qword_140C0D6F8;
  v3 = 0;
  v2[0] = (unsigned __int16 *)&PpmPerfNewUnparkedMask;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v6, v2) )
  {
    Prcb = KeGetPrcb(v6);
    PpmPerfQueueAction(Prcb, 1);
  }
  return 0;
}
