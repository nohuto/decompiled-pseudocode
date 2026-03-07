__int64 __fastcall IommupUnmapDeviceInternal(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rsi
  ULONG_PTR v6; // rcx
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  volatile signed __int64 *v10; // r15
  _QWORD *v11; // rdi
  _QWORD *i; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // r14
  _QWORD *j; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf
  __int64 v28; // rcx
  __int64 v29; // rcx

  v4 = *(_QWORD **)(a2 + 88);
  v6 = v4[5];
  if ( HalpHvIommu )
  {
    IommupHvUnmapDevice(v6);
  }
  else
  {
    LOBYTE(a3) = 1;
    (*(void (__fastcall **)(_QWORD, ULONG_PTR, __int64))(v4[3] + 216LL))(*(_QWORD *)(v4[3] + 16LL), v6, a3);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v9) = 0x8000;
    else
      v9 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v9;
  }
  v10 = (volatile signed __int64 *)(a1 + 24);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 24));
  v11 = 0LL;
  for ( i = *(_QWORD **)(a1 + 32); i != (_QWORD *)(a1 + 32); i = (_QWORD *)*i )
  {
    v11 = i;
    if ( i[2] == v4[3] )
      break;
  }
  v13 = v11 + 3;
  v14 = 0LL;
  for ( j = (_QWORD *)v11[3]; j != v13; j = (_QWORD *)*j )
  {
    v14 = j;
    if ( (_QWORD *)j[5] == v4 )
      break;
  }
  v16 = *v14;
  v17 = (_QWORD *)v14[1];
  if ( *(_QWORD **)(*v14 + 8LL) != v14 || (_QWORD *)*v17 != v14 )
    goto LABEL_40;
  *v17 = v16;
  *(_QWORD *)(v16 + 8) = v17;
  if ( (_QWORD *)*v13 != v13 )
  {
    v11 = 0LL;
    goto LABEL_25;
  }
  v18 = *v11;
  v19 = (_QWORD *)v11[1];
  if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v19 != v11 )
LABEL_40:
    __fastfail(3u);
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
LABEL_25:
  v20 = *v4;
  v21 = (_QWORD *)v4[1];
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v21 != v4 )
    goto LABEL_40;
  *v21 = v20;
  *(_QWORD *)(v20 + 8) = v21;
  KxReleaseSpinLock(v10);
  v22 = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    v23 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v22 = (unsigned int)CurrentIrql + 1;
      v25 = CurrentPrcb->SchedulerAssist;
      v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v27 = (v26 & v25[5]) == 0;
      v25[5] &= v26;
      if ( v27 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  *(_QWORD *)(a2 + 88) = 0LL;
  if ( !HalpHvIommu )
  {
    v27 = (*(_DWORD *)(a2 + 56))-- == 1;
    if ( v27 )
    {
      *(_DWORD *)(a2 + 60) = 0;
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a2 + 64));
      ExRundownCompleted((PEX_RUNDOWN_REF)(a2 + 64));
    }
  }
  HalpMmAllocCtxFree(v22, (__int64)v4);
  HalpMmAllocCtxFree(v28, (__int64)v14);
  if ( v11 )
    HalpMmAllocCtxFree(v29, (__int64)v11);
  return 0LL;
}
