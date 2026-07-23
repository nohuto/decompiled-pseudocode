/*
 * XREFs of ZwLoadKey @ 0x1403FC680
 * Callers:
 *     BiLoadHive @ 0x140785C08 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
