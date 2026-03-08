/*
 * XREFs of _CmDeleteInstallerClassWorker @ 0x140A5FE90
 * Callers:
 *     _CmDeleteInstallerClass @ 0x140A5FD64 (_CmDeleteInstallerClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140778448 (_CmGetMatchingFilteredDeviceList.c)
 *     _CmDeleteCommonClassRegKey @ 0x140A5E35C (_CmDeleteCommonClassRegKey.c)
 *     _CmRaiseDeleteEvent @ 0x140A62958 (_CmRaiseDeleteEvent.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x140A6601C (_CmGetInstallerClassMappedPropertyKeys.c)
 *     _CmSetInstallerClassMappedProperty @ 0x140A66C94 (_CmSetInstallerClassMappedProperty.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteInstallerClassWorker(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebx
  unsigned int MatchingFilteredDeviceList; // eax
  int v7; // r9d
  int *v8; // rdi
  unsigned int v9; // ebp
  int v10; // r8d
  int v11; // eax
  void *Pool2; // rdi
  int InstallerClassMappedPropertyKeys; // eax
  unsigned int v14; // r12d
  unsigned __int64 v15; // rbp
  int v16; // r9d
  unsigned int v17; // r12d
  __int64 v18; // rbp
  int v19; // eax
  unsigned int v21; // [rsp+50h] [rbp-48h] BYREF
  int v22; // [rsp+54h] [rbp-44h] BYREF
  _DWORD v23[4]; // [rsp+58h] [rbp-40h] BYREF

  v3 = 0;
  v22 = 0;
  if ( a3 )
    return (unsigned int)-1073741811;
  MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(a1, a2, 128, 0LL, 0LL, 0LL, 0, (__int64)&v22);
  if ( MatchingFilteredDeviceList == -1073741789 )
    return (unsigned int)-1073741535;
  if ( MatchingFilteredDeviceList )
    return MatchingFilteredDeviceList;
  v23[0] = 800;
  v8 = v23;
  v23[1] = 544;
  v9 = 0;
  v23[2] = 288;
  while ( 1 )
  {
    v10 = *v8;
    if ( *v8 )
    {
      if ( (v10 & 0xFFFFFCDF) == 0 )
      {
        v11 = CmDeleteCommonClassRegKey(a1, a2, v10, 0, 1);
        if ( v11 )
        {
          if ( v11 != -1073741772 && v11 != -1073741811 && v11 != -1073741637 )
            break;
        }
      }
    }
    ++v9;
    ++v8;
    if ( v9 >= 3 )
      goto LABEL_17;
  }
  v3 = v11;
  if ( v11 < 0 )
    return (unsigned int)v3;
LABEL_17:
  Pool2 = 0LL;
  v21 = 0;
  LOBYTE(v7) = 1;
  InstallerClassMappedPropertyKeys = CmGetInstallerClassMappedPropertyKeys(a1, a2, 0, v7, 0LL, 0, (__int64)&v21);
  if ( InstallerClassMappedPropertyKeys == -1073741789 )
  {
    while ( 1 )
    {
      v14 = v21;
      v15 = 20LL * v21;
      if ( v15 > 0xFFFFFFFF )
        break;
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v15, 1380994640LL);
      if ( !Pool2 )
      {
        InstallerClassMappedPropertyKeys = -1073741801;
        goto LABEL_25;
      }
      LOBYTE(v16) = 1;
      InstallerClassMappedPropertyKeys = CmGetInstallerClassMappedPropertyKeys(
                                           a1,
                                           a2,
                                           0,
                                           v16,
                                           (__int64)Pool2,
                                           v14,
                                           (__int64)&v21);
      if ( InstallerClassMappedPropertyKeys != -1073741789 )
        goto LABEL_23;
    }
    InstallerClassMappedPropertyKeys = -1073741811;
LABEL_25:
    v3 = InstallerClassMappedPropertyKeys;
    goto LABEL_42;
  }
LABEL_23:
  if ( InstallerClassMappedPropertyKeys && InstallerClassMappedPropertyKeys != -1073741275 )
    goto LABEL_25;
  v17 = v21;
  v18 = 0LL;
  if ( v21 )
  {
    while ( 1 )
    {
      v19 = CmSetInstallerClassMappedProperty(a1, a2, (__int64)Pool2 + 20 * v18, 0, 0LL, 0);
      if ( v19 )
      {
        if ( v19 != -1073741275 && v19 != -1073741790 && v19 != -1073741802 && v19 != -1073741637 )
          break;
      }
      v18 = (unsigned int)(v18 + 1);
      if ( (unsigned int)v18 >= v17 )
        goto LABEL_37;
    }
    v3 = v19;
  }
LABEL_37:
  if ( v3 < 0 )
    goto LABEL_42;
  InstallerClassMappedPropertyKeys = CmDeleteCommonClassRegKey(a1, a2, 32, 0, 1);
  if ( InstallerClassMappedPropertyKeys )
  {
    if ( InstallerClassMappedPropertyKeys != -1073741772 && InstallerClassMappedPropertyKeys != -1073741811 )
      goto LABEL_25;
  }
  CmRaiseDeleteEvent(a1, a2, 2LL);
LABEL_42:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v3;
}
