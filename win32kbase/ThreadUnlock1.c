__int64 __fastcall ThreadUnlock1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rbx
  struct _HANDLEENTRY *v10; // rdi
  char v11; // al
  char *v12; // rdi
  int v13; // esi
  PERESOURCE *v14; // rcx
  PERESOURCE *DomainLockRef; // [rsp+28h] [rbp-40h]
  char v16; // [rsp+30h] [rbp-38h] BYREF
  void *v17; // [rsp+38h] [rbp-30h]
  char v18; // [rsp+40h] [rbp-28h]
  __int64 v19; // [rsp+48h] [rbp-20h]
  char v20; // [rsp+50h] [rbp-18h]

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  v7 = *(_QWORD **)(v5 + 416);
  *(_QWORD *)(v5 + 416) = *v7;
  v8 = v7[1];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      v10 = (struct _HANDLEENTRY *)((char *)qword_1C02D0E08
                                  + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*(_DWORD *)v8);
      v11 = *((_BYTE *)v10 + 25);
      if ( (v11 & 1) != 0 && (v11 & 2) == 0 )
      {
        if ( IS_USERCRIT_OWNED_SHAREDONLY() )
        {
          DomainLockRef = GetDomainLockRef(12);
          v12 = &v16;
          v16 = 1;
          v17 = &gDomainDummyLock;
          v13 = 0;
          v18 = 0;
          v19 = 0LL;
          v20 = 0;
          do
          {
            v14 = (PERESOURCE *)*((_QWORD *)v12 - 1);
            if ( v14 )
            {
              if ( *v12 )
                tagDomLock::LockExclusive(v14);
              else
                ExEnterCriticalRegionAndAcquireResourceShared(*v14);
            }
            ++v13;
            v12 += 16;
          }
          while ( !v13 );
          v20 = 1;
          LockIntoSharedUserCritDeferredUnlockList(v8);
          if ( v20 && DomainLockRef )
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
        else if ( !gphePrimaryDestroyTarget
               || v10 == gphePrimaryDestroyTarget
               || gbInDestroyExclusiveUserCritDeferredUnlockList )
        {
          HMDestroyUnlockedObjectWorker(v10);
        }
        else
        {
          ++gcSecondaryDestroyTargets;
          LockIntoExclusiveUserCritDeferredUnlockList(v8);
        }
        return 0LL;
      }
    }
  }
  return v8;
}
