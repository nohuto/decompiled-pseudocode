/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14087C86C
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x14074D838 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x140A6601C (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _CmOpenInstallerClassRegKey @ 0x1406C4ED8 (_CmOpenInstallerClassRegKey.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x1406C9DCC (_PnpCtxRegQueryValueIndirect.c)
 *     _PnpOpenPropertiesKey @ 0x1406D1610 (_PnpOpenPropertiesKey.c)
 *     _RegRtlQueryValue @ 0x1406D3E98 (_RegRtlQueryValue.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromRegValue(
        __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        unsigned __int64 a6,
        int a7,
        _DWORD *a8)
{
  _BYTE *v9; // r12
  DEVPROPKEY **v12; // rdx
  int v13; // r10d
  int v14; // ebx
  unsigned int v15; // r9d
  DEVPROPKEY *v16; // r8
  DEVPROPKEY **v17; // rsi
  __int64 v18; // rcx
  int v19; // r14d
  int v20; // ecx
  HANDLE v21; // rdx
  int v22; // ecx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  HANDLE v29; // rcx
  const WCHAR *v30; // rdx
  int Value; // eax
  int v32; // eax
  __int64 v33; // rax
  int v34; // edi
  HANDLE v35; // rdx
  int ValueIndirect; // eax
  __int64 v37; // rax
  HANDLE v38; // rdx
  const WCHAR *v39; // rdi
  int v40; // eax
  __int64 v41; // [rsp+28h] [rbp-61h]
  __int64 v42; // [rsp+44h] [rbp-45h] BYREF
  int v43; // [rsp+4Ch] [rbp-3Dh] BYREF
  HANDLE v44; // [rsp+50h] [rbp-39h] BYREF
  __int64 v45; // [rsp+58h] [rbp-31h]
  _DWORD *v46; // [rsp+60h] [rbp-29h]
  HANDLE Handle; // [rsp+68h] [rbp-21h] BYREF
  wchar_t Str2[12]; // [rsp+70h] [rbp-19h] BYREF

  v9 = (_BYTE *)a6;
  v45 = a1;
  v46 = a8;
  v12 = &off_140A770B0;
  v13 = *(_DWORD *)(a4 + 16);
  v14 = 0;
  v44 = 0LL;
  v15 = 0;
  Handle = 0LL;
  v42 = 0LL;
  v43 = 0;
  do
  {
    v16 = *v12;
    v17 = v12;
    if ( v13 == (*v12)->pid )
    {
      v18 = *(_QWORD *)a4 - *(_QWORD *)&v16->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v16->fmtid.Data1 )
        v18 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v16->fmtid.Data4;
      if ( !v18 )
        break;
    }
    ++v15;
    v12 += 4;
    v17 = 0LL;
  }
  while ( v15 < 0xD );
  if ( !v17 )
    return (unsigned int)-1073741802;
  *a5 = 0;
  *a8 = 0;
  if ( a6 )
  {
    v19 = a7;
    v9 = (_BYTE *)(-(__int64)(a7 != 0) & a6);
  }
  else
  {
    v19 = 0;
  }
  if ( a3 || (v14 = CmOpenInstallerClassRegKey(v45, a2, (__int64)v16, 0LL, 1, 0, (__int64)&v44, 0LL), v14 >= 0) )
  {
    v20 = *(_DWORD *)(a4 + 16);
    if ( v20 != 7 )
      goto LABEL_45;
    v24 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1 )
      v24 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data4;
    if ( v24 )
    {
LABEL_45:
      if ( v20 != 8 )
        goto LABEL_101;
      v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1 )
        v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data4;
      if ( v25 )
      {
LABEL_101:
        if ( v20 != 9 )
          goto LABEL_102;
        v26 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1 )
          v26 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_SilentInstall.fmtid.Data4;
        if ( v26 )
        {
LABEL_102:
          if ( v20 != 10 )
            goto LABEL_16;
          v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1 )
            v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoUseClass.fmtid.Data4;
          if ( v27 )
          {
LABEL_16:
            if ( v20 != 15 )
            {
              if ( v20 == 2 )
              {
                v33 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_Name.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_Name.fmtid.Data1 )
                  v33 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_Name.fmtid.Data4;
                if ( !v33 )
                {
                  v34 = 0;
                  v14 = -1073741275;
                  while ( v34 || v17[2] )
                  {
                    v35 = v44;
                    LODWORD(v42) = v19;
                    if ( a3 )
                      v35 = a3;
                    ValueIndirect = PnpCtxRegQueryValueIndirect(v45, (__int64)v35);
                    v22 = ValueIndirect;
                    if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
                    {
                      if ( !ValueIndirect || ValueIndirect == -1073741789 )
                      {
                        v14 = 0;
                      }
                      else
                      {
                        v14 = ValueIndirect;
                        if ( ValueIndirect < 0 )
                          goto LABEL_22;
                      }
                      goto LABEL_77;
                    }
                    if ( ++v34 >= 2 )
                      goto LABEL_22;
                  }
                  goto LABEL_22;
                }
                v37 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1 )
                  v37 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data4;
                if ( !v37 )
                {
                  v38 = v44;
                  v39 = (const WCHAR *)v17[2];
                  if ( a3 )
                    v38 = a3;
                  LODWORD(v42) = 4;
                  v40 = PnpOpenPropertiesKey(v45, (__int64)v38, 0LL, 1, 0, v41, &Handle);
                  v14 = v40;
                  if ( v40 != -1073741772 )
                  {
                    if ( v40 < 0 )
                      goto LABEL_22;
                    Value = RegRtlQueryValue(Handle, v39, (_DWORD *)&v42 + 1, &v43, (unsigned int *)&v42);
                    if ( Value != -1073741772 && Value != -1073741444 )
                    {
                      if ( Value >= 0 )
                      {
                        *v46 = 1;
                        *a5 = *((_DWORD *)v17 + 2);
                        if ( v19 )
                        {
                          v32 = v43;
                          goto LABEL_59;
                        }
LABEL_58:
                        v14 = -1073741789;
                        goto LABEL_22;
                      }
LABEL_57:
                      v14 = Value;
                      goto LABEL_22;
                    }
                  }
                  goto LABEL_21;
                }
              }
LABEL_18:
              v21 = v44;
              if ( a3 )
                v21 = a3;
              LODWORD(v42) = v19;
              v22 = PnpCtxRegQueryValueIndirect(v45, (__int64)v21);
              if ( v22 != -1073741772 && v22 != -1073741444 )
              {
                if ( !v22 || v22 == -1073741789 )
                {
                  if ( HIDWORD(v42) == *((_DWORD *)v17 + 6) )
                  {
LABEL_77:
                    *v46 = v42;
                    *a5 = *((_DWORD *)v17 + 2);
                    if ( v22 || !v19 )
                      v14 = -1073741789;
                  }
                  else
                  {
                    v14 = -1073741811;
                  }
                }
                else
                {
                  v14 = v22;
                }
                goto LABEL_22;
              }
LABEL_21:
              v14 = -1073741275;
              goto LABEL_22;
            }
            v28 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_FSFilterClass;
            if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_FSFilterClass )
              v28 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
            if ( v28 )
              goto LABEL_18;
          }
        }
      }
    }
    v29 = v44;
    v30 = (const WCHAR *)v17[2];
    LODWORD(v42) = 22;
    if ( a3 )
      v29 = a3;
    Value = RegRtlQueryValue(v29, v30, (_DWORD *)&v42 + 1, Str2, (unsigned int *)&v42);
    if ( Value != -1073741772 && Value != -1073741444 )
    {
      if ( Value >= 0 )
      {
        *v46 = 1;
        *a5 = *((_DWORD *)v17 + 2);
        if ( v19 )
        {
          Str2[10] = 0;
          v32 = wcsicmp(L"0", Str2);
LABEL_59:
          *v9 = -(v32 != 0);
          goto LABEL_22;
        }
        goto LABEL_58;
      }
      goto LABEL_57;
    }
    goto LABEL_21;
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  if ( v44 )
    ZwClose(v44);
  return (unsigned int)v14;
}
