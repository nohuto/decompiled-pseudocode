/*
 * XREFs of ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C037641C
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

__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(
        struct _KTHREAD **this,
        void *a2,
        unsigned int a3,
        void *a4,
        unsigned int *a5)
{
  bool v9; // zf
  unsigned int v10; // ebx
  DXGGLOBAL *Global; // rax
  _BYTE v13[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, this + 2, 0);
  DXGPUSHLOCK::AcquireShared(v14);
  v9 = *((_BYTE *)this + 68) == 0;
  v15 = 1;
  if ( v9 )
    goto LABEL_6;
  if ( a3 > 0x20000 || *a5 > 0x20000 )
  {
    WdLogSingleEntry1(3LL, 15837LL);
LABEL_6:
    v10 = -1073741811;
    goto LABEL_7;
  }
  v10 = ((__int64 (__fastcall *)(struct _KTHREAD *, void *, _QWORD, _QWORD, int, void *, unsigned int *, _QWORD))qword_1C0141F70)(
          this[1],
          a2,
          a3,
          0LL,
          1,
          a4,
          a5,
          0LL);
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::CheckDebugBreak(Global);
LABEL_7:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v10;
}
