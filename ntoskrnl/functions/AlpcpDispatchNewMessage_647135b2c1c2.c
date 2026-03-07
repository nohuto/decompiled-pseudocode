__int64 __fastcall AlpcpDispatchNewMessage(__int64 *a1)
{
  __int64 v1; // rsi
  ULONG_PTR v2; // rbx
  int v3; // r12d
  _QWORD *v5; // r15
  struct _KTHREAD *CurrentThread; // rbp
  int v7; // r14d
  signed __int64 *v8; // r14
  __int16 v9; // cx
  int v10; // eax
  __int16 v11; // cx
  unsigned int v12; // eax
  volatile signed __int32 *v13; // rax
  signed __int32 v14; // ecx
  signed __int64 *v15; // rsi
  __int64 v17; // rcx
  __int64 ProcessJob; // rax
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  signed __int64 *v20; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  v2 = a1[1];
  v3 = *((_DWORD *)a1 + 12);
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v5 = *(_QWORD **)(v1 + 16);
  CurrentThread = KeGetCurrentThread();
  v20 = 0LL;
  Object = 0LL;
  v7 = AlpcpReferenceAndLockTargetPortsAndCommunicationInfo(v1, &v20, &Object);
  if ( v7 < 0 )
  {
    AlpcpUnlockMessage(v2);
    return (unsigned int)v7;
  }
  else if ( (*(_DWORD *)(v1 + 416) & 0x20) == 0 || (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
  {
    v8 = v20;
    if ( (*(_DWORD *)(*a1 + 256) & 0x800000) == 0 || (*(_DWORD *)(a1[1] + 40) & 0x200) != 0 )
      goto LABEL_4;
    v17 = 0LL;
    if ( (v20[3] & 1) == 0 )
      v17 = v20[3];
    if ( v17 && (ProcessJob = PsGetProcessJob(v17)) != 0 && (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v5, v8, (signed __int64 *)Object);
      AlpcpUnlockMessage(v2);
      return 3221225526LL;
    }
    else
    {
LABEL_4:
      if ( (v8[32] & 0x20000) != 0 )
      {
        if ( *((unsigned __int16 *)a1 + 26) > (unsigned __int64)v8[34] )
        {
          AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v5, v8, (signed __int64 *)Object);
          AlpcpUnlockMessage(v2);
          return 3221225507LL;
        }
        else
        {
          *(_QWORD *)(v2 + 200) = 0LL;
          *(_WORD *)(v2 + 242) = *((_WORD *)a1 + 26);
          *(_WORD *)(v2 + 240) = *((_WORD *)a1 + 26) - 40;
          v9 = *((_WORD *)a1 + 27);
          *(_WORD *)(v2 + 244) = v9;
          *(_WORD *)(v2 + 246) = *((_WORD *)a1 + 28);
          v10 = *(_DWORD *)(v2 + 40);
          *(_OWORD *)(v2 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
          if ( (v3 & 0x10000) != 0 )
          {
            v11 = v9 & 0xDFFF;
            v12 = v10 | 0x200;
          }
          else
          {
            v11 = v9 | 0x2000;
            v12 = v10 & 0xFFFFFDFF;
          }
          *(_DWORD *)(v2 + 40) = v12;
          *(_WORD *)(v2 + 244) = v11;
          ObfReferenceObject((PVOID)v1);
          *(_DWORD *)(v2 + 40) |= 0x1000u;
          v13 = (volatile signed __int32 *)Object;
          *(_QWORD *)(v2 + 24) = v1;
          v14 = _InterlockedExchangeAdd(v13 + 100, 1u);
          v15 = (signed __int64 *)Object;
          *(_DWORD *)(v2 + 44) = v14 + 1;
          *(_QWORD *)(v2 + 120) = v15[7];
          *(_QWORD *)(v2 + 184) = v5;
          *(_QWORD *)(v2 + 192) = *v5;
          if ( v15 != v20 )
          {
            if ( _InterlockedCompareExchange64(v15 + 44, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v15 + 44);
            KeAbPostRelease((ULONG_PTR)(v15 + 44));
            v15 = (signed __int64 *)Object;
          }
          if ( (v3 & 0x20000) != 0 )
          {
            *(_DWORD *)(v2 + 40) &= ~0x100u;
            *(_WORD *)(v2 - 30) += 2;
            *(_QWORD *)(v2 + 32) = CurrentThread;
            _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v2);
            v15 = (signed __int64 *)Object;
          }
          a1[4] = (__int64)v20;
          a1[2] = (__int64)v5;
          AlpcpCompleteDispatchMessage(a1);
          ObfDereferenceObject(v15);
          return 0LL;
        }
      }
      else
      {
        AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v5, v8, (signed __int64 *)Object);
        AlpcpUnlockMessage(v2);
        return 3221227271LL;
      }
    }
  }
  else
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v5, v20, (signed __int64 *)Object);
    AlpcpUnlockMessage(v2);
    return 3221225527LL;
  }
}
