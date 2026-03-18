/*
 * XREFs of ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x1C0376500
 * Callers:
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0373C78 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C005AED0 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
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
      v6 = ((__int64 (__fastcall *)(struct _KTHREAD *, void *, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))qword_1C0141F70)(
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
    WdLogSingleEntry1(3LL, 15865LL);
  }
  v6 = -1073741811;
LABEL_5:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  return v6;
}
