/*
 * XREFs of ZwRegisterProtocolAddressInformation @ 0x140415230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRegisterProtocolAddressInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
