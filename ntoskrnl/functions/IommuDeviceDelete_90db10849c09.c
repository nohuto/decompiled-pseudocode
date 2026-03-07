__int64 __fastcall IommuDeviceDelete(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 **v6; // rcx
  __int64 *v7; // rax
  __int64 *v8; // [rsp+40h] [rbp+8h] BYREF

  result = 0LL;
  v8 = 0LL;
  if ( *(_QWORD *)(a1 + 24) || *(_QWORD *)(a1 + 72) )
    return 3221227272LL;
  if ( !*(_BYTE *)(a1 + 266) )
    goto LABEL_9;
  IommupDeviceGetPasidDevice(a1, a2, 1, &v8);
  ExAcquirePushLockExclusiveEx(a1 + 376, 0LL);
  v4 = a1 + 360;
  v5 = *(_QWORD *)(a1 + 360);
  v6 = *(__int64 ***)(a1 + 368);
  if ( *v6 != (__int64 *)(a1 + 360) )
    __fastfail(3u);
  v7 = v8;
  *v8 = v4;
  v7[1] = (__int64)v6;
  *v6 = v7;
  *(_QWORD *)(a1 + 368) = v7;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 376), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 376));
  KeAbPostRelease(a1 + 376);
  result = a1 + 360 != v5 ? 0xC0000708 : 0;
  if ( v5 == v4 )
  {
LABEL_9:
    if ( _InterlockedExchange((volatile __int32 *)(a1 + 16), 1) != 2 )
      return HalpIommuDeleteDevice((__int64 *)a1);
  }
  return result;
}
