/*
 * XREFs of sub_1406AF488 @ 0x1406AF488
 * Callers:
 *     WbGetWarbirdThread @ 0x1406AF248 (WbGetWarbirdThread.c)
 *     WbHeapExecuteCall @ 0x1406AF56C (WbHeapExecuteCall.c)
 *     sub_1406AFFB4 @ 0x1406AFFB4 (sub_1406AFFB4.c)
 *     WbFreeWarbirdProcess @ 0x140752CDC (WbFreeWarbirdProcess.c)
 *     sub_14079ADCC @ 0x14079ADCC (sub_14079ADCC.c)
 * Callees:
 *     sub_14079B344 @ 0x14079B344 (sub_14079B344.c)
 */

signed __int64 __fastcall sub_1406AF488(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 )
      sub_14079B344();
  }
  return v2;
}
