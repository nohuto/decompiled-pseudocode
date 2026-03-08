/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14074DDF4
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x14074D838 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x14074DC9C (_CmGetInstallerClassCompoundFilters.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140A65A54 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x140A6601C (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     _CmGetInstallerClassRegProp @ 0x14074DF34 (_CmGetInstallerClassRegProp.c)
 *     _PnpParseIndirectResourceString @ 0x140751C48 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x14077B4AC (_PnpParseIndirectInfString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromRegProp(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8)
{
  _DWORD *v8; // r13
  unsigned int *v9; // r15
  __int64 v11; // rsi
  unsigned int v13; // r14d
  int v14; // r11d
  DEVPROPKEY **v15; // rdx
  unsigned int i; // r8d
  DEVPROPKEY *v17; // r9
  DEVPROPKEY **v18; // rdi
  __int64 v19; // rcx
  int v20; // r12d
  unsigned int v21; // eax
  unsigned int InstallerClassRegProp; // ebx
  int v24; // eax
  __int64 v25; // rax
  void *Pool2; // rdi
  int v27; // eax
  int v28; // [rsp+40h] [rbp-10h] BYREF
  int v29; // [rsp+44h] [rbp-Ch] BYREF
  int v30; // [rsp+48h] [rbp-8h] BYREF

  v8 = a5;
  v9 = a8;
  v11 = a6;
  v28 = 0;
  *a5 = 0;
  *v9 = 0;
  v30 = 0;
  v29 = 0;
  if ( v11 )
  {
    v13 = a7;
    v11 &= -(__int64)(a7 != 0);
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
    LODWORD(a5) = 4;
    InstallerClassRegProp = CmGetInstallerClassRegProp(a1, a2, a3, 27, (__int64)&v28, (__int64)&v29, (__int64)&a5);
    if ( (InstallerClassRegProp & 0x80000000) != 0 )
      return InstallerClassRegProp;
    if ( v28 == *((_DWORD *)v18 + 4) )
    {
      *v9 = 1;
      *v8 = *((_DWORD *)v18 + 2);
      if ( v13 >= *v9 )
        *(_BYTE *)v11 = -(v29 != 0);
      else
        return (unsigned int)-1073741789;
      return InstallerClassRegProp;
    }
    return (unsigned int)-1073741811;
  }
  *v9 = v13;
  v21 = CmGetInstallerClassRegProp(a1, a2, a3, v20, (__int64)&v28, v11, (__int64)v9);
  InstallerClassRegProp = v21;
  if ( v21 && v21 != -1073741789 )
    return InstallerClassRegProp;
  if ( v28 != *((_DWORD *)v18 + 4) )
    return (unsigned int)-1073741811;
  v24 = *((_DWORD *)v18 + 2);
  *v8 = v24;
  if ( v24 != 18 )
    return InstallerClassRegProp;
  v25 = *v9;
  LODWORD(a5) = *v9;
  if ( InstallerClassRegProp )
  {
    if ( InstallerClassRegProp != -1073741789 )
      return InstallerClassRegProp;
    Pool2 = (void *)ExAllocatePool2(256LL, v25, 1380994640LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v27 = CmGetInstallerClassRegProp(a1, a2, a3, v20, (__int64)&v30, (__int64)Pool2, (__int64)&a5);
    if ( v27 >= 0 )
    {
      if ( (unsigned int)a5 >= 2 )
      {
        v11 = (__int64)Pool2;
        goto LABEL_33;
      }
    }
    else
    {
      InstallerClassRegProp = v27;
    }
LABEL_37:
    ExFreePoolWithTag(Pool2, 0);
    return InstallerClassRegProp;
  }
  if ( v13 < 2 )
    return InstallerClassRegProp;
  Pool2 = 0LL;
  if ( !v11 )
    return InstallerClassRegProp;
LABEL_33:
  if ( (unsigned __int8)PnpParseIndirectInfString(v11) || (unsigned __int8)PnpParseIndirectResourceString(v11) )
    *v8 = 25;
  if ( Pool2 )
    goto LABEL_37;
  return InstallerClassRegProp;
}
