void __fastcall MiRebuildLargePages(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r13
  char v3; // bp
  __int64 v4; // r14
  unsigned __int8 CurrentIrql; // di
  unsigned int v6; // r15d
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  char v9; // r8
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r13
  unsigned int v13; // r12d
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  unsigned int v16; // r15d
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r11
  unsigned int v19; // r8d
  __int64 NodeStandbyPageCount; // rax
  __int64 v21; // r11
  int v22; // r8d
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  volatile LONG *v25; // r15
  unsigned __int8 v26; // dl
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *v28; // r10
  int v29; // eax
  bool v30; // zf
  unsigned int v31; // edx
  __int64 v32; // r14
  unsigned __int64 v33; // rsi
  _DWORD *v34; // r9
  int v35; // eax
  unsigned __int8 v36; // bp
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  _DWORD *v39; // r8
  int v40; // eax
  unsigned __int64 v41; // [rsp+30h] [rbp-58h]
  char v42; // [rsp+90h] [rbp+8h]
  __int64 v43; // [rsp+98h] [rbp+10h]
  unsigned __int64 v44; // [rsp+A0h] [rbp+18h]
  unsigned __int8 v45; // [rsp+A8h] [rbp+20h]

  v1 = 0LL;
  v43 = *(_QWORD *)(BugCheckParameter2 + 22840);
  v45 = 0;
  v3 = 8;
  v4 = 0x2944FF5AEC02945LL * ((__int64)(BugCheckParameter2 - *(_QWORD *)(v43 + 16)) >> 6);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = v45 + 4;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      v8 = 4;
    else
      v8 = v6 & (-1LL << (CurrentIrql + 1));
    SchedulerAssist[5] |= v8;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter2 + 23104));
  v9 = *(_BYTE *)(BugCheckParameter2 + 3251);
  *(_BYTE *)(BugCheckParameter2 + 3249) = 2;
  v41 = *(_QWORD *)(BugCheckParameter2 + 22832);
  v42 = v9;
  v10 = v41 / 0xC8;
  if ( v41 / 0xC8 < (-(__int64)(v9 != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000 )
    goto LABEL_45;
  v11 = MiNodeLargeFreeZeroPages((_QWORD *)BugCheckParameter2, v6, 2);
  v12 = v11;
  if ( v11 >= v10 )
    goto LABEL_44;
  v13 = MmNumberOfChannels;
  v14 = 0LL;
  v15 = v10 - v11;
  v44 = 0LL;
  v16 = 0;
  if ( MmNumberOfChannels )
  {
    v17 = 0LL;
    do
      v17 += MiNodeFreeZeroPages((_QWORD *)BugCheckParameter2, v16++, 0);
    while ( v16 < v13 );
    v44 = v17;
    v3 = 8;
    v14 = v44;
  }
  if ( v14 < v15 )
  {
    if ( v12 >= 0x400 )
      goto LABEL_44;
    v18 = 0LL;
    v19 = 0;
    if ( v13 )
    {
      do
      {
        NodeStandbyPageCount = MiGetNodeStandbyPageCount(v43, v4, v19);
        v18 = NodeStandbyPageCount + v21;
        v19 = v22 + 1;
      }
      while ( v19 < v13 );
      v14 = v44;
    }
    v23 = 0x8000LL;
    if ( v41 / 0xA > 0x8000 )
      v23 = v41 / 0xA;
    if ( v18 <= v23 || (v44 = (v18 - v23) / 0xC8 + v14, v44 < v15) )
    {
LABEL_44:
      v1 = 0LL;
LABEL_45:
      v32 = v43;
      v25 = (volatile LONG *)(BugCheckParameter2 + 23104);
      goto LABEL_46;
    }
  }
  *(_BYTE *)(BugCheckParameter2 + 3251) = 0;
  v24 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  v1 = v24;
  if ( v24 )
    *(_BYTE *)(v24 + 18) = 1;
  v25 = (volatile LONG *)(BugCheckParameter2 + 23104);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter2 + 23104));
  if ( KiIrqlFlags )
  {
    v26 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v28 = CurrentPrcb->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v30 = (v29 & v28[5]) == 0;
      v28[5] &= v29;
      if ( v30 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  v31 = v4;
  v32 = v43;
  v33 = MiRebuildLargePage(v43, v31, 2u, v44, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v34 = KeGetCurrentPrcb()->SchedulerAssist;
    v35 = 4;
    if ( CurrentIrql != 2 )
      v35 = (-1LL << (CurrentIrql + 1)) & 4;
    v34[5] |= v35;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter2 + 23104));
  if ( !v33 )
  {
    if ( v42 )
      *(_BYTE *)(BugCheckParameter2 + 3251) = 1;
    v36 = *(_BYTE *)(BugCheckParameter2 + 3250);
    if ( v36 >= 0x80u )
      v3 = -1;
    else
      v3 = 2 * v36;
  }
LABEL_46:
  *(_BYTE *)(BugCheckParameter2 + 3250) = v3;
  *(_BYTE *)(BugCheckParameter2 + 3248) = v3;
  *(_BYTE *)(BugCheckParameter2 + 3249) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v25);
  if ( KiIrqlFlags )
  {
    v37 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && CurrentIrql <= 0xFu && v37 >= 2u )
    {
      v38 = KeGetCurrentPrcb();
      v39 = v38->SchedulerAssist;
      v40 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v30 = (v40 & v39[5]) == 0;
      v39[5] &= v40;
      if ( v30 )
        KiRemoveSystemWorkPriorityKick((__int64)v38);
    }
  }
  __writecr8(CurrentIrql);
  if ( v1 )
    KeAbPostRelease(BugCheckParameter2);
  PsDereferencePartition(*(_QWORD *)(v32 + 200));
}
