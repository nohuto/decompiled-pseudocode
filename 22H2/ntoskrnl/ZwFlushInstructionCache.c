/*
 * XREFs of ZwFlushInstructionCache @ 0x1403FB740
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405D772C (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_140666A00 @ 0x140666A00 (sub_140666A00.c)
 *     sub_140963D98 @ 0x140963D98 (sub_140963D98.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushInstructionCache(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
