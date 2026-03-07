__int64 __fastcall ThreadUnlockWorker1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rcx
  __int64 v11; // rbx
  struct _HANDLEENTRY *v12; // rdi
  char v13; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rdi
  int v19; // esi
  PERESOURCE *v20; // rcx
  PERESOURCE *DomainLockRef; // [rsp+28h] [rbp-40h]
  char v22; // [rsp+30h] [rbp-38h] BYREF
  void *v23; // [rsp+38h] [rbp-30h]
  char v24; // [rsp+40h] [rbp-28h]
  __int64 v25; // [rsp+48h] [rbp-20h]
  char v26; // [rsp+50h] [rbp-18h]

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  v10 = *(_QWORD **)(v5 + 416);
  *(_QWORD *)(v5 + 416) = *v10;
  v11 = v10[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
    {
      v12 = (struct _HANDLEENTRY *)((char *)qword_1C02D0E08
                                  + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*(_DWORD *)v11);
      v13 = *((_BYTE *)v12 + 25);
      if ( (v13 & 1) != 0 && (v13 & 2) == 0 )
      {
        if ( IS_USERCRIT_OWNED_SHAREDONLY((__int64)v10, v7, v8, v9) )
        {
          DomainLockRef = GetDomainLockRef(12);
          v18 = &v22;
          v22 = 1;
          v23 = &gDomainDummyLock;
          v19 = 0;
          v24 = 0;
          v25 = 0LL;
          v26 = 0;
          do
          {
            v20 = (PERESOURCE *)*((_QWORD *)v18 - 1);
            if ( v20 )
            {
              if ( *v18 )
                tagDomLock::LockExclusive(v20);
              else
                ExEnterCriticalRegionAndAcquireResourceShared(*v20);
            }
            ++v19;
            v18 += 16;
          }
          while ( !v19 );
          v26 = 1;
          LockIntoSharedUserCritDeferredUnlockList(v11);
          if ( v26 && DomainLockRef )
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
        else if ( !gphePrimaryDestroyTarget
               || v12 == gphePrimaryDestroyTarget
               || gbInDestroyExclusiveUserCritDeferredUnlockList )
        {
          HMDestroyUnlockedObjectWorker(v12, v15, v16, v17);
        }
        else
        {
          ++gcSecondaryDestroyTargets;
          LockIntoExclusiveUserCritDeferredUnlockList(v11);
        }
        return 0LL;
      }
    }
  }
  return v11;
}
