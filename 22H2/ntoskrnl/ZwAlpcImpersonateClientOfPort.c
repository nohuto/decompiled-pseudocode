/*
 * XREFs of ZwAlpcImpersonateClientOfPort @ 0x14041B760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcImpersonateClientOfPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
