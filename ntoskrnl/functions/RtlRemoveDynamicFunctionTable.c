__int64 __fastcall RtlRemoveDynamicFunctionTable(__int64 a1)
{
  unsigned int v1; // r15d
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbx
  volatile signed __int64 *p_UserCetLogging; // rsi
  unsigned int *v5; // rbx
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned __int64 *v8; // rax
  unsigned int v9; // r14d
  char v10; // al
  unsigned __int64 v13; // [rsp+58h] [rbp+10h]
  __int64 v14; // [rsp+60h] [rbp+18h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = *(_QWORD *)(a1 + 48);
  v14 = *(_QWORD *)(a1 + 40);
  if ( v14 - v13 >= 0xFFFFFFFF )
    return 3221225621LL;
  v1 = -1073741569;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  p_UserCetLogging = (volatile signed __int64 *)&Process[1].UserCetLogging;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].UserCetLogging, 0LL);
  v5 = *(unsigned int **)&Process[1].PrimaryGroup;
  if ( v5 )
  {
    v6 = *v5;
    v7 = 1;
    if ( *v5 > 1 )
    {
      v8 = (unsigned __int64 *)(v5 + 12);
      while ( *v8 < v13 )
      {
        ++v7;
        v8 += 3;
        if ( v7 >= v6 )
          goto LABEL_15;
      }
      if ( *(_QWORD *)&v5[6 * v7 + 6] == v13 && v5[6 * v7 + 8] == (_DWORD)v14 - (_DWORD)v13 )
      {
        v9 = v6 - 1;
        if ( v7 != v6 - 1 )
          memmove(&v5[6 * v7 + 4], &v5[4 * v7 + 10 + 2 * v7], 24LL * (v6 - v7 - 1));
        v1 = 0;
        *v5 = v9;
      }
    }
  }
LABEL_15:
  v10 = _InterlockedExchangeAdd64(p_UserCetLogging, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock(p_UserCetLogging);
  KeAbPostRelease((ULONG_PTR)p_UserCetLogging);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  return v1;
}
