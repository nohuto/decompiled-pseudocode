__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushAdapter(struct DXG_VMBUS_CHANNEL_BASE *a1, int a2, int a3)
{
  struct DXGKVMB_COMMAND_BASE *v6; // rcx
  unsigned int v7; // ebx
  int v8; // edx
  struct _MDL *v10; // [rsp+20h] [rbp-148h]
  struct DXGKVMB_COMMAND_BASE *v11[2]; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-128h]

  v12 = 0;
  *(_OWORD *)v11 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v11, a1, 0x28u, 0LL, 0LL, 0LL);
  v6 = v11[0];
  if ( v11[0] )
  {
    v8 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 4560LL);
    *(_QWORD *)v11[0] = 0LL;
    *((_DWORD *)v6 + 2) = 0;
    *((_DWORD *)v6 + 5) = 0;
    *((_BYTE *)v6 + 12) = 0;
    *((_DWORD *)v6 + 3) &= 0x1FFu;
    *((_DWORD *)v6 + 4) = 43;
    *((_DWORD *)v6 + 6) = v8;
    *((_DWORD *)v6 + 7) = a2;
    *((_DWORD *)v6 + 8) = a3;
    v7 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(a1, (unsigned __int8 *)v11[1], v11[0], v12, v10);
  }
  else
  {
    v7 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v11);
  return v7;
}
