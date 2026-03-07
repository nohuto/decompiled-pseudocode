char __fastcall UsbDevice_ReconfigureEndpoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  __int64 v7; // rsi
  int v8; // edx
  int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // r9d
  __int64 v12; // r14
  __int64 *v13; // rcx
  __int64 v14; // rcx
  void *v15; // rcx
  __int64 v16; // rax
  _DWORD *v17; // rbp
  char v18; // al
  char *v19; // rsi
  int v20; // ecx
  __int64 v21; // rdx
  int v22; // r15d
  __int64 v23; // r8
  __int64 v24; // r8
  unsigned int i; // r8d
  int v26; // eax
  __int64 *v27; // rax
  char v28; // cl
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v35; // [rsp+90h] [rbp+8h]
  __int64 v36; // [rsp+98h] [rbp+10h]

  v6 = *(_QWORD **)(a1 + 8);
  v7 = v6[11];
  v35 = v7;
  v36 = v6[18];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = *(unsigned __int8 *)(a1 + 135);
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_DD(
      v6[9],
      v8,
      12,
      69,
      (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
      *(_BYTE *)(a1 + 135),
      *(_DWORD *)(a2 + 144));
  }
  v9 = 0;
  v10 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v10 )
    v11 = *(_DWORD *)(v10 + 44);
  else
    v11 = 0;
  v12 = a1 + 640;
  v13 = (__int64 *)(a1 + 648);
  if ( !*(_BYTE *)(a1 + 657) )
    v13 = (__int64 *)(a1 + 640);
  v14 = *v13;
  if ( v14 )
    v15 = *(void **)(v14 + 16);
  else
    v15 = 0LL;
  memset(v15, 0, v11);
  v16 = a1 + 640;
  if ( *(_BYTE *)(a1 + 657) )
    v16 = a1 + 648;
  if ( *(_QWORD *)v16 )
    v17 = *(_DWORD **)(*(_QWORD *)v16 + 16LL);
  else
    v17 = 0LL;
  v18 = -(*(_DWORD *)(v7 + 104) & 4);
  v17[1] |= 1u;
  v19 = (char *)v17 + (v18 != 0 ? 64LL : 32LL);
  if ( *(_BYTE *)(a1 + 136) )
  {
    v20 = *(_DWORD *)v19 | 0x4000000;
    *(_DWORD *)v19 = v20;
    v19[7] = *(_BYTE *)(a1 + 140);
    if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      if ( *(_DWORD *)(a1 + 144) > 1u )
        *(_DWORD *)v19 = v20 | 0x2000000;
      *((_DWORD *)v19 + 2) ^= (*((_DWORD *)v19 + 2) ^ (*(_DWORD *)(a1 + 148) << 16)) & 0x30000;
    }
  }
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 8) + 336LL), 0x3Du) )
  {
    if ( !*(_BYTE *)(a1 + 136) )
    {
      v21 = *(_QWORD *)(a1 + 24);
      if ( v21 )
      {
        if ( *(int *)(a1 + 20) < 2
          && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                           WdfDriverGlobals,
                           v21,
                           off_1C00632C0)
                       + 144) > 1u )
        {
          *(_DWORD *)v19 |= 0x2000000u;
        }
      }
    }
  }
  v22 = *(_DWORD *)(a2 + 144);
  v23 = (unsigned int)(v22 - 1) + 2LL;
  if ( (*(_DWORD *)(v35 + 104) & 4) != 0 )
    v24 = v23 << 6;
  else
    v24 = 32 * v23;
  UsbDevice_InitializeEndpointContext(a1, a2, (__int64)v17 + v24);
  for ( i = 0; i < 0x20; ++i )
  {
    v26 = *(_DWORD *)(a1 + 152);
    if ( _bittest(&v26, i) )
      *(_DWORD *)v19 = (i << 27) | *(_DWORD *)v19 & 0x7FFFFFF;
  }
  v17[1] |= 1 << v22;
  *v17 |= 1 << v22;
  memset((void *)(a1 + 456), 0, 0x60uLL);
  *(_QWORD *)(a1 + 504) = a1;
  *(_QWORD *)(a1 + 496) = UsbDevice_ConfigureEndpointCompletion;
  *(_DWORD *)(a1 + 492) = *(_DWORD *)(a1 + 492) & 0xFFFF01FF | 0x3000;
  *(_BYTE *)(a1 + 495) = *(_BYTE *)(a1 + 135);
  v27 = (__int64 *)(a1 + 640);
  v28 = *(_BYTE *)(a1 + 657);
  if ( v28 )
    v27 = (__int64 *)(a1 + 648);
  v29 = *v27;
  if ( v29 )
    v30 = *(_QWORD *)(v29 + 24);
  else
    v30 = 0LL;
  *(_QWORD *)(a1 + 480) = v30;
  v31 = (__int64 *)(a1 + 640);
  if ( v28 )
    v31 = (__int64 *)(a1 + 648);
  v32 = *v31;
  if ( v32 )
    v33 = *(_QWORD *)(v32 + 16);
  else
    v33 = 0LL;
  *(_QWORD *)(a1 + 528) = v33;
  if ( v28 )
    v12 = a1 + 648;
  if ( *(_QWORD *)v12 )
    v9 = *(_DWORD *)(*(_QWORD *)v12 + 44LL);
  *(_QWORD *)(a1 + 552) = a3;
  *(_QWORD *)(a1 + 560) = a4;
  *(_DWORD *)(a1 + 536) = v9;
  *(_DWORD *)(a1 + 540) = 1;
  *(_QWORD *)(a1 + 544) = a1;
  return Command_SendCommand(v36, a1 + 456);
}
