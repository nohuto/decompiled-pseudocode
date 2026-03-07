unsigned __int64 __fastcall MiQueryAddressSpan(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, ULONG_PTR a4)
{
  __int64 v4; // rax
  int v5; // esi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r10
  volatile signed __int32 *v12; // rdi
  _KPROCESS *Process; // rbx
  char v14; // al
  __int64 v15; // rbx
  unsigned __int8 v16; // al
  volatile __int32 *v17; // r14
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v19; // rcx
  unsigned __int8 v20; // r14
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ecx
  unsigned __int64 v24; // r12
  unsigned int v25; // ecx
  unsigned int v26; // edx
  unsigned __int8 v27; // al
  unsigned int v28; // ecx
  ULONG_PTR v30; // rdi
  _DWORD *v31; // r11
  __int64 v32; // rdx
  _DWORD *SchedulerAssist; // r11
  __int64 v34; // rdx
  unsigned __int8 v35; // cl
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  bool v39; // zf
  struct _KPRCB *v40; // rcx
  unsigned __int8 v41; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v43; // r9
  int v44; // edx
  int v45; // [rsp+50h] [rbp-28h] BYREF
  int v46; // [rsp+54h] [rbp-24h] BYREF
  int v47; // [rsp+58h] [rbp-20h] BYREF
  int v48; // [rsp+5Ch] [rbp-1Ch] BYREF
  int v49; // [rsp+60h] [rbp-18h] BYREF
  __int64 v50[2]; // [rsp+68h] [rbp-10h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+40h]
  __int16 v52; // [rsp+C0h] [rbp+48h] BYREF
  unsigned __int64 v53; // [rsp+C8h] [rbp+50h]
  __int16 v54; // [rsp+D0h] [rbp+58h] BYREF
  ULONG_PTR v55; // [rsp+D8h] [rbp+60h]

  v55 = a4;
  v53 = a2;
  v4 = *(unsigned int *)(a4 + 28);
  v5 = 0;
  v45 = 0;
  v7 = a3;
  v8 = a2;
  v9 = v4 | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32);
  v48 = 0;
  v50[0] = 0LL;
  v10 = ((v9 << 12) | 0xFFF) + 1;
  v47 = 0;
  v46 = 0;
  v49 = 0;
  v52 = 0;
  v54 = 0;
  if ( a3 > v10 || !a3 )
    v7 = v10;
  v11 = v7 - 1;
  v12 = (volatile signed __int32 *)&unk_140C69E00;
  Process = KeGetCurrentThread()->ApcState.Process;
  v14 = Process[1].IdealProcessor[30];
  v15 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v16 = v14 & 7;
  if ( v16 <= 4u )
  {
    if ( v16 == 2 )
    {
      v17 = (volatile __int32 *)&unk_140C69E00;
      goto LABEL_7;
    }
LABEL_6:
    v17 = (volatile __int32 *)(v15 + 192);
LABEL_7:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v34) = 4;
      else
        v34 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v34;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v17, CurrentIrql);
    }
    else
    {
      if ( (unsigned __int8)ExpTryAcquireSpinLockShared(v17) )
      {
LABEL_10:
        if ( *((_DWORD *)v17 + 1) )
          _InterlockedExchange(v17 + 1, 0);
        v20 = CurrentIrql;
        goto LABEL_13;
      }
      ExpWaitForSpinLockSharedAndAcquire(v19, CurrentIrql);
    }
    v8 = v53;
    v11 = v7 - 1;
    a4 = v55;
    goto LABEL_10;
  }
  if ( v16 == 5 )
    goto LABEL_6;
  v20 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 <= 0xFu )
  {
    v31 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v20 == 2 )
      LODWORD(v32) = 4;
    else
      v32 = (-1LL << (v20 + 1)) & 4;
    v31[5] |= v32;
    v8 = v53;
  }
LABEL_13:
  *(_DWORD *)(a1 + 32) = MiQueryAddressState(v8, v11, v20, a4, 0LL, &v45, &v46, &v52, v50, &v47);
  if ( v45 )
    v23 = MmProtectToValue[v45] | v46;
  else
    v23 = 0;
  *(_DWORD *)(a1 + 36) = v23;
  v24 = v50[0];
  *(_WORD *)(a1 + 20) = v52;
  if ( v24 < v7 )
  {
    v30 = v55;
    do
    {
      if ( (unsigned int)MiQueryAddressState(v24, v7 - 1, v20, v30, a1, &v48, &v49, &v54, v50, &v47) != *(_DWORD *)(a1 + 32)
        || v48 != v45
        || v54 != v52
        || v49 != v46 )
      {
        break;
      }
      v24 = v50[0];
      if ( (++v5 & 0x1F) == 0 && (unsigned int)MiWorkingSetIsContended(v15) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared(v15, v20);
        MiLockWorkingSetShared(v15);
      }
    }
    while ( v24 < v7 );
    v12 = (volatile signed __int32 *)&unk_140C69E00;
  }
  v25 = *(_DWORD *)(v15 + 184);
  v26 = HIBYTE(v25);
  v27 = v25 & 7;
  v28 = HIBYTE(v25);
  if ( v27 <= 4u || (LOBYTE(v28) = v26, v27 == 5) )
  {
    if ( (*(_DWORD *)(v15 + 188) & 3) != 0 || (v28 & 0x10) != 0 )
      MiPreUnlockWorkingSetShared(v15, v20, v21, v22);
    if ( (*(_BYTE *)(v15 + 184) & 7) != 2 )
      v12 = (volatile signed __int32 *)(v15 + 192);
    MiCheckProcessShadow(v15, 1u);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v12, retaddr);
    }
    else
    {
      _InterlockedAnd(v12, 0xBFFFFFFF);
      _InterlockedDecrement(v12);
    }
    if ( KiIrqlFlags )
    {
      v41 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v41 <= 0xFu && v20 <= 0xFu && v41 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v43 = CurrentPrcb->SchedulerAssist;
        v44 = ~(unsigned __int16)(-1LL << (v20 + 1));
        v39 = (v44 & v43[5]) == 0;
        v43[5] &= v44;
        if ( v39 )
        {
          v40 = CurrentPrcb;
          goto LABEL_71;
        }
      }
    }
  }
  else if ( KiIrqlFlags )
  {
    v35 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && v20 <= 0xFu && v35 >= 2u )
    {
      v36 = KeGetCurrentPrcb();
      v37 = v36->SchedulerAssist;
      v38 = ~(unsigned __int16)(-1LL << (v20 + 1));
      v39 = (v38 & v37[5]) == 0;
      v37[5] &= v38;
      if ( v39 )
      {
        v40 = v36;
LABEL_71:
        KiRemoveSystemWorkPriorityKick(v40);
      }
    }
  }
  __writecr8(v20);
  return v24;
}
