/*
 * XREFs of sub_14064ECC0 @ 0x14064ECC0
 * Callers:
 *     WbHeapExecuteCall @ 0x14064D638 (WbHeapExecuteCall.c)
 *     sub_14064DB58 @ 0x14064DB58 (sub_14064DB58.c)
 *     WbGetWarbirdThread @ 0x14064EAD0 (WbGetWarbirdThread.c)
 *     WbFreeWarbirdProcess @ 0x140686B00 (WbFreeWarbirdProcess.c)
 *     sub_1406C36CC @ 0x1406C36CC (sub_1406C36CC.c)
 * Callees:
 *     sub_1406C3788 @ 0x1406C3788 (sub_1406C3788.c)
 */

signed __int64 __fastcall sub_14064ECC0(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 )
      sub_1406C3788();
  }
  return v2;
}
