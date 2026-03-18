/*
 * XREFs of PopSleepstudyRegisterSessionCallback @ 0x140849AE4
 * Callers:
 *     PopPowerRequestStatsInitialize @ 0x140B6625C (PopPowerRequestStatsInitialize.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

void __fastcall PopSleepstudyRegisterSessionCallback(__int64 a1)
{
  __int64 *v2; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  v2 = (__int64 *)qword_140C3BC48;
  if ( *(__int64 **)qword_140C3BC48 != &PopSleepstudySessionContext )
    __fastfail(3u);
  *(_QWORD *)a1 = &PopSleepstudySessionContext;
  *(_QWORD *)(a1 + 8) = v2;
  *v2 = a1;
  qword_140C3BC48 = a1;
  (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 16))(
    *((unsigned int *)&unk_140C3BD10 + 26 * (unsigned int)dword_140C3BD08),
    *((_QWORD *)&unk_140C3BD10 + 13 * (unsigned int)dword_140C3BD08 + 1));
  PopReleaseRwLock(&PopSleepstudySessionLock);
}
