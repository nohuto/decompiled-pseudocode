/*
 * XREFs of PopSleepstudyRegisterSessionCallback @ 0x140853530
 * Callers:
 *     PopPowerRequestStatsInitialize @ 0x140B24AB0 (PopPowerRequestStatsInitialize.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __fastcall PopSleepstudyRegisterSessionCallback(__int64 a1)
{
  __int64 *v2; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  v2 = (__int64 *)qword_140C1FF88;
  if ( *(__int64 **)qword_140C1FF88 != PopSleepstudySessionContext )
    __fastfail(3u);
  *(_QWORD *)a1 = PopSleepstudySessionContext;
  *(_QWORD *)(a1 + 8) = v2;
  *v2 = a1;
  qword_140C1FF88 = a1;
  (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 16))(
    *((unsigned int *)&unk_140C20050 + 26 * (unsigned int)dword_140C20048),
    *((_QWORD *)&unk_140C20050 + 13 * (unsigned int)dword_140C20048 + 1));
  PopReleaseRwLock((ULONG_PTR)&PopSleepstudySessionLock);
}
