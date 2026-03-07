__int64 __fastcall MiComputeDataFlushRange(__int64 a1, unsigned __int8 a2, _QWORD *a3, __int64 a4, int a5, __int64 a6)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 SubsectionNode; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __int64 LastSubsection; // rbp
  unsigned __int64 v19; // rdi
  int v20; // r12d
  __int64 v21; // r15
  _QWORD *v22; // r14
  __int64 v23; // rax
  __int64 result; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  unsigned __int8 CurrentIrql; // cl
  bool v28; // cf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v31; // eax
  bool v32; // zf
  unsigned __int8 v33; // al
  unsigned __int8 v34; // al
  _DWORD *v35; // r8
  int v36; // eax
  unsigned __int8 v37; // cl
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r8
  int v40; // eax
  _QWORD *v41; // rdi
  unsigned __int64 v42; // [rsp+50h] [rbp+8h]

  v8 = a2;
  v9 = a1;
  if ( !*(_QWORD *)(a1 + 32) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( !KiIrqlFlags )
      goto LABEL_22;
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 || CurrentIrql > 0xFu || (unsigned __int8)v8 > 0xFu )
      goto LABEL_22;
    v28 = CurrentIrql < 2u;
    goto LABEL_44;
  }
  v10 = 0LL;
  v11 = a1 + 128;
  if ( !a3 )
  {
    v14 = 0LL;
LABEL_20:
    LastSubsection = MiFindLastSubsection(a1, 1);
    v19 = *(_DWORD *)(LastSubsection + 44) - (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFFu) - 1;
    goto LABEL_7;
  }
  v12 = *a3 >> 12;
  SubsectionNode = MiLocateSubsectionNode(a1, *a3, 1LL);
  v11 = SubsectionNode;
  if ( !SubsectionNode )
  {
LABEL_31:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    if ( !KiIrqlFlags )
      goto LABEL_22;
    v33 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 || v33 > 0xFu || (unsigned __int8)v8 > 0xFu )
      goto LABEL_22;
    v28 = v33 < 2u;
LABEL_44:
    if ( v28 )
      goto LABEL_22;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
    v32 = (v31 & SchedulerAssist[5]) == 0;
    SchedulerAssist[5] &= v31;
    if ( !v32 )
      goto LABEL_22;
LABEL_58:
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_22:
    __writecr8(v8);
    return 0LL;
  }
  v14 = v12
      - (*(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26));
  if ( !a4
    || (v15 = *a3 + a4 - 1, v16 = v15 >> 12, v17 = MiLocateSubsectionNode(v9, v15, 1LL), (LastSubsection = v17) == 0) )
  {
    a1 = v9;
    goto LABEL_20;
  }
  v19 = v16 - (*(unsigned int *)(v17 + 36) | ((unsigned __int64)(*(_WORD *)(v17 + 32) & 0xFFC0) << 26));
LABEL_7:
  v42 = v19;
  if ( !*(_DWORD *)(v11 + 104) || (int)MiReferenceSubsection(v11, 0LL) <= 1 )
  {
    v20 = *(_DWORD *)(v11 + 44) - v14;
    if ( v11 == LastSubsection )
    {
LABEL_52:
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
      if ( !KiIrqlFlags )
        goto LABEL_22;
      v34 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_22;
      if ( v34 > 0xFu )
        goto LABEL_22;
      if ( (unsigned __int8)v8 > 0xFu )
        goto LABEL_22;
      if ( v34 < 2u )
        goto LABEL_22;
      CurrentPrcb = KeGetCurrentPrcb();
      v35 = CurrentPrcb->SchedulerAssist;
      v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v32 = (v36 & v35[5]) == 0;
      v35[5] &= v36;
      if ( !v32 )
        goto LABEL_22;
      goto LABEL_58;
    }
    while ( 1 )
    {
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v11 )
        goto LABEL_31;
      if ( *(_DWORD *)(v11 + 104) && (int)MiReferenceSubsection(v11, 0LL) > 1 )
      {
        v21 = *(_QWORD *)(v11 + 8);
        goto LABEL_10;
      }
      v20 += *(_DWORD *)(v11 + 44);
      if ( v11 == LastSubsection )
        goto LABEL_52;
    }
  }
  v20 = 0;
  v21 = *(_QWORD *)(v11 + 8) + 8 * v14;
LABEL_10:
  if ( !*(_DWORD *)(LastSubsection + 104) || (int)MiReferenceSubsection(LastSubsection, 0LL) <= 1 )
  {
    v26 = *(_QWORD *)(v11 + 16);
    if ( v26 == LastSubsection )
      goto LABEL_24;
    do
    {
      if ( *(_DWORD *)(v26 + 104) && *(_QWORD *)(v26 + 8) )
        v10 = v26;
      v26 = *(_QWORD *)(v26 + 16);
    }
    while ( v26 != LastSubsection );
    if ( !v10 )
LABEL_24:
      LastSubsection = v11;
    else
      LastSubsection = v10;
    MiReferenceSubsection(LastSubsection, 0LL);
    v19 = *(_DWORD *)(LastSubsection + 44) - (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFFu) - 1;
    v42 = (unsigned int)v19;
  }
  ++*(_QWORD *)(v9 + 40);
  v22 = (_QWORD *)MiBuildWakeList(v9, 4LL);
  if ( (*(_DWORD *)(v9 + 56) & 0x10000000) != 0 )
  {
    v25 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v9 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v25 + 1408));
    MiUnlinkUnusedControlArea(v9);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v25 + 1408));
    v19 = v42;
  }
  if ( a5 )
    *(_DWORD *)(v9 + 56) |= 4u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  if ( KiIrqlFlags )
  {
    v37 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v37 >= 2u )
    {
      v38 = KeGetCurrentPrcb();
      v39 = v38->SchedulerAssist;
      v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v32 = (v40 & v39[5]) == 0;
      v39[5] &= v40;
      if ( v32 )
        KiRemoveSystemWorkPriorityKick(v38);
    }
  }
  __writecr8(v8);
  if ( v22 )
  {
    do
    {
      v41 = (_QWORD *)*v22;
      KeSignalGate((__int64)(v22 + 2), 1u);
      v22 = v41;
    }
    while ( v41 );
    v19 = v42;
  }
  v23 = *(_QWORD *)(LastSubsection + 8);
  *(_QWORD *)a6 = v9;
  *(_QWORD *)(a6 + 8) = v21;
  *(_QWORD *)(a6 + 16) = v23 + 8 * v19;
  result = 259LL;
  *(_QWORD *)(a6 + 24) = v11;
  *(_QWORD *)(a6 + 32) = LastSubsection;
  *(_DWORD *)(a6 + 40) = v20;
  return result;
}
