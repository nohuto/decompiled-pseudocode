/*
 * XREFs of RtlStringFromGUID @ 0x140733E70
 * Callers:
 *     SepSecureBootSetRegistryKey @ 0x140B41FF4 (SepSecureBootSetRegistryKey.c)
 *     CimfsInitialize @ 0x140B55208 (CimfsInitialize.c)
 *     VhdInitialize @ 0x140B56EA0 (VhdInitialize.c)
 *     PipHardwareConfigInit @ 0x140B694FC (PipHardwareConfigInit.c)
 *     PiInitFirmwareResources @ 0x140B6B9C4 (PiInitFirmwareResources.c)
 *     BapdpRegisterFwUpdateResults @ 0x140B94804 (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x140B98380 (RamdiskStart.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x140733E90 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  char v2; // r8

  v2 = 1;
  return RtlStringFromGUIDEx(Guid, GuidString, v2);
}
