/*
 * XREFs of _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140731400
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x1407312BC (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x14063A2D4 (_PnpOpenPropertiesKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x14063A9DC (_CmOpenInstallerClassRegKey.c)
 *     _RegRtlSetValue @ 0x140768CB4 (_RegRtlSetValue.c)
 */

__int64 __fastcall CmSetInstallerClassMappedPropertyFromRegValue(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6,
        ULONG a7)
{
  int v7; // r11d
  int v8; // ebx
  DEVPROPKEY **v10; // r9
  unsigned int i; // r10d
  DEVPROPKEY *v15; // rdx
  DEVPROPKEY **v16; // rsi
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // eax
  HANDLE v20; // rcx
  int v21; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  HANDLE v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  HANDLE v31; // rdx
  __int64 v32; // rax
  __int64 v33; // [rsp+28h] [rbp-38h]
  HANDLE v34; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v34 = 0LL;
  v10 = &off_1409858C0;
  Handle = 0LL;
  for ( i = 0; i < 0xD; ++i )
  {
    v15 = *v10;
    v16 = v10;
    if ( v7 == (*v10)->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v17 )
        break;
    }
    v16 = 0LL;
    v10 += 4;
  }
  if ( !v16 )
    return (unsigned int)-1073741802;
  v18 = *((_DWORD *)v16 + 2);
  if ( a5 != v18 )
  {
    if ( a5 == 25 )
    {
      if ( v18 == 18 )
        goto LABEL_10;
    }
    else if ( a5 < 2 )
    {
      goto LABEL_10;
    }
    return (unsigned int)-1073741811;
  }
LABEL_10:
  if ( !a3 )
  {
    v8 = CmOpenInstallerClassRegKey(a1, a2, 0LL, (__int64)v10, 3, 0, (__int64)&v34, 0LL);
    if ( v8 < 0 )
      goto LABEL_22;
  }
  v19 = *(_DWORD *)(a4 + 16);
  if ( v19 != 7 )
    goto LABEL_49;
  v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1 )
    v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data4;
  if ( v23 )
  {
LABEL_49:
    if ( v19 != 8 )
      goto LABEL_82;
    v24 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1 )
      v24 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data4;
    if ( v24 )
    {
LABEL_82:
      if ( v19 != 9 )
        goto LABEL_83;
      v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1 )
        v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_SilentInstall.fmtid.Data4;
      if ( v25 )
      {
LABEL_83:
        if ( v19 != 10 )
          goto LABEL_15;
        v26 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1 )
          v26 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoUseClass.fmtid.Data4;
        if ( v26 )
        {
LABEL_15:
          if ( v19 != 15 )
          {
            if ( v19 != 2 )
            {
              if ( v19 != 3 )
                goto LABEL_18;
              v32 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_ClassName.fmtid.Data1;
              if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_ClassName.fmtid.Data1 )
                v32 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_ClassName.fmtid.Data4;
              if ( v32 || a7 <= 0x40 )
              {
LABEL_18:
                v20 = v34;
                if ( a3 )
                  v20 = a3;
                v21 = RegRtlSetValue(v20, a7);
                if ( v21 < 0 )
                  v8 = v21;
                goto LABEL_22;
              }
              goto LABEL_57;
            }
            v30 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1;
            if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1 )
              v30 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data4;
            if ( v30 )
              goto LABEL_18;
            if ( !a7 || *a6 != 0xFF && *a6 )
              goto LABEL_57;
            v31 = v34;
            if ( a3 )
              v31 = a3;
            v8 = PnpOpenPropertiesKey(a1, (__int64)v31, 0LL, 2u, 1, v33, &Handle);
            if ( v8 < 0 )
              goto LABEL_22;
            v28 = Handle;
LABEL_61:
            v29 = RegRtlSetValue(v28, 4u);
            if ( v29 == -1073741444 )
            {
              v8 = -1073741772;
            }
            else if ( v29 < 0 )
            {
              v8 = v29;
            }
            goto LABEL_22;
          }
          v27 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_FSFilterClass;
          if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_FSFilterClass )
            v27 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
          if ( v27 )
            goto LABEL_18;
        }
      }
    }
  }
  if ( a7 && (*a6 == 0xFF || !*a6) )
  {
    v28 = v34;
    if ( a3 )
      v28 = a3;
    goto LABEL_61;
  }
LABEL_57:
  v8 = -1073741811;
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  if ( v34 )
    ZwClose(v34);
  return (unsigned int)v8;
}
