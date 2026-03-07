__int64 __fastcall MiInsertNewZeroThread(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  volatile LONG *v4; // rcx
  int v6; // ebp
  __int128 **v7; // r15
  __int64 v8; // r12
  KIRQL v9; // al
  unsigned int v10; // ecx
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rcx
  _QWORD *v13; // r8
  NTSTATUS v14; // ebp
  unsigned __int64 v15; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  int v26; // eax
  _DWORD *v27; // r8
  HANDLE Handle; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  __int128 v30; // [rsp+60h] [rbp-48h] BYREF

  Handle = 0LL;
  v3 = *(_QWORD *)(a1 + 168);
  v4 = (volatile LONG *)(*(_QWORD *)(a1 + 200) + 23160LL);
  v30 = 0LL;
  v6 = 0;
  v7 = *(__int128 ***)(qword_140C65720 + 376LL * *(unsigned int *)(v3 + 56) + 368);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 200LL) + 120LL);
  v9 = ExAcquireSpinLockExclusive(v4);
  v10 = *(_DWORD *)(a1 + 4);
  v11 = v9;
  if ( v10 >= *(_DWORD *)(a1 + 8) )
  {
    v6 = -1073741523;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = v10 + 1;
    v12 = a2 + 21;
    v13 = *(_QWORD **)(a1 + 192);
    if ( *v13 != a1 + 184 )
      goto LABEL_33;
    *v12 = a1 + 184;
    a2[22] = v13;
    *v13 = v12;
    *(_QWORD *)(a1 + 192) = v12;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 200) + 23160LL));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v21 = (v20 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v11);
  if ( v6 < 0 )
  {
    MiDeleteZeroThreadContext(a2);
    return 0LL;
  }
  v30 = **v7;
  v14 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, v8, 0LL, MiZeroNodePages, a2, &v30, 0LL);
  if ( v14 >= 0 )
  {
    Object = 0LL;
    v14 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    ObCloseHandle(Handle, 0);
    a2[10] = Object;
  }
  v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 200) + 23160LL));
  if ( v14 >= 0 )
  {
    if ( !*(_BYTE *)(a1 + 27) )
      *(_BYTE *)(a1 + 27) = 1;
    a2 = 0LL;
    goto LABEL_12;
  }
  --*(_DWORD *)(a1 + 4);
  v22 = a2[21];
  v23 = (_QWORD *)a2[22];
  if ( *(_QWORD **)(v22 + 8) != a2 + 21 || (_QWORD *)*v23 != a2 + 21 )
LABEL_33:
    __fastfail(3u);
  *v23 = v22;
  *(_QWORD *)(v22 + 8) = v23;
LABEL_12:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 200) + 23160LL));
  if ( KiIrqlFlags )
  {
    v24 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v24 >= 2u )
    {
      v25 = KeGetCurrentPrcb();
      v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
      v27 = v25->SchedulerAssist;
      v21 = (v26 & v27[5]) == 0;
      v27[5] &= v26;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(v25);
    }
  }
  __writecr8(v15);
  if ( a2 )
    MiDeleteZeroThreadContext(a2);
  return (unsigned int)v14;
}
