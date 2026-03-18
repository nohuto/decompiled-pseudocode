/*
 * XREFs of PpmParkUnblockIdle @ 0x14023A7D0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     PpmPerfQueueAction @ 0x140345110 (PpmPerfQueueAction.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char PpmParkUnblockIdle()
{
  char v0; // bl
  __int64 Prcb; // rax
  int v3; // eax
  __int64 v4; // rax
  int *v5; // [rsp+20h] [rbp-20h] BYREF
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
    v6 = qword_140C0D118;
    v5 = &PpmPerfNewUnparkedMask;
    v7 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v10, &v5) )
    {
      Prcb = KeGetPrcb(v10);
      if ( *(_BYTE *)(Prcb + 33669) )
        *(_BYTE *)(Prcb + 33669) = 0;
      else
        KeRemoveProcessorAffinityEx(&PpmPerfNewUnparkedMask, v10);
    }
    v3 = KeCountSetBitsAffinityEx(&PpmPerfNewUnparkedMask);
    if ( v3 )
    {
      PpmCheckCount = v3;
      v6 = qword_140C0D118;
      v7 = 0;
      v5 = &PpmPerfNewUnparkedMask;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v10, &v5) )
      {
        v4 = KeGetPrcb(v10);
        PpmPerfQueueAction(v4, 5LL);
      }
      PpmPerfNewUnparkedMask = 2097153;
      memset(&unk_140C0D114, 0, 0x104uLL);
      return 0;
    }
  }
  return v0;
}
