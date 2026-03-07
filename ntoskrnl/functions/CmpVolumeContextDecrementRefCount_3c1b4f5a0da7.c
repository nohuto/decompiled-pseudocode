void __fastcall CmpVolumeContextDecrementRefCount(PPRIVILEGE_SET Privileges)
{
  unsigned __int64 *v1; // rdi
  signed __int64 v3; // rax
  signed __int64 i; // rcx
  signed __int64 v5; // rtt
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  PPRIVILEGE_SET *Luid; // rcx

  v1 = *(unsigned __int64 **)&Privileges->Privilege[0].Attributes;
  _m_prefetchw(&Privileges[1].Control);
  v3 = *(_QWORD *)&Privileges[1].Control;
  for ( i = v3 - 1; i > 0; i = v3 - 1 )
  {
    v5 = v3;
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)&Privileges[1].Control, i, v3);
    if ( v5 == v3 )
      return;
  }
  if ( i )
    __fastfail(0xEu);
  v6 = KeAbPreAcquire((__int64)v1, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v6, (__int64)v1);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v8 = _InterlockedDecrement64((volatile signed __int64 *)&Privileges[1].Control);
  if ( v8 > 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1);
    KeAbPostRelease((ULONG_PTR)v1);
  }
  else
  {
    if ( v8 )
      __fastfail(0xEu);
    v9 = *(_QWORD *)&Privileges->PrivilegeCount;
    if ( *(PPRIVILEGE_SET *)(*(_QWORD *)&Privileges->PrivilegeCount + 8LL) != Privileges
      || (Luid = (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid, *Luid != Privileges) )
    {
      __fastfail(3u);
    }
    *Luid = (PPRIVILEGE_SET)v9;
    *(_QWORD *)(v9 + 8) = Luid;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1);
    KeAbPostRelease((ULONG_PTR)v1);
    CmpVolumeContextCleanup(Privileges);
    CmSiFreeMemory(Privileges);
  }
}
