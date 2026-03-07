void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendAdapterStop(DXG_GUEST_VIRTUALGPU_VMBUS *this)
{
  __int64 v2; // rax
  __int128 v3; // [rsp+30h] [rbp-138h] BYREF
  int v4; // [rsp+40h] [rbp-128h]

  v4 = 0;
  v3 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v3, this, 0x18u, 0LL, 0LL, 0LL);
  v2 = v3;
  if ( (_QWORD)v3 )
  {
    *(_QWORD *)v3 = 0LL;
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 20) = 0;
    *(_BYTE *)(v2 + 12) = 0;
    *(_DWORD *)(v2 + 12) &= 0x1FFu;
    *(_DWORD *)(v2 + 16) = 30;
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v3, 0LL, 0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v3);
}
