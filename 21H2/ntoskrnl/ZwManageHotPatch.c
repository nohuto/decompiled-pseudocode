/*
 * XREFs of ZwManageHotPatch @ 0x1403FC7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwManageHotPatch(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
