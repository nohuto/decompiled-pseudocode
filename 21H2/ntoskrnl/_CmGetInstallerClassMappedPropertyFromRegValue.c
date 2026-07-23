/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14073D934
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x14073F130 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x14097B080 (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x140636780 (_PnpCtxRegQueryValueIndirect.c)
 *     _RegRtlQueryValue @ 0x140637128 (_RegRtlQueryValue.c)
 *     _PnpOpenPropertiesKey @ 0x14063A2D4 (_PnpOpenPropertiesKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x14063A9DC (_CmOpenInstallerClassRegKey.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromRegValue(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        unsigned __int64 a6,
        int a7,
        _DWORD *a8)
{
  _BYTE *v10; // r12
  DEVPROPKEY **v11; // rdx
  int v13; // r10d
  _DWORD *v14; // rcx
  int v15; // ebx
  __int64 v16; // r9
  DEVPROPKEY *v17; // r8
  DEVPROPKEY **v18; // rsi
  int v19; // r14d
  int v20; // eax
  HANDLE v21; // rdx
  int v22; // ecx
  __int64 v24; // rcx
  HANDLE v25; // rcx
  const WCHAR *v26; // rdx
  int Value; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // edi
  HANDLE v35; // rdx
  int ValueIndirect; // eax
  __int64 v37; // rax
  HANDLE v38; // rdx
  const WCHAR *v39; // rdi
  int v40; // eax
  __int64 v41; // [rsp+28h] [rbp-71h]
  __int64 v42; // [rsp+44h] [rbp-55h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-49h] BYREF
  int v44; // [rsp+58h] [rbp-41h] BYREF
  __int64 v45; // [rsp+60h] [rbp-39h]
  _DWORD *v46; // [rsp+68h] [rbp-31h]
  HANDLE KeyHandle; // [rsp+70h] [rbp-29h] BYREF
  wchar_t Str2[12]; // [rsp+78h] [rbp-21h] BYREF

  v10 = (_BYTE *)a6;
  v11 = &off_1409858C0;
  v45 = a1;
  v13 = *(_DWORD *)(a4 + 16);
  v14 = 0LL;
  v46 = a8;
  v15 = 0;
  Handle = 0LL;
  v16 = 0LL;
  KeyHandle = 0LL;
  v42 = 0LL;
  v44 = 0;
  while ( 1 )
  {
    v17 = *v11;
    v18 = v11;
    if ( v13 == (*v11)->pid )
      break;
LABEL_3:
    v16 = (unsigned int)(v16 + 1);
    v11 += 4;
    v18 = 0LL;
    if ( (unsigned int)v16 >= 0xD )
      goto LABEL_8;
  }
  v14 = (_DWORD *)(*(_QWORD *)a4 - *(_QWORD *)&v17->fmtid.Data1);
  if ( *(_QWORD *)a4 == *(_QWORD *)&v17->fmtid.Data1 )
    v14 = (_DWORD *)(*(_QWORD *)(a4 + 8) - *(_QWORD *)v17->fmtid.Data4);
  if ( v14 )
  {
    v14 = 0LL;
    goto LABEL_3;
  }
LABEL_8:
  if ( v18 )
  {
    *a5 = (_DWORD)v14;
    *a8 = (_DWORD)v14;
    if ( a6 )
    {
      v19 = a7;
      v10 = (_BYTE *)(-(__int64)(a7 != 0) & a6);
      v14 = 0LL;
    }
    else
    {
      v19 = (int)v14;
    }
    if ( !a3 )
    {
      v15 = CmOpenInstallerClassRegKey(v45, a2, (__int64)v17, v16, 1, (char)v14, (__int64)&Handle, v14);
      if ( v15 < 0 )
        goto LABEL_22;
    }
    v20 = *(_DWORD *)(a4 + 16);
    if ( v20 == 7 )
    {
      v28 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1 )
        v28 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data4;
      if ( !v28 )
        goto LABEL_33;
    }
    if ( v20 == 8 )
    {
      v29 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1 )
        v29 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data4;
      if ( !v29 )
        goto LABEL_33;
    }
    if ( v20 == 9 )
    {
      v30 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1 )
        v30 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_SilentInstall.fmtid.Data4;
      if ( !v30 )
        goto LABEL_33;
    }
    if ( v20 == 10 )
    {
      v24 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1 )
        v24 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoUseClass.fmtid.Data4;
      if ( !v24 )
        goto LABEL_33;
    }
    if ( v20 == 15 )
    {
      v31 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_FSFilterClass;
      if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_FSFilterClass )
        v31 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
      if ( !v31 )
      {
LABEL_33:
        v25 = Handle;
        v26 = (const WCHAR *)v18[2];
        LODWORD(v42) = 22;
        if ( a3 )
          v25 = a3;
        Value = RegRtlQueryValue(v25, v26, (_DWORD *)&v42 + 1, Str2, (unsigned int *)&v42);
        if ( Value != -1073741772 && Value != -1073741444 )
        {
          if ( Value >= 0 )
          {
            *v46 = 1;
            *a5 = *((_DWORD *)v18 + 2);
            if ( v19 )
            {
              Str2[10] = 0;
              v32 = wcsicmp(L"0", Str2);
LABEL_66:
              *v10 = -(v32 != 0);
              goto LABEL_22;
            }
            goto LABEL_65;
          }
          goto LABEL_64;
        }
        goto LABEL_21;
      }
    }
    if ( v20 == 2 )
    {
      v33 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_Name.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_Name.fmtid.Data1 )
        v33 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_Name.fmtid.Data4;
      if ( v33 )
      {
        v37 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1 )
          v37 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data4;
        if ( !v37 )
        {
          v38 = Handle;
          v39 = (const WCHAR *)v18[2];
          if ( a3 )
            v38 = a3;
          LODWORD(v42) = 4;
          v40 = PnpOpenPropertiesKey(v45, (__int64)v38, 0LL, 1u, 0, v41, &KeyHandle);
          v15 = v40;
          if ( v40 != -1073741772 )
          {
            if ( v40 < 0 )
              goto LABEL_22;
            Value = RegRtlQueryValue(KeyHandle, v39, (_DWORD *)&v42 + 1, &v44, (unsigned int *)&v42);
            if ( Value != -1073741772 && Value != -1073741444 )
            {
              if ( Value >= 0 )
              {
                *v46 = 1;
                *a5 = *((_DWORD *)v18 + 2);
                if ( v19 )
                {
                  v32 = v44;
                  goto LABEL_66;
                }
LABEL_65:
                v15 = -1073741789;
                goto LABEL_22;
              }
LABEL_64:
              v15 = Value;
              goto LABEL_22;
            }
          }
LABEL_21:
          v15 = -1073741275;
          goto LABEL_22;
        }
        goto LABEL_18;
      }
      v34 = 0;
      v15 = -1073741275;
      while ( v34 || v18[2] )
      {
        v35 = Handle;
        LODWORD(v42) = v19;
        if ( a3 )
          v35 = a3;
        ValueIndirect = PnpCtxRegQueryValueIndirect(v45, (__int64)v35);
        v22 = ValueIndirect;
        if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
        {
          if ( !ValueIndirect || (v15 = ValueIndirect, ValueIndirect == -1073741789) )
            v15 = 0;
          if ( v15 < 0 )
            break;
          goto LABEL_39;
        }
        if ( ++v34 >= 2 )
          break;
      }
    }
    else
    {
LABEL_18:
      v21 = Handle;
      if ( a3 )
        v21 = a3;
      LODWORD(v42) = v19;
      v22 = PnpCtxRegQueryValueIndirect(v45, (__int64)v21);
      if ( v22 == -1073741772 || v22 == -1073741444 )
        goto LABEL_21;
      if ( !v22 || v22 == -1073741789 )
      {
LABEL_39:
        *v46 = v42;
        *a5 = *((_DWORD *)v18 + 2);
        if ( v22 || !v19 )
          v15 = -1073741789;
      }
      else
      {
        v15 = v22;
      }
    }
LABEL_22:
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( Handle )
      ZwClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741802;
  }
  return (unsigned int)v15;
}
