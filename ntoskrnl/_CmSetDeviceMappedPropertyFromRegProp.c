/*
 * XREFs of _CmSetDeviceMappedPropertyFromRegProp @ 0x14087BF40
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x14076C5D4 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _CmSetDeviceRegProp @ 0x140684F2C (_CmSetDeviceRegProp.c)
 *     _PnpStringFromGuid @ 0x1406881E8 (_PnpStringFromGuid.c)
 */

NTSTATUS __fastcall CmSetDeviceMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int *a6,
        unsigned int a7)
{
  DEVPROPKEY **v7; // r10
  int v8; // esi
  unsigned int v9; // ebx
  int v14; // r9d
  DEVPROPKEY *v15; // r11
  DEVPROPKEY **v16; // rdx
  __int64 v17; // r8
  int v18; // r8d
  unsigned int v19; // ebx
  unsigned int v20; // edi
  NTSTATUS result; // eax
  wchar_t *v22; // rax
  unsigned int v23; // ecx
  int v24; // [rsp+40h] [rbp-98h] BYREF
  wchar_t v25[40]; // [rsp+50h] [rbp-88h] BYREF

  v24 = 0;
  v7 = &CmDeviceRegPropMap;
  v8 = *(_DWORD *)(a4 + 16);
  v9 = 0;
  v14 = 1;
  do
  {
    v15 = *v7;
    v16 = v7;
    if ( v8 == (*v7)->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v17 )
        break;
    }
    v16 = 0LL;
    ++v9;
    v7 += 3;
  }
  while ( v9 < 0x21 );
  if ( !v16 )
    return -1073741264;
  v18 = *((_DWORD *)v16 + 2);
  v19 = *((_DWORD *)v16 + 3);
  if ( a5 != v18 )
  {
    if ( a5 == 25 )
    {
      if ( v18 != 18 )
        return -1073741811;
    }
    else if ( a5 >= 2 )
    {
      return -1073741811;
    }
  }
  v20 = *((_DWORD *)v16 + 4);
  if ( v19 != 9 )
  {
    if ( v19 == 25 )
      return -1073741637;
    if ( v19 == 27 )
    {
      if ( a6 )
      {
        if ( a7 )
        {
          if ( *(_BYTE *)a6 != 0xFF )
          {
            if ( *(_BYTE *)a6 )
              return -1073741811;
            v14 = 0;
          }
          v24 = v14;
          v22 = (wchar_t *)&v24;
          v23 = 4;
          return CmSetDeviceRegProp(a1, a2, a3, v19, v20, (__int64)v22, v23, 0);
        }
        return -1073741811;
      }
LABEL_22:
      v22 = 0LL;
      v23 = 0;
      return CmSetDeviceRegProp(a1, a2, a3, v19, v20, (__int64)v22, v23, 0);
    }
    if ( v19 != 37 )
      return CmSetDeviceRegProp(
               a1,
               a2,
               a3,
               v19,
               v20,
               (unsigned __int64)a6 & -(__int64)(a6 != 0LL),
               a6 != 0LL ? a7 : 0,
               0);
  }
  if ( !a6 )
    goto LABEL_22;
  if ( a7 < 0x10 )
    return -1073741811;
  result = PnpStringFromGuid(a6, v25);
  if ( result >= 0 )
  {
    v22 = v25;
    v23 = 78;
    return CmSetDeviceRegProp(a1, a2, a3, v19, v20, (__int64)v22, v23, 0);
  }
  return result;
}
