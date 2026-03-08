/*
 * XREFs of SshpFreeDataEntry @ 0x14099E728
 * Callers:
 *     SleepstudyHelperCreateBlockerData @ 0x14099ECF0 (SleepstudyHelperCreateBlockerData.c)
 *     SleepstudyHelperDestroyBlockerData @ 0x14099EE80 (SleepstudyHelperDestroyBlockerData.c)
 *     SleepstudyHelperDestroyLibrary @ 0x14099EEB0 (SleepstudyHelperDestroyLibrary.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1402A4AB8 (SSHSupportReleasePushLockExclusive.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 */

void __fastcall SshpFreeDataEntry(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  unsigned int i; // edi

  ExAcquirePushLockExclusiveEx(a1[2] + 16LL, 0LL);
  v2 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  SSHSupportReleasePushLockExclusive((volatile signed __int64 *)(a1[2] + 16LL));
  for ( i = 0; i < *((_DWORD *)a1 + 10); ++i )
    CmpFreeTransientPoolWithTag((void *)a1[4 * i + 7], *(_DWORD *)(a1[2] + 24LL));
  CmpFreeTransientPoolWithTag(a1, *(_DWORD *)(a1[2] + 24LL));
}
