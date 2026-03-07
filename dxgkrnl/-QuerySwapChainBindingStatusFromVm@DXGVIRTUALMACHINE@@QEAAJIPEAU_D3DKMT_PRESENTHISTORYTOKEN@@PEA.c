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
