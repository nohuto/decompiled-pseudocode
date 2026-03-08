/*
 * XREFs of ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x1C0371E40
 * Callers:
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C036F5C0 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C005A2B0 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::SendVmBusMessageAsync(struct _KTHREAD **this, void *a2, unsigned int a3)
{
  unsigned int v6; // ebx
  DXGGLOBAL *Global; // rax
  _BYTE v9[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, this + 2, 0);
  DXGPUSHLOCK::AcquireShared(v10);
  v11 = 1;
  if ( *((_BYTE *)this + 68) )
  {
    if ( a3 <= 0x20000 )
    {
      v6 = ((__int64 (__fastcall *)(struct _KTHREAD *, void *, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))qword_1C013CEC0)(
             *this,
             a2,
             a3,
             0LL,
             0,
             0LL,
             0LL,
             0LL);
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::CheckDebugBreak(Global);
      goto LABEL_5;
    }
    WdLogSingleEntry1(3LL, 15754LL);
  }
  v6 = -1073741811;
LABEL_5:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  return v6;
}
