/*
 * XREFs of RIMIDEFreeInjectedInfo @ 0x1C00B16A0
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C00BBA6C (RIMFreeSpecificDevWorker.c)
 *     RIMIDECreateHIDDesc @ 0x1C01674DC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 */

void __fastcall RIMIDEFreeInjectedInfo(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 384);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 72) )
    {
      Win32FreePool(*(_QWORD *)(v2 + 72));
      v2 = *(_QWORD *)(a1 + 384);
    }
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 384) = 0LL;
  }
}
