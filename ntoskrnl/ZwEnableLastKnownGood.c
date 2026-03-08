/*
 * XREFs of ZwEnableLastKnownGood @ 0x140413F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnableLastKnownGood(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
