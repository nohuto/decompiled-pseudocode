/*
 * XREFs of ZwLoadKey2 @ 0x1403FC6A0
 * Callers:
 *     BiLoadHive @ 0x140785C08 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey2(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
