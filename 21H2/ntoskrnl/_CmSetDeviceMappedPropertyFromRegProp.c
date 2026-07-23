/*
 * XREFs of _CmSetDeviceMappedPropertyFromRegProp @ 0x14073AB24
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x14073A704 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _PnpStringFromGuid @ 0x14062D230 (_PnpStringFromGuid.c)
 *     _CmSetDeviceRegProp @ 0x1407441D0 (_CmSetDeviceRegProp.c)
 */

NTSTATUS __fastcall CmSetDeviceMappedPropertyFromRegProp(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        int *a6,
        unsigned int a7)
{
  DEVPROPKEY **v7; // r10
  int v8; // esi
  unsigned int v9; // ebx
  int v12; // ecx
  int v15; // r9d
  DEVPROPKEY *v16; // r11
  DEVPROPKEY **v17; // rdx
  __int64 v18; // r8
  int v19; // r8d
  int v20; // ebx
  int v21; // edi
  NTSTATUS result; // eax
  wchar_t *v23; // rax
  int v24; // ecx
  int *v25; // rax
  __int64 v26; // [rsp+28h] [rbp-B0h]
  int v27; // [rsp+30h] [rbp-A8h]
  int v28; // [rsp+40h] [rbp-98h] BYREF
  wchar_t v29[40]; // [rsp+50h] [rbp-88h] BYREF

  v28 = 0;
  v7 = &CmDeviceRegPropMap;
  v8 = *(_DWORD *)(a4 + 16);
  v9 = 0;
  v12 = (int)a6;
  v15 = 1;
  do
  {
    v16 = *v7;
    v17 = v7;
    if ( v8 == (*v7)->pid )
    {
      v18 = *(_QWORD *)a4 - *(_QWORD *)&v16->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v16->fmtid.Data1 )
        v18 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v16->fmtid.Data4;
      if ( !v18 )
        break;
    }
    v17 = 0LL;
    ++v9;
    v7 += 3;
  }
  while ( v9 < 0x21 );
  if ( !v17 )
    return -1073741264;
  v19 = *((_DWORD *)v17 + 2);
  v20 = *((_DWORD *)v17 + 3);
  if ( a5 != v19 )
  {
    if ( a5 == 25 )
    {
      if ( v19 != 18 )
        return -1073741811;
    }
    else if ( a5 >= 2 )
    {
      return -1073741811;
    }
  }
  v21 = *((_DWORD *)v17 + 4);
  if ( v20 != 9 )
  {
    if ( v20 == 25 )
      return -1073741637;
    if ( v20 == 27 )
    {
      if ( a6 )
      {
        if ( !a7 )
          return -1073741811;
        if ( *(_BYTE *)a6 != 0xFF )
        {
          if ( *(_BYTE *)a6 )
            return -1073741811;
          v15 = 0;
        }
        v28 = v15;
        v25 = &v28;
        v12 = 4;
      }
      else
      {
        v25 = 0LL;
      }
      return CmSetDeviceRegProp(a1, a2, a3, 27, v21, (__int64)v25, v12, 0);
    }
    if ( v20 != 37 )
    {
      v27 = a6 != 0LL ? a7 : 0;
      v26 = (unsigned __int64)a6 & -(__int64)(a6 != 0LL);
      return CmSetDeviceRegProp(a1, a2, a3, v20, v21, v26, v27, 0);
    }
  }
  if ( !a6 )
  {
    v23 = 0LL;
    v24 = 0;
    goto LABEL_21;
  }
  if ( a7 < 0x10 )
    return -1073741811;
  result = PnpStringFromGuid(a6, v29);
  if ( result >= 0 )
  {
    v23 = v29;
    v24 = 78;
LABEL_21:
    v27 = v24;
    v26 = (__int64)v23;
    return CmSetDeviceRegProp(a1, a2, a3, v20, v21, v26, v27, 0);
  }
  return result;
}
