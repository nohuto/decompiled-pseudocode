/*
 * XREFs of ?VmBusChannelSuspend@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0379950
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z @ 0x1C0052644 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z.c)
 *     ?GuestPaused@HOSTVMMONITORMAPPING@@QEAAXXZ @ 0x1C0057EC8 (-GuestPaused@HOSTVMMONITORMAPPING@@QEAAXXZ.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005B17C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusChannelSuspend(struct VMBCHANNEL__ *a1)
{
  __int64 v2; // rbx
  struct DXGGLOBAL *Global; // rax
  _BYTE v4[40]; // [rsp+30h] [rbp-28h] BYREF

  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_HOST_GLOBAL_VMBUS::VmBusChannelSuspend", (wchar_t *)L"%p", a1);
  v2 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C0141F08)(a1);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v4,
    (struct DXGPUSHLOCK *const)(v2 + 176),
    *(_QWORD *)(v2 + 184) != (_QWORD)KeGetCurrentThread());
  *(_BYTE *)(v2 + 230) = 1;
  Global = DXGGLOBAL::GetGlobal();
  HOSTVMMONITORMAPPING::GuestPaused((KSPIN_LOCK *)Global + 38111);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
}
