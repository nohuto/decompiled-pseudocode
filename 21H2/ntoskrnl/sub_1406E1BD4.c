/*
 * XREFs of sub_1406E1BD4 @ 0x1406E1BD4
 * Callers:
 *     WbCreateWarbirdProcess @ 0x1406E1A90 (WbCreateWarbirdProcess.c)
 *     WbRemoveWarbirdProcess @ 0x1407E15B4 (WbRemoveWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x1407E17A4 (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_1406E1BD4(volatile signed __int64 *a1)
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
