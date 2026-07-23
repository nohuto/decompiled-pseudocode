/*
 * XREFs of _CmGetDeviceCompoundFiltersWorker @ 0x14097A1BC
 * Callers:
 *     _CmGetDeviceCompoundFilters @ 0x140735858 (_CmGetDeviceCompoundFilters.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140633C08 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14067313C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpSetObjectProperty @ 0x140745DE4 (_PnpSetObjectProperty.c)
 *     _CmGetDeclarativeFilterList @ 0x140979DA4 (_CmGetDeclarativeFilterList.c)
 *     _CmMergeFilterLists @ 0x14097B94C (_CmMergeFilterLists.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmGetDeviceCompoundFiltersWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  const wchar_t *v13; // r15
  wchar_t *v14; // rsi
  PVOID v15; // rdi
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 *v18; // rax
  __int64 *v19; // r12
  PVOID PoolWithTag; // rax
  int ObjectProperty; // ebx
  __int64 v22; // r12
  int DeviceMappedPropertyFromRegProp; // eax
  int v24; // eax
  PVOID v25; // rax
  __int64 v27; // [rsp+30h] [rbp-61h]
  SIZE_T NumberOfBytes; // [rsp+68h] [rbp-29h] BYREF
  __int64 *v29; // [rsp+70h] [rbp-21h] BYREF
  PVOID v30; // [rsp+78h] [rbp-19h]
  __int64 *v31; // [rsp+80h] [rbp-11h]
  PVOID P; // [rsp+88h] [rbp-9h]

  LODWORD(v29) = 0;
  v13 = 0LL;
  v14 = 0LL;
  P = 0LL;
  v15 = 0LL;
  v30 = 0LL;
  NumberOfBytes = 0LL;
  if ( (int)PnpCtxRegQueryInfoKey(0LL, a4, &v29, 0LL, 0LL, 0LL, 0LL) < 0 || !(_DWORD)v29 )
    goto LABEL_46;
  if ( *(_DWORD *)(a5 + 16) != 22 )
    goto LABEL_8;
  v16 = *(_QWORD *)a5 - DEVPKEY_Device_CompoundUpperFilters;
  if ( *(_QWORD *)a5 == DEVPKEY_Device_CompoundUpperFilters )
    v16 = *(_QWORD *)(a5 + 8) - 0x293B573F92A15394LL;
  if ( v16 )
  {
LABEL_8:
    v17 = DEVPKEY_Device_LowerFilterCache;
    v18 = DEVPKEY_Device_LowerFilterLevels;
    v19 = DEVPKEY_Device_LowerFilterDefaultLevel;
    v13 = L"*Lower";
  }
  else
  {
    v17 = DEVPKEY_Device_UpperFilterCache;
    v18 = DEVPKEY_Device_UpperFilterLevels;
    v19 = (__int64 *)&DEVPKEY_Device_UpperFilterDefaultLevel;
    v13 = (const wchar_t *)L"*Upper";
  }
  v29 = v18;
  v31 = v17;
  if ( (unsigned int)PnpGetObjectProperty(
                       a1,
                       a2,
                       1LL,
                       a3,
                       0LL,
                       (__int64)v17,
                       (__int64)&NumberOfBytes + 4,
                       0LL,
                       0,
                       (__int64)&NumberOfBytes,
                       0) == -1073741789
    && HIDWORD(NumberOfBytes) == 8210 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52504E50u);
    v15 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       a2,
                       1LL,
                       a3,
                       0LL,
                       (__int64)v31,
                       (__int64)&NumberOfBytes + 4,
                       (__int64)PoolWithTag,
                       NumberOfBytes,
                       (__int64)&NumberOfBytes,
                       0);
    if ( ObjectProperty < 0 )
      goto LABEL_50;
    v22 = a3;
LABEL_15:
    DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromRegProp(
                                        a1,
                                        a2,
                                        v22,
                                        a6,
                                        (int *)&NumberOfBytes + 1,
                                        0LL,
                                        0,
                                        (unsigned int *)&NumberOfBytes,
                                        0);
    ObjectProperty = DeviceMappedPropertyFromRegProp;
    if ( DeviceMappedPropertyFromRegProp == -1073741275 )
    {
      LODWORD(NumberOfBytes) = 0;
      goto LABEL_39;
    }
    if ( DeviceMappedPropertyFromRegProp != -1073741789 )
    {
LABEL_47:
      if ( v14 && v14 != v13 )
        ExFreePoolWithTag(v14, 0);
LABEL_50:
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v30 )
        ExFreePoolWithTag(v30, 0);
      return (unsigned int)ObjectProperty;
    }
    if ( !(_DWORD)NumberOfBytes || !a9 )
    {
LABEL_39:
      ObjectProperty = CmMergeFilterLists((wchar_t *)v15, (wchar_t *)P, a9, a10);
      if ( (int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789 )
        *a7 = 8210;
      goto LABEL_47;
    }
    P = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52504E50u);
    if ( P )
    {
      ObjectProperty = CmGetDeviceMappedPropertyFromRegProp(
                         a1,
                         a2,
                         v22,
                         a6,
                         (int *)&NumberOfBytes + 1,
                         (wchar_t *)P,
                         NumberOfBytes,
                         (unsigned int *)&NumberOfBytes,
                         0);
      if ( ObjectProperty >= 0 )
        goto LABEL_39;
      goto LABEL_47;
    }
LABEL_23:
    ObjectProperty = -1073741801;
    goto LABEL_47;
  }
  v24 = PnpGetObjectProperty(
          a1,
          a2,
          1LL,
          a3,
          0LL,
          (__int64)v19,
          (__int64)&NumberOfBytes + 4,
          0LL,
          0,
          (__int64)&NumberOfBytes,
          0);
  ObjectProperty = v24;
  if ( v24 == -1073741789 )
  {
    if ( HIDWORD(NumberOfBytes) == 18 )
    {
      v14 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52504E50u);
      if ( !v14 )
        return (unsigned int)-1073741801;
      v27 = (__int64)v19;
      v22 = a3;
      ObjectProperty = PnpGetObjectProperty(
                         a1,
                         a2,
                         1LL,
                         a3,
                         0LL,
                         v27,
                         (__int64)&NumberOfBytes + 4,
                         (__int64)v14,
                         NumberOfBytes,
                         (__int64)&NumberOfBytes,
                         0);
      if ( ObjectProperty < 0 )
        goto LABEL_47;
      if ( (unsigned int)PnpGetObjectProperty(
                           a1,
                           a2,
                           1LL,
                           a3,
                           0LL,
                           (__int64)v29,
                           (__int64)&NumberOfBytes + 4,
                           0LL,
                           0,
                           (__int64)&NumberOfBytes,
                           0) == -1073741789 )
      {
        v25 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52504E50u);
        v30 = v25;
        if ( !v25 )
          goto LABEL_23;
        ObjectProperty = PnpGetObjectProperty(
                           a1,
                           a2,
                           1LL,
                           a3,
                           0LL,
                           (__int64)v29,
                           (__int64)&NumberOfBytes + 4,
                           (__int64)v25,
                           NumberOfBytes,
                           (__int64)&NumberOfBytes,
                           0);
        if ( ObjectProperty < 0 )
          goto LABEL_47;
        goto LABEL_28;
      }
LABEL_46:
      ObjectProperty = -1073741275;
      goto LABEL_47;
    }
  }
  else if ( v24 == -1073741275 )
  {
    v22 = a3;
    v14 = (wchar_t *)v13;
LABEL_28:
    ObjectProperty = CmGetDeclarativeFilterList(
                       a1,
                       (__int64)a4,
                       (wchar_t *)v30,
                       v14,
                       (__int64)v13,
                       0LL,
                       0,
                       &NumberOfBytes);
    if ( !ObjectProperty )
      ObjectProperty = -1073741762;
    if ( ObjectProperty != -1073741789 )
      goto LABEL_47;
    v15 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52504E50u);
    if ( !v15 )
      goto LABEL_23;
    ObjectProperty = CmGetDeclarativeFilterList(
                       a1,
                       (__int64)a4,
                       (wchar_t *)v30,
                       v14,
                       (__int64)v13,
                       (wchar_t *)v15,
                       NumberOfBytes,
                       &NumberOfBytes);
    if ( ObjectProperty < 0 )
      goto LABEL_47;
    PnpSetObjectProperty(a1, a2, 1u, v22, 0LL, (__int64)v31, 8210, (__int64)v15, NumberOfBytes, 0);
    goto LABEL_15;
  }
  if ( HIDWORD(NumberOfBytes) != 8210 || v24 == -1073739509 || !v24 )
    return (unsigned int)-1073741275;
  return (unsigned int)ObjectProperty;
}
