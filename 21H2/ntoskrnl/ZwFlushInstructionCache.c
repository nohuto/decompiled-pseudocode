/*
 * XREFs of ZwFlushInstructionCache @ 0x1403FC2A0
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405D772C (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405E5EA0 @ 0x1405E5EA0 (sub_1405E5EA0.c)
 *     sub_140963F28 @ 0x140963F28 (sub_140963F28.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushInstructionCache(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
