__int64 __fastcall IommupDeviceDisableSvm(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v5; // rbp
  __int64 *v6; // rbx
  __int64 v7; // r8
  unsigned int v8; // ebp
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v9 = 0LL;
  if ( !IommupDeviceGetPasidDevice(a1, a2, 0, &v9) )
    return 3221225473LL;
  if ( (*(_DWORD *)(a1 + 384) & 4) != 0 )
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 320))(*(_QWORD *)(a1 + 280), a1 + 384);
  v5 = v9;
  if ( HalpHvIommu )
  {
    IommupHvDetachPasidDevice(a1);
  }
  else
  {
    v6 = *(__int64 **)(v9 + 56);
    v2 = *(_DWORD *)(*v6 + 16);
    IommuDisableDevicePasid((__int64)v6, a1);
    IommupUnmapDeviceInternal(*v6, a1, v7);
  }
  v8 = IommupPasidDeviceDelete(v5);
  if ( !HalpHvIommu )
    HalpIommuFreeDomainId(*(_QWORD *)(a1 + 32), v2);
  ExAcquirePushLockExclusiveEx(a1 + 376, 0LL);
  if ( *(_QWORD *)(a1 + 360) != a1 + 360 )
    v8 = -1073740024;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 376), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 376));
  KeAbPostRelease(a1 + 376);
  *(_DWORD *)(a1 + 384) &= 0xFFFFFF03;
  return v8;
}
