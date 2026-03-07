__int64 __fastcall VmpInsertMemoryRange(PEX_SPIN_LOCK SpinLock, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rdi
  void *v7; // r15
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r12
  unsigned __int64 *v12; // r10
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // ebx
  unsigned __int64 *v16; // rbx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 *v19; // rdx
  __int64 **v20; // rax
  __int64 **v21; // rax
  __int64 **i; // rcx
  unsigned __int64 v23; // rdx
  bool v24; // r8
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  bool v28; // r8
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v34; // eax
  bool v35; // zf

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
    v15 = -1073740007;
    goto LABEL_82;
  }
  v12 = (unsigned __int64 *)(SpinLock + 2);
  v13 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 && v13 )
    v13 ^= (unsigned __int64)v12;
  if ( v13 )
  {
    do
    {
      if ( (unsigned __int64)v3[7] >= *(_QWORD *)(v13 + 24) )
      {
        if ( (unsigned __int64)v3[6] <= *(_QWORD *)(v13 + 32) )
          break;
        v14 = *(_QWORD *)(v13 + 8);
      }
      else
      {
        v14 = *(_QWORD *)v13;
      }
      if ( (SpinLock[4] & 1) != 0 && v14 )
        v13 ^= v14;
      else
        v13 = v14;
    }
    while ( v13 );
    if ( v13 )
      goto LABEL_19;
  }
  v16 = (unsigned __int64 *)(SpinLock + 6);
  v17 = *((_QWORD *)SpinLock + 3);
  if ( (SpinLock[8] & 1) != 0 && v17 )
    v17 ^= (unsigned __int64)v16;
  if ( v17 )
  {
    do
    {
      if ( a2[4] >= *(_QWORD *)(v17 + 24) )
      {
        if ( a2[3] <= *(_QWORD *)(v17 + 32) )
          break;
        v18 = *(_QWORD *)(v17 + 8);
      }
      else
      {
        v18 = *(_QWORD *)v17;
      }
      if ( (SpinLock[8] & 1) != 0 && v18 )
        v17 ^= v18;
      else
        v17 = v18;
    }
    while ( v17 );
    if ( v17 )
    {
      v8 = v17;
      if ( *(_QWORD *)(v17 + 24) != a2[3] || *(_QWORD *)(v17 + 32) != a2[4] )
      {
LABEL_19:
        v15 = -1073741800;
        goto LABEL_82;
      }
      v19 = (__int64 *)*v3;
      v20 = (__int64 **)v3[1];
      if ( *(__int64 **)(*v3 + 8) != v3 || *v20 != v3 )
        __fastfail(3u);
      *v20 = v19;
      v19[1] = (__int64)v20;
      v21 = (__int64 **)(v17 + 40);
      v3[2] = v17;
      for ( i = *(__int64 ***)(v17 + 40); i != v21; i = (__int64 **)*i )
      {
        if ( (unsigned __int64)i[6] > v3[6] )
          break;
      }
      v7 = a2;
      *i[1] = (__int64)v3;
      v3[1] = (__int64)i[1];
      i[1] = v3;
      *v3 = (__int64)i;
    }
  }
  v23 = *v12;
  if ( (SpinLock[4] & 1) != 0 && v23 )
    v23 ^= (unsigned __int64)v12;
  v24 = 0;
  if ( v23 )
  {
    v25 = v3[6];
    while ( 1 )
    {
      if ( v25 > *(_QWORD *)(v23 + 32) || v25 >= *(_QWORD *)(v23 + 24) )
      {
        v26 = *(_QWORD *)(v23 + 8);
        if ( (SpinLock[4] & 1) != 0 )
        {
          if ( !v26 )
            goto LABEL_60;
          v26 ^= v23;
        }
        if ( !v26 )
        {
LABEL_60:
          v24 = 1;
          break;
        }
      }
      else
      {
        v26 = *(_QWORD *)v23;
        if ( (SpinLock[4] & 1) != 0 )
        {
          if ( !v26 )
            goto LABEL_53;
          v26 ^= v23;
        }
        if ( !v26 )
        {
LABEL_53:
          v24 = 0;
          break;
        }
      }
      v23 = v26;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)SpinLock + 1, v23, v24, (unsigned __int64)(v3 + 3));
  if ( !v8 )
  {
    v27 = *v16;
    if ( (SpinLock[8] & 1) != 0 && v27 )
      v27 ^= (unsigned __int64)v16;
    v28 = 0;
    if ( v27 )
    {
      v29 = a2[3];
      while ( 1 )
      {
        if ( v29 > *(_QWORD *)(v27 + 32) || v29 >= *(_QWORD *)(v27 + 24) )
        {
          v30 = *(_QWORD *)(v27 + 8);
          if ( (SpinLock[8] & 1) != 0 )
          {
            if ( !v30 )
              goto LABEL_79;
            v30 ^= v27;
          }
          if ( !v30 )
          {
LABEL_79:
            v28 = 1;
            break;
          }
        }
        else
        {
          v30 = *(_QWORD *)v27;
          if ( (SpinLock[8] & 1) != 0 )
          {
            if ( !v30 )
              goto LABEL_73;
            v30 ^= v27;
          }
          if ( !v30 )
          {
LABEL_73:
            v28 = 0;
            break;
          }
        }
        v27 = v30;
      }
    }
    RtlRbInsertNodeEx((unsigned __int64 *)SpinLock + 3, v27, v28, (unsigned __int64)a2);
  }
  v15 = 0;
LABEL_82:
  if ( v11 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v35 = (v34 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v34;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8((unsigned __int8)v11);
  }
  if ( v7 )
    VmpFreeMemoryRanges(v7);
  return v15;
}
