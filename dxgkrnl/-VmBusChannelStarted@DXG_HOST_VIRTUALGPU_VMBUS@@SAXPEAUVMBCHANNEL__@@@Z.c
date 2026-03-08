/*
 * XREFs of ?VmBusChannelStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C03750A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z @ 0x1C00515E4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 */

void __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelStarted(struct VMBCHANNEL__ *a1)
{
  __int64 v2; // rbx
  _BYTE v3[40]; // [rsp+30h] [rbp-28h] BYREF

  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelStarted", (wchar_t *)L"%p", a1);
  v2 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C013CE58)(a1);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v3,
    (struct DXGPUSHLOCK *const)(v2 + 192),
    *(_QWORD *)(v2 + 200) != (_QWORD)KeGetCurrentThread());
  *(_BYTE *)(v2 + 246) = 0;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v3);
}
