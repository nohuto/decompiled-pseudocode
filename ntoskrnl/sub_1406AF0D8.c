/*
 * XREFs of sub_1406AF0D8 @ 0x1406AF0D8
 * Callers:
 *     WbDispatchOperation @ 0x1406AECD0 (WbDispatchOperation.c)
 *     WbGetWarbirdProcess @ 0x1406AEEB8 (WbGetWarbirdProcess.c)
 *     WbRemoveWarbirdProcess @ 0x14070546C (WbRemoveWarbirdProcess.c)
 *     WbCreateWarbirdProcess @ 0x1407987BC (WbCreateWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x140752CDC (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_1406AF0D8(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1 + 29);
    if ( !v1 )
      WbFreeWarbirdProcess((PVOID)a1);
  }
  return v1;
}
