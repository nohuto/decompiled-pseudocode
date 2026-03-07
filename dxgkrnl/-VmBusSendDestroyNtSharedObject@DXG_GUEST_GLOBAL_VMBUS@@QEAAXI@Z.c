void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyNtSharedObject(DXG_GUEST_GLOBAL_VMBUS *this, int a2)
{
  struct DXGKVMB_COMMAND_BASE *v4; // rax
  struct _MDL *v5; // [rsp+30h] [rbp-148h]
  struct DXGKVMB_COMMAND_BASE *v6[2]; // [rsp+40h] [rbp-138h] BYREF
  unsigned int v7; // [rsp+50h] [rbp-128h]

  v7 = 0;
  *(_OWORD *)v6 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v6, this, 0x20u, 0LL, 0LL, 0LL);
  v4 = v6[0];
  *(_QWORD *)v6[0] = 0LL;
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 5) = 0;
  *((_BYTE *)v4 + 12) = 1;
  *((_DWORD *)v4 + 3) &= 0x1FFu;
  *((_DWORD *)v4 + 4) = 1005;
  *((_DWORD *)v4 + 6) = a2;
  DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v6[1], v6[0], v7, 0LL, 0LL, v5);
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v6);
}
