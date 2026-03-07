__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFreeGpuVirtualAddress(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5)
{
  struct DXGKVMB_COMMAND_BASE *v9; // rcx
  unsigned int v10; // ebx
  struct _MDL *v12; // [rsp+20h] [rbp-148h]
  struct DXGKVMB_COMMAND_BASE *v13[2]; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-128h]

  v14 = 0;
  *(_OWORD *)v13 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v13, this, 0x30u, 0LL, 0LL, 0LL);
  v9 = v13[0];
  if ( v13[0] )
  {
    *(_QWORD *)v13[0] = 0LL;
    *((_DWORD *)v9 + 5) = 0;
    *((_BYTE *)v9 + 12) = 0;
    *((_DWORD *)v9 + 3) &= 0x1FFu;
    *((_QWORD *)v9 + 5) = a5;
    *((_DWORD *)v9 + 2) = a2;
    *((_DWORD *)v9 + 4) = 16;
    *((_QWORD *)v9 + 4) = a4;
    *((_DWORD *)v9 + 6) = a3;
    v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v13[1], v13[0], v14, v12);
  }
  else
  {
    v10 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v13);
  return v10;
}
