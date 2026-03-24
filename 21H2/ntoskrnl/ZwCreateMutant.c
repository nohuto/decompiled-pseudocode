/*
 * XREFs of ZwCreateMutant @ 0x1403FBA20
 * Callers:
 *     BcdInitializeBcdSyncMutant @ 0x140A73808 (BcdInitializeBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
