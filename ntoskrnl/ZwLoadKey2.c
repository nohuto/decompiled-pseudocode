/*
 * XREFs of ZwLoadKey2 @ 0x1404144F0
 * Callers:
 *     BiLoadHive @ 0x1408306AC (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKey2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
