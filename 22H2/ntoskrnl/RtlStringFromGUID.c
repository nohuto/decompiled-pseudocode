/*
 * XREFs of RtlStringFromGUID @ 0x1406F35B0
 * Callers:
 *     CmpInitCmRM @ 0x14070D220 (CmpInitCmRM.c)
 *     CmpCloneHwProfile @ 0x1408771D4 (CmpCloneHwProfile.c)
 *     PiInitFirmwareResources @ 0x140A50E48 (PiInitFirmwareResources.c)
 *     PipHardwareConfigInit @ 0x140A512F4 (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x140A70928 (SepSecureBootSetRegistryKey.c)
 *     VhdInitialize @ 0x140A73778 (VhdInitialize.c)
 *     BapdpRegisterFwUpdateResults @ 0x140A94278 (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x140A95268 (RamdiskStart.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x1406F35C8 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
