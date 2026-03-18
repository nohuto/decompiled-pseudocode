/*
 * XREFs of RtlStringFromGUID @ 0x140745490
 * Callers:
 *     PipHardwareConfigInit @ 0x140B28AB0 (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x140B2C034 (SepSecureBootSetRegistryKey.c)
 *     VhdInitialize @ 0x140B30860 (VhdInitialize.c)
 *     PiInitFirmwareResources @ 0x140B30F30 (PiInitFirmwareResources.c)
 *     BapdpRegisterFwUpdateResults @ 0x140B5400C (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x140B550AC (RamdiskStart.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x1407454A8 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  char v2; // r8

  v2 = 1;
  return RtlStringFromGUIDEx(Guid, GuidString, v2);
}
