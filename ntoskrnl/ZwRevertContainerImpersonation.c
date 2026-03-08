/*
 * XREFs of ZwRevertContainerImpersonation @ 0x140415430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRevertContainerImpersonation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
