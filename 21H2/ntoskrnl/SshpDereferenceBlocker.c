/*
 * XREFs of SshpDereferenceBlocker @ 0x1407F1648
 * Callers:
 *     SleepstudyHelperSetBlockerParentHandle @ 0x140259420 (SleepstudyHelperSetBlockerParentHandle.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x1407F15C0 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SshpSendSessionData @ 0x140809BEC (SshpSendSessionData.c)
 *     SleepstudyHelperDestroyLibrary @ 0x1409A1190 (SleepstudyHelperDestroyLibrary.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 */

void __fastcall SshpDereferenceBlocker(_QWORD *a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  void *v4; // rcx
  __int64 v5; // rsi
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
