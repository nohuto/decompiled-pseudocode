void __fastcall DXGDEVICE::Reset(DXGDEVICE *this, char a2)
{
  DXGOVERLAY *i; // rdi
  bool v5; // zf
  __int64 v6; // rdx
  const struct _WNF_STATE_NAME *v7; // rdx
  unsigned int v8; // r9d
  __int64 v9; // rdx
  DXG_GUEST_VIRTUALGPU_VMBUS *v10; // rcx
  struct DXGPROCESS *v11; // rdx
  DXGPROCESS *v12; // rcx
  _BYTE v13[40]; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+80h] [rbp+8h] BYREF
  _D3DKMT_MARKDEVICEASERROR v15; // [rsp+90h] [rbp+18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1598LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      1598LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 856LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  for ( i = (DXGOVERLAY *)*((_QWORD *)this + 64); i != (DXGDEVICE *)((char *)this + 512) && i; i = *(DXGOVERLAY **)i )
    DXGOVERLAY::Reset(i);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  v5 = (*((_BYTE *)this + 1901) & 1) == 0;
  v6 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 152) = 2;
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v6 + 736) + 8LL) + 576LL))(*((_QWORD *)this + 100)) )
    {
      *((_DWORD *)this + 152) = 3;
    }
    else
    {
      v9 = 22LL;
      if ( !a2 )
        v9 = 26LL;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 208LL))(
        *((_QWORD *)this + 100),
        v9);
    }
  }
  else
  {
    v10 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v6 + 16) + 4472LL);
    v11 = (struct DXGPROCESS *)*((_QWORD *)this + 5);
    v15.hDevice = *((_DWORD *)this + 117);
    v15.Reason = 0x80000000;
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMarkDeviceAsError(v10, v11, this, &v15);
  }
  v12 = (DXGPROCESS *)*((_QWORD *)this + 5);
  v14 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v12, v7, &v14, v8) < 0 )
  {
    WdLogSingleEntry1(2LL, 1669LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGPROCESS::SendWnfNotification failed during DXGDEVICE::Reset.",
      1669LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
}
