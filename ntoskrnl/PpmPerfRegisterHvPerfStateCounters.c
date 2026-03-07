__int64 __fastcall PpmPerfRegisterHvPerfStateCounters(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r13
  unsigned int v3; // r12d
  unsigned int v4; // ebp
  __int64 i; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // ecx
  int LpIndexFromProcessorIndex; // r15d
  unsigned int v10; // ebx
  int v11; // ebx

  if ( (HvlEnlightenments & 0x400) == 0 )
    return (unsigned int)-1073741637;
  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)(v1 + 16);
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v4 = 0;
  if ( !v3 )
    return (unsigned int)PpmRegisterPerfStates(v1, 1);
  for ( i = 0LL; ; i += 32LL )
  {
    v6 = *(_QWORD *)(v1 + 552);
    v7 = 0LL;
    v8 = *(_DWORD *)(i + v6 + 28);
    if ( v8 == 1 )
    {
      LpIndexFromProcessorIndex = *(_DWORD *)(i + v6);
      goto LABEL_9;
    }
    if ( v8 == 2 )
      goto LABEL_14;
    v10 = *(_DWORD *)(i + v6);
    if ( v10 == -1 )
      break;
    LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(v10);
    v7 = KeGetPrcb(v10) + 33600;
LABEL_9:
    if ( v2 )
    {
      if ( LpIndexFromProcessorIndex != -1 )
      {
        v11 = HvlRegisterPerfFeedbackCounters(LpIndexFromProcessorIndex, (__int128 *)(v2 + 104LL * v4));
        if ( v11 < 0 )
          goto LABEL_17;
      }
    }
    if ( v7 )
      *(_DWORD *)(v7 + 224) = 3;
LABEL_14:
    if ( ++v4 >= v3 )
      return (unsigned int)PpmRegisterPerfStates(v1, 1);
  }
  v11 = -1073741811;
LABEL_17:
  PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)v11;
}
