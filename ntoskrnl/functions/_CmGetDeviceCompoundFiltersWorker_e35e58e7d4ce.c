__int64 __fastcall CmGetDeviceCompoundFiltersWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  wchar_t *v13; // rsi
  wchar_t *v14; // rdi
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rax
  __int64 *v18; // r15
  const wchar_t *v19; // r12
  __int64 Pool2; // rax
  int ObjectProperty; // ebx
  __int64 v22; // rbx
  int DeviceMappedPropertyFromRegProp; // eax
  int v24; // eax
  void *v25; // rax
  int DeclarativeFilterList; // eax
  unsigned int v28; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v29; // [rsp+6Ch] [rbp-25h] BYREF
  __int64 *v30; // [rsp+70h] [rbp-21h] BYREF
  PVOID v31; // [rsp+78h] [rbp-19h]
  __int64 *v32; // [rsp+80h] [rbp-11h]
  PVOID P; // [rsp+88h] [rbp-9h]

  v29 = 0;
  LODWORD(v30) = 0;
  P = 0LL;
  v13 = 0LL;
  v31 = 0LL;
  v14 = 0LL;
  v28 = 0;
  if ( (int)PnpCtxRegQueryInfoKey(a1, a4, (int)&v30, 0, 0LL, 0LL, 0LL) < 0 || !(_DWORD)v30 )
    return (unsigned int)-1073741275;
  if ( *(_DWORD *)(a5 + 16) != 22 )
    goto LABEL_8;
  v15 = *(_QWORD *)a5 - DEVPKEY_Device_CompoundUpperFilters;
  if ( *(_QWORD *)a5 == DEVPKEY_Device_CompoundUpperFilters )
    v15 = *(_QWORD *)(a5 + 8) - 0x293B573F92A15394LL;
  if ( v15 )
  {
LABEL_8:
    v16 = DEVPKEY_Device_LowerFilterCache;
    v17 = DEVPKEY_Device_LowerFilterLevels;
    v18 = DEVPKEY_Device_LowerFilterDefaultLevel;
    v19 = L"*Lower";
  }
  else
  {
    v16 = DEVPKEY_Device_UpperFilterCache;
    v17 = DEVPKEY_Device_UpperFilterLevels;
    v18 = DEVPKEY_Device_UpperFilterDefaultLevel;
    v19 = L"*Upper";
  }
  v30 = v17;
  v32 = v16;
  if ( (unsigned int)PnpGetObjectProperty(a1, a2, 1LL, a3, 0LL, (__int64)v16, (__int64)&v29, 0LL, 0, (__int64)&v28, 0) == -1073741789
    && v29 == 8210 )
  {
    Pool2 = ExAllocatePool2(256LL, v28, 1380994640LL);
    v14 = (wchar_t *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       a2,
                       1LL,
                       a3,
                       0LL,
                       (__int64)v32,
                       (__int64)&v29,
                       Pool2,
                       v28,
                       (__int64)&v28,
                       0);
    if ( ObjectProperty < 0 )
      goto LABEL_48;
    v22 = a3;
    goto LABEL_15;
  }
  v24 = PnpGetObjectProperty(a1, a2, 1LL, a3, 0LL, (__int64)v18, (__int64)&v29, 0LL, 0, (__int64)&v28, 0);
  ObjectProperty = v24;
  if ( v24 != -1073741789 )
  {
    if ( v24 == -1073741275 )
    {
      v13 = (wchar_t *)v19;
      goto LABEL_29;
    }
    goto LABEL_53;
  }
  if ( v29 != 18 )
  {
LABEL_53:
    if ( v29 == 8210 && v24 != -1073739509 && v24 )
      return (unsigned int)ObjectProperty;
    return (unsigned int)-1073741275;
  }
  v13 = (wchar_t *)ExAllocatePool2(256LL, v28, 1380994640LL);
  if ( !v13 )
    return (unsigned int)-1073741801;
  ObjectProperty = PnpGetObjectProperty(
                     a1,
                     a2,
                     1LL,
                     a3,
                     0LL,
                     (__int64)v18,
                     (__int64)&v29,
                     (__int64)v13,
                     v28,
                     (__int64)&v28,
                     0);
  if ( ObjectProperty < 0 )
    goto LABEL_45;
  if ( (unsigned int)PnpGetObjectProperty(a1, a2, 1LL, a3, 0LL, (__int64)v30, (__int64)&v29, 0LL, 0, (__int64)&v28, 0) != -1073741789 )
  {
    ObjectProperty = -1073741275;
    goto LABEL_45;
  }
  v25 = (void *)ExAllocatePool2(256LL, v28, 1380994640LL);
  v31 = v25;
  if ( !v25 )
  {
    ObjectProperty = -1073741801;
    goto LABEL_45;
  }
  ObjectProperty = PnpGetObjectProperty(
                     a1,
                     a2,
                     1LL,
                     a3,
                     0LL,
                     (__int64)v30,
                     (__int64)&v29,
                     (__int64)v25,
                     v28,
                     (__int64)&v28,
                     0);
  if ( ObjectProperty >= 0 )
  {
LABEL_29:
    DeclarativeFilterList = CmGetDeclarativeFilterList(a1, a4, (const wchar_t *)v31, v13, v19, 0LL, 0, &v28);
    ObjectProperty = DeclarativeFilterList;
    if ( !DeclarativeFilterList )
    {
      ObjectProperty = -1073741762;
      goto LABEL_44;
    }
    if ( DeclarativeFilterList != -1073741789 )
    {
LABEL_44:
      if ( !v13 )
        goto LABEL_47;
      goto LABEL_45;
    }
    v14 = (wchar_t *)ExAllocatePool2(256LL, v28, 1380994640LL);
    if ( !v14 )
      goto LABEL_33;
    ObjectProperty = CmGetDeclarativeFilterList(a1, a4, (const wchar_t *)v31, v13, v19, v14, v28, &v28);
    if ( ObjectProperty < 0 )
      goto LABEL_44;
    v22 = a3;
    PnpSetObjectProperty(a1, a2, 1u, a3, 0LL, (__int64)v32, 8210, (__int64)v14, v28, 0);
LABEL_15:
    DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromRegProp(a1, a2, v22, a6, &v29, 0LL, 0, &v28, 0);
    ObjectProperty = DeviceMappedPropertyFromRegProp;
    if ( DeviceMappedPropertyFromRegProp == -1073741275 )
    {
      v28 = 0;
LABEL_41:
      ObjectProperty = CmMergeFilterLists(v14, (wchar_t *)P, a9, a10);
      if ( (int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789 )
        *a7 = 8210;
      goto LABEL_44;
    }
    if ( DeviceMappedPropertyFromRegProp != -1073741789 )
      goto LABEL_44;
    if ( !v28 || !a9 )
      goto LABEL_41;
    P = (PVOID)ExAllocatePool2(256LL, v28, 1380994640LL);
    if ( P )
    {
      ObjectProperty = CmGetDeviceMappedPropertyFromRegProp(a1, a2, a3, a6, &v29, (GUID *)P, v28, &v28, 0);
      if ( ObjectProperty < 0 )
        goto LABEL_44;
      goto LABEL_41;
    }
LABEL_33:
    ObjectProperty = -1073741801;
    goto LABEL_44;
  }
LABEL_45:
  if ( v13 != v19 )
    ExFreePoolWithTag(v13, 0);
LABEL_47:
  if ( v14 )
LABEL_48:
    ExFreePoolWithTag(v14, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
  return (unsigned int)ObjectProperty;
}
