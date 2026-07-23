/*
 * XREFs of ZwOpenRegistryTransaction @ 0x1403FBF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenRegistryTransaction(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
