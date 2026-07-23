/*
 * XREFs of ZwQueryOpenSubKeys @ 0x1403FC500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
