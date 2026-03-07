__int64 __fastcall VmpRemoveMemoryRange(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  void *v6; // rdi
  __int64 v7; // rsi
  unsigned int v11; // ebx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r11
  bool v24; // zf
  unsigned __int64 v25; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v29; // eax
  PVOID P; // [rsp+40h] [rbp-78h]
  unsigned __int64 v32; // [rsp+48h] [rbp-70h]
  __int64 v33; // [rsp+50h] [rbp-68h]
  PVOID v34; // [rsp+60h] [rbp-58h]
  unsigned __int64 v35; // [rsp+68h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v37; // [rsp+C8h] [rbp+10h]
  __int64 v38; // [rsp+D0h] [rbp+18h] BYREF
  unsigned __int64 v39; // [rsp+D8h] [rbp+20h]

  v39 = a4;
  v34 = 0LL;
  v6 = 0LL;
  P = 0LL;
  v7 = 0LL;
  v36 = 0LL;
  v37 = a4 + a2 - 1;
  v35 = a3 + a4;
  v33 = a3 + a4 - 1;
  v38 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a5 )
  {
    v11 = -1073740007;
    goto LABEL_52;
  }
  VmpInvalidateSlatBatched(SpinLock, a3, a2, a4, &v38, 1);
  v12 = (unsigned __int64)(SpinLock + 2);
  v13 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 && v13 )
    v13 ^= v12;
  while ( v13 )
  {
    if ( a3 <= *(_QWORD *)(v13 + 32) )
    {
      if ( a3 >= *(_QWORD *)(v13 + 24) )
        break;
      v14 = *(_QWORD *)v13;
    }
    else
    {
      v14 = *(_QWORD *)(v13 + 8);
    }
    if ( (SpinLock[4] & 1) != 0 && v14 )
      v13 ^= v14;
    else
      v13 = v14;
  }
  if ( !v13 || (v15 = v13 - 24, v13 == 24) )
  {
    v11 = -1073741172;
    goto LABEL_51;
  }
  v16 = *(_QWORD **)(v15 + 16);
  v32 = v16[3];
  if ( *(_QWORD *)(v15 + 48) == a3 && *(_QWORD *)(v15 + 56) == v33 && v32 == a2 && v16[4] == v37 )
  {
    v17 = *(_DWORD *)(v15 + 64);
    if ( (v17 & 1) != 0 )
    {
      *(_DWORD *)(v15 + 64) = v17 & 0xFFFFFFFE;
      v36 = VmpVaRangeCheckPinnedGpaRanges(v16);
    }
    RtlRbRemoveNode((unsigned __int64 *)SpinLock + 1, v13);
    *(_QWORD *)(v15 + 40) = -1LL;
    v18 = *(_QWORD *)v15;
    v19 = *(_QWORD **)(v15 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 || *v19 != v15 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    P = (PVOID)v15;
    if ( (_QWORD *)v16[5] == v16 + 5 )
    {
      RtlRbRemoveNode((unsigned __int64 *)SpinLock + 3, (unsigned __int64)v16);
      v16[2] = -1LL;
      v34 = v16;
    }
    goto LABEL_28;
  }
  if ( (unsigned __int64)VmpVaRangeNumberOfGpaRanges(v16) <= 1 )
  {
    if ( a3 == v22 && a2 == v32 )
    {
      v24 = v23 == *(_QWORD *)(v15 + 56);
      if ( v23 >= *(_QWORD *)(v15 + 56) )
        goto LABEL_43;
      if ( v37 < v21 )
      {
        v25 = v39;
        *(_QWORD *)(v15 + 48) = v35;
        v16[3] = v25 + a2;
        goto LABEL_48;
      }
    }
    v24 = v23 == *(_QWORD *)(v15 + 56);
LABEL_43:
    if ( !v24 || v37 != v21 || a3 <= v22 || a2 <= v32 )
      goto LABEL_36;
    *(_QWORD *)(v15 + 56) = a3 - 1;
    v16[4] = a2 - 1;
LABEL_48:
    if ( (*(_DWORD *)(v15 + 64) & 1) != 0 )
      v36 = v16[7];
LABEL_28:
    ++*((_QWORD *)SpinLock + 5);
    v20 = *(_QWORD *)v12;
    if ( (SpinLock[4] & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_32;
      v20 ^= v12;
    }
    if ( v20 )
    {
LABEL_33:
      v6 = P;
      v11 = 0;
      v7 = v36;
      goto LABEL_52;
    }
LABEL_32:
    *((_QWORD *)SpinLock + 9) = -1LL;
    *((_WORD *)SpinLock + 52) = 0;
    goto LABEL_33;
  }
LABEL_36:
  v11 = -1073741637;
  v6 = 0LL;
LABEL_51:
  v7 = 0LL;
LABEL_52:
  if ( v38 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v38 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
        v24 = (v29 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v29;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8((unsigned __int8)v38);
  }
  if ( v7 )
    VmpUnlockMemoryForPin(SpinLock, v7);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v34 )
    VmpFreeMemoryRanges(v34);
  return v11;
}
