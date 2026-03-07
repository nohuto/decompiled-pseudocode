__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        int a4,
        unsigned __int8 a5)
{
  struct DXGKVMB_COMMAND_BASE *v9; // rbx
  unsigned int v10; // ebx
  int HostProcess; // eax
  struct _MDL *v13; // [rsp+20h] [rbp-158h]
  struct DXGKVMB_COMMAND_BASE *v14[2]; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-138h]

  v15 = 0;
  *(_OWORD *)v14 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v14, this, 0x28u, 0LL, 0LL, 0LL);
  v9 = v14[0];
  if ( v14[0] )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_QWORD *)v9 = 0LL;
    *((_DWORD *)v9 + 5) = 0;
    *((_BYTE *)v9 + 12) = 0;
    *((_DWORD *)v9 + 3) &= 0x1FFu;
    *((_DWORD *)v9 + 2) = HostProcess;
    *((_DWORD *)v9 + 4) = 33;
    *((_DWORD *)v9 + 6) = *((_DWORD *)a3 + 7);
    *((_BYTE *)v9 + 32) = a5;
    *((_DWORD *)v9 + 7) = a4;
    v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v14[1], v14[0], v15, v13);
  }
  else
  {
    v10 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v14);
  return v10;
}
