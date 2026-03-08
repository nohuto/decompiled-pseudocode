/*
 * XREFs of SmInitSystem @ 0x140B427B4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwRegister @ 0x140690D20 (EtwRegister.c)
 *     SmpSystemStoreCreate @ 0x140858420 (SmpSystemStoreCreate.c)
 *     SmGlobalsStart @ 0x140B428A8 (SmGlobalsStart.c)
 */

__int64 __fastcall SmInitSystem(int a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *((_QWORD *)PspSystemPartition + 3);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( EtwRegister(&SmEventProvider, (PETWENABLECALLBACK)SmEtwEnableCallback, 0LL, &qword_140C6AFA0) >= 0 )
      {
        dword_140C6AFA8 |= 1u;
        dword_140C6AFAC = 64;
      }
    }
    else if ( a1 == 2 && (*(_DWORD *)(v2 + 2064) & 3) != 0 )
    {
      SmpSystemStoreCreate(*((_QWORD *)PspSystemPartition + 3));
    }
    goto LABEL_6;
  }
  memset(&SmGlobals, 0, 0x50uLL);
  qword_140C6AF98 = 0LL;
  qword_140C6AF90 = (__int64)&qword_140C6AF88;
  qword_140C6AF88 = (__int64)&qword_140C6AF88;
  SmKmGlobals = PsInitialSystemProcess;
  dword_140C6AFC4 = 4;
  result = SmGlobalsStart(&SmGlobals);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v2 + 2064) = SmGlobals;
LABEL_6:
    dword_140C6AFC0 = a1 + 1;
    return 0LL;
  }
  return result;
}
