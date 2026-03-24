/*
 * XREFs of VmpInsertMemoryRange @ 0x1405A38C0
 * Callers:
 *     VmCreateMemoryRange @ 0x14092EE50 (VmCreateMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1402C0B10 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockExclusive @ 0x1405A489C (VmpProcessContextLockExclusive.c)
 *     VmpFreeMemoryRanges @ 0x14092F6E8 (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpInsertMemoryRange(PEX_SPIN_LOCK SpinLock, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rdi
  void *v7; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r12
  unsigned __int64 *v12; // r11
  unsigned __int64 v13; // rcx
  unsigned int v14; // ebx
  unsigned __int64 v15; // rax
  unsigned __int64 *v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 *v24; // rdx
  __int64 **v25; // rcx
  __int64 ***v26; // rax
  __int64 **i; // rcx
  bool v28; // r8
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  bool v32; // r8
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v38; // eax
  bool v39; // zf

  v3 = (__int64 *)a2[5];
  v7 = 0LL;
  v8 = 0LL;
  v9 = VmpProcessContextLockExclusive(SpinLock);
  v10 = *((_QWORD *)SpinLock + 9);
  v11 = v9;
  if ( v10 == -1 )
  {
    *((_QWORD *)SpinLock + 9) = a3;
  }
  else if ( v10 != a3 )
  {
    v14 = -1073740007;
    goto LABEL_81;
  }
  v12 = (unsigned __int64 *)(SpinLock + 2);
  v13 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 && v13 )
    v13 ^= (unsigned __int64)v12;
  while ( v13 )
  {
    if ( (unsigned __int64)v3[7] < *(_QWORD *)(v13 + 24) )
    {
      v15 = *(_QWORD *)v13;
    }
    else
    {
      if ( (unsigned __int64)v3[6] <= *(_QWORD *)(v13 + 32) )
        goto LABEL_21;
      v15 = *(_QWORD *)(v13 + 8);
    }
    if ( (SpinLock[4] & 1) != 0 && v15 )
      v13 ^= v15;
    else
      v13 = v15;
  }
  v16 = (unsigned __int64 *)(SpinLock + 6);
  v17 = *((_QWORD *)SpinLock + 3);
  if ( (SpinLock[8] & 1) != 0 && v17 )
    v17 ^= (unsigned __int64)v16;
  if ( !v17 )
  {
LABEL_33:
    v23 = *v12;
    if ( (SpinLock[4] & 1) != 0 && v23 )
      v23 ^= (unsigned __int64)v12;
    v28 = 0;
    if ( v23 )
    {
      v29 = v3[6];
      while ( 1 )
      {
        if ( v29 > *(_QWORD *)(v23 + 32) || v29 >= *(_QWORD *)(v23 + 24) )
        {
          v30 = *(_QWORD *)(v23 + 8);
          if ( (SpinLock[4] & 1) != 0 )
          {
            if ( !v30 )
              goto LABEL_59;
            v30 ^= v23;
          }
          if ( !v30 )
          {
LABEL_59:
            v28 = 1;
            break;
          }
        }
        else
        {
          v30 = *(_QWORD *)v23;
          if ( (SpinLock[4] & 1) != 0 )
          {
            if ( !v30 )
              goto LABEL_53;
            v30 ^= v23;
          }
          if ( !v30 )
          {
LABEL_53:
            v28 = 0;
            break;
          }
        }
        v23 = v30;
      }
    }
    RtlRbInsertNodeEx((unsigned __int64 *)SpinLock + 1, v23, v28, (unsigned __int64)(v3 + 3));
    if ( !v8 )
    {
      v31 = *v16;
      if ( (SpinLock[8] & 1) != 0 && v31 )
        v31 ^= (unsigned __int64)v16;
      v32 = 0;
      if ( v31 )
      {
        v33 = a2[3];
        while ( 1 )
        {
          if ( v33 > *(_QWORD *)(v31 + 32) || v33 >= *(_QWORD *)(v31 + 24) )
          {
            v34 = *(_QWORD *)(v31 + 8);
            if ( (SpinLock[8] & 1) != 0 )
            {
              if ( !v34 )
                goto LABEL_78;
              v34 ^= v31;
            }
            if ( !v34 )
            {
LABEL_78:
              v32 = 1;
              break;
            }
          }
          else
          {
            v34 = *(_QWORD *)v31;
            if ( (SpinLock[8] & 1) != 0 )
            {
              if ( !v34 )
                goto LABEL_72;
              v34 ^= v31;
            }
            if ( !v34 )
            {
LABEL_72:
              v32 = 0;
              break;
            }
          }
          v31 = v34;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64 *)SpinLock + 3, v31, v32, (unsigned __int64)a2);
    }
    v14 = 0;
    goto LABEL_81;
  }
  v18 = a2[4];
  while ( 1 )
  {
    v19 = *(_QWORD *)(v17 + 24);
    if ( v18 >= v19 )
      break;
    v22 = *(_QWORD *)v17;
LABEL_28:
    if ( (SpinLock[8] & 1) != 0 && v22 )
      v17 ^= v22;
    else
      v17 = v22;
    if ( !v17 )
      goto LABEL_33;
  }
  v20 = a2[3];
  v21 = *(_QWORD *)(v17 + 32);
  if ( v20 > v21 )
  {
    v22 = *(_QWORD *)(v17 + 8);
    goto LABEL_28;
  }
  v8 = v17;
  if ( v19 == v20 && v21 == v18 )
  {
    v24 = (__int64 *)*v3;
    v25 = (__int64 **)v3[1];
    if ( *(__int64 **)(*v3 + 8) != v3 || *v25 != v3 )
      __fastfail(3u);
    *v25 = v24;
    v24[1] = (__int64)v25;
    v3[2] = v17;
    v26 = (__int64 ***)(v17 + 40);
    for ( i = *v26; i != (__int64 **)v26; i = (__int64 **)*i )
    {
      if ( (unsigned __int64)i[6] > v3[6] )
        break;
    }
    v7 = a2;
    *i[1] = (__int64)v3;
    v3[1] = (__int64)i[1];
    i[1] = v3;
    *v3 = (__int64)i;
    goto LABEL_33;
  }
LABEL_21:
  v14 = -1073741800;
LABEL_81:
  if ( v11 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v39 = (v38 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v38;
          if ( v39 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)v11);
  }
  if ( v7 )
    VmpFreeMemoryRanges(v7);
  return v14;
}
