__int64 __fastcall UsbhGetHubNodeInfo(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4; // r12
  size_t v5; // r15
  _DWORD *v8; // rax
  unsigned int v9; // ebx
  _DWORD *v10; // r14
  unsigned int v11; // r13d
  unsigned int v12; // ebp
  unsigned int v13; // r14d
  _DWORD *v14; // rdi
  __int64 PortData; // rax
  __int64 v16; // rax
  __int64 v17; // r15
  _DWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r12
  _WORD *DeviceInformation; // rax
  __int64 result; // rax
  int v23; // [rsp+80h] [rbp+18h] BYREF
  unsigned int *v24; // [rsp+88h] [rbp+20h]

  v24 = a4;
  v4 = a4;
  v5 = a3;
  v8 = FdoExt(a1);
  v9 = 0;
  v23 = 0;
  v10 = v8;
  v11 = *((unsigned __int8 *)FdoExt(a1) + 2938);
  v12 = 16 * v11 + 1186;
  if ( v12 <= (unsigned int)v5 )
  {
    memset(a2, 0, v5);
    *a2 = 1431519822;
    a2[22] = 1;
    a2[1] = v12;
    *(_OWORD *)(a2 + 23) = *(_OWORD *)(v10 + 1298);
    *(_OWORD *)(a2 + 27) = *(_OWORD *)(v10 + 1302);
    *(_OWORD *)(a2 + 31) = *(_OWORD *)(v10 + 734);
    *(_OWORD *)(a2 + 35) = *(_OWORD *)(v10 + 738);
    *(_OWORD *)(a2 + 39) = *(_OWORD *)(v10 + 742);
    *(_OWORD *)(a2 + 43) = *(_OWORD *)(v10 + 746);
    a2[47] = v10[750];
    *((_WORD *)a2 + 96) = *((_WORD *)v10 + 1502);
    *((_BYTE *)a2 + 194) = *((_BYTE *)v10 + 3006);
    *(_DWORD *)((char *)a2 + 195) = v10[344];
    *(_DWORD *)((char *)a2 + 207) = *((unsigned __int8 *)FdoExt(a1) + 2938);
    if ( (v10[640] & 1) != 0 )
      *((_BYTE *)a2 + 202) = 1;
    if ( v10[758] != 100 )
      *((_BYTE *)a2 + 201) = 1;
    v13 = 0;
    if ( v11 )
    {
      v14 = (_DWORD *)((char *)a2 + 219);
      do
      {
        PortData = UsbhGetPortData(a1, (unsigned __int16)v13 + 1);
        if ( PortData )
        {
          *((_WORD *)v14 - 2) = *(_WORD *)(PortData + 4);
          *v14 = *(unsigned __int16 *)(PortData + 4);
          v14[1] = *(_DWORD *)(PortData + 428);
          v16 = UsbhLatchPdo(a1, (unsigned __int16)v13 + 1, 0LL, 0x574D4948u);
          v17 = v16;
          if ( v16 )
          {
            v18 = PdoExt(v16);
            v19 = UsbhRefPdoDeviceHandle(*((_QWORD *)v18 + 148), v17, 0LL, 0x4844686Eu);
            v20 = v19;
            if ( v19 )
            {
              DeviceInformation = UsbhGetDeviceInformationEx(a1, &v23, v19);
              if ( v23 >= 0 )
              {
                *((_WORD *)v14 - 1) = DeviceInformation[17];
                ExFreePoolWithTag(DeviceInformation, 0);
              }
              UsbhDerefPdoDeviceHandle(a1, v20, 0LL, 0x4844686Eu);
            }
            UsbhUnlatchPdo(a1, v17, 0LL, 0x574D4948u);
          }
        }
        ++v13;
        v14 += 4;
      }
      while ( v13 < v11 );
      v4 = v24;
    }
  }
  else
  {
    v9 = -1073741789;
  }
  result = v9;
  *v4 = v12;
  return result;
}
