__int64 __fastcall PopManageTransitionRecordRequest(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  _KPROCESS *Process; // rcx
  struct _KTHREAD *CurrentThread; // rax

  LOBYTE(a4) = a1;
  if ( !a2 )
    return 3221225485LL;
  if ( (unsigned int)a3 < 0x28 )
    return 3221225507LL;
  if ( (unsigned int)(dword_140C3CF04 - 1) > 1 )
    return 3221226195LL;
  v5 = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 1 )
      return PoDelistPowerStateTransitionBlocker(v5, a2, a3, a4);
    return 3221225485LL;
  }
  if ( (_BYTE)a4 == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    CurrentThread = KeGetCurrentThread();
  }
  else
  {
    if ( (_BYTE)a4 )
      return 3221225485LL;
    Process = *(_KPROCESS **)(a2 + 16);
    CurrentThread = *(struct _KTHREAD **)(a2 + 24);
  }
  if ( Process && CurrentThread )
    return PopPushPowerStateTransitionRecord(Process, CurrentThread, *(_QWORD *)(a2 + 32));
  return 3221225485LL;
}
