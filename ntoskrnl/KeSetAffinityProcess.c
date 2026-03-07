__int64 __fastcall KeSetAffinityProcess(__int64 a1, char a2, unsigned __int16 *a3)
{
  char v6; // r15
  unsigned __int8 CurrentIrql; // si
  volatile LONG *v8; // r13
  char v9; // r15
  unsigned __int16 *v10; // r12
  unsigned __int16 v11; // di
  char v12; // r13
  _QWORD *i; // rdi
  _DWORD *SchedulerAssist; // r9
  __int64 v16; // rax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  unsigned __int16 v22; // di
  unsigned __int16 v23; // cx
  _QWORD *v24; // r8
  char v25; // r13
  __int64 v26; // rdx
  char v27; // [rsp+20h] [rbp-E0h]
  int v28; // [rsp+28h] [rbp-D8h]
  __int64 v29; // [rsp+30h] [rbp-D0h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+38h] [rbp-C8h]
  __int128 v31; // [rsp+40h] [rbp-C0h]
  _DWORD v32[68]; // [rsp+50h] [rbp-B0h] BYREF

  v32[0] = 2097153;
  v27 = 0;
  v29 = 0LL;
  v6 = 0;
  memset(&v32[1], 0, 0x104uLL);
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 1) != 0 )
      v6 = 1;
    else
      v27 = 1;
  }
  v28 = KiComputeGroupMask(a3);
  v31 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v16) = 4;
    if ( CurrentIrql != 2 )
      v16 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v16;
  }
  v8 = (volatile LONG *)(a1 + 64);
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( v6 && (*(_DWORD *)(a1 + 632) & 0x1000) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( KiIrqlFlags )
    {
      v17 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    __writecr8(CurrentIrql);
    return 3221225485LL;
  }
  v9 = v27;
  v10 = (unsigned __int16 *)(a1 + 80);
  if ( !v27 )
  {
    KiCopyAffinityEx(a1 + 80, *(_WORD *)(a1 + 82), a3);
    v11 = 0;
    if ( *a3 )
    {
      v12 = 0;
      do
      {
        if ( *(_QWORD *)&a3[4 * v11 + 4] )
        {
          KiSetIdealNodeProcessByGroup(a1, 0LL, v11);
          if ( !v12 )
          {
            v12 = 1;
            *(_WORD *)(a1 + 836) = *(_WORD *)(a1 + 2LL * v11 + 772);
            *(_WORD *)(a1 + 1040) = v11;
          }
        }
        ++v11;
      }
      while ( v11 < *a3 );
      v9 = 0;
      v10 = (unsigned __int16 *)(a1 + 80);
      v8 = (volatile LONG *)(a1 + 64);
    }
LABEL_12:
    KiSelectIdealProcessorSetsForProcess(a1, (_DWORD *)(a1 + 2560), a1 + 2576, (_QWORD *)(a1 + 2564));
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
      KiSetAffinityThread((__int64)(i - 95), (__int64)&v29, v10);
    if ( !v9 )
      *(_DWORD *)(a1 + 636) = v28;
    goto LABEL_17;
  }
  v22 = *v10;
  v23 = 0;
  if ( !*v10 )
    goto LABEL_17;
  v24 = a3 + 4;
  v25 = 0;
  do
  {
    v26 = *(_QWORD *)((char *)v24 + a1 - (_QWORD)a3 + 80);
    if ( !v26 )
      goto LABEL_45;
    if ( v23 < *a3 && (v26 | *v24) != v26 )
    {
      v26 |= *v24;
      v25 = 1;
    }
    if ( LOWORD(v32[0]) <= v23 )
    {
      if ( HIWORD(v32[0]) <= v23 )
        goto LABEL_45;
      LOWORD(v32[0]) = v23 + 1;
    }
    *(_QWORD *)((char *)v24 + (char *)v32 - (char *)a3) |= v26;
LABEL_45:
    ++v23;
    ++v24;
  }
  while ( v23 < v22 );
  v21 = v25 == 0;
  v8 = (volatile LONG *)(a1 + 64);
  if ( !v21 )
  {
    KiCopyAffinityEx(a1 + 80, 0x14u, (unsigned __int16 *)v32);
    goto LABEL_12;
  }
LABEL_17:
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v29, CurrentIrql);
  return 0LL;
}
