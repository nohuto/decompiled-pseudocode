/*
 * XREFs of ZwDeleteFile @ 0x1403FB480
 * Callers:
 *     NtEnableLastKnownGood @ 0x14077C2F0 (NtEnableLastKnownGood.c)
 *     KsepDeletePatchSdb @ 0x1408C0CC4 (KsepDeletePatchSdb.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A908F0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
