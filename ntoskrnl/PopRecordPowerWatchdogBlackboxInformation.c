void PopRecordPowerWatchdogBlackboxInformation()
{
  KIRQL v0; // al
  __int64 v1; // rdx
  int v2; // edi
  unsigned __int64 v3; // rbp
  void *v4; // rbx
  int v5; // ecx
  bool v6; // zf
  __int64 v7; // rsi
  _DWORD *Pool2; // rax
  _DWORD *v9; // r14
  __int64 i; // rdi
  int v11; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  __int128 InputBuffer; // [rsp+30h] [rbp-38h] BYREF
  __int128 v17; // [rsp+40h] [rbp-28h]
  LARGE_INTEGER v18; // [rsp+70h] [rbp+8h] BYREF

  InputBuffer = 0LL;
  v17 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  v1 = PopWatchdogList;
  v2 = 0;
  v3 = v0;
  v4 = 0LL;
  if ( (__int64 *)PopWatchdogList == &PopWatchdogList )
    goto LABEL_13;
  do
  {
    v5 = v2++;
    v6 = *(_BYTE *)(v1 + 208) == 0;
    v1 = *(_QWORD *)v1;
    if ( v6 )
      v2 = v5;
  }
  while ( (__int64 *)v1 != &PopWatchdogList );
  if ( !v2 )
  {
LABEL_13:
    v7 = 0LL;
  }
  else
  {
    v7 = 80LL * (unsigned int)(v2 - 1) + 96;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, v7, 1111641936LL);
    v4 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 1;
      v9 = Pool2 + 4;
      Pool2[1] = v7;
      Pool2[2] = v2;
      for ( i = PopWatchdogList; (__int64 *)i != &PopWatchdogList; i = *(_QWORD *)i )
      {
        if ( *(_BYTE *)(i + 208) )
        {
          v11 = *(_DWORD *)(i + 16);
          v18.QuadPart = 0LL;
          *v9 = v11;
          *((_QWORD *)v9 + 9) = *(_QWORD *)(i + 288);
          v9[1] = (RtlGetInterruptTimePrecise(&v18) - *(_QWORD *)(i + 296)) / 0x2710uLL;
          v9[2] = *(_DWORD *)(i + 216);
          v9[3] = *(_DWORD *)(i + 224);
          *((_QWORD *)v9 + 2) = *(_QWORD *)(i + 232);
          *((_QWORD *)v9 + 3) = *(_QWORD *)(i + 240);
          *((_QWORD *)v9 + 4) = *(_QWORD *)(i + 248);
          *((_QWORD *)v9 + 5) = *(_QWORD *)(i + 256);
          *((_QWORD *)v9 + 8) = i + 216;
          *((_QWORD *)v9 + 6) = *(_QWORD *)(i + 272);
          *((_QWORD *)v9 + 7) = *(_QWORD *)(i + 280);
          v9 += 20;
        }
      }
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)&PopWatchdogLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v6 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v6 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  if ( v7 )
  {
    *(_QWORD *)&v17 = 0LL;
    *((_QWORD *)&v17 + 1) = 8LL;
    *(_QWORD *)&InputBuffer = v4;
    *((_QWORD *)&InputBuffer + 1) = (unsigned int)v7;
    NtPowerInformation(UpdateBlackBoxRecorder, &InputBuffer, 0x20u, 0LL, 0);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x42424F50u);
}
