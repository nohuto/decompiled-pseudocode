signed __int32 __fastcall AlpcpWalkConnectionList(__int64 a1)
{
  _QWORD **v1; // rbx
  _QWORD *i; // rdi
  signed __int32 result; // eax

  v1 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
  for ( i = *v1; i != v1; i = (_QWORD *)*i )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(i - 5), 0LL);
    if ( (_InterlockedExchangeAdd64(i - 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(i - 5);
    result = KeAbPostRelease((ULONG_PTR)(i - 5));
  }
  return result;
}
