__int64 __fastcall MiReadyLargePageToFree(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r12
  unsigned __int64 v6; // rdi
  ULONG_PTR v7; // rbx
  unsigned __int64 v8; // rax
  unsigned int v10; // r15d
  __int64 v11; // rsi
  unsigned __int64 v12; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rbx
  __int64 v21; // rdi
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  int v24; // edx
  _DWORD *v25; // r9
  char v26; // [rsp+70h] [rbp+18h]

  v26 = a3;
  v3 = a1;
  v4 = MiLargePageSizes[(unsigned int)a2];
  v5 = 48 * a1 - 0x220000000000LL;
  v6 = a1 + v4;
  v7 = v5;
  v8 = a1;
  if ( a1 < a1 + v4 )
  {
    while ( *(_WORD *)(v7 + 32) == 2 )
    {
      v7 += 48LL;
      if ( ++v8 >= v6 )
        goto LABEL_4;
    }
    if ( (a3 & 4) != 0 )
      MiBadRefCount(v7, a2, a3);
  }
LABEL_4:
  if ( v8 == v6 )
    return 1LL;
  v10 = 0;
  v11 = 0LL;
  v12 = (unsigned __int8)MiLockPageInline(48 * a1 - 0x220000000000LL);
  *(_QWORD *)v5 ^= (*(_QWORD *)v5 ^ v4) & 0xFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v12);
  if ( v3 >= v6 )
    return 0LL;
  do
  {
    if ( (unsigned int)MiPrepareLargePageSubPageForFree(v7) )
    {
      ++v11;
    }
    else if ( (v26 & 4) != 0 )
    {
      MiBadRefCount(v7, v18, v19);
    }
    v7 += 48LL;
    ++v3;
  }
  while ( v3 < v6 );
  if ( !v11 )
    return 0LL;
  if ( v11 == v4 )
    return 1LL;
  v20 = (unsigned __int8)MiLockPageInline(v5);
  v21 = (*(_QWORD *)v5 & 0xFFFFFFFFFFLL) - v11;
  *(_QWORD *)v5 ^= (v21 ^ *(_QWORD *)v5) & 0xFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v22 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v22 >= 2u )
    {
      v23 = KeGetCurrentPrcb();
      v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
      v25 = v23->SchedulerAssist;
      v17 = (v24 & v25[5]) == 0;
      v25[5] &= v24;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(v23);
    }
  }
  __writecr8(v20);
  LOBYTE(v10) = v21 == 0;
  return v10;
}
