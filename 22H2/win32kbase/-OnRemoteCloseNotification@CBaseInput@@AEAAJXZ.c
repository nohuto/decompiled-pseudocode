/*
 * XREFs of ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C006EEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     RimInputTypeToDeviceInputType @ 0x1C006EEF0 (RimInputTypeToDeviceInputType.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0070630 (RIMDirectPnpRemoveDevicesOfType.c)
 */

__int64 __fastcall CBaseInput::OnRemoteCloseNotification(CBaseInput *this)
{
  unsigned int v2; // eax
  __int64 *v4; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v4, "OnRemoteCloseNotification", 0LL);
  v2 = RimInputTypeToDeviceInputType(*((unsigned int *)this + 36));
  LODWORD(this) = RIMDirectPnpRemoveDevicesOfType(*((_QWORD *)this + 1), v2);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v4);
  return (unsigned int)this;
}
