/*
 * XREFs of MiFillNoReservationCluster @ 0x140318F70
 * Callers:
 *     MiGatherPagefilePages @ 0x1403318B4 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReservePageFileSpace @ 0x14023CB00 (MiReservePageFileSpace.c)
 *     MiReferencePageForModifiedWrite @ 0x14025614C (MiReferencePageForModifiedWrite.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiSufficientAvailablePages @ 0x14033E480 (MiSufficientAvailablePages.c)
 *     qsort @ 0x1403D23C0 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiFillNoReservationCluster(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r14
  __int64 v6; // rax
  _QWORD *v7; // r13
  unsigned int v8; // esi
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  int v14; // eax
  bool v15; // zf
  unsigned __int64 v16; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  int v24; // r12d
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // r10
  int v27; // eax
  char v29; // [rsp+60h] [rbp+8h]
  unsigned int v30; // [rsp+70h] [rbp+18h]

  v30 = a3;
  v4 = (_QWORD *)a2;
  if ( !a1[290] || (v6 = (unsigned int)a1[289], a4 = 5 * v6, v7 = &a1[10 * v6 + 704], !*v7) )
    v7 = a1 + 688;
  v8 = 0;
  v29 = 1;
  do
  {
    v9 = v7[2];
    if ( v9 == 0xFFFFFFFFFLL )
      break;
    v10 = 48 * v9 - 0x58000000000LL;
    v11 = (unsigned __int8)MiLockPageInline(v10, a2, a3, (_DWORD *)a4);
    if ( v9 != v7[2] )
      goto LABEL_7;
    if ( !a1[259]
      || !(unsigned int)MI_PFN_IS_PROTO(48 * v9 - 0x58000000000LL)
      || (*(_QWORD *)(v10 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v10 + 8) > 0
      || !(unsigned int)MiSufficientAvailablePages(a1, 160LL) )
    {
      goto LABEL_28;
    }
    v16 = *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v15 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
    MiReservePageFileSpace((__int64)a1, v16, 0LL);
    v11 = (unsigned __int8)MiLockPageInline(48 * v9 - 0x58000000000LL, v21, v22, v23);
    if ( v9 != v7[2] )
    {
LABEL_7:
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v12 = KeGetCurrentIrql();
          if ( v12 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v12 >= 2u )
          {
            v13 = KeGetCurrentPrcb();
            a2 = -1LL << ((unsigned __int8)v11 + 1);
            a4 = (__int64)v13->SchedulerAssist;
            v14 = ~(unsigned __int16)a2;
            v15 = (v14 & *(_DWORD *)(a4 + 20)) == 0;
            a3 = (unsigned int)v14 & *(_DWORD *)(a4 + 20);
            *(_DWORD *)(a4 + 20) = a3;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(v13);
          }
        }
      }
      __writecr8(v11);
    }
    else
    {
LABEL_28:
      v24 = MiReferencePageForModifiedWrite(48 * v9 - 0x58000000000LL, v29);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            a2 = -1LL << ((unsigned __int8)v11 + 1);
            a4 = (__int64)v26->SchedulerAssist;
            v27 = ~(unsigned __int16)a2;
            v15 = (v27 & *(_DWORD *)(a4 + 20)) == 0;
            a3 = (unsigned int)v27 & *(_DWORD *)(a4 + 20);
            *(_DWORD *)(a4 + 20) = a3;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
      }
      __writecr8((unsigned __int8)v11);
      if ( !v24 )
        break;
      v29 &= ~1u;
      ++v8;
      *v4++ = v9;
      if ( v24 == 3 && v8 >= 0x10 )
        break;
    }
  }
  while ( v8 < v30 );
  if ( v8 > 1 )
    qsort(&v4[-v8], v8, 8uLL, (int (__cdecl *)(const void *, const void *))MiModifiedWriterNoReservationSort);
  return v8;
}
