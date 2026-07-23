/*
 * XREFs of TpPostTask @ 0x180012A98
 * Callers:
 *     RtlQueueWorkItem @ 0x18000B780 (RtlQueueWorkItem.c)
 *     TppWorkPost @ 0x1800129B8 (TppWorkPost.c)
 *     TppWorkCallbackPrologRelease @ 0x18001FEF8 (TppWorkCallbackPrologRelease.c)
 *     TppDirectExecuteCallback @ 0x180079950 (TppDirectExecuteCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1800A02F0 (NtReleaseWorkerFactoryWorker.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180111E30 (TppAdjustRunningThreadGoalWithLock.c)
 */

int __fastcall TpPostTask(__int64 a1, char *a2, int a3, __int64 a4)
{
  char *v4; // rdi
  __int64 v6; // rcx
  signed __int32 v7; // eax
  _RTL_SRWLOCK **v8; // rbx
  _RTL_SRWLOCK *v9; // rsi
  _RTL_SRWLOCK **Value; // rax
  int v11; // eax
  int v12; // r8d
  __int64 *ThreadPoolData; // rax
  __int64 v14; // rax
  signed __int64 v15; // rax
  int v16; // edx
  signed __int64 v17; // rtt
  signed __int32 v18; // edx
  signed __int32 v19; // ett
  signed __int64 v21; // [rsp+30h] [rbp+8h]

  v4 = a2;
  if ( !a2 )
  {
    if ( a4 && (*(_BYTE *)(a4 + 56) & 2) != 0 )
    {
      v4 = (char *)TppPoolpSerializedPool;
      goto LABEL_35;
    }
    v4 = (char *)TppPoolpGlobalPool;
  }
  if ( v4 == (char *)TppPoolpSerializedPool )
LABEL_35:
    a3 = 1;
  v6 = *(unsigned int *)(a1 + 8);
  _m_prefetchw(v4 + 428);
  v7 = *((_DWORD *)v4 + 107);
  while ( v7 == -2 )
  {
    v18 = v6;
LABEL_30:
    v19 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)v4 + 107, v18, v7);
    if ( v19 == v7 )
      goto LABEL_6;
  }
  if ( v7 != (_DWORD)v6 && v7 != -1 )
  {
    v18 = -1;
    goto LABEL_30;
  }
LABEL_6:
  v8 = (_RTL_SRWLOCK **)(a1 + 16);
  v9 = (_RTL_SRWLOCK *)(*(_QWORD *)&v4[8 * a3 + 16] + 24 * v6);
  RtlAcquireSRWLockExclusive(v9 + 2);
  Value = (_RTL_SRWLOCK **)v9[1].Value;
  if ( *Value != v9 )
    __fastfail(3u);
  *v8 = v9;
  v8[1] = (_RTL_SRWLOCK *)Value;
  *Value = (_RTL_SRWLOCK *)v8;
  v9[1].Value = (unsigned __int64)v8;
  RtlReleaseSRWLockExclusive(v9 + 2);
  if ( !v4 || (v11 = *((_DWORD *)v4 + 110)) == 0 )
    v11 = MEMORY[0x7FFE03C0];
  if ( *((_DWORD *)v4 + 106) != v11 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v4 + 9);
    TppAdjustRunningThreadGoalWithLock(v4);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v4 + 9);
  }
  v12 = 0;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v14 = *ThreadPoolData;
    if ( *(char **)(v14 + 48) == v4 && *(_DWORD *)(v14 + 128) == 3 )
    {
      *(_DWORD *)(v14 + 128) = 4;
      v12 = 1;
    }
  }
  _m_prefetchw(v4 + 8);
  v15 = *((_QWORD *)v4 + 1);
  LODWORD(v21) = v15;
  do
  {
    if ( (v21 & 0xFFFF0000) != 0 || v12 )
    {
      v16 = 0;
    }
    else
    {
      LODWORD(v21) = (unsigned __int16)v21 | ((v21 & 0xFFFF0000) + 0x10000);
      v16 = 1;
    }
    v17 = v15;
    HIDWORD(v21) = HIDWORD(v15) + 1;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 1, v21, v15);
    LODWORD(v21) = v15;
  }
  while ( v17 != v15 );
  if ( v16 )
    LODWORD(v15) = NtReleaseWorkerFactoryWorker(*((HANDLE *)v4 + 7));
  return v15;
}
