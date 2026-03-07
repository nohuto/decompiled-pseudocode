__int64 __fastcall IopGetSetStreamIdentifier(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  _QWORD *v10; // rdi
  KSPIN_LOCK *v11; // r15
  unsigned __int64 v12; // r14
  _QWORD *v13; // rax
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // eax
  bool v18; // zf
  _QWORD *Pool2; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // edx
  unsigned __int64 v28; // r13
  _QWORD *v29; // rax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  int v32; // eax
  _DWORD *v33; // r8
  _QWORD *v34; // [rsp+30h] [rbp-48h] BYREF
  __int64 v35[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = 0;
  v35[0] = 0LL;
  v34 = 0LL;
  result = IopGetSetSpecificExtension(a1, 4u, 0x10u, a5, &v34, v35);
  if ( (int)result < 0 )
    goto LABEL_47;
  v10 = v34;
  if ( !v34 )
  {
LABEL_46:
    result = 0LL;
LABEL_47:
    *a4 = 0LL;
    return result;
  }
  v11 = (KSPIN_LOCK *)(a1 + 184);
  v12 = KeAcquireSpinLockRaiseToDpc(v11);
  v13 = (_QWORD *)*v10;
  if ( !*v10 )
  {
    v10[1] = v10;
    v13 = v10;
    *v10 = v10;
  }
  while ( v13 != v10 )
  {
    if ( v13[3] == a3 )
    {
      if ( a5 )
      {
        *a4 = 0LL;
        KxReleaseSpinLock((volatile signed __int64 *)v11);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v18 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v5 = -1073741791;
      }
      else
      {
        *a4 = v13[2];
        KxReleaseSpinLock((volatile signed __int64 *)v11);
        if ( KiIrqlFlags )
        {
          v24 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v24 >= 2u )
          {
            v25 = KeGetCurrentPrcb();
            v26 = v25->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v18 = (v27 & v26[5]) == 0;
            v26[5] &= v27;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
      }
      __writecr8(v12);
      return v5;
    }
    v13 = (_QWORD *)*v13;
  }
  KxReleaseSpinLock((volatile signed __int64 *)v11);
  if ( KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v14 >= 2u )
    {
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
      v18 = (v17 & v16[5]) == 0;
      v16[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(v15);
      v10 = v34;
    }
  }
  __writecr8(v12);
  if ( !a5 )
    goto LABEL_46;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, a2 + 32LL, 1951625033LL);
  if ( !Pool2 )
  {
    result = 3221225626LL;
    goto LABEL_47;
  }
  v28 = KeAcquireSpinLockRaiseToDpc(v11);
  v29 = (_QWORD *)v10[1];
  if ( (_QWORD *)*v29 != v10 )
    __fastfail(3u);
  Pool2[1] = v29;
  *Pool2 = v10;
  *v29 = Pool2;
  v10[1] = Pool2;
  Pool2[3] = a3;
  Pool2[2] = Pool2 + 4;
  *a4 = Pool2 + 4;
  KxReleaseSpinLock((volatile signed __int64 *)v11);
  if ( KiIrqlFlags )
  {
    v30 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v30 >= 2u )
    {
      v31 = KeGetCurrentPrcb();
      v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
      v33 = v31->SchedulerAssist;
      v18 = (v32 & v33[5]) == 0;
      v33[5] &= v32;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(v31);
    }
  }
  __writecr8(v28);
  return 0LL;
}
