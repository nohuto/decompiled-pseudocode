/*
 * XREFs of PpmParkUnblockIdle @ 0x1402EA9E0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PpmPerfQueueAction @ 0x1402363D4 (PpmPerfQueueAction.c)
 *     KeCountSetBitsAffinityEx @ 0x140237550 (KeCountSetBitsAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x140237640 (KeRemoveProcessorAffinityEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char PpmParkUnblockIdle()
{
  char v0; // bl
  __int64 Prcb; // rax
  int v3; // eax
  __int64 v4; // rax
  unsigned __int16 *v5; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+28h] [rbp-18h]
  __int16 v7; // [rsp+30h] [rbp-10h]
  int v8; // [rsp+32h] [rbp-Eh]
  __int16 v9; // [rsp+36h] [rbp-Ah]
  unsigned int v10; // [rsp+50h] [rbp+10h] BYREF

  v8 = 0;
  v9 = 0;
  v0 = 1;
  v10 = 0;
  if ( PpmIsParkingEnabled )
  {
    v6 = qword_140C0D6F8;
    v5 = (unsigned __int16 *)&PpmPerfNewUnparkedMask;
    v7 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v10, &v5) )
    {
      Prcb = KeGetPrcb(v10);
      if ( *(_BYTE *)(Prcb + 33669) )
        *(_BYTE *)(Prcb + 33669) = 0;
      else
        KeRemoveProcessorAffinityEx((unsigned __int16 *)&PpmPerfNewUnparkedMask, v10);
    }
    v3 = KeCountSetBitsAffinityEx((unsigned __int16 *)&PpmPerfNewUnparkedMask);
    if ( v3 )
    {
      PpmCheckCount = v3;
      v6 = qword_140C0D6F8;
      v7 = 0;
      v5 = (unsigned __int16 *)&PpmPerfNewUnparkedMask;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v10, &v5) )
      {
        v4 = KeGetPrcb(v10);
        PpmPerfQueueAction(v4, 5);
      }
      PpmPerfNewUnparkedMask = 2097153;
      memset(&unk_140C0D6F4, 0, 0x104uLL);
      return 0;
    }
  }
  return v0;
}
