__int64 __fastcall Endpoint_SetUpConfigureEndpointCommand(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        _QWORD *a7,
        void *a8)
{
  int v9; // ebp
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rcx
  _OWORD *v15; // rsi
  _OWORD *v16; // rbx
  _OWORD *DeviceContextBufferVA; // rax
  __int64 v18; // rcx
  _OWORD *v19; // rax
  unsigned int v20; // r8d
  unsigned int i; // ecx
  int v22; // r9d
  unsigned int v23; // eax
  int v24; // eax
  int v25; // edx
  unsigned int v26; // eax
  __int64 result; // rax

  v9 = *(_DWORD *)(a1 + 144);
  v12 = *(_QWORD *)(a5 + 16);
  v13 = (unsigned int)(v9 - 1) + 2LL;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 88LL) + 104LL) & 4) != 0 )
  {
    memset(*(void **)(a5 + 16), 0, 0x40uLL);
    v14 = *(_QWORD *)(a1 + 16);
    v15 = (_OWORD *)(v12 + 64);
    v16 = (_OWORD *)(v12 + (v13 << 6));
    if ( *(_BYTE *)(v14 + 658) )
    {
      DeviceContextBufferVA = (_OWORD *)XilUsbDevice_GetDeviceContextBufferVA(v14);
      *v15 = *DeviceContextBufferVA;
      *(_OWORD *)(v12 + 80) = DeviceContextBufferVA[1];
      *(_OWORD *)(v12 + 96) = DeviceContextBufferVA[2];
      *(_OWORD *)(v12 + 112) = DeviceContextBufferVA[3];
    }
    else
    {
      memset((void *)(v12 + 64), 0, 0x40uLL);
    }
    if ( a6 )
    {
      *v16 = *a6;
      v16[1] = a6[1];
      v16[2] = a6[2];
      v16[3] = a6[3];
    }
  }
  else
  {
    *(_OWORD *)v12 = 0LL;
    v16 = (_OWORD *)(v12 + 32 * v13);
    v15 = (_OWORD *)(v12 + 32);
    *(_OWORD *)(v12 + 16) = 0LL;
    v18 = *(_QWORD *)(a1 + 16);
    if ( *(_BYTE *)(v18 + 658) )
    {
      v19 = (_OWORD *)XilUsbDevice_GetDeviceContextBufferVA(v18);
      *v15 = *v19;
      *(_OWORD *)(v12 + 48) = v19[1];
    }
    else
    {
      *v15 = 0LL;
      *(_OWORD *)(v12 + 48) = 0LL;
    }
    if ( a6 )
    {
      *v16 = *a6;
      v16[1] = a6[1];
    }
  }
  if ( a7 )
    *a7 = v16;
  v20 = 0;
  for ( i = 0; i < 0x20; ++i )
  {
    v23 = i;
    v22 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
    if ( !_bittest(&v22, i) )
      v23 = v20;
    v20 = v23;
  }
  *(_DWORD *)v15 = (v23 << 27) | *(_DWORD *)v15 & 0x7FFFFFF;
  v24 = *(_DWORD *)(v12 + 4) | 1;
  *(_DWORD *)(v12 + 4) = v24;
  switch ( a2 )
  {
    case 0:
      v25 = 1 << v9;
LABEL_24:
      *(_DWORD *)(v12 + 4) = v24 | v25;
      break;
    case 1:
      *(_DWORD *)v12 |= 1 << v9;
      break;
    case 2:
      v25 = 1 << v9;
      *(_DWORD *)v12 |= 1 << v9;
      goto LABEL_24;
  }
  memset(a8, 0, 0x60uLL);
  *((_QWORD *)a8 + 5) = a3;
  v26 = *((_DWORD *)a8 + 9) & 0xFFFF31FF;
  *((_QWORD *)a8 + 6) = a4;
  *((_DWORD *)a8 + 9) = v26 | 0x3000;
  *((_BYTE *)a8 + 39) = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL);
  *((_QWORD *)a8 + 3) = *(_QWORD *)(a5 + 24);
  *((_QWORD *)a8 + 9) = v12;
  result = *(unsigned int *)(a5 + 44);
  *((_DWORD *)a8 + 20) = result;
  *((_DWORD *)a8 + 21) = 2;
  *((_QWORD *)a8 + 11) = a1;
  return result;
}
