/*
 * XREFs of ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C002F130
 * Callers:
 *     <none>
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x1C002F180 (RimInputTypeToDeviceInputType.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C002F1B0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 */

__int64 __fastcall CBaseInput::OnRemoteCloseNotification(CBaseInput *this)
{
  unsigned int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v4,
    "OnRemoteCloseNotification",
    0LL);
  v2 = RimInputTypeToDeviceInputType(*((unsigned int *)this + 36));
  LODWORD(this) = RIMDirectPnpRemoveDevicesOfType(*((_QWORD *)this + 1), v2);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v4);
  return (unsigned int)this;
}
