__int64 __fastcall PiDevCfgCheckDeviceNeedsUpdate(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  int DeviceDriver; // edi
  __int64 v6; // r8
  __int64 v7; // rdx
  void *v8; // r9
  __int64 v9; // rdx
  LARGE_INTEGER v10; // rax
  void *v11; // r9
  __int64 v12; // rdx
  wchar_t *Buffer; // rsi
  __int64 v14; // rax
  char *v15; // rcx
  wchar_t *v16; // r8
  BOOLEAN v17; // al
  wchar_t *v18; // r14
  _QWORD *v19; // rax
  int v20; // eax
  _QWORD *v21; // r15
  _QWORD *v22; // rsi
  BOOLEAN v23; // al
  __int64 v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rax
  char *v30; // rax
  PVOID *v31; // rcx
  int DriverPackageId; // eax
  PVOID v33; // rcx
  _QWORD *v34; // rsi
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  int v39; // [rsp+54h] [rbp-ACh] BYREF
  LARGE_INTEGER Time; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v45; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v46; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v48; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v49[20]; // [rsp+E0h] [rbp-20h] BYREF

  v43 = 1;
  *a2 = 0;
  v39 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  Time.QuadPart = 0LL;
  v4 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v37 = 0LL;
  *(_QWORD *)&v45.Length = 0LL;
  v45.Buffer = 0LL;
  v41 = 0LL;
  *(_QWORD *)&v46.Length = 0LL;
  v46.Buffer = 0LL;
  Handle = 0LL;
  P = 0LL;
  v38 = 0;
  *(_QWORD *)&v48.Length = 0LL;
  v48.Buffer = 0LL;
  DeviceDriver = PiDevCfgFindDeviceDriver(a1, 0LL, &P);
  if ( (int)(DeviceDriver + 0x80000000) < 0 || DeviceDriver == -1073740656 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(a1 + 8);
    v38 = 4;
    if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v7, v6, 11, (__int64)&v43, (__int64)&v39, (__int64)&v38, 0) < 0
      || v43 != 4
      || v38 != 4 )
    {
      v39 = 0;
    }
    memset(v49, 0, sizeof(v49));
    v8 = *(void **)(a1 + 16);
    v9 = *(_QWORD *)(a1 + 8);
    v49[0] = &DEVPKEY_Device_DriverInfPath;
    v49[2] = &DestinationString;
    v49[5] = &DEVPKEY_Device_DriverDate;
    v49[7] = &Time;
    v49[10] = &DEVPKEY_Device_DriverVersion;
    LODWORD(v49[1]) = 18;
    v49[12] = &UnicodeString;
    v49[15] = &DEVPKEY_Device_ExtendedConfigurationIds;
    v49[17] = &v45;
    HIDWORD(v49[3]) = 6;
    LODWORD(v49[6]) = 16;
    LODWORD(v49[8]) = 8;
    LODWORD(v49[11]) = 18;
    HIDWORD(v49[13]) = 6;
    LODWORD(v49[16]) = 8210;
    HIDWORD(v49[18]) = 6;
    DeviceDriver = PiDevCfgQueryObjectProperties(18LL, v9, 1u, v8, (__int64)v49, 4u);
    if ( DeviceDriver >= 0 )
    {
      if ( SLODWORD(v49[4]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      v10 = Time;
      if ( SLODWORD(v49[9]) < 0 )
        v10.QuadPart = 0LL;
      Time = v10;
      if ( SLODWORD(v49[14]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v49[19]) < 0 )
        RtlInitUnicodeString(&v45, 0LL);
      if ( !UnicodeString.Buffer
        || swscanf_s(
             UnicodeString.Buffer,
             L"%hu.%hu.%hu.%hu",
             (char *)&v37 + 6,
             (char *)&v37 + 4,
             (char *)&v37 + 2,
             &v37) != 4 )
      {
        v37 = 0LL;
      }
      if ( !CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 8)) )
        goto LABEL_33;
      memset(v49, 0, sizeof(v49));
      v11 = *(void **)(a1 + 16);
      v12 = *(_QWORD *)(a1 + 8);
      v49[0] = DEVPKEY_Device_Owners;
      v49[2] = &v46;
      LODWORD(v49[1]) = 8210;
      HIDWORD(v49[3]) = 6;
      DeviceDriver = PiDevCfgQueryObjectProperties(1LL, v12, 1u, v11, (__int64)v49, 1u);
      if ( DeviceDriver < 0 )
        goto LABEL_92;
      if ( SLODWORD(v49[4]) < 0 )
        goto LABEL_33;
      Buffer = v46.Buffer;
      if ( !v46.Buffer || v46.Length <= 2u )
        goto LABEL_33;
      if ( !*v46.Buffer )
        goto LABEL_31;
      while ( 1 )
      {
        DeviceDriver = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)Buffer, 9u, 131097, 0, (__int64)&Handle);
        if ( DeviceDriver >= 0 )
          break;
        DeviceDriver = 0;
        v14 = -1LL;
        do
          ++v14;
        while ( Buffer[v14] );
        Buffer += v14 + 1;
        if ( !*Buffer )
          goto LABEL_31;
      }
      ZwClose(Handle);
      if ( *Buffer )
      {
LABEL_33:
        v15 = (char *)P;
      }
      else
      {
LABEL_31:
        v15 = (char *)P;
        if ( !P )
          v4 = PnpBootMode != 0 ? 0x40000 : 2;
      }
      if ( (v39 & 0x40) != 0 || (v16 = DestinationString.Buffer) == 0LL )
      {
        if ( v15 )
          goto LABEL_80;
        goto LABEL_81;
      }
      if ( v15 )
      {
        v17 = RtlEqualUnicodeString((PCUNICODE_STRING)(v15 + 40), &DestinationString, 1u);
        v15 = (char *)P;
        if ( v17 )
        {
          if ( *((_QWORD *)P + 14) != Time.QuadPart || *((_QWORD *)P + 15) != v37 )
            goto LABEL_80;
          v18 = v45.Buffer;
          v19 = (char *)P + 208;
          if ( v45.Buffer )
          {
            if ( (_QWORD *)*v19 == v19 )
              goto LABEL_80;
            *((_QWORD *)&v41 + 1) = &v41;
            *(_QWORD *)&v41 = &v41;
            while ( *v18 )
            {
              if ( *((char **)v15 + 26) == v15 + 208 )
                goto LABEL_97;
              RtlFreeUnicodeString(&DestinationString);
              v20 = PiDevCfgSplitDriverConfigurationId(v18, &Time, (__int64)&v37);
              v15 = (char *)P;
              if ( v20 < 0 )
                goto LABEL_97;
              v21 = (_QWORD *)*((_QWORD *)P + 26);
              if ( v21 == (_QWORD *)((char *)P + 208) )
                goto LABEL_97;
              do
              {
                v22 = v21;
                v23 = RtlEqualUnicodeString((PCUNICODE_STRING)(v21 + 5), &DestinationString, 1u);
                v15 = (char *)P;
                if ( v23 )
                  break;
                v21 = (_QWORD *)*v21;
                v22 = 0LL;
              }
              while ( v21 != (_QWORD *)((char *)P + 208) );
              if ( !v22 || v22[14] != Time.QuadPart || v22[15] != v37 )
              {
LABEL_97:
                if ( *v18 )
                  goto LABEL_66;
                break;
              }
              v24 = *v22;
              if ( *(_QWORD **)(*v22 + 8LL) != v22
                || (v25 = (_QWORD *)v22[1], (_QWORD *)*v25 != v22)
                || (*v25 = v24,
                    *(_QWORD *)(v24 + 8) = v25,
                    v26 = (_QWORD *)*((_QWORD *)&v41 + 1),
                    **((__int128 ***)&v41 + 1) != &v41) )
              {
LABEL_72:
                __fastfail(3u);
              }
              v22[1] = *((_QWORD *)&v41 + 1);
              *v22 = &v41;
              *v26 = v22;
              v27 = -1LL;
              *((_QWORD *)&v41 + 1) = v22;
              do
                ++v27;
              while ( v18[v27] );
              v15 = (char *)P;
              v18 += v27 + 1;
            }
            if ( *((char **)v15 + 26) == v15 + 208 )
              goto LABEL_67;
LABEL_66:
            v4 |= 0x20u;
LABEL_67:
            while ( 1 )
            {
              v28 = (_QWORD *)v41;
              if ( (__int128 *)v41 == &v41 )
                break;
              if ( *(__int128 **)(v41 + 8) != &v41 )
                goto LABEL_72;
              v29 = *(_QWORD *)v41;
              if ( *(_QWORD *)(*(_QWORD *)v41 + 8LL) != (_QWORD)v41 )
                goto LABEL_72;
              *(_QWORD *)&v41 = *(_QWORD *)v41;
              *(_QWORD *)(v29 + 8) = &v41;
              v30 = (char *)P + 208;
              v31 = (PVOID *)*((_QWORD *)P + 27);
              if ( *v31 != (char *)P + 208 )
                goto LABEL_72;
              *v28 = v30;
              v28[1] = v31;
              *v31 = v28;
              *((_QWORD *)v30 + 1) = v28;
              v15 = (char *)P;
            }
          }
          else
          {
            if ( (_QWORD *)*v19 != v19 )
            {
LABEL_80:
              v4 |= 0x20u;
              goto LABEL_81;
            }
            if ( !PnpBootMode )
              goto LABEL_91;
            v4 |= 0x40000u;
          }
LABEL_81:
          if ( PnpBootMode && v15 && (v4 & 0x20) != 0 )
          {
            DeviceDriver = PiDevCfgQueryDriverConfiguration((__int64)v15);
            if ( DeviceDriver < 0 )
              goto LABEL_88;
            v33 = P;
            v34 = (_QWORD *)*((_QWORD *)P + 26);
            if ( v34 != (_QWORD *)((char *)P + 208) )
            {
              do
              {
                DeviceDriver = PiDevCfgQueryDriverConfiguration((__int64)v33);
                if ( DeviceDriver < 0 )
                  break;
                v33 = P;
                v34 = (_QWORD *)*v34;
              }
              while ( v34 != (_QWORD *)((char *)P + 208) );
LABEL_88:
              if ( DeviceDriver == -1073740653 )
              {
                DeviceDriver = 0;
                v4 = v4 & 0xFFFBFFDF | 0x40000;
              }
              else if ( DeviceDriver < 0 )
              {
                goto LABEL_92;
              }
            }
          }
LABEL_91:
          *a2 = v4;
          goto LABEL_92;
        }
        v16 = DestinationString.Buffer;
      }
      if ( !PnpBootMode )
        goto LABEL_80;
      if ( (PiDevCfgFlags & 2) == 0 )
        goto LABEL_80;
      v4 |= 0x40000u;
      if ( v15 )
      {
        DriverPackageId = PiDevCfgGetDriverPackageId((__int64)v16, (__int64)&v48);
        v15 = (char *)P;
        if ( DriverPackageId < 0 )
          goto LABEL_80;
      }
      goto LABEL_81;
    }
  }
LABEL_92:
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v45);
  RtlFreeUnicodeString(&v48);
  RtlFreeUnicodeString(&v46);
  if ( P )
    PiDevCfgFreeDriverNode((char *)P);
  return (unsigned int)DeviceDriver;
}
