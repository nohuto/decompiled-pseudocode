/*
 * XREFs of ZwQuerySecurityPolicy @ 0x1403FD120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySecurityPolicy(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
