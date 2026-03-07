__int64 __fastcall MiZeroPageCalibrate(int *a1)
{
  unsigned __int64 v1; // rbp
  unsigned int v3; // r9d
  __int64 v4; // r8
  __int64 v5; // rax
  int v6; // edx
  _DWORD *v7; // rcx
  __int64 v8; // rbx
  unsigned int v9; // edx
  __int64 v10; // r12
  __int64 v11; // r8
  unsigned int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rax
  int i; // esi
  __int64 v16; // r13
  int v17; // r9d
  __int64 v18; // r14
  SIZE_T v19; // r15
  PVOID PoolMm; // rax
  __int64 v21; // rdi
  __int64 ZeroCalibrationBuffer; // rax
  int v23; // ecx
  void *v24; // rcx
  __int64 v25; // rax
  void *v26; // rcx
  unsigned int v27; // edi
  __int64 v28; // r15
  unsigned __int64 v29; // r14
  void *v30; // rdi
  int AcceleratorDescriptor; // eax
  struct _SLIST_ENTRY *v33; // r14
  struct _SLIST_ENTRY *v34; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v38; // eax
  bool v39; // zf
  PSLIST_ENTRY v40; // rax
  int v41; // [rsp+60h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL;
  memset((void *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0x100uLL);
  v3 = 1;
  *(_DWORD *)((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) = 1;
  *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
  if ( !a1[40] )
    return v3;
  v4 = *((_QWORD *)a1 + 21);
  v5 = 0LL;
  v6 = *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
  v7 = (_DWORD *)(v4 + 256);
  do
  {
    if ( v5 )
    {
      v6 += *v7;
      *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v6;
    }
    ++v5;
    v7 += 74;
  }
  while ( v5 < 3 );
  v8 = *(unsigned int *)(v4 + 56);
  v9 = a1[41];
  v10 = *a1;
  *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10C) = v8;
  *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v9;
  v11 = *(_QWORD *)(qword_140C65720 + 376 * v8 + 368);
  *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v11;
  if ( !(unsigned int)MiIsCalibrationWorthwhile(v11 + 96 * v10 + 56, v9) )
    return v3;
  if ( !(_DWORD)v10 )
  {
    *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
    if ( (((_BYTE)v1 + 48) & 0xF) != 0 )
      RtlRaiseStatus(-2147483646);
    *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = 0LL;
    AcceleratorDescriptor = MiAllocateAcceleratorDescriptor(0LL, v8, v13, (_QWORD *)(v1 + 24));
    v33 = *(struct _SLIST_ENTRY **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    *(_DWORD *)v1 = AcceleratorDescriptor;
    if ( v33 )
    {
      do
      {
        v34 = v33;
        v33 = v33->Next;
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v1 + 304), v34);
      }
      while ( v33 );
      *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
    }
    v13 = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    v12 = *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  }
  v14 = 0LL;
  *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = a1;
  *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  for ( i = 0; i < 3; ++i )
  {
    v16 = v13 + 32 * ((int)v10 + v14 + 2LL * (int)v10);
    if ( (unsigned int)MiIsCalibrationWorthwhile(v16 + 56, v12) )
    {
      *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 0LL;
      if ( !v17 )
        goto LABEL_40;
      v18 = v12;
      v19 = 16LL * v12;
      PoolMm = ExAllocatePoolMm(64, v19, 0x655A694Du, v8);
      *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = PoolMm;
      if ( !PoolMm )
        goto LABEL_40;
      if ( i == 1 )
      {
        v21 = 0x800000LL;
      }
      else
      {
        v21 = 4096LL;
        if ( i == 2 )
          v21 = 0x10000LL;
      }
      *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = v21 * v18;
      ZeroCalibrationBuffer = MiAllocateZeroCalibrationBuffer((unsigned int)v8, v21 * v18, (unsigned int)i);
      v23 = *(_DWORD *)v1;
      *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = ZeroCalibrationBuffer;
      *(_DWORD *)v1 = v23;
      if ( ZeroCalibrationBuffer )
      {
        v24 = *(void **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
        *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 4);
        *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 0;
        *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v21;
        *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0;
        memset(v24, 0, v19);
        v25 = 0LL;
        *(_BYTE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x65) = 0;
        do
        {
          *(_BYTE *)(v1 + 102 + v25) = 0;
          *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70 + 4 * v25++) = 0;
        }
        while ( v25 < 2 );
        do
        {
          *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = -1;
          *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = 0;
          *(_BYTE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = 0;
          *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = 0;
          *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x104) = 0;
          KeGenericCallDpcEx(MiZeroPageCalibrateDpc, v1 + 64);
        }
        while ( *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x104) );
        v26 = *(void **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110);
        if ( i == 1 )
          ExFreePoolWithTag(v26, 0);
        else
          MmFreeContiguousMemory(v26);
        v27 = *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
        *(_BYTE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x65) = 1;
      }
      else
      {
LABEL_40:
        *(_DWORD *)v1 = 0;
        v27 = 1;
        *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 1;
        *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 1LL;
        *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0x100000001LL;
        *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
      }
      v28 = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      LODWORD(v10) = **(_DWORD **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      v29 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v28 + 48));
      if ( (unsigned int)MiIsCalibrationWorthwhile(v16 + 56, v27) )
      {
        v30 = *(void **)(v16 + 80);
        *(_OWORD *)(v16 + 56) = *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
        *(_OWORD *)(v16 + 72) = *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
      }
      else
      {
        v30 = *(void **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v28 + 48));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v29 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v29 + 1));
          v39 = (v38 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v38;
          if ( v39 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v29);
      if ( v30 )
        ExFreePoolWithTag(v30, 0);
      v12 = *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      v13 = v28;
    }
    v14 = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) + 1LL;
    *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v14;
  }
  if ( *(_WORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) )
  {
    while ( 1 )
    {
      v40 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v1 + 304));
      if ( !v40 )
        break;
      MiDeleteAcceleratorDescriptor(&v40[2]);
    }
  }
  return *(unsigned int *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
}
