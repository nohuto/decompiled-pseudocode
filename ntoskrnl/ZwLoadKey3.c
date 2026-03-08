/*
 * XREFs of ZwLoadKey3 @ 0x140414510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKey3(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
