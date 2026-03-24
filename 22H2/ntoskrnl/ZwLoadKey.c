/*
 * XREFs of ZwLoadKey @ 0x1403FBB20
 * Callers:
 *     BiLoadHive @ 0x140785948 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
