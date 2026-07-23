/*
 * XREFs of PpDevCfgProcessDeviceExtensions @ 0x1408AAA4C
 * Callers:
 *     PiConfigureDevice @ 0x14072FFA4 (PiConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140739E10 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x14073A554 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgFreeDriverNode @ 0x14073A5A4 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgInitDeviceContext @ 0x14073BBF0 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFindDeviceDriver @ 0x14073BEC8 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073D004 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgSetObjectProperty @ 0x1407454AC (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x140767650 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14076C014 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgAppendMultiSz @ 0x1408A4DEC (PiDevCfgAppendMultiSz.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceExtensions(__int64 a1)
{
  wchar_t *v2; // r12
  wchar_t *v3; // r13
  int v4; // esi
  int inited; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  void *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdi
  int DriverConfiguration; // eax
  char v13; // r9
  UNICODE_STRING *v14; // rcx
  int v15; // r13d
  __int64 v16; // rdi
  wchar_t *Buffer; // rcx
  unsigned int v18; // esi
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  int v31; // [rsp+30h] [rbp-D8h]
  int v32; // [rsp+30h] [rbp-D8h]
  int v33; // [rsp+30h] [rbp-D8h]
  __int64 v34; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-98h] BYREF
  __int64 v36; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v39; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING v40; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING v41; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *v42; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v43; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING *p_DestinationString; // [rsp+E0h] [rbp-28h]
  int v45; // [rsp+E8h] [rbp-20h]
  int v46; // [rsp+ECh] [rbp-1Ch]
  __int64 v47; // [rsp+F0h] [rbp-18h]
  UNICODE_STRING v48; // [rsp+F8h] [rbp-10h] BYREF
  UNICODE_STRING v49; // [rsp+108h] [rbp+0h] BYREF
  UNICODE_STRING v50; // [rsp+118h] [rbp+10h] BYREF
  UNICODE_STRING v51; // [rsp+128h] [rbp+20h] BYREF
  void *v52[10]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v53; // [rsp+188h] [rbp+80h]
  __int128 v54; // [rsp+198h] [rbp+90h]

  memset(v52, 0, 0x48uLL);
  LODWORD(v36) = 1;
  v53 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v2 = 0LL;
  v54 = 0LL;
  DestinationString.Buffer = 0LL;
  v3 = 0LL;
  v35 = 0LL;
  v4 = 0;
  *(_QWORD *)&v41.Length = 0LL;
  v41.Buffer = 0LL;
  *(_QWORD *)&v48.Length = 0LL;
  v48.Buffer = 0LL;
  *(_QWORD *)&v49.Length = 0LL;
  v49.Buffer = 0LL;
  *(_QWORD *)&v50.Length = 0LL;
  v50.Buffer = 0LL;
  *(_QWORD *)&v51.Length = 0LL;
  v51.Buffer = 0LL;
  *(_QWORD *)&v39.Length = 0LL;
  v39.Buffer = 0LL;
  *(_QWORD *)&v40.Length = 0LL;
  v40.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v34 = 0LL;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_66;
  }
  v6 = *(_QWORD *)(a1 + 48);
  if ( !v6 )
  {
    inited = -1073741808;
    goto LABEL_66;
  }
  inited = PiDevCfgInitDeviceContext(v6, 0LL, v52);
  if ( inited < 0 )
    goto LABEL_64;
  v9 = v52[2];
  v10 = *(_QWORD *)(a1 + 48);
  v42 = DEVPKEY_Device_PendingConfigurationIds;
  p_DestinationString = &DestinationString;
  v43 = 8210LL;
  v45 = 0;
  v47 = 0LL;
  v46 = 6;
  inited = PiDevCfgQueryObjectProperties(1LL, v10, 1u, v52[2], (__int64)&v42, 1u);
  if ( inited < 0 )
    goto LABEL_64;
  if ( (int)v47 < 0 )
    RtlInitUnicodeString(&DestinationString, 0LL);
  inited = PiDevCfgFindDeviceDriver((__int64)v52, DestinationString.Buffer, &v35);
  if ( inited < 0 )
    goto LABEL_64;
  v11 = *(_QWORD *)(v35 + 208);
  if ( v11 == v35 + 208 )
    goto LABEL_48;
  do
  {
    DriverConfiguration = PiDevCfgQueryDriverConfiguration(v11);
    inited = DriverConfiguration;
    if ( DriverConfiguration == -1073740653 )
    {
      v13 = 1;
      v14 = &v41;
    }
    else
    {
      if ( DriverConfiguration < 0 )
        goto LABEL_64;
      if ( *(_QWORD *)(v11 + 296) )
      {
        *(_DWORD *)(v11 + 184) &= ~1u;
        goto LABEL_27;
      }
      if ( *(_QWORD *)(v11 + 312) )
      {
        inited = PiDevCfgAppendMultiSz(&v48, 0LL, (const void **)(v11 + 304), 0);
        if ( inited < 0 )
          goto LABEL_64;
      }
      if ( *(_QWORD *)(v11 + 328) )
      {
        inited = PiDevCfgAppendMultiSz(&v49, 0LL, (const void **)(v11 + 320), 0);
        if ( inited < 0 )
          goto LABEL_64;
      }
      if ( *(_QWORD *)(v11 + 344) )
      {
        inited = PiDevCfgAppendMultiSz(&v50, 0LL, (const void **)(v11 + 336), 0);
        if ( inited < 0 )
          goto LABEL_64;
      }
      if ( *(_QWORD *)(v11 + 360) )
      {
        inited = PiDevCfgAppendMultiSz(&v51, 0LL, (const void **)(v11 + 352), 0);
        if ( inited < 0 )
          goto LABEL_64;
      }
      v4 |= *(_DWORD *)(v11 + 384);
      inited = PiDevCfgAppendMultiSz(&v39, (const void **)(v11 + 40), 0LL, 0);
      if ( inited < 0 )
        goto LABEL_64;
      v13 = 0;
      v14 = &v40;
    }
    inited = PiDevCfgAppendMultiSz(v14, (const void **)(v11 + 392), 0LL, v13);
    if ( inited < 0 )
      goto LABEL_64;
LABEL_27:
    v15 = v4;
    v11 = *(_QWORD *)v11;
  }
  while ( v11 != v35 + 208 );
  v16 = 0LL;
  if ( inited < 0 )
    goto LABEL_64;
  Buffer = v41.Buffer;
  if ( v41.Buffer )
  {
    inited = PiDevCfgSetObjectProperty(
               *(__int64 *)&PiPnpRtlCtx,
               v52,
               *(_QWORD *)(a1 + 48),
               1u,
               (__int64)v9,
               v31,
               (__int64)DEVPKEY_Device_RequestConfigurationIds,
               8210,
               (__int64)v41.Buffer,
               v41.Length,
               0);
    if ( inited >= 0 )
      inited = -1073740653;
    goto LABEL_64;
  }
  v18 = 0;
  *(_QWORD *)&v53 = &v48;
  *((_QWORD *)&v53 + 1) = &v49;
  *(_QWORD *)&v54 = &v50;
  *((_QWORD *)&v54 + 1) = &v51;
  do
  {
    v19 = *(_QWORD *)((char *)&v53 + v16);
    if ( *(_QWORD *)(v19 + 8) )
    {
      v20 = *(_QWORD *)(a1 + 48);
      v21 = *(__int64 **)((char *)&off_140D2D6A0 + v16);
      v45 = 0;
      v47 = 0LL;
      v42 = v21;
      p_DestinationString = &UnicodeString;
      v43 = 8210LL;
      v46 = 6;
      inited = PiDevCfgQueryObjectProperties((__int64)Buffer, v20, 1u, v9, (__int64)&v42, 1u);
      if ( inited < 0 )
        goto LABEL_64;
      if ( (int)v47 < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      inited = PiDevCfgAppendMultiSz(&UnicodeString, 0LL, (const void **)v19, 0);
      if ( inited < 0 )
        goto LABEL_64;
      inited = PiDevCfgSetObjectProperty(
                 *(__int64 *)&PiPnpRtlCtx,
                 v52,
                 *(_QWORD *)(a1 + 48),
                 1u,
                 (__int64)v9,
                 v32,
                 *(_QWORD *)((char *)&off_140D2D6A0 + v16),
                 8210,
                 (__int64)UnicodeString.Buffer,
                 UnicodeString.Length,
                 0);
      if ( inited < 0 )
        goto LABEL_64;
      RtlFreeAnsiString(&UnicodeString);
    }
    ++v18;
    v16 += 8LL;
  }
  while ( v18 < 4 );
  v22 = v35;
  v4 = v15;
  v23 = v35 + 208;
  v24 = *(_QWORD *)(v35 + 208);
  while ( v24 != v23 )
  {
    if ( (*(_DWORD *)(v24 + 184) & 1) != 0 )
    {
      inited = PiDevCfgConfigureDeviceDriver(a1, (__int64)v52, v24, &v34, 0LL);
      if ( inited < 0 )
        goto LABEL_64;
      v4 |= v34;
      v22 = v35;
    }
    v24 = *(_QWORD *)v24;
    v23 = v22 + 208;
  }
  v2 = v39.Buffer;
  v3 = v40.Buffer;
LABEL_48:
  if ( DestinationString.Buffer )
    PiDevCfgSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      v52,
      *(_QWORD *)(a1 + 48),
      1u,
      (__int64)v9,
      v31,
      (__int64)DEVPKEY_Device_PendingConfigurationIds,
      0,
      0LL,
      0,
      0);
  v25 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    inited = PiDevCfgSetObjectProperty(
               *(__int64 *)&PiPnpRtlCtx,
               v52,
               v25,
               1u,
               (__int64)v9,
               v31,
               (__int64)DEVPKEY_Device_DriverExtendedInfs,
               8210,
               (__int64)v2,
               v39.Length,
               0);
    if ( inited < 0 )
      goto LABEL_64;
  }
  else
  {
    PiDevCfgSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      v52,
      v25,
      1u,
      (__int64)v9,
      v31,
      (__int64)DEVPKEY_Device_DriverExtendedInfs,
      0,
      0LL,
      0,
      0);
  }
  v26 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    inited = PiDevCfgSetObjectProperty(
               *(__int64 *)&PiPnpRtlCtx,
               v52,
               v26,
               1u,
               (__int64)v9,
               v33,
               (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
               8210,
               (__int64)v3,
               v40.Length,
               0);
    if ( inited < 0 )
      goto LABEL_64;
  }
  else
  {
    PiDevCfgSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      v52,
      v26,
      1u,
      (__int64)v9,
      v33,
      (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
      0,
      0LL,
      0,
      0);
  }
  if ( v4 )
  {
    v27 = *(_QWORD *)(a1 + 48);
    HIDWORD(v34) = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v27,
                (__int64)v9,
                11,
                (__int64)&v36,
                (__int64)&v34,
                (__int64)&v34 + 4,
                0) < 0
      || (_DWORD)v36 != 4
      || (v29 = v34, HIDWORD(v34) != 4) )
    {
      v29 = 0;
    }
    LODWORD(v34) = v4 | v29;
    PiDevCfgSetDeviceRegProp(v28, (__int64)v52, 0xBu, 4, (__int64)&v34, 4);
  }
LABEL_64:
  if ( v35 )
    PiDevCfgFreeDriverNode(v35, v7, v8);
LABEL_66:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v48);
  RtlFreeAnsiString(&v49);
  RtlFreeAnsiString(&v50);
  RtlFreeAnsiString(&v51);
  RtlFreeAnsiString(&v39);
  RtlFreeAnsiString(&v40);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v41);
  PiDevCfgFreeDeviceContext((__int64)v52);
  return (unsigned int)inited;
}
