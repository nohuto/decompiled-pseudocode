__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddSyncGpuAccess(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        char a4)
{
  struct DXGKVMB_COMMAND_BASE *v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  struct _MDL *v12; // [rsp+20h] [rbp-148h]
  struct DXGKVMB_COMMAND_BASE *v13[2]; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-128h]

  v14 = 0;
  *(_OWORD *)v13 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v13, this, 0x20u, 0LL, 0LL, 0LL);
  v8 = v13[0];
  if ( v13[0] )
  {
    v10 = *((_DWORD *)a2 + 126);
    *(_QWORD *)v13[0] = 0LL;
    *((_DWORD *)v8 + 5) = 0;
    *((_BYTE *)v8 + 12) = 0;
    *((_DWORD *)v8 + 3) &= 0x1FFu;
    *((_DWORD *)v8 + 2) = v10;
    *((_DWORD *)v8 + 4) = 47;
    *((_DWORD *)v8 + 6) = a3;
    *((_BYTE *)v8 + 28) = a4;
    v9 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v13[1], v13[0], v14, v12);
  }
  else
  {
    v9 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v13);
  return v9;
}
