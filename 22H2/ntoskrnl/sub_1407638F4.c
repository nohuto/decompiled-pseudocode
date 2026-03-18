/*
 * XREFs of sub_1407638F4 @ 0x1407638F4
 * Callers:
 *     sub_140762D7C @ 0x140762D7C (sub_140762D7C.c)
 *     WbHeapExecuteCall @ 0x140763120 (WbHeapExecuteCall.c)
 *     WbGetWarbirdThread @ 0x1407636B4 (WbGetWarbirdThread.c)
 *     WbFreeWarbirdProcess @ 0x1407E1440 (WbFreeWarbirdProcess.c)
 *     sub_1407E9E3C @ 0x1407E9E3C (sub_1407E9E3C.c)
 * Callees:
 *     sub_1407EA2F4 @ 0x1407EA2F4 (sub_1407EA2F4.c)
 */

signed __int64 __fastcall sub_1407638F4(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 )
      sub_1407EA2F4();
  }
  return v2;
}
