/*
 * XREFs of ?QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAK@Z @ 0x1C0371AE4
 * Callers:
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038FEB0 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0016980 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C02DE710 (-QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORY.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0340EF4 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
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
  _BYTE v12[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v13[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+40h] [rbp-18h]

  SwapChainBindingStatus = -1073741823;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, this + 8, 0);
  DXGPUSHLOCK::AcquireExclusive(v14);
  v15 = 2;
  v9 = DXGVIRTUALMACHINE::ReferenceVailObject(this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  if ( v9 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGVAILOBJECT *)((char *)v9 + 40), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
    v10 = (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)*((_QWORD *)v9 + 16);
    if ( v10 )
    {
      SwapChainBindingStatus = DXG_HOST_COMPOSITIONOBJECTCHANNEL::QuerySwapChainBindingStatus(v10, a2, a3);
      if ( SwapChainBindingStatus >= 0 )
        *a4 = *((_DWORD *)v9 + 34);
    }
    DxgkCompositionObject::Release(v9);
    if ( v12[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  }
  return (unsigned int)SwapChainBindingStatus;
}
