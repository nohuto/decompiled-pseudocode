/*
 * XREFs of ZwAlpcDeleteSecurityContext @ 0x140413370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcDeleteSecurityContext(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
