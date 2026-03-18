/*
 * XREFs of ?VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0379900
 * Callers:
 *     <none>
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005B17C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C03792A0 (-VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelSuspend(struct VMBCHANNEL__ *a1)
{
  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelSuspend", (wchar_t *)L"%p", a1);
  DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed(a1);
}
