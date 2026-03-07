PSLIST_ENTRY MiCreateDecayPfn()
{
  PSLIST_ENTRY v0; // rsi
  unsigned int v1; // r9d
  unsigned __int64 v2; // rcx
  unsigned int v3; // r10d
  unsigned int *v4; // rdx
  char *v5; // rbx
  __int64 i; // rcx
  unsigned __int64 v7; // rax
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdi
  ULONG_PTR v11; // r14
  unsigned __int64 v12; // rbp
  char v13; // bl
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  ULONG_PTR v16; // r8
  __int64 v17; // rdx
  unsigned __int16 *v18; // rbx
  __int64 v19; // r14
  unsigned __int64 v20; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf
  unsigned __int8 v27; // cl
  struct _KPRCB *v28; // rax
  int v29; // edx
  _DWORD *v30; // r9

  do
  {
    v0 = RtlpInterlockedPopEntrySList(&ListHead);
    if ( v0 )
    {
      v11 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v0[0x22000000000LL] >> 4);
    }
    else
    {
      if ( ((__int64)BitMapHeader.Buffer & 4) != 0 )
      {
        v2 = 4LL;
        v1 = 32;
      }
      else
      {
        v1 = 0;
        v2 = 0LL;
      }
      v3 = v1 + BitMapHeader.SizeOfBitMap - 1;
      v4 = &BitMapHeader.Buffer[v2 / 0xFFFFFFFFFFFFFFFCuLL];
      if ( !BitMapHeader.SizeOfBitMap )
        return 0LL;
      v5 = (char *)&v4[2 * ((unsigned __int64)v1 >> 6)];
      for ( i = ((1LL << v1) - 1) | ~*(_QWORD *)v5; i == -1; i = ~*(_QWORD *)v5 )
      {
        v5 += 8;
        if ( v5 > (char *)&v4[2 * ((unsigned __int64)v3 >> 6)] )
          return 0LL;
      }
      _BitScanForward64(&v7, ~i);
      v8 = v7 + ((unsigned int)((v5 - (char *)v4) >> 3) << 6);
      if ( v8 > v3 )
        return 0LL;
      if ( v8 == -1 )
        return 0LL;
      v9 = v8 - v1;
      if ( v9 == -1 )
        return 0LL;
      v10 = v9;
      v11 = v9 + qword_140C67DE0;
      v0 = (PSLIST_ENTRY)(48 * v11 - 0x220000000000LL);
      v12 = (unsigned __int8)MiLockPageInline((__int64)v0);
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67E00);
      v13 = v9 & 7;
      v14 = v10 >> 3;
      if ( ((*((char *)BitMapHeader.Buffer + v14) >> v13) & 1) != 0 )
      {
        *((_BYTE *)BitMapHeader.Buffer + v14) &= ~(1 << v13);
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67E00);
        if ( v11 != -1LL )
        {
          v15 = MiSwizzleInvalidPte(((v11 & 0xFFFFFFFFFFLL) << 12) | 0x880);
          *(_QWORD *)(v16 + 16) = v15;
          *(_QWORD *)(v16 + 40) = v17 | *(_QWORD *)(v16 + 40) & 0xFFFFFF0000000000uLL;
          MiUnlinkPageFromListEx(v16, 0LL);
        }
      }
      else
      {
        v11 = -1LL;
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67E00);
      }
      _InterlockedAnd64((volatile signed __int64 *)&v0[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v26 = (v25 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v25;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v12);
    }
  }
  while ( v11 == -1LL );
  v18 = *(unsigned __int16 **)(qword_140C67048 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
  v19 = v11 & 0xFFFFFFFFFFLL;
  v0[1].Next = (_SLIST_ENTRY *)MiSwizzleInvalidPte((v19 << 12) | 0x880);
  *((_QWORD *)&v0[2].Next + 1) = v19 | (unsigned __int64)*(&v0[2].Next + 1) & 0xFFFFFF0000000000uLL;
  v20 = (unsigned __int8)MiLockPageInline((__int64)v0);
  BYTE3(v0[2].Next) |= 8u;
  *((_QWORD *)&v0[2].Next + 1) ^= (*((_QWORD *)&v0[2].Next + 1) ^ ((unsigned __int64)*v18 << 43)) & 0x1FF80000000000LL;
  BYTE3(v0[2].Next) = BYTE3(v0[2].Next) & 0xF8 | 5;
  MiInsertPageInList((ULONG_PTR)v0);
  _InterlockedAnd64((volatile signed __int64 *)&v0[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v27 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v27 >= 2u )
    {
      v28 = KeGetCurrentPrcb();
      v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
      v30 = v28->SchedulerAssist;
      v26 = (v29 & v30[5]) == 0;
      v30[5] &= v29;
      if ( v26 )
        KiRemoveSystemWorkPriorityKick(v28);
    }
  }
  __writecr8(v20);
  return v0;
}
