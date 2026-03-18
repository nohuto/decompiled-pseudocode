/*
 * XREFs of VmpRemoveMemoryRange @ 0x14062BA64
 * Callers:
 *     VmDeleteMemoryRange @ 0x1409D94E0 (VmDeleteMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockExclusive @ 0x14045F78C (VmpProcessContextLockExclusive.c)
 *     VmpInvalidateSlatBatched @ 0x14062A30C (VmpInvalidateSlatBatched.c)
 *     VmpVaRangeCheckPinnedGpaRanges @ 0x14062C524 (VmpVaRangeCheckPinnedGpaRanges.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x14062C558 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpFreeMemoryRanges @ 0x1409DA014 (VmpFreeMemoryRanges.c)
 *     VmpUnlockMemoryForPin @ 0x1409DA634 (VmpUnlockMemoryForPin.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpRemoveMemoryRange(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned __int64 v6; // r13
  unsigned int v9; // ebx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r11
  unsigned __int8 v15; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v19; // eax
  unsigned __int64 v21; // rbx
  _QWORD *v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // r11
  bool v32; // zf
  __int64 v33; // [rsp+40h] [rbp-78h] BYREF
  __int64 v34; // [rsp+48h] [rbp-70h]
  __int64 v35; // [rsp+50h] [rbp-68h]
  PVOID P; // [rsp+58h] [rbp-60h]
  PVOID v37; // [rsp+60h] [rbp-58h]
  unsigned __int64 v38; // [rsp+68h] [rbp-50h]
  unsigned __int64 v39; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v41; // [rsp+D0h] [rbp+18h]

  P = 0LL;
  v37 = 0LL;
  v39 = a4 + a2 - 1;
  v34 = 0LL;
  v38 = a3 + a4;
  v6 = a3 + a4 - 1;
  v35 = 0LL;
  v33 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a5 )
  {
    v9 = -1073740007;
    goto LABEL_18;
  }
  VmpInvalidateSlatBatched(SpinLock, a3, a2, a4, &v33, 1);
  v10 = (unsigned __int64)(SpinLock + 2);
  v11 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 )
  {
    if ( v11 )
      v11 ^= v10;
    else
      v11 = 0LL;
  }
  while ( 1 )
  {
    if ( !v11 )
      goto LABEL_17;
    v12 = *(_QWORD *)(v11 + 32);
    if ( a3 > v12 )
    {
      v13 = *(_QWORD *)(v11 + 8);
      goto LABEL_12;
    }
    v14 = *(_QWORD *)(v11 + 24);
    if ( a3 >= v14 )
      break;
    v13 = *(_QWORD *)v11;
LABEL_12:
    if ( (SpinLock[4] & 1) != 0 && v13 )
      v11 ^= v13;
    else
      v11 = v13;
  }
  v21 = v11 - 24;
  if ( v11 == 24 )
  {
LABEL_17:
    v9 = -1073741172;
    goto LABEL_18;
  }
  v22 = *(_QWORD **)(v21 + 16);
  v23 = v22[3];
  v24 = v22[4];
  v41 = v23;
  v35 = v24 - v23 + 1;
  if ( v14 == a3 && v12 == v6 && v23 == a2 && v24 == v39 )
  {
    v25 = *(_DWORD *)(v21 + 64);
    if ( (v25 & 1) != 0 )
    {
      *(_DWORD *)(v21 + 64) = v25 & 0xFFFFFFFE;
      v34 = VmpVaRangeCheckPinnedGpaRanges(v22);
    }
    RtlRbRemoveNode((unsigned __int64 *)SpinLock + 1, v11);
    *(_QWORD *)(v21 + 40) = -1LL;
    v26 = *(_QWORD *)v21;
    v27 = *(_QWORD **)(v21 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 || *v27 != v21 )
      __fastfail(3u);
    *v27 = v26;
    *(_QWORD *)(v26 + 8) = v27;
    P = (PVOID)v21;
    if ( (_QWORD *)v22[5] == v22 + 5 )
    {
      RtlRbRemoveNode((unsigned __int64 *)SpinLock + 3, (unsigned __int64)v22);
      v22[2] = -1LL;
      v37 = v22;
    }
    goto LABEL_45;
  }
  if ( (unsigned __int64)VmpVaRangeNumberOfGpaRanges(v22) <= 1 )
  {
    if ( a3 == v31 && a2 == v41 )
    {
      v32 = v6 == v29;
      if ( v6 >= v29 )
        goto LABEL_60;
      if ( v39 < v30 )
      {
        *(_QWORD *)(v21 + 48) = v38;
        v22[3] = a2 + a4;
        goto LABEL_65;
      }
    }
    v32 = v6 == v29;
LABEL_60:
    if ( !v32 || v39 != v30 || a3 <= v31 || a2 <= v41 )
      goto LABEL_53;
    *(_QWORD *)(v21 + 56) = a3 - 1;
    v22[4] = a2 - 1;
LABEL_65:
    if ( (*(_DWORD *)(v21 + 64) & 1) != 0 )
      v34 = v22[7];
LABEL_45:
    ++*((_QWORD *)SpinLock + 5);
    v28 = *(_QWORD *)v10;
    if ( (SpinLock[4] & 1) != 0 )
    {
      if ( !v28 )
        goto LABEL_49;
      v28 ^= v10;
    }
    if ( v28 )
    {
LABEL_50:
      v9 = 0;
      goto LABEL_18;
    }
LABEL_49:
    *((_QWORD *)SpinLock + 9) = -1LL;
    *((_WORD *)SpinLock + 52) = 0;
    goto LABEL_50;
  }
LABEL_53:
  v9 = -1073741637;
LABEL_18:
  v15 = v33;
  if ( v33 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v15 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (v15 + 1));
          v32 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)v33);
  }
  if ( v34 )
    VmpUnlockMemoryForPin(SpinLock, v34);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v37 )
    VmpFreeMemoryRanges(v37);
  return v9;
}
