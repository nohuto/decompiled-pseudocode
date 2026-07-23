/*
 * XREFs of RtlStringFromGUID @ 0x14066DF00
 * Callers:
 *     CmpInitCmRM @ 0x1406C46C8 (CmpInitCmRM.c)
 *     CmpCloneHwProfile @ 0x1408772E4 (CmpCloneHwProfile.c)
 *     PiInitFirmwareResources @ 0x140A51E48 (PiInitFirmwareResources.c)
 *     PipHardwareConfigInit @ 0x140A522F4 (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x140A71928 (SepSecureBootSetRegistryKey.c)
 *     VhdInitialize @ 0x140A74778 (VhdInitialize.c)
 *     BapdpRegisterFwUpdateResults @ 0x140A95278 (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x140A96268 (RamdiskStart.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x14066DF18 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
