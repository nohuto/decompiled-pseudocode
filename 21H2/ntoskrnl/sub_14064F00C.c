/*
 * XREFs of sub_14064F00C @ 0x14064F00C
 * Callers:
 *     WbDispatchOperation @ 0x14064EE24 (WbDispatchOperation.c)
 *     WbGetWarbirdProcess @ 0x14064F044 (WbGetWarbirdProcess.c)
 *     WbRemoveWarbirdProcess @ 0x1406A2524 (WbRemoveWarbirdProcess.c)
 *     WbCreateWarbirdProcess @ 0x1406C2B6C (WbCreateWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x140686B00 (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_14064F00C(volatile signed __int64 *a1)
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
