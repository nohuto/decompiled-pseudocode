/*
 * XREFs of sub_140643AE0 @ 0x140643AE0
 * Callers:
 *     WbFreeWarbirdProcess @ 0x1405E5C60 (WbFreeWarbirdProcess.c)
 *     sub_1406222AC @ 0x1406222AC (sub_1406222AC.c)
 *     WbHeapExecuteCall @ 0x140642458 (WbHeapExecuteCall.c)
 *     sub_140642978 @ 0x140642978 (sub_140642978.c)
 *     WbGetWarbirdThread @ 0x1406438F0 (WbGetWarbirdThread.c)
 * Callees:
 *     sub_140622368 @ 0x140622368 (sub_140622368.c)
 */

signed __int64 __fastcall sub_140643AE0(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 )
      sub_140622368(a1, (_QWORD *)a2);
  }
  return v2;
}
