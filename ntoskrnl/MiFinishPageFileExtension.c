void __fastcall MiFinishPageFileExtension(__int64 a1, __int64 a2, __int64 a3)
{
  volatile LONG *v3; // rbp
  KIRQL v7; // al
  __int64 v8; // rbx
  ULONG v9; // edi
  unsigned __int64 v10; // r15
  char v11; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  v3 = (volatile LONG *)(a2 + 232);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 232));
  v8 = *(_QWORD *)(a2 + 112);
  v9 = *(_DWORD *)a2;
  v10 = v7;
  RtlClearBits((PRTL_BITMAP)(v8 + 8), *(_DWORD *)a2, a3);
  RtlClearBits((PRTL_BITMAP)(v8 + 24), v9, a3);
  LOBYTE(v8) = *(_BYTE *)(a2 + 206);
  *(_QWORD *)a2 += a3;
  *(_QWORD *)(a2 + 24) += a3;
  *(_QWORD *)(a2 + 48) += a3;
  v11 = v8 & 1;
  ++*(_DWORD *)(a2 + 128);
  MiCoalescePageFileBitmapsCache(a2, 0, v9);
  MiUpdateReserveClusterInfo(*(_QWORD *)(a2 + 248), 0LL, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v10);
  if ( v11 )
    KeSetEvent((PRKEVENT)(a1 + 920), 0, 0);
}
