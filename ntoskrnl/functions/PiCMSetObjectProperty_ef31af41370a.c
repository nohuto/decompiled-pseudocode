__int64 __fastcall PiCMSetObjectProperty(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v10; // ebx
  int v11; // edi
  int v12; // ebx
  int v13; // esi
  const WCHAR *v14; // r14
  const wchar_t *v15; // r13
  int v16; // eax
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // eax
  int v24; // ebx
  PCWSTR v26; // rcx
  char *v27; // rcx
  char *v28; // rcx
  PCWSTR v29; // rax
  int v30; // ebx
  int v31; // ebx
  char *v32; // rax
  unsigned int v33; // [rsp+50h] [rbp-79h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-69h] BYREF
  PCWSTR v35[10]; // [rsp+70h] [rbp-59h] BYREF

  memset(v35, 0, 0x48uLL);
  *a6 = 0;
  v10 = PiCMCapturePropertyInputData(a1, a2, a5, (char *)v35);
  if ( v10 >= 0 )
  {
    v11 = 3;
    v12 = (int)v35[1];
    v13 = (int)v35[6];
    v14 = v35[2];
    v15 = v35[7];
    v33 = (unsigned int)v35[8];
    if ( HIDWORD(v35[5]) == 14 )
    {
      v27 = *(char **)((char *)&v35[3] + 4) - *(_QWORD *)&DEVPKEY_Device_FriendlyName.fmtid.Data1;
      if ( *(PCWSTR *)((char *)&v35[3] + 4) == *(PCWSTR *)&DEVPKEY_Device_FriendlyName.fmtid.Data1 )
        v27 = *(char **)((char *)&v35[4] + 4) - *(_QWORD *)DEVPKEY_Device_FriendlyName.fmtid.Data4;
      if ( !v27 )
        goto LABEL_46;
    }
    if ( HIDWORD(v35[5]) == 3 )
    {
      v28 = *(char **)((char *)&v35[3] + 4) - *(_QWORD *)&DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data1;
      if ( *(PCWSTR *)((char *)&v35[3] + 4) == *(PCWSTR *)&DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data1 )
        v28 = *(char **)((char *)&v35[4] + 4) - *(_QWORD *)DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data4;
      if ( !v28 )
        goto LABEL_46;
    }
    if ( HIDWORD(v35[5]) == 4 )
    {
      v26 = (PCWSTR)(*(char **)((char *)&v35[3] + 4) - DEVPKEY_DriverPackage_SourceMediaPath);
      if ( *(PCWSTR *)((char *)&v35[3] + 4) == (PCWSTR)DEVPKEY_DriverPackage_SourceMediaPath )
        v26 = *(PCWSTR *)((char *)&v35[4] + 4) + 0x22925C19C5AE8F36LL;
      if ( !v26 )
        goto LABEL_46;
    }
    if ( HIDWORD(v35[5]) != 2 )
      goto LABEL_6;
    v29 = (PCWSTR)(*(char **)((char *)&v35[3] + 4) - DEVPKEY_WIA_DeviceType);
    if ( *(PCWSTR *)((char *)&v35[3] + 4) == (PCWSTR)DEVPKEY_WIA_DeviceType )
      v29 = *(PCWSTR *)((char *)&v35[4] + 4) - 0x1784F115800463DFLL;
    if ( v29 )
LABEL_6:
      v16 = 0;
    else
LABEL_46:
      v16 = 1;
    if ( !PiAuDoesClientHaveAccess(v16 != 0 ? 64 : 2) )
    {
      v24 = -1073741790;
LABEL_26:
      v10 = PiCMReturnBasicResultData(v24, SHIDWORD(v35[8]), a3, a4, a6);
      goto LABEL_27;
    }
    if ( !v14 || HIDWORD(v35[0]) || !a3 || a4 < 8 )
      goto LABEL_65;
    if ( v12 <= 6 )
    {
      if ( v12 == 6 )
      {
        v11 = 6;
        goto LABEL_23;
      }
      v17 = v12 - 1;
      if ( !v17 )
      {
        v11 = 1;
        goto LABEL_23;
      }
      v18 = v17 - 1;
      if ( !v18 )
      {
        v11 = 2;
        goto LABEL_23;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        v11 = 4;
        goto LABEL_23;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
LABEL_23:
        v23 = PiPnpRtlSetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                v14,
                v11,
                0LL,
                0LL,
                (__int64)&v35[3] + 4,
                v13,
                v15,
                v33,
                0);
        v24 = v23;
        if ( v23 == -1073741790 )
        {
          if ( HIDWORD(v35[5]) == 38 )
          {
            v32 = *(char **)((char *)&v35[3] + 4) - *(_QWORD *)&DEVPKEY_Device_BaseContainerId.fmtid.Data1;
            if ( *(PCWSTR *)((char *)&v35[3] + 4) == *(PCWSTR *)&DEVPKEY_Device_BaseContainerId.fmtid.Data1 )
              v32 = *(char **)((char *)&v35[4] + 4) - *(_QWORD *)DEVPKEY_Device_BaseContainerId.fmtid.Data4;
            if ( !v32 )
              v24 = -1073741264;
          }
        }
        else if ( v23 >= 0 && v11 == 1 )
        {
          DestinationString = 0LL;
          if ( RtlInitUnicodeStringEx(&DestinationString, v14) >= 0 )
            PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&DestinationString.Length);
        }
        goto LABEL_26;
      }
      if ( v20 == 1 )
      {
        v11 = 5;
        goto LABEL_23;
      }
      goto LABEL_65;
    }
    v21 = v12 - 65537;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( !v22 )
      {
        v11 = 8;
        goto LABEL_22;
      }
      v30 = v22 - 1;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( v31 )
        {
          if ( v31 == 1 )
          {
            v11 = 11;
            goto LABEL_22;
          }
LABEL_65:
          v24 = -1073741811;
          goto LABEL_26;
        }
        v11 = 10;
      }
      else
      {
        v11 = 9;
      }
    }
    else
    {
      v11 = 7;
    }
LABEL_22:
    if ( PiDrvDbCtx )
      goto LABEL_23;
    goto LABEL_65;
  }
LABEL_27:
  PiCMReleasePropertyInputData((__int64)v35);
  return (unsigned int)v10;
}
