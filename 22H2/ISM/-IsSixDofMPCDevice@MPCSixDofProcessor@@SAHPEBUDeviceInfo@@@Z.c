/*
 * XREFs of ?IsSixDofMPCDevice@MPCSixDofProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18018D5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCSixDofProcessor::IsSixDofMPCDevice(const struct DeviceInfo *a1)
{
  return (*((_DWORD *)a1 + 1) >> 13) & 1;
}
