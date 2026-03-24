/*
 * XREFs of ZwDeleteFile @ 0x1403FBE00
 * Callers:
 *     NtEnableLastKnownGood @ 0x14077C3F0 (NtEnableLastKnownGood.c)
 *     KsepDeletePatchSdb @ 0x1408C0C74 (KsepDeletePatchSdb.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A908F0 (PiLastGoodRevertLastKnownDirectory.c)
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
