/*
 * XREFs of ZwDeleteFile @ 0x14041D260
 * Callers:
 *     DifZwDeleteFileWrapper @ 0x14061F620 (DifZwDeleteFileWrapper.c)
 *     NtEnableLastKnownGood @ 0x14080B090 (NtEnableLastKnownGood.c)
 *     KsepDeletePatchSdb @ 0x140964CB8 (KsepDeletePatchSdb.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B4FF80 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes, v1);
}
