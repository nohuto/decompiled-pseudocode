__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushDevice(
        struct DXG_VMBUS_CHANNEL_BASE *a1,
        __int64 a2,
        int a3)
{
  struct DXGKVMB_COMMAND_BASE *v6; // rcx
  unsigned int v7; // ebx
  int v8; // r8d
  int v9; // edx
  struct _MDL *v11; // [rsp+20h] [rbp-148h]
  struct DXGKVMB_COMMAND_BASE *v12[2]; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-128h]

  v13 = 0;
  *(_OWORD *)v12 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v12, a1, 0x20u, 0LL, 0LL, 0LL);
  v6 = v12[0];
  if ( v12[0] )
  {
    v8 = *(_DWORD *)(a2 + 472);
    v9 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 504LL);
    *(_QWORD *)v12[0] = 0LL;
    *((_DWORD *)v6 + 5) = 0;
    *((_BYTE *)v6 + 12) = 0;
    *((_DWORD *)v6 + 3) &= 0x1FFu;
    *((_DWORD *)v6 + 2) = v9;
    *((_DWORD *)v6 + 4) = 42;
    *((_DWORD *)v6 + 6) = v8;
    *((_DWORD *)v6 + 7) = a3;
    v7 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(a1, (unsigned __int8 *)v12[1], v12[0], v13, v11);
  }
  else
  {
    v7 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v12);
  return v7;
}
