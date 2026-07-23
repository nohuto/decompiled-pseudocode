/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14073F76C
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x14073F130 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x14073F5DC (_CmGetInstallerClassCompoundFilters.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14097AAD0 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x14097B080 (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     _PnpParseIndirectResourceString @ 0x1405DE350 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x14061004C (_PnpParseIndirectInfString.c)
 *     _CmGetInstallerClassRegProp @ 0x14073F958 (_CmGetInstallerClassRegProp.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromRegProp(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        wchar_t *a6,
        unsigned int a7,
        unsigned int *a8)
{
  unsigned int *v8; // r15
  wchar_t *v10; // rdi
  PVOID PoolWithTag; // rsi
  unsigned int v13; // r12d
  int v14; // r11d
  DEVPROPKEY **v15; // rdx
  unsigned int i; // r8d
  DEVPROPKEY *v17; // r9
  DEVPROPKEY **v18; // r14
  __int64 v19; // rcx
  int v20; // r13d
  unsigned int v21; // eax
  unsigned int InstallerClassRegProp; // ebx
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  int v27; // [rsp+40h] [rbp-10h] BYREF
  int v28; // [rsp+44h] [rbp-Ch] BYREF
  int v29; // [rsp+48h] [rbp-8h] BYREF

  v8 = a8;
  v10 = a6;
  v27 = 0;
  PoolWithTag = 0LL;
  *a5 = 0;
  *v8 = 0;
  v29 = 0;
  v28 = 0;
  if ( a6 )
  {
    v13 = a7;
    v10 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v13 = 0;
  }
  v14 = *(_DWORD *)(a4 + 16);
  v15 = &CmClassRegPropMap;
  for ( i = 0; i < 9; ++i )
  {
    v17 = *v15;
    v18 = v15;
    if ( v14 == (*v15)->pid )
    {
      v19 = *(_QWORD *)a4 - *(_QWORD *)&v17->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v17->fmtid.Data1 )
        v19 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v17->fmtid.Data4;
      if ( !v19 )
        break;
    }
    v15 += 3;
    v18 = 0LL;
  }
  if ( !v18 )
    return (unsigned int)-1073741264;
  v20 = *((_DWORD *)v18 + 3);
  if ( v20 == 25 )
    return (unsigned int)-1073741637;
  if ( v20 == 27 )
  {
    LODWORD(a8) = 4;
    InstallerClassRegProp = CmGetInstallerClassRegProp(a1, a2, a3, 27, (__int64)&v27, (__int64)&v28, (__int64)&a8);
    if ( (InstallerClassRegProp & 0x80000000) == 0 )
    {
      if ( v27 == *((_DWORD *)v18 + 4) )
      {
        *v8 = 1;
        *a5 = *((_DWORD *)v18 + 2);
        if ( v13 >= *v8 )
          *(_BYTE *)v10 = -(v28 != 0);
        else
          return (unsigned int)-1073741789;
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  else
  {
    *v8 = v13;
    v21 = CmGetInstallerClassRegProp(a1, a2, a3, v20, (__int64)&v27, (__int64)v10, (__int64)v8);
    InstallerClassRegProp = v21;
    if ( !v21 || v21 == -1073741789 )
    {
      v24 = *((_DWORD *)v18 + 2);
      *a5 = v24;
      if ( v24 == 18 )
      {
        v25 = *v8;
        LODWORD(a8) = *v8;
        if ( InstallerClassRegProp )
        {
          if ( InstallerClassRegProp != -1073741789 )
            return InstallerClassRegProp;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v25, 0x52504E50u);
          if ( !PoolWithTag )
            return (unsigned int)-1073741801;
          v26 = CmGetInstallerClassRegProp(a1, a2, a3, v20, (__int64)&v29, (__int64)PoolWithTag, (__int64)&a8);
          if ( v26 < 0 )
          {
            InstallerClassRegProp = v26;
LABEL_27:
            ExFreePoolWithTag(PoolWithTag, 0);
            return InstallerClassRegProp;
          }
          v25 = (unsigned int)a8;
          v10 = (wchar_t *)PoolWithTag;
        }
        if ( v10 && v25 >= 2 && (PnpParseIndirectInfString(v10) || PnpParseIndirectResourceString((__int64)v10)) )
          *a5 = 25;
        if ( PoolWithTag )
          goto LABEL_27;
      }
    }
  }
  return InstallerClassRegProp;
}
