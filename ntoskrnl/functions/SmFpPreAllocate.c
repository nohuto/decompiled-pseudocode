__int64 __fastcall SmFpPreAllocate(PEX_SPIN_LOCK SpinLock, unsigned int *a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  unsigned int *v7; // r12
  unsigned int v8; // ecx
  unsigned int v9; // r15d
  __int64 v10; // rbx
  _OWORD *Pool2; // rax
  _QWORD *v12; // rdi
  unsigned int v13; // edx
  unsigned int v14; // eax
  PVOID MappingAddress; // rax
  unsigned int v16; // eax
  KIRQL v17; // al
  __int128 v18; // xmm1
  int v19; // edx
  __int128 v20; // xmm0
  unsigned __int64 v21; // rbx
  __int128 v22; // xmm0
  unsigned int v23; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  _QWORD v30[16]; // [rsp+20h] [rbp-59h] BYREF

  v3 = *((_QWORD *)SpinLock + 4);
  v5 = a3;
  memset(v30, 0, 0x78uLL);
  HIDWORD(v30[1]) = 0;
  v30[3] = &v30[2];
  v7 = &a2[v5];
  LOWORD(v30[1]) = 1;
  v30[2] = &v30[2];
  BYTE2(v30[1]) = 6;
  v30[4] = v3;
  while ( a2 < v7 )
  {
    v8 = *a2;
    v9 = 0;
    v10 = *a2 & 0xF;
    *((_WORD *)&v30[12] + v10) = *a2 >> 4;
    if ( (v8 & 0xFF00000) != 0 )
    {
      while ( 1 )
      {
        Pool2 = (_OWORD *)ExAllocatePool2(64LL, 16LL, 1883663731LL);
        v12 = Pool2;
        if ( !Pool2 )
        {
LABEL_19:
          v23 = -1073741670;
          SmFpCleanup((__int64)v30);
          if ( v12 )
            ExFreePoolWithTag(v12, 0);
          return v23;
        }
        *Pool2 = 0LL;
        v13 = *a2;
        if ( (*a2 & 0xF) == 2 )
          break;
        v14 = *a2 & 0xF;
        if ( v14 != 3 )
        {
          if ( v14 >= 5 )
            MappingAddress = MmAllocateMappingAddress((unsigned __int16)(v13 >> 4) << 12, 0x6D526D73u);
          else
            MappingAddress = (PVOID)ExAllocatePool2(64LL, (unsigned __int16)((unsigned __int64)v13 >> 4), 1883663731LL);
LABEL_9:
          if ( !MappingAddress )
            goto LABEL_19;
          goto LABEL_10;
        }
        if ( !(unsigned int)SmAcquireReleaseCharges(
                              *((_QWORD *)SpinLock + 4),
                              (unsigned __int64)(unsigned __int16)((unsigned __int64)v13 >> 4) << 12,
                              1,
                              0) )
          goto LABEL_19;
        MappingAddress = (PVOID)(8LL * (v9 + 1));
LABEL_10:
        v12[1] = MappingAddress;
        ++v9;
        *v12 = v30[v10 + 5];
        v16 = (unsigned __int8)(*a2 >> 20);
        v30[v10 + 5] = v12;
        if ( v9 >= v16 )
          goto LABEL_11;
      }
      MappingAddress = (PVOID)SmKmAllocateMdlForLock(
                                *((_QWORD *)SpinLock + 4),
                                (unsigned __int64)(unsigned __int16)((unsigned __int64)*a2 >> 4) << 12);
      goto LABEL_9;
    }
LABEL_11:
    ++a2;
  }
  v17 = ExAcquireSpinLockExclusive(SpinLock);
  v18 = *(_OWORD *)&v30[7];
  v19 = v30[13];
  *((_QWORD *)SpinLock + 12) = v30[12];
  v20 = *(_OWORD *)&v30[5];
  v21 = v17;
  *((_DWORD *)SpinLock + 26) = v19;
  *(_OWORD *)(SpinLock + 10) = v20;
  v22 = *(_OWORD *)&v30[9];
  *(_OWORD *)(SpinLock + 14) = v18;
  *(_OWORD *)(SpinLock + 18) = v22;
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v21 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
      v29 = (v28 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v28;
      if ( v29 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v21);
  return 0;
}
