/*
 * XREFs of ?QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAK@Z @ 0x1C023B34C
 * Callers:
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0250B60 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A7F0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0286168 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C028E23C (-QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORY.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::QuerySwapChainBindingStatusFromVm(
        struct _KTHREAD **this,
        unsigned int a2,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3,
        unsigned int *a4)
{
  int SwapChainBindingStatus; // edi
  struct DXGVAILOBJECT *v9; // rbx
  DXG_HOST_COMPOSITIONOBJECTCHANNEL *v10; // rcx
  __int64 v11; // rdx
  _BYTE v13[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v14[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-18h]

  SwapChainBindingStatus = -1073741823;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, this + 8, 0);
  DXGPUSHLOCK::AcquireExclusive(v15);
  v16 = 2;
  v9 = DXGVIRTUALMACHINE::ReferenceVailObject((DXGVIRTUALMACHINE *)this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  if ( v9 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGVAILOBJECT *)((char *)v9 + 40), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
    v10 = (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)*((_QWORD *)v9 + 15);
    if ( v10 )
    {
      SwapChainBindingStatus = DXG_HOST_COMPOSITIONOBJECTCHANNEL::QuerySwapChainBindingStatus(v10, a2, a3);
      if ( SwapChainBindingStatus >= 0 )
        *a4 = *((_DWORD *)v9 + 32);
    }
    DxgkCompositionObject::Release(v9);
    if ( v13[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v11);
  }
  return (unsigned int)SwapChainBindingStatus;
}
