/*
 * XREFs of ZwDeleteAtom @ 0x14041C160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteAtom(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
