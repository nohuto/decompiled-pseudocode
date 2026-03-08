/*
 * XREFs of PpDevCfgProcessDeviceExtensions @ 0x14095FD04
 * Callers:
 *     PiConfigureDevice @ 0x140956344 (PiConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x14078AD4C (PiDevCfgFreeDeviceContext.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086AC20 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgSetObjectProperty @ 0x140874858 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140875718 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x140875764 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgInitDeviceContext @ 0x140876144 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140876268 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgFindDeviceDriver @ 0x14087867C (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFreeDriverNode @ 0x14087DAA0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgAppendMultiSz @ 0x1409596C4 (PiDevCfgAppendMultiSz.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceExtensions(__int64 a1)
{
  wchar_t *v2; // r12
  wchar_t *v3; // r13
  int v4; // r15d
  int inited; // ebx
  __int64 v6; // rcx
  void *v7; // rsi
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  int DriverConfiguration; // eax
  char v11; // r9
  UNICODE_STRING *v12; // rcx
  __int64 v13; // rdi
  wchar_t *Buffer; // rcx
  unsigned int v15; // r12d
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 *v18; // rax
  char *v19; // rcx
  char *v20; // rax
  __int64 v21; // rdi
  const WCHAR *v22; // r8
  const WCHAR *v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  int v28; // [rsp+30h] [rbp-D8h]
  int v29; // [rsp+30h] [rbp-D8h]
  int v30; // [rsp+30h] [rbp-D8h]
  __int64 v31; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v36; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING v37; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING v38; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *v39; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING *p_DestinationString; // [rsp+E0h] [rbp-28h]
  int v42; // [rsp+E8h] [rbp-20h]
  int v43; // [rsp+ECh] [rbp-1Ch]
  __int64 v44; // [rsp+F0h] [rbp-18h]
  UNICODE_STRING v45; // [rsp+F8h] [rbp-10h] BYREF
  UNICODE_STRING v46; // [rsp+108h] [rbp+0h] BYREF
  UNICODE_STRING v47; // [rsp+118h] [rbp+10h] BYREF
  UNICODE_STRING v48; // [rsp+128h] [rbp+20h] BYREF
  __int64 v49[10]; // [rsp+148h] [rbp+40h] BYREF
  __int128 v50; // [rsp+198h] [rbp+90h]
  __int128 v51; // [rsp+1A8h] [rbp+A0h]

  memset(v49, 0, 0x48uLL);
  LODWORD(v33) = 1;
  v50 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v2 = 0LL;
  v51 = 0LL;
  DestinationString.Buffer = 0LL;
  v3 = 0LL;
  P = 0LL;
  v4 = 0;
  *(_QWORD *)&v38.Length = 0LL;
  v38.Buffer = 0LL;
  *(_QWORD *)&v45.Length = 0LL;
  v45.Buffer = 0LL;
  *(_QWORD *)&v46.Length = 0LL;
  v46.Buffer = 0LL;
  *(_QWORD *)&v47.Length = 0LL;
  v47.Buffer = 0LL;
  *(_QWORD *)&v48.Length = 0LL;
  v48.Buffer = 0LL;
  *(_QWORD *)&v36.Length = 0LL;
  v36.Buffer = 0LL;
  *(_QWORD *)&v37.Length = 0LL;
  v37.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v31 = 0LL;
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
  inited = PiDevCfgInitDeviceContext(v6, 0LL, v49);
  if ( inited < 0 )
    goto LABEL_64;
  v7 = (void *)v49[2];
  v8 = *(_QWORD *)(a1 + 48);
  v39 = DEVPKEY_Device_PendingConfigurationIds;
  p_DestinationString = &DestinationString;
  v40 = 8210LL;
  v42 = 0;
  v44 = 0LL;
  v43 = 6;
  inited = PiDevCfgQueryObjectProperties(1LL, v8, 1u, (void *)v49[2], (__int64)&v39, 1u);
  if ( inited < 0 )
    goto LABEL_64;
  if ( (int)v44 < 0 )
    RtlInitUnicodeString(&DestinationString, 0LL);
  inited = PiDevCfgFindDeviceDriver((__int64)v49, DestinationString.Buffer, &P);
  if ( inited < 0 )
    goto LABEL_64;
  v9 = (_QWORD *)*((_QWORD *)P + 26);
  if ( v9 == (_QWORD *)((char *)P + 208) )
    goto LABEL_48;
  do
  {
    DriverConfiguration = PiDevCfgQueryDriverConfiguration((__int64)v9);
    inited = DriverConfiguration;
    if ( DriverConfiguration == -1073740653 )
    {
      v11 = 1;
      v12 = &v38;
    }
    else
    {
      if ( DriverConfiguration < 0 )
        goto LABEL_64;
      if ( v9[37] )
      {
        *((_DWORD *)v9 + 46) &= ~1u;
        goto LABEL_27;
      }
      if ( v9[39] )
      {
        inited = PiDevCfgAppendMultiSz(&v45, 0LL, (const void **)v9 + 38, 0);
        if ( inited < 0 )
          goto LABEL_64;
      }
      if ( v9[41] )
      {
        inited = PiDevCfgAppendMultiSz(&v46, 0LL, (const void **)v9 + 40, 0);
        if ( inited < 0 )
          goto LABEL_64;
      }
      if ( v9[43] )
      {
        inited = PiDevCfgAppendMultiSz(&v47, 0LL, (const void **)v9 + 42, 0);
        if ( inited < 0 )
          goto LABEL_64;
      }
      if ( v9[45] )
      {
        inited = PiDevCfgAppendMultiSz(&v48, 0LL, (const void **)v9 + 44, 0);
        if ( inited < 0 )
          goto LABEL_64;
      }
      v4 |= *((_DWORD *)v9 + 100);
      inited = PiDevCfgAppendMultiSz(&v36, (const void **)v9 + 5, 0LL, 0);
      if ( inited < 0 )
        goto LABEL_64;
      v11 = 0;
      v12 = &v37;
    }
    inited = PiDevCfgAppendMultiSz(v12, (const void **)v9 + 51, 0LL, v11);
    if ( inited < 0 )
      goto LABEL_64;
LABEL_27:
    v9 = (_QWORD *)*v9;
  }
  while ( v9 != (_QWORD *)((char *)P + 208) );
  v13 = 0LL;
  if ( inited < 0 )
    goto LABEL_64;
  Buffer = v38.Buffer;
  if ( v38.Buffer )
  {
    inited = PiDevCfgSetObjectProperty(
               *(__int64 *)&PiPnpRtlCtx,
               v49,
               *(const WCHAR **)(a1 + 48),
               1,
               (__int64)v7,
               v28,
               (__int64)DEVPKEY_Device_RequestConfigurationIds,
               8210,
               v38.Buffer,
               v38.Length,
               0);
    if ( inited >= 0 )
      inited = -1073740653;
    goto LABEL_64;
  }
  v15 = 0;
  *(_QWORD *)&v50 = &v45;
  *((_QWORD *)&v50 + 1) = &v46;
  *(_QWORD *)&v51 = &v47;
  *((_QWORD *)&v51 + 1) = &v48;
  do
  {
    v16 = *(_QWORD *)((char *)&v50 + v13);
    if ( *(_QWORD *)(v16 + 8) )
    {
      v17 = *(_QWORD *)(a1 + 48);
      v18 = *(__int64 **)((char *)&off_140D536D8 + v13);
      v42 = 0;
      v44 = 0LL;
      v39 = v18;
      p_DestinationString = &UnicodeString;
      v40 = 8210LL;
      v43 = 6;
      inited = PiDevCfgQueryObjectProperties((__int64)Buffer, v17, 1u, v7, (__int64)&v39, 1u);
      if ( inited < 0 )
        goto LABEL_64;
      if ( (int)v44 < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      inited = PiDevCfgAppendMultiSz(&UnicodeString, 0LL, (const void **)v16, 0);
      if ( inited < 0 )
        goto LABEL_64;
      inited = PiDevCfgSetObjectProperty(
                 *(__int64 *)&PiPnpRtlCtx,
                 v49,
                 *(const WCHAR **)(a1 + 48),
                 1,
                 (__int64)v7,
                 v29,
                 *(_QWORD *)((char *)&off_140D536D8 + v13),
                 8210,
                 UnicodeString.Buffer,
                 UnicodeString.Length,
                 0);
      if ( inited < 0 )
        goto LABEL_64;
      RtlFreeUnicodeString(&UnicodeString);
    }
    ++v15;
    v13 += 8LL;
  }
  while ( v15 < 4 );
  v19 = (char *)P;
  v20 = (char *)P + 208;
  v21 = *((_QWORD *)P + 26);
  while ( (char *)v21 != v20 )
  {
    if ( (*(_DWORD *)(v21 + 184) & 1) != 0 )
    {
      inited = PiDevCfgConfigureDeviceDriver(a1, (int)v49, v21, &v31, 0LL);
      if ( inited < 0 )
        goto LABEL_64;
      v4 |= v31;
      v19 = (char *)P;
    }
    v21 = *(_QWORD *)v21;
    v20 = v19 + 208;
  }
  v2 = v36.Buffer;
  v3 = v37.Buffer;
LABEL_48:
  if ( DestinationString.Buffer )
    PiDevCfgSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      v49,
      *(const WCHAR **)(a1 + 48),
      1,
      (__int64)v7,
      v28,
      (__int64)DEVPKEY_Device_PendingConfigurationIds,
      0,
      0LL,
      0,
      0);
  v22 = *(const WCHAR **)(a1 + 48);
  if ( v2 )
  {
    inited = PiDevCfgSetObjectProperty(
               *(__int64 *)&PiPnpRtlCtx,
               v49,
               v22,
               1,
               (__int64)v7,
               v28,
               (__int64)DEVPKEY_Device_DriverExtendedInfs,
               8210,
               v2,
               v36.Length,
               0);
    if ( inited < 0 )
      goto LABEL_64;
  }
  else
  {
    PiDevCfgSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      v49,
      v22,
      1,
      (__int64)v7,
      v28,
      (__int64)DEVPKEY_Device_DriverExtendedInfs,
      0,
      0LL,
      0,
      0);
  }
  v23 = *(const WCHAR **)(a1 + 48);
  if ( v3 )
  {
    inited = PiDevCfgSetObjectProperty(
               *(__int64 *)&PiPnpRtlCtx,
               v49,
               v23,
               1,
               (__int64)v7,
               v30,
               (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
               8210,
               v3,
               v37.Length,
               0);
    if ( inited < 0 )
      goto LABEL_64;
  }
  else
  {
    PiDevCfgSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      v49,
      v23,
      1,
      (__int64)v7,
      v30,
      (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
      0,
      0LL,
      0,
      0);
  }
  if ( v4 )
  {
    v24 = *(_QWORD *)(a1 + 48);
    HIDWORD(v31) = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v24,
                (__int64)v7,
                11,
                (__int64)&v33,
                (__int64)&v31,
                (__int64)&v31 + 4,
                0) < 0
      || (_DWORD)v33 != 4
      || (v26 = v31, HIDWORD(v31) != 4) )
    {
      v26 = 0;
    }
    LODWORD(v31) = v4 | v26;
    PiDevCfgSetDeviceRegProp(v25, (__int64)v49, 0xBu, 4, (__int64)&v31, 4);
  }
LABEL_64:
  if ( P )
    PiDevCfgFreeDriverNode((char *)P);
LABEL_66:
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&v45);
  RtlFreeUnicodeString(&v46);
  RtlFreeUnicodeString(&v47);
  RtlFreeUnicodeString(&v48);
  RtlFreeUnicodeString(&v36);
  RtlFreeUnicodeString(&v37);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v38);
  PiDevCfgFreeDeviceContext((__int64)v49);
  return (unsigned int)inited;
}
