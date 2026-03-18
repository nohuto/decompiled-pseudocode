/*
 * XREFs of sub_140763D30 @ 0x140763D30
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x140761414 (WbRemoveWarbirdProcess.c)
 *     WbDispatchOperation @ 0x140763928 (WbDispatchOperation.c)
 *     WbGetWarbirdProcess @ 0x140763B10 (WbGetWarbirdProcess.c)
 *     WbCreateWarbirdProcess @ 0x1407E7C1C (WbCreateWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x1407E1440 (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_140763D30(volatile signed __int64 *a1)
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
