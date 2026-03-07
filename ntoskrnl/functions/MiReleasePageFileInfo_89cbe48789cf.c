void __fastcall MiReleasePageFileInfo(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbx
  int v5; // r13d
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rdi
  volatile LONG *v9; // rcx
  KIRQL v10; // bp
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  int v19; // [rsp+78h] [rbp+10h]
  __int64 v21; // [rsp+88h] [rbp+20h]

  v3 = a2;
  if ( qword_140C657C0 && (a2 & 0x10) == 0 )
    v3 = a2 & ~qword_140C657C0;
  v4 = HIDWORD(v3);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 8LL * ((unsigned __int16)a2 >> 12) + 17056);
  v7 = (a2 >> 1) & 1;
  v8 = (a2 >> 2) & 1;
  v19 = a3 & 1;
  v9 = (volatile LONG *)(v6 + 232);
  if ( (a3 & 1) != 0 )
  {
    v10 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v9);
  }
  else
  {
    v10 = ExAcquireSpinLockExclusive(v9);
  }
  v11 = *(_QWORD *)(v6 + 112);
  v21 = v11;
  if ( (_DWORD)v7 )
  {
    *(_BYTE *)(*(_QWORD *)(v11 + 32) + (v4 >> 3)) &= ~(1 << (v4 & 7));
    ++*(_QWORD *)(v6 + 48);
  }
  if ( (_DWORD)v8 )
  {
    if ( (a3 & 2) == 0 )
    {
      MiClearPageFileHash(v6, (unsigned int)v4);
      v11 = v21;
    }
    if ( (*(_BYTE *)(v6 + 204) & 0x40) != 0 )
    {
      MiStoreSetEvictPageFile(v6, (unsigned int)v4);
      goto LABEL_13;
    }
    *(_BYTE *)(*(_QWORD *)(v11 + 16) + (v4 >> 3)) &= ~(1 << (v4 & 7));
    v12 = ++*(_QWORD *)(v6 + 24);
    if ( (unsigned int)v4 < *(_DWORD *)(v6 + 120) )
      *(_DWORD *)(v6 + 120) = v4;
    ++*(_DWORD *)(v6 + 128);
    if ( v12 == 1 && (*(_BYTE *)(v6 + 206) & 1) != 0 )
      v5 = 1;
  }
  if ( ((_DWORD)v7 || !_bittest64(*(const signed __int64 **)(v11 + 32), v4))
    && ((_DWORD)v8 || !_bittest64(*(const signed __int64 **)(v11 + 16), v4)) )
  {
    MiCoalescePageFileBitmapsCache(v6, (unsigned int)v7, (unsigned int)v4);
    MiUpdateReserveClusterInfo(*(_QWORD *)(v6 + 248), 0LL, 0LL);
  }
LABEL_13:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 232));
  if ( !v19 )
  {
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v10);
  }
  if ( v5 )
    KeSetEvent((PRKEVENT)(a1 + 920), 0, 0);
}
