void __fastcall PopSleepstudyRegisterSessionCallback(__int64 a1)
{
  __int64 *v2; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  v2 = (__int64 *)qword_140C3B868;
  if ( *(__int64 **)qword_140C3B868 != &PopSleepstudySessionContext )
    __fastfail(3u);
  *(_QWORD *)a1 = &PopSleepstudySessionContext;
  *(_QWORD *)(a1 + 8) = v2;
  *v2 = a1;
  qword_140C3B868 = a1;
  (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 16))(
    *((unsigned int *)&unk_140C3B930 + 26 * (unsigned int)dword_140C3B928),
    *((_QWORD *)&unk_140C3B930 + 13 * (unsigned int)dword_140C3B928 + 1));
  PopReleaseRwLock((ULONG_PTR)&PopSleepstudySessionLock);
}
