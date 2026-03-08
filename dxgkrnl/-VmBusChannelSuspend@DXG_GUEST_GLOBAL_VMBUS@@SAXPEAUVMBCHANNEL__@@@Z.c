/*
 * XREFs of ?VmBusChannelSuspend@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0375130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusChannelSuspend(struct VMBCHANNEL__ *a1)
{
  __int64 v2; // rax
  bool v3; // zf

  v2 = ((__int64 (*)(void))qword_1C013CE58)();
  v3 = bTracingEnabled == 0;
  *(_BYTE *)(v2 + 68) = 0;
  if ( !v3 )
    VgpuTrace(1, 0, 0LL, L"DXG_GUEST_GLOBAL_VMBUS::VmBusChannelSuspend", (wchar_t *)L"%p", a1);
}
