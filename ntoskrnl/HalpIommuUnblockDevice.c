/*
 * XREFs of HalpIommuUnblockDevice @ 0x140516330
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     HalpIommuCheckDpptException @ 0x14038D4B4 (HalpIommuCheckDpptException.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1403AF2F4 (HalpIommuQueryAcpiDeviceMapping.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpIommuCheckExceptionList @ 0x14050B910 (HalpIommuCheckExceptionList.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x1405154C8 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuGetAcpiDeviceMapCount @ 0x140515D7C (HalpIommuGetAcpiDeviceMapCount.c)
 *     HalpIommuJoinDmaDomain @ 0x140515ED4 (HalpIommuJoinDmaDomain.c)
 *     HalpIommuCreateDevice @ 0x140822B28 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140930ACC (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall HalpIommuUnblockDevice(__int128 *Src, __int64 a2, __int64 *a3)
{
  __int64 v3; // r14
  __int128 *v5; // rdi
  char v6; // r15
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  int AcpiDeviceMapping; // eax
  __int128 *v11; // rcx
  int Device; // eax
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rdi
  char v16; // si
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]
  char v23; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+48h] BYREF

  v23 = 0;
  *a3 = 0LL;
  v24 = 0LL;
  v3 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v19 = 0LL;
  v5 = Src;
  v6 = 0;
  if ( !HalpIommuCheckDpptException(Src) && !HalpIommuCheckExceptionList(v7) )
  {
    if ( HalpHvIommu && !HalpHvIommuDeviceDomain )
      return 3221225659LL;
    if ( *v8 == 2 )
    {
      AcpiDeviceMapping = HalpIommuQueryAcpiDeviceMapping((__int64)v8, (__int64)&v21);
      v11 = &v21;
      if ( AcpiDeviceMapping < 0 )
        v11 = v5;
      v5 = v11;
    }
    Device = HalpIommuCreateDevice(v5, (__int64)&v24);
    v14 = Device;
    if ( Device >= 0 )
    {
      v16 = 1;
      if ( *(_DWORD *)v5 == 1
        && ((unsigned int)HalpIommuGetAcpiDeviceMapCount((__int64)v5) > 1 || (*((_BYTE *)v5 + 4) & 1) != 0) )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&HalpDeviceBlockUnblockPushLock, 0LL);
        v6 = 1;
        v14 = HalpIommuCreateIncreaseAliasTrack(v5, &v19);
        if ( v14 < 0 )
          goto LABEL_26;
        v3 = v19;
        if ( *(__int64 *)(v19 + 24) > 1 )
          goto LABEL_26;
      }
      v15 = v24;
      if ( HalpHvIommu )
      {
        v17 = *(_QWORD *)(v24 + 32);
        v20 = 0LL;
        v14 = ((__int64 (__fastcall *)(__int64, __int64 *))qword_140C622B0)(v17, &v20);
      }
      else
      {
        v14 = HalpIommuJoinDmaDomain(v24, HalpIommuBypassDomain, &v23);
        if ( v14 == -1073741776 && (v23 & 1) != 0 )
        {
          v14 = 0;
          HalpIommuDeleteDevice(v15);
          v15 = 0LL;
          v24 = 0LL;
          v16 = 0;
        }
      }
      if ( v6 )
      {
LABEL_26:
        if ( (_InterlockedExchangeAdd64(
                (volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock,
                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock);
        KeAbPostRelease((ULONG_PTR)&HalpDeviceBlockUnblockPushLock);
        v3 = v19;
        v15 = v24;
      }
      if ( v14 >= 0 )
        goto LABEL_13;
      if ( v16 )
        HalpIommuDeleteDevice(v15);
    }
    else if ( Device == -1073741275 )
    {
      v15 = v24;
      v14 = 0;
LABEL_13:
      *a3 = v15;
      return (unsigned int)v14;
    }
    if ( v3 )
    {
      v18 = *(_QWORD *)(v3 + 16);
      if ( v18 )
        HalpMmAllocCtxFree(v13, v18);
      HalpMmAllocCtxFree(v13, v3);
    }
    return (unsigned int)v14;
  }
  return 0LL;
}
