/*
 * XREFs of RtlRemoveDynamicFunctionTable @ 0x14023E59C
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlRemoveDynamicFunctionTable(__int64 a1)
{
  unsigned int SessionId; // r12d
  unsigned int v2; // r13d
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // rbx
  ULONG_PTR p_UserCetLogging; // rsi
  unsigned int *v6; // rbx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned __int64 *v9; // rax
  unsigned int v10; // r13d
  char v11; // di
  struct _KTHREAD *v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // ecx
  char *p_Process; // rbx
  int v16; // edx
  unsigned __int64 v19; // [rsp+80h] [rbp+18h]
  __int64 v20; // [rsp+88h] [rbp+20h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v19 = *(_QWORD *)(a1 + 48);
  v20 = *(_QWORD *)(a1 + 40);
  SessionId = -1;
  if ( v20 - v19 >= 0xFFFFFFFF )
    return 3221225621LL;
  v2 = -1073741569;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  p_UserCetLogging = (ULONG_PTR)&Process[1].UserCetLogging;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].UserCetLogging, 0LL);
  v6 = *(unsigned int **)&Process[1].PrimaryGroup;
  if ( v6 )
  {
    v7 = *v6;
    v8 = 1;
    if ( *v6 > 1 )
    {
      v9 = (unsigned __int64 *)(v6 + 12);
      while ( *v9 < v19 )
      {
        ++v8;
        v9 += 3;
        if ( v8 >= v7 )
          goto LABEL_15;
      }
      if ( *(_QWORD *)&v6[6 * v8 + 6] == v19 && v6[6 * v8 + 8] == (_DWORD)v20 - (_DWORD)v19 )
      {
        v10 = v7 - 1;
        if ( v8 != v7 - 1 )
          memmove(&v6[6 * v8 + 4], &v6[4 * v8 + 10 + 2 * v8], 24LL * (v7 - v8 - 1));
        *v6 = v10;
        v2 = 0;
      }
    }
  }
LABEL_15:
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)p_UserCetLogging, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
    ExfTryToWakePushLock(p_UserCetLogging);
  v12 = KeGetCurrentThread();
  if ( p_UserCetLogging - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx(v12->ApcState.Process);
  _disable();
  v13 = p_UserCetLogging & 0x7FFFFFFFFFFFFFFCLL;
  v14 = 0;
  p_Process = (char *)&v12[1].Process;
  do
  {
    if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == v13
      && p_Process[18]
      && (*(_DWORD *)p_Process & 1) == 0
      && *((_DWORD *)p_Process + 2) == SessionId )
    {
      p_Process[18] = 0;
      goto LABEL_24;
    }
    ++v14;
    p_Process += 96;
  }
  while ( v14 < 6 );
  p_Process = 0LL;
LABEL_24:
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v13, 0x7FFFFFFFFFFFFFFCLL);
      _disable();
    }
    v16 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    v12->AbEntrySummary |= 1 << p_Process[16];
    _enable();
    if ( v16 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v12, p_UserCetLogging, v16);
  }
  else
  {
    if ( (*((_DWORD *)&v12->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v12, p_UserCetLogging, SessionId, 0LL);
    _enable();
  }
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  return v2;
}
