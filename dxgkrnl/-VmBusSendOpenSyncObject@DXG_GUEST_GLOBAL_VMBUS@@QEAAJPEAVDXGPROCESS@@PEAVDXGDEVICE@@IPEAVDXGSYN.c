__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        int a4,
        struct DXGSYNCOBJECT *a5,
        struct DXGDEVICESYNCOBJECT *a6,
        unsigned int a7,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a8)
{
  struct DXGKVMB_COMMAND_BASE *v12; // rcx
  __int64 v13; // rdi
  int v14; // r8d
  int v15; // edx
  unsigned __int64 v16; // rcx
  int v17; // eax
  struct _MDL *v19; // [rsp+38h] [rbp-D0h]
  unsigned int v20; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v21[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v22; // [rsp+78h] [rbp-90h]
  unsigned int v23; // [rsp+188h] [rbp+80h] BYREF
  int v24; // [rsp+18Ch] [rbp+84h]
  __int64 v25; // [rsp+190h] [rbp+88h]
  unsigned __int64 v26; // [rsp+198h] [rbp+90h]

  v22 = 0;
  *(_OWORD *)v21 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v21, this, 0x28u, 0LL, 0LL, 0LL);
  v12 = v21[0];
  if ( !v21[0] )
  {
    LODWORD(v13) = -1073741801;
    goto LABEL_15;
  }
  v14 = *((_DWORD *)a5 + 21);
  if ( a3 )
    v15 = *((_DWORD *)a3 + 118);
  else
    v15 = 0;
  *((_DWORD *)v21[0] + 2) = *((_DWORD *)a2 + 126);
  *((_DWORD *)v12 + 8) = a7;
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)v12 + 9) = a8;
  *((_BYTE *)v12 + 12) = 1;
  *((_DWORD *)v12 + 3) &= 0x1FFu;
  *(_QWORD *)v12 = 0LL;
  *((_QWORD *)v12 + 2) = 1002LL;
  *((_DWORD *)v12 + 6) = v15;
  *((_DWORD *)v12 + 7) = v14;
  v20 = 24;
  LODWORD(v13) = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
                   this,
                   (unsigned __int8 *)v21[1],
                   v21[0],
                   v22,
                   &v23,
                   &v20,
                   v19);
  if ( (int)v13 < 0 )
    goto LABEL_14;
  if ( v20 < 0x18 )
  {
    LODWORD(v13) = -1073741823;
    goto LABEL_14;
  }
  LODWORD(v13) = v24;
  if ( v24 < 0 )
  {
LABEL_14:
    WdLogSingleEntry1(2LL, (int)v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmbusSendOpenSyncObject failed: 0x%I64x",
      (int)v13,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_15;
  }
  if ( a6 )
  {
    v16 = v26;
    *((_DWORD *)a6 + 11) = v23;
    *((_QWORD *)a6 + 6) = v25;
    v17 = MapGuestFenceCpuVaToHost(v16, (void **)a6 + 7, (unsigned __int64 *)a6 + 10, (unsigned int *)a6 + 22);
    v13 = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry2(2LL, v17, 13579LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"MapCpuVaForParavirtualization failed: 0x%I64x",
        v13,
        13579LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    DXGSYNCOBJECT::SetHostHandle(a5, a4, v23);
  }
LABEL_15:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v21);
  return (unsigned int)v13;
}
