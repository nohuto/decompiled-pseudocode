/*
 * XREFs of ZwSetInformationKey @ 0x1404157F0
 * Callers:
 *     DifZwSetInformationKeyWrapper @ 0x1405F4C80 (DifZwSetInformationKeyWrapper.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140771C20 (IopApplyMutableTagToRegistryKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x140A27D70 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x140A27DE0 (CmpDoReDoSetLastWriteTime.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&KeySetInformationClass);
}
