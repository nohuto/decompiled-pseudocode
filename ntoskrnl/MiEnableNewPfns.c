/*
 * XREFs of MiEnableNewPfns @ 0x140618520
 * Callers:
 *     MiAddPhysicalMemory @ 0x140A289D8 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiDetermineNewPfnHeatState @ 0x1402DD0B8 (MiDetermineNewPfnHeatState.c)
 *     MiInsertLargePageInNodeList @ 0x14031C970 (MiInsertLargePageInNodeList.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiEnableNewPfns(volatile signed __int64 *a1, ULONG_PTR a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // r14d
  volatile signed __int64 *v5; // r15
  BOOL v7; // ecx
  __int64 v9; // rbp
  __int64 v10; // r8
  unsigned __int64 v11; // r13
  __int64 v12; // rbx
  char v13; // bp
  unsigned __int64 v14; // r15
  char v15; // r9
  int v16; // eax
  __int16 v17; // r9
  ULONG_PTR v18; // r10
  __int16 v19; // r13
  __int64 v20; // rbp
  ULONG_PTR v21; // r15
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  volatile signed __int64 *v29; // rcx
  struct _KPRCB *v30; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v32; // eax
  unsigned int v34; // [rsp+24h] [rbp-84h]
  int v35; // [rsp+28h] [rbp-80h]
  __int128 v37; // [rsp+40h] [rbp-68h] BYREF
  __int128 v38; // [rsp+50h] [rbp-58h]

  v4 = a4;
  v5 = a1;
  v7 = (a4 & 0x200) == 0;
  v34 = v7;
  v37 = 0LL;
  v38 = 0LL;
  if ( (a4 & 0x3000) != 0 )
  {
    v9 = (a4 >> 12) & 1;
    v35 = MiDetermineNewPfnHeatState(v7, (a4 >> 12) & 1);
    v11 = MiLargePageSizes[v9];
    v12 = 48 * a2 - 0x220000000000LL;
    if ( !(a3 / v11) )
      goto LABEL_23;
    v13 = ~(_BYTE)v9 & 3;
    v14 = a3 / v11;
    do
    {
      MiLockPageInline(v12);
      *(_BYTE *)(v12 + 36) = v13 | *(_BYTE *)(v12 + 36) & 0xFC;
      *(_QWORD *)(v12 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v12 + 16), -(__int64)(v35 != 0) & 0xFFFFFFFDLL);
      *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 6;
      v38 = 0LL;
      *(_QWORD *)&v37 = a2;
      *((_QWORD *)&v37 + 1) = v34;
      LOBYTE(v38) = v15;
      MiInsertLargePageInNodeList((__int64)&v37);
      if ( *((_QWORD *)&v38 + 1) )
        a3 -= *((_QWORD *)&v38 + 1);
      v12 += 48 * v11;
      a2 += v11;
      --v14;
    }
    while ( v14 );
    v4 = a4;
    goto LABEL_22;
  }
  v16 = MiDetermineNewPfnHeatState(v7, 3u);
  v19 = v17 | 0x400;
  if ( !v16 )
    v19 = v17;
  a3 = 0LL;
  v20 = 48 * a2 - 0x220000000000LL;
  if ( a2 < v18 )
  {
    v21 = v18;
    do
    {
      v22 = a3++;
      v23 = (unsigned __int8)MiLockPageInline(v20);
      if ( (*(_BYTE *)(v20 + 35) & 0x40) != 0 )
        a3 = v22;
      MiInsertPageInFreeOrZeroedList(a2, v19);
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v23 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
          v28 = (v27 & SchedulerAssist[5]) == 0;
          v10 = (unsigned int)v27 & SchedulerAssist[5];
          SchedulerAssist[5] = v10;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v23);
      ++a2;
      v20 += 48LL;
    }
    while ( a2 < v21 );
LABEL_22:
    v5 = a1;
  }
LABEL_23:
  if ( (v4 & 8) == 0 )
  {
    v29 = (volatile signed __int64 *)&MiSystemPartition;
LABEL_28:
    MiReturnCommit((__int64)v29, a3, v10);
    goto LABEL_29;
  }
  if ( (v4 & 0x40000) != 0 || (v4 & 0x10000) != 0 )
  {
    v29 = v5;
    goto LABEL_28;
  }
LABEL_29:
  if ( v5 != (volatile signed __int64 *)&MiSystemPartition
    || (v30 = KeGetCurrentPrcb(),
        CachedResidentAvailable = (int)v30->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
LABEL_39:
    if ( a3 )
      _InterlockedExchangeAdd64(v5 + 2160, a3);
    return;
  }
  if ( a3 + CachedResidentAvailable > 0x100 || a3 >= 0x80000 )
  {
LABEL_36:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v30->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      a3 += (int)CachedResidentAvailable - 192;
    }
    goto LABEL_39;
  }
  while ( 1 )
  {
    v32 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&v30->CachedResidentAvailable,
            a3 + CachedResidentAvailable,
            CachedResidentAvailable);
    v28 = (_DWORD)CachedResidentAvailable == v32;
    LODWORD(CachedResidentAvailable) = v32;
    if ( v28 )
      break;
    if ( v32 == -1 || a3 + v32 > 0x100 )
      goto LABEL_36;
  }
}
