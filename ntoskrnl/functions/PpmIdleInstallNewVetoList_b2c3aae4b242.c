void __fastcall PpmIdleInstallNewVetoList(__int64 a1, int a2, char *a3)
{
  KIRQL v6; // al
  const void *v7; // rdx
  char *v8; // rbx
  __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  __int64 *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edx
  char *v14; // rcx
  char **v15; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  KeFirstGroupAffinityEx((__int64)&Affinity, (_WORD *)(a1 + 64));
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  v6 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
  v7 = *(const void **)(a1 + 48);
  v8 = (char *)(a1 + 24);
  v9 = *(unsigned int *)(a1 + 44);
  v10 = v6;
  while ( 1 )
  {
    v11 = *(__int64 **)v8;
    if ( *(char **)v8 == v8 )
      break;
    v12 = *v11;
    if ( (char *)v11[1] != v8 || *(__int64 **)(v12 + 8) != v11 )
LABEL_19:
      __fastfail(3u);
    *(_QWORD *)v8 = v12;
    *(_QWORD *)(v12 + 8) = v8;
  }
  memmove(a3, v7, v9 << 6);
  v13 = 0;
  *(_QWORD *)(a1 + 48) = a3;
  for ( *(_DWORD *)(a1 + 44) = a2; v13 < (unsigned int)v9; ++v13 )
  {
    v14 = &a3[64 * (unsigned __int64)v13];
    if ( *((_DWORD *)v14 + 5) )
    {
      v15 = *(char ***)(a1 + 32);
      if ( *v15 != v8 )
        goto LABEL_19;
      *(_QWORD *)v14 = v8;
      *((_QWORD *)v14 + 1) = v15;
      *v15 = v14;
      *(_QWORD *)(a1 + 32) = v14;
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v20 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v10);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
