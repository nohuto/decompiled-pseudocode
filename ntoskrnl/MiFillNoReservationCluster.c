/*
 * XREFs of MiFillNoReservationCluster @ 0x140637058
 * Callers:
 *     MiGatherPagefilePages @ 0x140637D34 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReferencePageForModifiedWrite @ 0x140213038 (MiReferencePageForModifiedWrite.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiReservePageFileSpace @ 0x14032E800 (MiReservePageFileSpace.c)
 *     MiSufficientAvailablePages @ 0x1403643E4 (MiSufficientAvailablePages.c)
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiIsStoreVirtualPagefileFull @ 0x1406599F8 (MiIsStoreVirtualPagefileFull.c)
 */

__int64 __fastcall MiFillNoReservationCluster(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4)
{
  __int16 v4; // ax
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  _DWORD *v14; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  int v23; // r13d
  unsigned __int8 v24; // cl
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  char v29; // [rsp+68h] [rbp+10h]

  v4 = *(_WORD *)(a2 + 204);
  if ( (v4 & 0x40) != 0 )
  {
    if ( *(_QWORD *)(88LL * (v4 & 0xF) + a1 + 3904) )
      v7 = 88LL * (*(_WORD *)(a2 + 204) & 0xF) + a1 + 3904;
    else
      v7 = a1 + 3776;
  }
  else
  {
    v7 = a1 + 3648;
    if ( !*(_QWORD *)(a1 + 3648) && (unsigned int)MiIsStoreVirtualPagefileFull() )
    {
      if ( *(_QWORD *)(88LL * *(unsigned int *)(a1 + 1188) + a1 + 3904) )
        v7 = 88LL * *(unsigned int *)(a1 + 1188) + a1 + 3904;
      else
        v7 = a1 + 3776;
    }
  }
  v8 = 0LL;
  v29 = 1;
  do
  {
    v9 = *(_QWORD *)(v7 + 16);
    if ( v9 == 0x3FFFFFFFFFLL )
      break;
    v10 = 48 * v9 - 0x220000000000LL;
    v11 = (unsigned __int8)MiLockPageInline(v10);
    if ( v9 != *(_QWORD *)(v7 + 16) )
      goto LABEL_13;
    if ( !*(_DWORD *)(a1 + 1076) )
      goto LABEL_34;
    v17 = *(_QWORD *)(v10 + 40);
    if ( v17 >= 0 || (v17 & 0x10000000000LL) == 0 && *(__int64 *)(v10 + 8) > 0 )
      goto LABEL_34;
    if ( !(unsigned int)MiSufficientAvailablePages(a1, 0xA0uLL) )
      goto LABEL_34;
    v18 = *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v16 = (v22 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v22;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v11);
    MiReservePageFileSpace(a1, v18, 0LL);
    v11 = (unsigned __int8)MiLockPageInline(48 * v9 - 0x220000000000LL);
    if ( v9 != *(_QWORD *)(v7 + 16) )
    {
LABEL_13:
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v12 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v12 >= 2u )
        {
          v13 = KeGetCurrentPrcb();
          v14 = v13->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v16 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)v13);
        }
      }
      __writecr8(v11);
    }
    else
    {
LABEL_34:
      v23 = MiReferencePageForModifiedWrite(48 * v9 - 0x220000000000LL, v29);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v24 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v16 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)v25);
        }
      }
      __writecr8((unsigned __int8)v11);
      if ( !v23 )
        break;
      v29 &= ~1u;
      v8 = (unsigned int)(v8 + 1);
      *a3++ = v9;
      if ( v23 == 3 && (unsigned int)v8 >= 0x10 )
        break;
    }
  }
  while ( (unsigned int)v8 < a4 );
  if ( (unsigned int)v8 > 1 )
    qsort(&a3[-v8], (unsigned int)v8, 8uLL, MiModifiedWriterNoReservationSort);
  return (unsigned int)v8;
}
