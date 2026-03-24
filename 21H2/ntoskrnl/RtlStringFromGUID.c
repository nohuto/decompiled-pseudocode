/*
 * XREFs of RtlStringFromGUID @ 0x14067A7C0
 * Callers:
 *     CmpInitCmRM @ 0x140716078 (CmpInitCmRM.c)
 *     CmpCloneHwProfile @ 0x140877184 (CmpCloneHwProfile.c)
 *     PiInitFirmwareResources @ 0x140A50E48 (PiInitFirmwareResources.c)
 *     PipHardwareConfigInit @ 0x140A512F4 (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x140A70928 (SepSecureBootSetRegistryKey.c)
 *     VhdInitialize @ 0x140A73778 (VhdInitialize.c)
 *     BapdpRegisterFwUpdateResults @ 0x140A94278 (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x140A95268 (RamdiskStart.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x14067A7D8 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  char v2; // r8

  v2 = 1;
  return RtlStringFromGUIDEx(Guid, GuidString, v2);
}
