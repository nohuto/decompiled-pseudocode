/*
 * XREFs of ZwQuerySystemEnvironmentValue @ 0x140415050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemEnvironmentValue(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
