/*
 * XREFs of ZwQuerySecurityAttributesToken @ 0x140414FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySecurityAttributesToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
