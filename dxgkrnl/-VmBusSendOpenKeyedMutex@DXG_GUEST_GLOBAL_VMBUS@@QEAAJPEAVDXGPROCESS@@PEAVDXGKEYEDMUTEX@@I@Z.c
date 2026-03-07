__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenKeyedMutex(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGKEYEDMUTEX *a3,
        int a4)
{
  __int64 v6; // r8
  struct DXGKVMB_COMMAND_BASE *v10; // r9
  int v11; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  struct _MDL *v15; // [rsp+30h] [rbp-D0h]
  unsigned int v16[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v17[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v18; // [rsp+70h] [rbp-90h]
  unsigned int v19; // [rsp+180h] [rbp+80h] BYREF
  int v20; // [rsp+184h] [rbp+84h]

  v6 = *((unsigned int *)a3 + 42);
  if ( (unsigned int)v6 > 0x1FFE0 )
  {
    WdLogSingleEntry1(2LL, v6 + 32);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid VM bus message size: 0x%I64x",
      *((unsigned int *)a3 + 42) + 32LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 2147483653LL;
  }
  v18 = 0;
  *(_OWORD *)v17 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v17, this, v6 + 32, 0LL, 0LL, 0LL);
  v10 = v17[0];
  if ( v17[0] )
  {
    v12 = *((_DWORD *)a3 + 42);
    v13 = *((_DWORD *)a3 + 8);
    v14 = *((_DWORD *)a2 + 126);
    *(_QWORD *)v17[0] = 0LL;
    *((_DWORD *)v10 + 5) = 0;
    *((_BYTE *)v10 + 12) = 1;
    *((_DWORD *)v10 + 3) &= 0x1FFu;
    *((_DWORD *)v10 + 6) = v13;
    *((_DWORD *)v10 + 2) = v14;
    *((_DWORD *)v10 + 4) = 1012;
    *((_DWORD *)v10 + 7) = v12;
    memmove((char *)v10 + 32, *((const void **)a3 + 20), *((unsigned int *)a3 + 42));
    v16[0] = 8;
    v11 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v17[1], v17[0], v18, &v19, v16, v15);
    if ( v11 >= 0 )
    {
      if ( v16[0] < 8 )
      {
        v11 = -1073741823;
      }
      else
      {
        v11 = v20;
        if ( v20 >= 0 )
        {
          DXGKEYEDMUTEX::SetHostHandle(a3, a4, v19);
          goto LABEL_11;
        }
      }
    }
    WdLogSingleEntry1(2LL, v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmbusSendOpenSyncObject failed: 0x%I64x",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_11;
  }
  v11 = -1073741801;
LABEL_11:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v17);
  return (unsigned int)v11;
}
