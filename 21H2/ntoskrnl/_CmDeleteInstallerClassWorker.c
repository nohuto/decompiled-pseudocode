/*
 * XREFs of _CmDeleteInstallerClassWorker @ 0x1409754A4
 * Callers:
 *     _CmDeleteInstallerClass @ 0x140975378 (_CmDeleteInstallerClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140604D18 (_CmGetMatchingFilteredDeviceList.c)
 *     _CmRaiseDeleteEvent @ 0x14072E050 (_CmRaiseDeleteEvent.c)
 *     _CmSetInstallerClassMappedProperty @ 0x1407312BC (_CmSetInstallerClassMappedProperty.c)
 *     _CmDeleteCommonClassRegKey @ 0x140974EDC (_CmDeleteCommonClassRegKey.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x14097B080 (_CmGetInstallerClassMappedPropertyKeys.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  PVOID PoolWithTag; // rdi
  int InstallerClassMappedPropertyKeys; // eax
  unsigned int v14; // r14d
  unsigned __int64 v15; // rbp
  int v16; // r9d
  __int64 v17; // rbp
  int v18; // eax
  unsigned int v20; // [rsp+50h] [rbp-48h] BYREF
  int v21; // [rsp+54h] [rbp-44h] BYREF
  _DWORD v22[4]; // [rsp+58h] [rbp-40h] BYREF

  v3 = 0;
  v21 = 0;
  if ( a3 )
    return (unsigned int)-1073741811;
  MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(a1, a2, 128, 0LL, 0LL, 0LL, 0, (__int64)&v21);
  if ( MatchingFilteredDeviceList == -1073741789 )
    return (unsigned int)-1073741535;
  if ( MatchingFilteredDeviceList )
    return MatchingFilteredDeviceList;
  v22[0] = 800;
  v8 = v22;
  v22[1] = 544;
  v9 = 0;
  v22[2] = 288;
  while ( 1 )
  {
    v10 = *v8;
    if ( !*v8 || (v10 & 0xFFFFFCDF) != 0 )
      v11 = -1073741811;
    else
      v11 = CmDeleteCommonClassRegKey(a1, a2, v10);
    if ( v11 && v11 != -1073741772 && v11 != -1073741811 && v11 != -1073741637 )
      break;
    ++v9;
    ++v8;
    if ( v9 >= 3 )
      goto LABEL_19;
  }
  v3 = v11;
  if ( v11 < 0 )
    return (unsigned int)v3;
LABEL_19:
  PoolWithTag = 0LL;
  v20 = 0;
  LOBYTE(v7) = 1;
  InstallerClassMappedPropertyKeys = CmGetInstallerClassMappedPropertyKeys(a1, a2, 0, v7, 0LL, 0, (__int64)&v20);
  if ( InstallerClassMappedPropertyKeys == -1073741789 )
  {
    while ( 1 )
    {
      v14 = v20;
      v15 = 20LL * v20;
      if ( v15 > 0xFFFFFFFF )
        break;
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v15, 0x52504E50u);
      if ( !PoolWithTag )
      {
        InstallerClassMappedPropertyKeys = -1073741801;
        goto LABEL_26;
      }
      LOBYTE(v16) = 1;
      InstallerClassMappedPropertyKeys = CmGetInstallerClassMappedPropertyKeys(
                                           a1,
                                           a2,
                                           0,
                                           v16,
                                           (__int64)PoolWithTag,
                                           v14,
                                           (__int64)&v20);
      if ( InstallerClassMappedPropertyKeys != -1073741789 )
        goto LABEL_25;
    }
    InstallerClassMappedPropertyKeys = -1073741811;
LABEL_28:
    v3 = InstallerClassMappedPropertyKeys;
    goto LABEL_45;
  }
LABEL_25:
  v14 = v20;
LABEL_26:
  if ( InstallerClassMappedPropertyKeys && InstallerClassMappedPropertyKeys != -1073741275 )
    goto LABEL_28;
  v17 = 0LL;
  if ( v14 )
  {
    while ( 1 )
    {
      v18 = CmSetInstallerClassMappedProperty(a1, a2, 0LL, 0LL, (__int64)PoolWithTag + 20 * v17, 0, 0LL, 0);
      if ( v18 )
      {
        if ( v18 != -1073741275 && v18 != -1073741790 && v18 != -1073741802 && v18 != -1073741637 )
          break;
      }
      v17 = (unsigned int)(v17 + 1);
      if ( (unsigned int)v17 >= v14 )
        goto LABEL_40;
    }
    v3 = v18;
  }
LABEL_40:
  if ( v3 < 0 )
    goto LABEL_45;
  InstallerClassMappedPropertyKeys = CmDeleteCommonClassRegKey(a1, a2, 32);
  if ( InstallerClassMappedPropertyKeys )
  {
    if ( InstallerClassMappedPropertyKeys != -1073741772 && InstallerClassMappedPropertyKeys != -1073741811 )
      goto LABEL_28;
  }
  CmRaiseDeleteEvent(a1, a2, 2u);
LABEL_45:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v3;
}
