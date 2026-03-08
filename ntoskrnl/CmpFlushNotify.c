/*
 * XREFs of CmpFlushNotify @ 0x14074B6C4
 * Callers:
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     CmpPerformUnloadKey @ 0x14074A194 (CmpPerformUnloadKey.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14074AF50 (CmpFlushNotifiesOnKeyBodyList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpPostNotify @ 0x1406B3790 (CmpPostNotify.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFlushNotify(__int64 a1, __int64 a2, __int128 *a3)
{
  char v4; // si
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  char *v10; // rbx

  v4 = a2;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
    if ( !(_BYTE)a2 )
    {
      v7 = KeAbPreAcquire(v6 + 1680, 0LL);
      v8 = v7;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 1680), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 1680), v7, v6 + 1680);
      if ( v8 )
        *(_BYTE *)(v8 + 18) = 1;
    }
    v9 = *(_QWORD *)(a1 + 16);
    if ( !v9 )
      goto LABEL_19;
    if ( *(_QWORD *)(v9 + 16) != v9 + 16 )
      CmpPostNotify(v9, a2, (__int64)a3, 267LL, 0, 0LL, a3);
    v10 = *(char **)(a1 + 16);
    if ( v10 )
    {
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v10 + 56));
      **((_QWORD **)v10 + 1) = *(_QWORD *)v10;
      if ( *(_QWORD *)v10 )
        *(_QWORD *)(*(_QWORD *)v10 + 8LL) = *((_QWORD *)v10 + 1);
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !v4 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1680));
        KeAbPostRelease(v6 + 1680);
      }
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
LABEL_19:
      if ( !v4 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1680));
        KeAbPostRelease(v6 + 1680);
      }
    }
  }
}
