/*
 * XREFs of _CmGetDeviceMappedPropertyFromRegProp @ 0x140633C08
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x1406313BC (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x14072DE7C (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmGetDeviceCompoundFilters @ 0x140735858 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x14097A1BC (_CmGetDeviceCompoundFiltersWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _PnpParseIndirectResourceString @ 0x1405DE350 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x14061004C (_PnpParseIndirectInfString.c)
 *     _PnpMultiSzGetLen @ 0x140611CBC (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        wchar_t *a6,
        unsigned int a7,
        unsigned int *a8,
        int a9)
{
  wchar_t *v9; // r13
  unsigned int v11; // r12d
  int v12; // r11d
  DEVPROPKEY **v13; // rdx
  unsigned int i; // r8d
  DEVPROPKEY *v15; // r9
  DEVPROPKEY **v16; // rsi
  __int64 v17; // rcx
  int v18; // r15d
  int v19; // r8d
  int v20; // edx
  int v21; // ecx
  NTSTATUS v22; // eax
  NTSTATUS DeviceRegProp; // ebx
  int v24; // r15d
  int v25; // esi
  int v27; // eax
  SIZE_T v28; // rax
  PVOID PoolWithTag; // r12
  const wchar_t *v30; // rsi
  int v31; // eax
  unsigned int Len; // r9d
  int v33; // r9d
  int v34; // r9d
  int v35; // eax
  unsigned int v36; // [rsp+40h] [rbp-B9h] BYREF
  int v37; // [rsp+44h] [rbp-B5h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B1h]
  int v39; // [rsp+50h] [rbp-A9h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A1h]
  __int64 v41; // [rsp+60h] [rbp-99h]
  int v42; // [rsp+68h] [rbp-91h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-89h] BYREF
  PVOID P; // [rsp+78h] [rbp-81h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-79h] BYREF
  GUID Guid; // [rsp+90h] [rbp-69h] BYREF
  WCHAR SourceString[40]; // [rsp+A0h] [rbp-59h] BYREF

  v9 = a6;
  v41 = a3;
  v40 = a2;
  v38 = a1;
  v37 = 0;
  v42 = 0;
  v36 = 0;
  v39 = 0;
  P = 0LL;
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
      goto LABEL_40;
    case 25:
      return (unsigned int)-1073741637;
    case 27:
      v24 = v40;
      v36 = 4;
      DeviceRegProp = CmGetDeviceRegProp(v38, v40, v41, 27, (__int64)&v37, (__int64)&v39, (__int64)&v36, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_20;
      if ( v37 != *((_DWORD *)v16 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 1;
      *a5 = *((_DWORD *)v16 + 2);
      if ( v11 >= *a8 )
      {
        *(_BYTE *)v9 = -(v39 != 0);
        goto LABEL_20;
      }
      return (unsigned int)-1073741789;
    case 37:
LABEL_40:
      v33 = *((_DWORD *)v16 + 3);
      v24 = v40;
      v36 = 78;
      DeviceRegProp = CmGetDeviceRegProp(v38, v40, v41, v33, (__int64)&v37, (__int64)SourceString, (__int64)&v36, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_20;
      if ( v37 != *((_DWORD *)v16 + 4) )
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
            *(GUID *)v9 = Guid;
        }
        goto LABEL_20;
      }
      return (unsigned int)-1073741789;
  }
  v19 = v41;
  v20 = v40;
  v21 = v38;
  *a8 = v11;
  v22 = CmGetDeviceRegProp(v21, v20, v19, v18, (__int64)&v37, (__int64)v9, (__int64)a8, a9);
  DeviceRegProp = v22;
  if ( v22 && v22 != -1073741789 )
    goto LABEL_18;
  if ( v37 != *((_DWORD *)v16 + 4) )
    return (unsigned int)-1073741811;
  v27 = *((_DWORD *)v16 + 2);
  *a5 = v27;
  if ( v27 != 18 )
    goto LABEL_18;
  v28 = *a8;
  v36 = *a8;
  if ( DeviceRegProp )
  {
    if ( DeviceRegProp != -1073741789 )
      goto LABEL_18;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v28, 0x52504E50u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    v34 = v18;
    v24 = v40;
    v25 = v38;
    v35 = CmGetDeviceRegProp(v38, v40, v41, v34, (__int64)&v42, (__int64)PoolWithTag, (__int64)&v36, a9);
    if ( v35 < 0 )
    {
      DeviceRegProp = v35;
      ExFreePoolWithTag(PoolWithTag, 0);
      goto LABEL_21;
    }
    if ( v36 < 2 )
      goto LABEL_31;
    v30 = (const wchar_t *)PoolWithTag;
  }
  else
  {
    if ( v11 < 2 )
      goto LABEL_33;
    PoolWithTag = P;
    v30 = v9;
  }
  if ( v30 && (PnpParseIndirectInfString(v30) || PnpParseIndirectResourceString((__int64)v30)) )
    *a5 = 25;
LABEL_31:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_18:
  if ( DeviceRegProp )
  {
    v24 = v40;
LABEL_20:
    v25 = v38;
LABEL_21:
    if ( DeviceRegProp != -1073741810 )
      return (unsigned int)DeviceRegProp;
    DeviceRegProp = CmOpenDeviceRegKey(v25, v24, 16, 0, 1, 0, (__int64)&Handle, 0LL);
    if ( !DeviceRegProp )
    {
      ZwClose(Handle);
      return (unsigned int)-1073741275;
    }
    if ( DeviceRegProp != -1073741810 && DeviceRegProp != -1073741632 )
      return (unsigned int)-1073741823;
    return (unsigned int)DeviceRegProp;
  }
LABEL_33:
  v31 = *a5;
  if ( *a5 == 8210 )
  {
    Len = PnpMultiSzGetLen(v9);
    if ( 2 * (unsigned __int64)Len > *a8 )
    {
      DeviceRegProp = -1073741595;
      *a8 = 0;
      return (unsigned int)DeviceRegProp;
    }
    *a8 = 2 * Len;
    v31 = *a5;
  }
  if ( v31 == 18 && !*a8 )
  {
    *a8 = 0;
    *a5 = 0;
    return (unsigned int)-1073741275;
  }
  return (unsigned int)DeviceRegProp;
}
