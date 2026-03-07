__int64 __fastcall UsbhGetAcpiPortAttributes(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  _DWORD *Pool2; // rax
  _DWORD *v7; // r13
  int v8; // ebx
  __int64 v9; // rsi
  unsigned __int16 v10; // ax
  _DWORD *v11; // rcx
  __int64 v12; // r15
  const EVENT_DESCRIPTOR *v13; // r9
  unsigned int v14; // r11d
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rcx
  unsigned int i; // r9d
  int v18; // edx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // r8d
  unsigned int v26; // ecx
  int v27; // ecx
  _DWORD *v28; // r15
  __int64 v29; // rcx
  _DWORD *v30; // [rsp+40h] [rbp-59h]
  int v31; // [rsp+48h] [rbp-51h]
  __int128 v32; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v33; // [rsp+60h] [rbp-39h]
  __int64 v34; // [rsp+68h] [rbp-31h]
  int v35; // [rsp+70h] [rbp-29h]
  __int128 v36; // [rsp+78h] [rbp-21h] BYREF
  int v37; // [rsp+88h] [rbp-11h]
  int v38; // [rsp+90h] [rbp-9h]
  _DWORD v39[7]; // [rsp+94h] [rbp-5h]

  v39[5] = 8;
  v37 = 0;
  v34 = 0LL;
  v35 = 0;
  v38 = 0;
  v39[0] = 1;
  v39[1] = 1;
  v39[2] = 1;
  v39[3] = 4;
  v39[4] = 4;
  v39[6] = 4;
  v36 = 0LL;
  v32 = 0LL;
  v33 = FdoExt(a1);
  result = UsbhAcpiEnumChildren(a1, &v36, 0x14u);
  if ( (_DWORD)result == -2147483643 )
  {
    v5 = DWORD1(v36);
    if ( DWORD1(v36) < 0x14 )
      return 3222536207LL;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, DWORD1(v36), 1112885333LL);
    v7 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    v8 = UsbhAcpiEnumChildren(a1, Pool2, v5);
    if ( v8 < 0 )
      goto LABEL_30;
    v9 = ExAllocatePool2(64LL, 1044LL, 1112885333LL);
    if ( !v9 )
    {
      v8 = -1073741670;
LABEL_30:
      ExFreePoolWithTag(v7, 0);
      return (unsigned int)v8;
    }
    if ( !*((_QWORD *)v33 + 378) )
    {
      v10 = UsbhNumberOfPorts(a1);
      *((_QWORD *)v33 + 378) = ExAllocatePool2(64LL, 28 * (v10 + 1LL), 1112885333LL);
    }
    v11 = v7 + 2;
    v31 = 1;
    if ( v7[1] <= 1u )
    {
LABEL_29:
      ExFreePoolWithTag((PVOID)v9, 0);
      goto LABEL_30;
    }
    while ( 1 )
    {
      v11 = (_DWORD *)((char *)v11 + (unsigned int)v11[1] + 8);
      v30 = v11;
      if ( (*(_BYTE *)v11 & 1) == 0 || !v11[1] )
        goto LABEL_28;
      *((_QWORD *)&v32 + 1) = v11 + 2;
      WORD1(v32) = *((_WORD *)v11 + 2);
      LOWORD(v32) = WORD1(v32) - 1;
      v8 = UsbhAcpiEvalAcpiMethodEx(a1, (unsigned __int16 *)&v32, 1380204895, (_DWORD *)v9);
      if ( v8 < 0 )
        goto LABEL_15;
      if ( !*(_DWORD *)(v9 + 8) )
        goto LABEL_27;
      if ( *(_WORD *)(v9 + 12) )
        goto LABEL_27;
      v12 = *(unsigned __int16 *)(v9 + 16);
      if ( !(_WORD)v12 || (unsigned __int16)v12 > (unsigned __int16)UsbhNumberOfPorts(a1) )
        goto LABEL_27;
      v8 = UsbhAcpiEvalAcpiMethodEx(a1, (unsigned __int16 *)&v32, 1129338207, (_DWORD *)v9);
      if ( v8 >= 0 )
        break;
LABEL_21:
      v13 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
LABEL_22:
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, v13);
LABEL_15:
      v8 = 0;
LABEL_27:
      v11 = v30;
LABEL_28:
      if ( (unsigned int)++v31 >= v7[1] )
        goto LABEL_29;
    }
    v14 = *(_DWORD *)(v9 + 8);
    if ( !v14 )
    {
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            38,
            (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
            v12);
      }
      goto LABEL_27;
    }
    v15 = v9 + *(unsigned int *)(v9 + 4);
    v34 = 0LL;
    v35 = 0;
    v16 = v9 + 12;
    for ( i = 0; v16 < v15; v16 += v20 + 4 )
    {
      if ( i >= v14 )
        break;
      if ( i >= 4 || *(_WORD *)v16 )
        goto LABEL_21;
      v18 = v39[2 * i];
      v19 = (unsigned int)v39[2 * i - 1];
      if ( v18 == 1 )
      {
        *((_BYTE *)&v34 + v19) = *(_BYTE *)(v16 + 4);
      }
      else
      {
        if ( v18 != 4 )
          goto LABEL_21;
        *(_DWORD *)((char *)&v34 + v19) = *(_DWORD *)(v16 + 4);
      }
      v20 = *(unsigned __int16 *)(v16 + 2);
      if ( (unsigned __int16)v20 < 4u )
        v20 = 4LL;
      ++i;
    }
    v21 = v12;
    v22 = *((_QWORD *)v33 + 378);
    if ( v22 )
    {
      v23 = v35;
      v24 = 28 * v12;
      *(_QWORD *)(v24 + v22) = v34;
      *(_DWORD *)(v24 + v22 + 8) = v23;
      *(_DWORD *)(a2 + 4 * v12) |= 0x20u;
    }
    if ( !(_BYTE)v34 )
    {
      *(_DWORD *)(a2 + 4 * v12) = *(_DWORD *)(a2 + 4 * v12) & 0xFFFFFFE0 | 0x11;
      goto LABEL_27;
    }
    v25 = BYTE1(v34);
    v26 = *(_DWORD *)(a2 + 4 * v12) & 0xFFFFFFE0;
    *(_DWORD *)(a2 + 4 * v12) = v26;
    if ( v25 )
    {
      switch ( v25 )
      {
        case 1:
          v27 = v26 | 4;
          break;
        case 2:
          v27 = v26 | 2;
          break;
        case 255:
          v27 = v26 | 8;
          break;
        default:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_dD(
              WPP_GLOBAL_Control->DeviceExtension,
              v25 - 2,
              v25,
              39,
              (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
              v12,
              v25);
          }
          goto LABEL_60;
      }
      *(_DWORD *)(a2 + 4 * v12) = v27;
    }
LABEL_60:
    v8 = UsbhAcpiEvalAcpiMethodEx(a1, (unsigned __int16 *)&v32, 1145851999, (_DWORD *)v9);
    if ( v8 >= 0 )
    {
      if ( *(_DWORD *)(v9 + 8) && *(_WORD *)(v9 + 12) == 2 && *(_WORD *)(v9 + 14) >= 0x10u )
      {
        v28 = v33;
        v29 = *((_QWORD *)v33 + 378);
        if ( v29 )
        {
          *(_OWORD *)(28 * v21 + v29 + 12) = *(_OWORD *)(v9 + 16);
          *(_DWORD *)(a2 + 4 * v21) |= 0x40u;
        }
        if ( (*(_BYTE *)(v9 + 24) & 1) == 0 )
          *(_DWORD *)(a2 + 4 * v21) |= 0x10u;
        v28[641] |= 1u;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            40,
            (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
            v12);
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE);
      }
      goto LABEL_27;
    }
    v13 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
    goto LABEL_22;
  }
  return result;
}
