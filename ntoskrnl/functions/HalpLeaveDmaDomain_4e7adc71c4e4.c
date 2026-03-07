__int64 __fastcall HalpLeaveDmaDomain(__int64 a1)
{
  __int64 v1; // rbp
  volatile signed __int64 *v3; // rbx
  int v4; // esi

  v1 = *(_QWORD *)(a1 + 512);
  if ( !*(_DWORD *)(v1 + 48) )
  {
LABEL_12:
    HalpDmaDereferenceDomainObject((__int64 *)v1);
    *(_QWORD *)(a1 + 512) = 0LL;
    return 0;
  }
  v3 = (volatile signed __int64 *)(a1 + 320);
  ExAcquirePushLockExclusiveEx(a1 + 320, 0LL);
  if ( *(_BYTE *)(a1 + 346) )
  {
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    goto LABEL_10;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(HalpDmaIommuInterfaceFcnTable + 24))(*(_QWORD *)(a1 + 544));
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  if ( v4 >= 0 )
  {
LABEL_10:
    if ( *(_DWORD *)(v1 + 48) == 3 )
      (*(void (__fastcall **)(_QWORD))(HalpDmaIommuInterfaceFcnTable + 136))(*(_QWORD *)(a1 + 560));
    goto LABEL_12;
  }
  return (unsigned int)v4;
}
