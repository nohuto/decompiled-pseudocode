__int64 __fastcall MiMergeCopyExtents(_QWORD *a1, __int64 a2, __int64 a3, unsigned int **a4)
{
  unsigned int **v5; // r15
  unsigned int *v6; // rax
  unsigned int *v7; // rsi
  unsigned int *v9; // rdi
  unsigned int v10; // r11d
  unsigned int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r10
  unsigned int v15; // ebp
  __int64 v16; // r15
  bool v17; // zf
  unsigned int *v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rbx
  unsigned __int64 v21; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  __int64 i; // rbx
  unsigned __int64 *v27; // rdx
  __int64 v28; // [rsp+30h] [rbp-38h]

  *a4 = 0LL;
  v5 = a4;
  v6 = MiFormCopyExtents(a2, 1u);
  v7 = v6;
  if ( !v6 )
    return 3221225626LL;
  v9 = (unsigned int *)a1[14];
  if ( v9 )
  {
    v10 = *v6;
    v11 = *v9;
    v12 = 0LL;
    if ( *(_QWORD *)&v9[12 * v11] + (unsigned __int64)v9[12 * v11 - 4] > *(_QWORD *)&v6[12 * v10]
                                                                       + (unsigned __int64)v6[12 * v10 - 4] )
    {
      ExFreePoolWithTag(v6, 0);
      return 3221225994LL;
    }
    v13 = 0LL;
    if ( v11 )
    {
      do
      {
        v14 = (__int64)&v9[12 * v13 + 2];
        v15 = *(_DWORD *)(v14 + 24);
        v16 = *(_QWORD *)(v14 + 40);
        v17 = (_DWORD)v12 == v10;
        if ( (unsigned int)v12 < v10 )
        {
          v18 = &v6[12 * v12 + 8];
          do
          {
            v19 = *v18;
            if ( v15 >= (unsigned int)v19 )
            {
              v28 = *((_QWORD *)v18 + 2);
              if ( v15 < (unsigned __int64)(v28 + v19) )
              {
                if ( (unsigned __int64)v15 + v16 <= v28 + v19 )
                  break;
                v16 += v15 - v19 - v28;
                v15 = v19 + v18[4];
              }
            }
            v12 = (unsigned int)(v12 + 1);
            v18 += 12;
          }
          while ( (unsigned int)v12 < v10 );
          v17 = (_DWORD)v12 == v10;
        }
        if ( v17 )
          KeBugCheckEx(0x1Au, 0x14010uLL, (ULONG_PTR)v9, (ULONG_PTR)v6, (ULONG_PTR)&v9[12 * v13 + 2]);
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 < v11 );
      v5 = a4;
    }
  }
  v20 = *a1;
  v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*a1 + 72LL));
  a1[14] = v7;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v20 + 72));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v21 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
      v17 = (v25 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v25;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v21);
  MiLockFileExtentsExclusive();
  if ( v9 )
  {
    for ( i = 0LL; (unsigned int)i < *v9; i = (unsigned int)(i + 1) )
    {
      v27 = (unsigned __int64 *)&v9[12 * i + 2];
      if ( v27[4] != 0x8000000000000000uLL )
        RtlAvlRemoveNode(&qword_140C65520, v27);
    }
  }
  MiInsertExtentList(v7);
  MiUnlockFileExtentsExclusive();
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  *v5 = v7;
  return 0LL;
}
