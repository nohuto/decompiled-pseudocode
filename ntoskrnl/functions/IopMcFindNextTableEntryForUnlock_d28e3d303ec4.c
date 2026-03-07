ULONG_PTR __fastcall IopMcFindNextTableEntryForUnlock(__int64 *a1, _QWORD *a2)
{
  ULONG_PTR v2; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r11
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  _QWORD *i; // rax
  __int64 j; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // edx
  bool v22; // zf

  v2 = 0LL;
  *a2 = 0LL;
  if ( *((_BYTE *)a1 + 16) )
    return 0LL;
  v6 = ExAcquireSpinLockShared(&dword_140C5D2E4);
  v7 = qword_140C5D2E8;
  v8 = 0LL;
  v9 = v6;
  if ( !qword_140C5D2E8 )
    goto LABEL_28;
  v10 = *a1;
  do
  {
    v11 = *(unsigned int *)(v7 + 24);
    v12 = v7 - (unsigned int)(32 * (v11 + 3));
    v13 = *(_QWORD *)(v12 + 88);
    if ( v10 < *(_QWORD *)(v13 + 8 * v11) )
      goto LABEL_6;
    if ( v10 <= *(_QWORD *)(v13 + 8 * v11) && a1[1] < v12 )
    {
      v8 = v7;
LABEL_6:
      v7 = *(_QWORD *)v7;
      continue;
    }
    v7 = *(_QWORD *)(v7 + 8);
  }
  while ( v7 );
  if ( v8 )
  {
    v14 = *(_QWORD *)(v8 + 8);
    v15 = v8;
    if ( v14 )
    {
      for ( i = *(_QWORD **)v14; i; i = (_QWORD *)*i )
        v14 = (unsigned __int64)i;
    }
    else
    {
      for ( j = *(_QWORD *)(v8 + 16); ; j = *(_QWORD *)(v14 + 16) )
      {
        v14 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v14 || *(_QWORD *)v14 == v8 )
          break;
        v8 = v14;
      }
    }
    if ( !v14
      || *(_QWORD *)(*(_QWORD *)(v14 - (unsigned int)(32 * (*(_DWORD *)(v14 + 24) + 3)) + 88)
                   + 8LL * *(unsigned int *)(v14 + 24)) != v10 )
    {
      *((_BYTE *)a1 + 16) = 1;
    }
    v2 = v15 - (unsigned int)(32 * (*(_DWORD *)(v15 + 24) + 3));
    a1[1] = v2;
    IopMcReferenceBufferEntry(v2);
    if ( (*(_DWORD *)(v2 + 12) & 1) == 0 )
      _InterlockedOr((volatile signed __int32 *)(v2 + 12), 1u);
    *a2 = *(_QWORD *)(v2 + 56);
  }
LABEL_28:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C5D2E4);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v22 = (v21 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v21;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
  return v2;
}
