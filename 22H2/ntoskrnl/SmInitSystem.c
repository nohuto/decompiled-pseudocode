/*
 * XREFs of SmInitSystem @ 0x140B54430
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140B532AC (Phase1InitializationIoReady.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     EtwRegister @ 0x14078DD90 (EtwRegister.c)
 *     SmpSystemStoreCreate @ 0x14085C174 (SmpSystemStoreCreate.c)
 *     SmGlobalsStart @ 0x140B54524 (SmGlobalsStart.c)
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
      if ( EtwRegister(&SmEventProvider, (PETWENABLECALLBACK)SmEtwEnableCallback, 0LL, &qword_140C6B3E0) >= 0 )
      {
        dword_140C6B3E8 |= 1u;
        dword_140C6B3EC = 64;
      }
    }
    else if ( a1 == 2 && (*(_DWORD *)(v2 + 2064) & 3) != 0 )
    {
      SmpSystemStoreCreate(*((_QWORD *)PspSystemPartition + 3));
    }
    goto LABEL_6;
  }
  memset(&SmGlobals, 0, 0x50uLL);
  qword_140C6B3D8 = 0LL;
  qword_140C6B3D0 = (__int64)&qword_140C6B3C8;
  qword_140C6B3C8 = (__int64)&qword_140C6B3C8;
  SmKmGlobals = PsInitialSystemProcess;
  dword_140C6B404 = 4;
  result = SmGlobalsStart(&SmGlobals);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v2 + 2064) = SmGlobals;
LABEL_6:
    dword_140C6B400 = a1 + 1;
    return 0LL;
  }
  return result;
}
