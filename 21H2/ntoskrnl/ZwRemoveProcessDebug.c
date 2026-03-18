/*
 * XREFs of ZwRemoveProcessDebug @ 0x14041E6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRemoveProcessDebug(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
