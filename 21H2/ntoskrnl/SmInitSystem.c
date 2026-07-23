/*
 * XREFs of SmInitSystem @ 0x140A4C43C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140A4D104 (Phase1InitializationIoReady.c)
 * Callees:
 *     EtwRegister @ 0x140762E70 (EtwRegister.c)
 *     SmQueryRegistry @ 0x140A4C4A4 (SmQueryRegistry.c)
 *     SmGlobalsInitialize @ 0x140A4C528 (SmGlobalsInitialize.c)
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
