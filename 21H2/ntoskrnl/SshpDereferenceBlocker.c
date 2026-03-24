/*
 * XREFs of SshpDereferenceBlocker @ 0x1406B7B14
 * Callers:
 *     SleepstudyHelperSetBlockerParentHandle @ 0x1402D1F00 (SleepstudyHelperSetBlockerParentHandle.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x1406B7AB0 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SshpSendSessionData @ 0x1408FACA8 (SshpSendSessionData.c)
 *     SleepstudyHelperDestroyLibrary @ 0x1408FB990 (SleepstudyHelperDestroyLibrary.c)
 * Callees:
 *     SshpFreeBlockerEntry @ 0x14057FC90 (SshpFreeBlockerEntry.c)
 */

void __fastcall SshpDereferenceBlocker(_QWORD *a1)
{
  _QWORD *v1; // rbx

  do
  {
    v1 = (_QWORD *)a1[35];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1[36] + 96LL), 0xFFFFFFFF) != 1 )
      break;
    SshpFreeBlockerEntry(a1);
    a1 = v1;
  }
  while ( v1 );
}
