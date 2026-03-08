/*
 * XREFs of ?FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x1C0347DB0
 * Callers:
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C03810BC (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 *     ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C0384BCC (-VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 */

__int64 __fastcall REMOTEMONITORMAPPING::FindMappingFromGuestVidPnSourceId(
        struct _KTHREAD **this,
        int a2,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *a3)
{
  struct _KTHREAD *v6; // rax
  unsigned int v7; // ebx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, this + 2, 0);
  DXGPUSHLOCK::AcquireShared(v10);
  v6 = *this;
  v11 = 1;
  while ( 1 )
  {
    if ( v6 == (struct _KTHREAD *)this )
    {
      v7 = -1073741275;
      goto LABEL_6;
    }
    if ( *((_DWORD *)v6 + 10) == a2 )
      break;
    v6 = *(struct _KTHREAD **)v6;
  }
  v7 = 0;
  *(_QWORD *)a3 = *((_QWORD *)v6 + 2);
  *((_DWORD *)a3 + 2) = *((_DWORD *)v6 + 6);
LABEL_6:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  return v7;
}
