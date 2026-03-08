/*
 * XREFs of ZwDeleteFile @ 0x140413E30
 * Callers:
 *     DifZwDeleteFileWrapper @ 0x1405ED130 (DifZwDeleteFileWrapper.c)
 *     NtEnableLastKnownGood @ 0x14087F5A0 (NtEnableLastKnownGood.c)
 *     KsepDeletePatchSdb @ 0x140974504 (KsepDeletePatchSdb.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B91710 (PiLastGoodRevertLastKnownDirectory.c)
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
