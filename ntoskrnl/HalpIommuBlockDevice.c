/*
 * XREFs of HalpIommuBlockDevice @ 0x1405153C0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1403AF2F4 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuDecreaseAliasTrack @ 0x1405155D4 (HalpIommuDecreaseAliasTrack.c)
 *     HalpIommuLeaveDmaDomain @ 0x140516044 (HalpIommuLeaveDmaDomain.c)
 *     HalpIommuDeleteDevice @ 0x140930ACC (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall HalpIommuBlockDevice(__int64 *a1)
{
  __int64 result; // rax
  char v2; // bp
  __int128 *v4; // rbx
  int AcpiDeviceMapping; // eax
  __int128 *v6; // rdx
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  result = 0LL;
  v2 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( !a1 )
    return result;
  v4 = (__int128 *)*a1;
  if ( *(_DWORD *)*a1 == 2 )
  {
    AcpiDeviceMapping = HalpIommuQueryAcpiDeviceMapping(*a1, (__int64)&v11);
    v6 = &v11;
    if ( AcpiDeviceMapping < 0 )
      v6 = v4;
    v4 = v6;
  }
  if ( *(_DWORD *)v4 != 1 )
    goto LABEL_10;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&HalpDeviceBlockUnblockPushLock, 0LL);
  v2 = 1;
  v8 = HalpIommuDecreaseAliasTrack(v4, &v13);
  if ( v8 < 0 )
    goto LABEL_10;
  v9 = v13;
  if ( *(__int64 *)(v13 + 24) <= 0 )
  {
    HalpMmAllocCtxFree(v7, *(_QWORD *)(v13 + 16));
    HalpMmAllocCtxFree(v10, v9);
LABEL_10:
    v8 = HalpIommuLeaveDmaDomain(a1, HalpIommuBypassDomain);
  }
  HalpIommuDeleteDevice(a1);
  if ( v2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock);
    KeAbPostRelease((ULONG_PTR)&HalpDeviceBlockUnblockPushLock);
  }
  return (unsigned int)v8;
}
