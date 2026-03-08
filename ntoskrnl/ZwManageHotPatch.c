/*
 * XREFs of ZwManageHotPatch @ 0x140414610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwManageHotPatch(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
