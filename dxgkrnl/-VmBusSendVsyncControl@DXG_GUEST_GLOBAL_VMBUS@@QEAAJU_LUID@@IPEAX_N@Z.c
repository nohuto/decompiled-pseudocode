__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendVsyncControl(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct _LUID a2,
        int a3,
        void *a4,
        bool a5)
{
  struct DXGKVMB_COMMAND_BASE *v9; // rcx
  int v10; // ebx
  unsigned int v12[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v13[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v14; // [rsp+60h] [rbp-A0h]
  int v15; // [rsp+170h] [rbp+70h] BYREF

  v14 = 0;
  *(_OWORD *)v13 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v13, this, 0x38u, 0LL, 0LL, 0LL);
  v9 = v13[0];
  if ( v13[0] )
  {
    *(_QWORD *)v13[0] = 0LL;
    *((_DWORD *)v9 + 2) = 0;
    *((_DWORD *)v9 + 5) = 0;
    *((_DWORD *)v9 + 12) = a5;
    *((_BYTE *)v9 + 12) = 1;
    *((_DWORD *)v9 + 3) &= 0x1FFu;
    *((_DWORD *)v9 + 4) = 1016;
    *((struct _LUID *)v9 + 3) = a2;
    *((_DWORD *)v9 + 8) = a3;
    *((_QWORD *)v9 + 5) = a4;
    v12[0] = 8;
    v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
            (struct _KTHREAD **)this,
            (unsigned __int8 *)v13[1],
            v13[0],
            v14,
            (char *)&v15,
            v12);
    if ( v10 >= 0 )
    {
      v10 = -1073741823;
      if ( v12[0] >= 4 )
        v10 = v15;
    }
  }
  else
  {
    v10 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v13);
  return (unsigned int)v10;
}
