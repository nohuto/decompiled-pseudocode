/*
 * XREFs of SmInitSystem @ 0x140A4B43C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140A4C104 (Phase1InitializationIoReady.c)
 * Callees:
 *     EtwRegister @ 0x140762CB0 (EtwRegister.c)
 *     SmQueryRegistry @ 0x140A4B4A4 (SmQueryRegistry.c)
 *     SmGlobalsInitialize @ 0x140A4B528 (SmGlobalsInitialize.c)
 */

__int64 __fastcall SmInitSystem(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 && EtwRegister(&SmEventProvider, (PETWENABLECALLBACK)SmEtwEnableCallback, 0LL, &qword_140D244F0) >= 0 )
    {
      dword_140D244F8 |= 1u;
      dword_140D244FC = 64;
    }
  }
  else
  {
    SmGlobalsInitialize(&SmGlobals);
    SmQueryRegistry(&SmGlobals);
  }
  return 0LL;
}
