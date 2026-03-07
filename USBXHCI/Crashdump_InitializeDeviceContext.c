__int64 __fastcall Crashdump_InitializeDeviceContext(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // ebx
  __int64 v9; // r15
  __int64 DeviceContextBufferVA; // rax
  int v11; // r9d
  __int64 v12; // r13
  void *Pool2; // rdi
  __int64 v14; // r14
  bool v15; // zf
  __int64 v16; // rax
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h]

  v18 = 0LL;
  v8 = DeviceSlot_LocateDeviceByPortPath(a1, a4, &v18);
  if ( v8 >= 0 )
  {
    v9 = v18;
    DeviceContextBufferVA = XilUsbDevice_GetDeviceContextBufferVA(v18);
    LOBYTE(v11) = *(_BYTE *)(v9 + 135);
    v12 = DeviceContextBufferVA;
    v8 = Crashdump_UsbDevice_Initialize(a5, a2, a3, v11, DeviceContextBufferVA, v9, *(_DWORD *)(a4 + 4));
    if ( v8 >= 0 )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, 200LL, 1128482904LL);
      if ( Pool2 )
      {
        v8 = Crashdump_Endpoint_Initialize((_DWORD)Pool2, a2, a5, 1, 0, v12, *(_QWORD *)(a5 + 64));
        if ( v8 < 0 )
        {
LABEL_14:
          ExFreePoolWithTag(Pool2, 0x43434858u);
        }
        else
        {
          *(_QWORD *)(a5 + 120) = Pool2;
          if ( a3 )
          {
            v14 = 0LL;
            if ( *(_DWORD *)a3 )
            {
              while ( 1 )
              {
                v19 = *(_QWORD *)(a3 + 8);
                v15 = *(_QWORD *)(v9
                                + 8LL
                                * ((*(unsigned __int8 *)(v19 + 8 * v14) >> 7) + 2 * (*(_BYTE *)(v19 + 8 * v14) & 0x7Fu))
                                + 168) == 0LL;
                LODWORD(v18) = (*(unsigned __int8 *)(v19 + 8 * v14) >> 7) + 2 * (*(_BYTE *)(v19 + 8 * v14) & 0x7F);
                if ( v15 )
                  return (unsigned int)-1073741811;
                v16 = ExAllocatePool2(64LL, 200LL, 1128482904LL);
                Pool2 = (void *)v16;
                if ( !v16 )
                  return (unsigned int)-1073741670;
                v8 = Crashdump_Endpoint_Initialize(
                       v16,
                       a2,
                       a5,
                       v18,
                       *(_DWORD *)(v19 + 8 * v14 + 4),
                       v12,
                       *(_QWORD *)(a5 + 64));
                if ( v8 < 0 )
                  goto LABEL_14;
                v14 = (unsigned int)(v14 + 1);
                *(_QWORD *)(a5 + 8LL * (unsigned int)v18 + 112) = Pool2;
                if ( (unsigned int)v14 >= *(_DWORD *)a3 )
                  return (unsigned int)v8;
              }
            }
          }
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)v8;
}
