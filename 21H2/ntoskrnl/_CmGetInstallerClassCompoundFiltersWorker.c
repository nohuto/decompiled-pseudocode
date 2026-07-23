/*
 * XREFs of _CmGetInstallerClassCompoundFiltersWorker @ 0x14097AAD0
 * Callers:
 *     _CmGetInstallerClassCompoundFilters @ 0x14073F5DC (_CmGetInstallerClassCompoundFilters.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14067313C (_PnpCtxRegQueryInfoKey.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14073F76C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _PnpSetObjectProperty @ 0x140745DE4 (_PnpSetObjectProperty.c)
 *     _CmGetDeclarativeFilterList @ 0x140979DA4 (_CmGetDeclarativeFilterList.c)
 *     _CmMergeFilterLists @ 0x14097B94C (_CmMergeFilterLists.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmGetInstallerClassCompoundFiltersWorker(
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
  wchar_t *v10; // rdi
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 *v16; // r12
  wchar_t *PoolWithTag; // rax
  int ObjectProperty; // ebx
  int v19; // r12d
  int InstallerClassMappedPropertyFromRegProp; // eax
  int v21; // eax
  __int64 v22; // rbx
  PVOID v23; // rax
  __int64 v25; // [rsp+30h] [rbp-71h]
  SIZE_T NumberOfBytes; // [rsp+68h] [rbp-39h] BYREF
  int v27[2]; // [rsp+70h] [rbp-31h] BYREF
  PVOID P; // [rsp+78h] [rbp-29h]
  PVOID v29; // [rsp+80h] [rbp-21h]
  __int64 *v30; // [rsp+88h] [rbp-19h]
  PVOID v31; // [rsp+90h] [rbp-11h]
  __int64 v32; // [rsp+98h] [rbp-9h]

  v10 = 0LL;
  v27[0] = 0;
  P = 0LL;
  NumberOfBytes = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  if ( (int)PnpCtxRegQueryInfoKey(a1, a4, v27, 0LL, 0LL, 0LL, 0LL) < 0 || !v27[0] )
    goto LABEL_44;
  if ( *(_DWORD *)(a5 + 16) != 20 )
    goto LABEL_8;
  v14 = *(_QWORD *)a5 - DEVPKEY_DeviceClass_CompoundUpperFilters;
  if ( *(_QWORD *)a5 == DEVPKEY_DeviceClass_CompoundUpperFilters )
    v14 = *(_QWORD *)(a5 + 8) - 0x4B88D2ECD9DBB9A9LL;
  if ( v14 )
  {
LABEL_8:
    v32 = (__int64)DEVPKEY_DeviceClass_LowerFilterLevels;
    v15 = DEVPKEY_DeviceClass_LowerFilterCache;
    *(_QWORD *)v27 = L"*Lower";
    v16 = DEVPKEY_DeviceClass_LowerFilterDefaultLevel;
  }
  else
  {
    v32 = (__int64)DEVPKEY_DeviceClass_UpperFilterLevels;
    v15 = DEVPKEY_DeviceClass_UpperFilterCache;
    *(_QWORD *)v27 = L"*Upper";
    v16 = DEVPKEY_DeviceClass_UpperFilterDefaultLevel;
  }
  v30 = v15;
  if ( (unsigned int)PnpGetObjectProperty(
                       a1,
                       a2,
                       2LL,
                       a3,
                       0LL,
                       (__int64)v15,
                       (__int64)&NumberOfBytes + 4,
                       0LL,
                       0,
                       (__int64)&NumberOfBytes,
                       0) == -1073741789
    && HIDWORD(NumberOfBytes) == 8210 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52504E50u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       a2,
                       2LL,
                       a3,
                       0LL,
                       (__int64)v30,
                       (__int64)&NumberOfBytes + 4,
                       (__int64)PoolWithTag,
                       NumberOfBytes,
                       (__int64)&NumberOfBytes,
                       0);
    if ( ObjectProperty < 0 )
      goto LABEL_47;
    v19 = a2;
    goto LABEL_15;
  }
  v21 = PnpGetObjectProperty(
          a1,
          a2,
          2LL,
          a3,
          0LL,
          (__int64)v16,
          (__int64)&NumberOfBytes + 4,
          0LL,
          0,
          (__int64)&NumberOfBytes,
          0);
  ObjectProperty = v21;
  if ( v21 == -1073741789 && HIDWORD(NumberOfBytes) == 18 )
  {
    P = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52504E50u);
    if ( !P )
      return (unsigned int)-1073741801;
    v25 = (__int64)v16;
    v19 = a2;
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       a2,
                       2LL,
                       a3,
                       0LL,
                       v25,
                       (__int64)&NumberOfBytes + 4,
                       (__int64)P,
                       NumberOfBytes,
                       (__int64)&NumberOfBytes,
                       0);
    if ( ObjectProperty < 0 )
      goto LABEL_45;
    v22 = v32;
    if ( (unsigned int)PnpGetObjectProperty(
                         a1,
                         a2,
                         2LL,
                         a3,
                         0LL,
                         v32,
                         (__int64)&NumberOfBytes + 4,
                         0LL,
                         0,
                         (__int64)&NumberOfBytes,
                         0) == -1073741789 )
    {
      v23 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52504E50u);
      v29 = v23;
      if ( !v23 )
        goto LABEL_23;
      ObjectProperty = PnpGetObjectProperty(
                         a1,
                         a2,
                         2LL,
                         a3,
                         0LL,
                         v22,
                         (__int64)&NumberOfBytes + 4,
                         (__int64)v23,
                         NumberOfBytes,
                         (__int64)&NumberOfBytes,
                         0);
      if ( ObjectProperty < 0 )
        goto LABEL_45;
      ObjectProperty = CmGetDeclarativeFilterList(
                         a1,
                         (__int64)a4,
                         (wchar_t *)v29,
                         (wchar_t *)P,
                         *(__int64 *)v27,
                         0LL,
                         0,
                         &NumberOfBytes);
      if ( !ObjectProperty )
        ObjectProperty = -1073741762;
      if ( ObjectProperty != -1073741789 )
        goto LABEL_45;
      v10 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52504E50u);
      if ( !v10 )
        goto LABEL_23;
      ObjectProperty = CmGetDeclarativeFilterList(
                         a1,
                         (__int64)a4,
                         (wchar_t *)v29,
                         (wchar_t *)P,
                         *(__int64 *)v27,
                         v10,
                         NumberOfBytes,
                         &NumberOfBytes);
      if ( ObjectProperty < 0 )
        goto LABEL_45;
      PnpSetObjectProperty(a1, a2, 2u, a3, 0LL, (__int64)v30, 8210, (__int64)v10, NumberOfBytes, 0);
LABEL_15:
      InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegProp(
                                                  a1,
                                                  v19,
                                                  a3,
                                                  a6,
                                                  (_DWORD *)&NumberOfBytes + 1,
                                                  0LL,
                                                  0,
                                                  (unsigned int *)&NumberOfBytes);
      if ( InstallerClassMappedPropertyFromRegProp == -1073741275 )
      {
        LODWORD(NumberOfBytes) = 0;
        goto LABEL_37;
      }
      if ( InstallerClassMappedPropertyFromRegProp != -1073741789 )
      {
        ObjectProperty = InstallerClassMappedPropertyFromRegProp;
        goto LABEL_45;
      }
      if ( !(_DWORD)NumberOfBytes || !a9 )
      {
LABEL_37:
        ObjectProperty = CmMergeFilterLists(v10, (wchar_t *)v31, a9, a10);
        if ( (int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789 )
          *a7 = 8210;
        goto LABEL_45;
      }
      v31 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52504E50u);
      if ( v31 )
      {
        ObjectProperty = CmGetInstallerClassMappedPropertyFromRegProp(
                           a1,
                           v19,
                           a3,
                           a6,
                           (_DWORD *)&NumberOfBytes + 1,
                           (wchar_t *)v31,
                           NumberOfBytes,
                           (unsigned int *)&NumberOfBytes);
        if ( ObjectProperty >= 0 )
          goto LABEL_37;
LABEL_45:
        if ( P )
          ExFreePoolWithTag(P, 0);
LABEL_47:
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
        if ( v31 )
          ExFreePoolWithTag(v31, 0);
        if ( v29 )
          ExFreePoolWithTag(v29, 0);
        return (unsigned int)ObjectProperty;
      }
LABEL_23:
      ObjectProperty = -1073741801;
      goto LABEL_45;
    }
LABEL_44:
    ObjectProperty = -1073741275;
    goto LABEL_45;
  }
  if ( HIDWORD(NumberOfBytes) != 8210 || v21 == -1073739509 || !v21 )
    return (unsigned int)-1073741275;
  return (unsigned int)ObjectProperty;
}
