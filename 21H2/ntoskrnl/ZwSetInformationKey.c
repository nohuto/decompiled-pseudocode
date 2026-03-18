/*
 * XREFs of ZwSetInformationKey @ 0x14041EBC0
 * Callers:
 *     DifZwSetInformationKeyWrapper @ 0x140627410 (DifZwSetInformationKeyWrapper.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1406C55CC (IopApplyMutableTagToRegistryKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x140925D1C (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x140925D8C (CmpDoReDoSetLastWriteTime.c)
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
