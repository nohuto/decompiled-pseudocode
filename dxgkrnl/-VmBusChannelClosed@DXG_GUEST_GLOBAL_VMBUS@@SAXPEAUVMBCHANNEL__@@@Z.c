/*
 * XREFs of ?VmBusChannelClosed@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0374AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?DisableChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C005B27C (-DisableChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusChannelClosed(struct VMBCHANNEL__ *a1)
{
  PRKEVENT *v2; // rbx

  v2 = (PRKEVENT *)((__int64 (*)(void))qword_1C013CE58)();
  KeSetEvent(v2[7], 0, 0);
  DXG_VMBUS_CHANNEL_BASE::DisableChannel((DXG_VMBUS_CHANNEL_BASE *)v2);
  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_GUEST_GLOBAL_VMBUS::VmBusChannelClosed", (wchar_t *)L"%p", a1);
}
