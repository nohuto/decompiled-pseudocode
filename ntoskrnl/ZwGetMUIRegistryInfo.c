/*
 * XREFs of ZwGetMUIRegistryInfo @ 0x1404142B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetMUIRegistryInfo(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
