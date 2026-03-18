/*
 * XREFs of ZwLoadKey2 @ 0x14041D920
 * Callers:
 *     BiLoadHive @ 0x140813960 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKey2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
