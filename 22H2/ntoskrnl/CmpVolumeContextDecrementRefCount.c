/*
 * XREFs of CmpVolumeContextDecrementRefCount @ 0x14071BE10
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14071BF04 (CmpCompleteUnloadKey.c)
 *     CmpDestroyHive @ 0x140729DF8 (CmpDestroyHive.c)
 *     CmShutdownSystem @ 0x14086B948 (CmShutdownSystem.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     CmpVolumeContextCleanup @ 0x140872E20 (CmpVolumeContextCleanup.c)
 */

void __fastcall CmpVolumeContextDecrementRefCount(PPRIVILEGE_SET Privileges)
{
  volatile signed __int64 *v1; // rdi
  signed __int64 v3; // rax
  signed __int64 i; // rcx
  signed __int64 v5; // rtt
  __int64 v6; // rdx
  __int64 v7; // rcx
  PPRIVILEGE_SET *Luid; // rdx

  v1 = *(volatile signed __int64 **)&Privileges->Privilege[0].Attributes;
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
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
  v6 = _InterlockedDecrement64((volatile signed __int64 *)&Privileges[1].Control);
  if ( v6 > 0 )
  {
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1);
    KeAbPostRelease((ULONG_PTR)v1);
  }
  else
  {
    if ( v6 )
      __fastfail(0xEu);
    v7 = *(_QWORD *)&Privileges->PrivilegeCount;
    if ( *(PPRIVILEGE_SET *)(*(_QWORD *)&Privileges->PrivilegeCount + 8LL) != Privileges
      || (Luid = (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid, *Luid != Privileges) )
    {
      __fastfail(3u);
    }
    *Luid = (PPRIVILEGE_SET)v7;
    *(_QWORD *)(v7 + 8) = Luid;
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    CmpVolumeContextCleanup(Privileges);
    CmSiFreeMemory(Privileges);
  }
}
