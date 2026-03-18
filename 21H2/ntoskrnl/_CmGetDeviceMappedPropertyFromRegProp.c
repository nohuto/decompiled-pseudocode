/*
 * XREFs of _CmGetDeviceMappedPropertyFromRegProp @ 0x140785B98
 * Callers:
 *     _CmGetDeviceMappedPropertyKeys @ 0x1406DA264 (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmGetDeviceCompoundFilters @ 0x140745F48 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetDeviceMappedProperty @ 0x1407857F0 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A2AAB0 (_CmGetDeviceCompoundFiltersWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _PnpParseIndirectResourceString @ 0x1406974B8 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1406C47D8 (_PnpParseIndirectInfString.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x14077F2EC (_CmOpenDeviceRegKey.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     _PnpMultiSzGetLen @ 0x1407889F4 (_PnpMultiSzGetLen.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        wchar_t *a6,
        unsigned int a7,
        unsigned int *a8,
        int a9)
{
  wchar_t *v9; // r14
  unsigned int v11; // r13d
  int v12; // r11d
  DEVPROPKEY **v13; // rdx
  unsigned int i; // r8d
  DEVPROPKEY *v15; // r9
  DEVPROPKEY **v16; // rsi
  __int64 v17; // rcx
  int v18; // r12d
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // r10d
  int DeviceRegProp; // ebx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int Len; // r9d
  __int64 v29; // r12
  __int64 v30; // r13
  __int64 v31; // rax
  void *Pool2; // rsi
  const wchar_t *v33; // r12
  char v34; // al
  char v35; // al
  int v36; // r9d
  int v37; // r9d
  int v38; // eax
  unsigned int v39; // [rsp+40h] [rbp-B9h] BYREF
  int v40; // [rsp+44h] [rbp-B5h] BYREF
  __int64 v41; // [rsp+48h] [rbp-B1h]
  __int64 v42; // [rsp+50h] [rbp-A9h]
  int v43; // [rsp+58h] [rbp-A1h] BYREF
  __int64 v44; // [rsp+60h] [rbp-99h]
  int v45; // [rsp+68h] [rbp-91h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-89h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-81h] BYREF
  GUID Guid; // [rsp+88h] [rbp-71h] BYREF
  WCHAR SourceString[40]; // [rsp+A0h] [rbp-59h] BYREF

  v9 = a6;
  v44 = a3;
  v41 = a2;
  v42 = a1;
  v40 = 0;
  v45 = 0;
  v39 = 0;
  v43 = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *a8 = 0;
  if ( a6 )
  {
    v11 = a7;
    v9 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v11 = 0;
  }
  v12 = *(_DWORD *)(a4 + 16);
  v13 = &CmDeviceRegPropMap;
  for ( i = 0; i < 0x21; ++i )
  {
    v15 = *v13;
    v16 = v13;
    if ( v12 == (*v13)->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v17 )
        break;
    }
    v13 += 3;
    v16 = 0LL;
  }
  if ( !v16 )
    return (unsigned int)-1073741802;
  v18 = *((_DWORD *)v16 + 3);
  switch ( v18 )
  {
    case 9:
      goto LABEL_43;
    case 25:
      return (unsigned int)-1073741637;
    case 27:
      v29 = v42;
      v39 = 4;
      DeviceRegProp = CmGetDeviceRegProp(v42, v41, v44, 27, (__int64)&v40, (__int64)&v43, (__int64)&v39, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_27;
      if ( v40 != *((_DWORD *)v16 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 1;
      *a5 = *((_DWORD *)v16 + 2);
      if ( v11 >= *a8 )
      {
        *(_BYTE *)v9 = -(v43 != 0);
        return (unsigned int)DeviceRegProp;
      }
      return (unsigned int)-1073741789;
    case 37:
LABEL_43:
      v36 = *((_DWORD *)v16 + 3);
      v29 = v42;
      v39 = 78;
      DeviceRegProp = CmGetDeviceRegProp(v42, v41, v44, v36, (__int64)&v40, (__int64)SourceString, (__int64)&v39, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_27;
      if ( v40 != *((_DWORD *)v16 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 16;
      *a5 = *((_DWORD *)v16 + 2);
      if ( v11 >= *a8 )
      {
        SourceString[38] = 0;
        DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, SourceString);
        if ( DeviceRegProp >= 0 )
        {
          DeviceRegProp = RtlGUIDFromString(&DestinationString, &Guid);
          if ( DeviceRegProp >= 0 )
          {
            *(GUID *)v9 = Guid;
            return (unsigned int)DeviceRegProp;
          }
        }
        goto LABEL_27;
      }
      return (unsigned int)-1073741789;
  }
  v19 = v44;
  v20 = v41;
  v21 = v42;
  *a8 = v11;
  v22 = CmGetDeviceRegProp(v21, v20, v19, v18, (__int64)&v40, (__int64)v9, (__int64)a8, a9);
  v23 = 0;
  DeviceRegProp = v22;
  if ( v22 && v22 != -1073741789 )
    goto LABEL_26;
  if ( v40 != *((_DWORD *)v16 + 4) )
    return (unsigned int)-1073741811;
  v25 = *((_DWORD *)v16 + 2);
  *a5 = v25;
  if ( v25 != 18 )
    goto LABEL_19;
  v31 = *a8;
  v39 = *a8;
  if ( DeviceRegProp )
  {
    if ( DeviceRegProp != -1073741789 )
      goto LABEL_26;
    Pool2 = (void *)ExAllocatePool2(256LL, v31, 1380994640LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v37 = v18;
    v30 = v41;
    v29 = v42;
    v38 = CmGetDeviceRegProp(v42, v41, v44, v37, (__int64)&v45, (__int64)Pool2, (__int64)&v39, a9);
    if ( v38 < 0 )
    {
      DeviceRegProp = v38;
      ExFreePoolWithTag(Pool2, 0);
LABEL_28:
      if ( DeviceRegProp == -1073741810 )
      {
        DeviceRegProp = CmOpenDeviceRegKey(v29, v30, 16, 0, 1, 0, (__int64)&Handle, 0LL);
        if ( !DeviceRegProp )
        {
          ZwClose(Handle);
          return (unsigned int)-1073741275;
        }
        if ( DeviceRegProp != -1073741810 && DeviceRegProp != -1073741632 )
          return (unsigned int)-1073741823;
      }
      return (unsigned int)DeviceRegProp;
    }
    if ( v39 < 2 )
      goto LABEL_38;
    v33 = (const wchar_t *)Pool2;
LABEL_35:
    v34 = PnpParseIndirectInfString(v33);
    v23 = 0;
    if ( v34 || (v35 = PnpParseIndirectResourceString((__int64)v33), v23 = 0, v35) )
      *a5 = 25;
    if ( !Pool2 )
    {
LABEL_19:
      if ( !DeviceRegProp )
        goto LABEL_20;
LABEL_26:
      v29 = v42;
LABEL_27:
      v30 = v41;
      goto LABEL_28;
    }
LABEL_38:
    ExFreePoolWithTag(Pool2, 0);
    v23 = 0;
    goto LABEL_19;
  }
  if ( v11 >= 2 )
  {
    Pool2 = 0LL;
    v33 = v9;
    if ( v9 )
      goto LABEL_35;
  }
LABEL_20:
  v26 = *a5;
  if ( *a5 == 8210 )
  {
    Len = PnpMultiSzGetLen(v9);
    if ( 2 * (unsigned __int64)Len > *a8 )
    {
      DeviceRegProp = -1073741595;
      *a8 = v23;
      return (unsigned int)DeviceRegProp;
    }
    *a8 = 2 * Len;
    v26 = *a5;
  }
  if ( v26 == 18 && *a8 == v23 )
  {
    *a8 = v23;
    *a5 = v23;
    return (unsigned int)-1073741275;
  }
  return (unsigned int)DeviceRegProp;
}
