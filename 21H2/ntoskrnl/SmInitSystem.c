/*
 * XREFs of SmInitSystem @ 0x140B255E4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 * Callees:
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     SmQueryRegistry @ 0x140B2564C (SmQueryRegistry.c)
 *     SmGlobalsInitialize @ 0x140B256D0 (SmGlobalsInitialize.c)
 */

__int64 __fastcall SmInitSystem(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 && EtwRegister(&SmEventProvider, (PETWENABLECALLBACK)SmEtwEnableCallback, 0LL, &qword_140D32530) >= 0 )
    {
      dword_140D32538 |= 1u;
      dword_140D3253C = 64;
    }
  }
  else
  {
    SmGlobalsInitialize(&SmGlobals);
    SmQueryRegistry(&SmGlobals);
  }
  return 0LL;
}
