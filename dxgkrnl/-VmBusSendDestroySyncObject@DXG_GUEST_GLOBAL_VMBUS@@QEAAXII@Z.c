void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(DXG_GUEST_GLOBAL_VMBUS *this, int a2, int a3)
{
  struct DXGKVMB_COMMAND_BASE *v6; // rax
  struct _MDL *v7; // [rsp+30h] [rbp-148h]
  struct DXGKVMB_COMMAND_BASE *v8[2]; // [rsp+40h] [rbp-138h] BYREF
  unsigned int v9; // [rsp+50h] [rbp-128h]

  v9 = 0;
  *(_OWORD *)v8 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v8, this, 0x20u, 0LL, 0LL, 0LL);
  v6 = v8[0];
  *(_QWORD *)v8[0] = 0LL;
  *((_DWORD *)v6 + 5) = 0;
  *((_BYTE *)v6 + 12) = 1;
  *((_DWORD *)v6 + 3) &= 0x1FFu;
  *((_DWORD *)v6 + 2) = a2;
  *((_DWORD *)v6 + 4) = 1003;
  *((_DWORD *)v6 + 6) = a3;
  DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v8[1], v8[0], v9, 0LL, 0LL, v7);
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v8);
}
