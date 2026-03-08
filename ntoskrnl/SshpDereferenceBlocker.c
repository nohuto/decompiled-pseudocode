/*
 * XREFs of SshpDereferenceBlocker @ 0x1407263FC
 * Callers:
 *     SleepstudyHelperSetBlockerParentHandle @ 0x140300100 (SleepstudyHelperSetBlockerParentHandle.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140726370 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SshpSendSessionData @ 0x140879EBC (SshpSendSessionData.c)
 *     SleepstudyHelperDestroyLibrary @ 0x14099EEB0 (SleepstudyHelperDestroyLibrary.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 */

void __fastcall SshpDereferenceBlocker(_QWORD *a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rdi
  void *v4; // rcx
  __int64 v5; // rbx
  void *v6; // rcx
  void *v7; // rcx

  do
  {
    v2 = (_QWORD *)a1[36];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1[37] + 112LL), 0xFFFFFFFF) != 1 )
      break;
    v3 = (_QWORD *)a1[37];
    v4 = (void *)v3[11];
    v5 = v3[4];
    if ( v4 )
      CmpFreeTransientPoolWithTag(v4, *(_DWORD *)(v5 + 24));
    v6 = (void *)v3[12];
    if ( v6 )
      CmpFreeTransientPoolWithTag(v6, *(_DWORD *)(v5 + 24));
    v7 = (void *)v3[13];
    if ( v7 )
      CmpFreeTransientPoolWithTag(v7, *(_DWORD *)(v5 + 24));
    CmpFreeTransientPoolWithTag(v3, *(_DWORD *)(v5 + 24));
    CmpFreeTransientPoolWithTag(a1, *(_DWORD *)(v5 + 24));
    a1 = v2;
  }
  while ( v2 );
}
