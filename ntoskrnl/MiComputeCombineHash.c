/*
 * XREFs of MiComputeCombineHash @ 0x14032C2E0
 * Callers:
 *     MiCombinePte @ 0x140650CA0 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1407C7D50 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x140276080 (MiGetUltraMapping.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiCombineCandidate @ 0x14032C640 (MiCombineCandidate.c)
 *     MiPerformCombineScan @ 0x14032D550 (MiPerformCombineScan.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiComputeCombineHash(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbp
  _QWORD *v3; // rsi
  unsigned __int64 UltraMapping; // rax
  unsigned int v7; // r12d
  __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 CurrentIrql; // rcx
  __int64 v13; // r9
  char v14; // al
  int v15; // r8d
  unsigned __int64 ValidPte; // rax
  __int64 v17; // rbx
  __int64 v18; // r8
  unsigned __int8 v19; // bl
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdi
  int v23; // r12d
  unsigned __int8 v24; // r15
  unsigned __int64 *v25; // r14
  unsigned __int64 v26; // rbx
  _DWORD *SchedulerAssist; // r8
  _DWORD *v29; // r8
  __int64 v30; // r9
  unsigned __int8 v31; // bl
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  bool v35; // zf
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v38; // r8
  int v39; // eax
  unsigned __int8 v40; // al
  _DWORD *v41; // r8
  int v42; // eax
  __int64 v43; // r11
  unsigned __int8 v44; // cl
  __int64 v45; // r8
  unsigned __int8 v46; // cl
  struct _KPRCB *v47; // r9
  _DWORD *v48; // r8
  int v49; // eax
  int v50; // [rsp+60h] [rbp+8h] BYREF
  __int64 v51; // [rsp+68h] [rbp+10h] BYREF
  __int64 v52; // [rsp+70h] [rbp+18h]

  v2 = *a1;
  v3 = a1 + 2;
  UltraMapping = MiGetUltraMapping((unsigned __int64 *)a1 + 32, 3u, 1LL, 0);
  v7 = *((_DWORD *)a1 + 35);
  v8 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = 48LL * a2[2];
  v10 = v9 - 0x220000000000LL;
  v3[9] = v8;
  v11 = 0xAAAAAAAAAAAAAAABuLL * (v9 >> 4);
  v3[8] = v10;
  CurrentIrql = KeGetCurrentIrql();
  v51 = CurrentIrql;
  __writecr8(2uLL);
  LODWORD(v13) = 4;
  v52 = 4LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql != 2 )
      v13 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v13;
  }
  v50 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v50);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  if ( !(unsigned int)MiCombineCandidate(v2, v7, v10) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v31 = v51;
    if ( !KiIrqlFlags )
      goto LABEL_33;
    v36 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_33;
    if ( v36 > 0xFu )
      goto LABEL_33;
    if ( (unsigned __int8)v51 > 0xFu )
      goto LABEL_33;
    if ( v36 < 2u )
      goto LABEL_33;
    CurrentPrcb = KeGetCurrentPrcb();
    v38 = CurrentPrcb->SchedulerAssist;
    v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v51 + 1));
    v35 = (v39 & v38[5]) == 0;
    v38[5] &= v39;
    if ( !v35 )
      goto LABEL_33;
LABEL_52:
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_33:
    __writecr8(v31);
    return 0LL;
  }
  v14 = *(_BYTE *)(v10 + 34) >> 6;
  if ( v14 == 3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v31 = v51;
    if ( !KiIrqlFlags )
      goto LABEL_33;
    v40 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_33;
    if ( v40 > 0xFu )
      goto LABEL_33;
    if ( (unsigned __int8)v51 > 0xFu )
      goto LABEL_33;
    if ( v40 < 2u )
      goto LABEL_33;
    CurrentPrcb = KeGetCurrentPrcb();
    v41 = CurrentPrcb->SchedulerAssist;
    v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v51 + 1));
    v35 = (v42 & v41[5]) == 0;
    v41[5] &= v42;
    if ( !v35 )
      goto LABEL_33;
    goto LABEL_52;
  }
  v15 = 1;
  if ( v14 )
  {
    if ( v14 == 2 )
      v15 = 25;
  }
  else
  {
    v15 = 9;
  }
  ValidPte = MiMakeValidPte((unsigned __int64)v8, v11, v15 | 0x20000000u);
  v3[7] = v8;
  v17 = ValidPte;
  v3[6] = v10;
  if ( !MiPteInShadowRange((unsigned __int64)v8) )
    goto LABEL_9;
  if ( !MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v17 & 1) != 0 )
      v17 |= v43;
LABEL_9:
    *v8 = v17;
    goto LABEL_10;
  }
  if ( !HIBYTE(word_140C6697C) && (v17 & 1) != 0 )
    v17 |= v43;
  *v8 = v17;
  MiWritePteShadow((__int64)v8, v17, v18);
LABEL_10:
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = v51;
  if ( KiIrqlFlags )
  {
    v44 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v44 <= 0xFu && (unsigned __int8)v51 <= 0xFu && v44 >= 2u )
    {
      v32 = KeGetCurrentPrcb();
      v33 = v32->SchedulerAssist;
      v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v51 + 1));
      v35 = (v34 & v33[5]) == 0;
      v18 = (unsigned int)v34 & v33[5];
      v33[5] = v18;
      if ( v35 )
        KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  __writecr8(v19);
  v20 = a1[13];
  if ( (*(_BYTE *)(v10 + 34) & 7) == 6 )
    ++*(_QWORD *)(v20 + 16);
  else
    ++*(_QWORD *)(v20 + 24);
  v21 = MiPerformCombineScan(v20, v3, v18, a2);
  v22 = v3[6];
  v23 = v21;
  v24 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
  {
    v29 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v24 == 2 )
      LODWORD(v30) = v52;
    else
      v30 = (-1LL << (v24 + 1)) & 4;
    v29[5] |= v30;
  }
  LODWORD(v51) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v51);
    while ( *(__int64 *)(v22 + 24) < 0 );
  }
  v25 = (unsigned __int64 *)v3[7];
  v3[6] = 0LL;
  v26 = ZeroPte;
  if ( !MiPteInShadowRange((unsigned __int64)v25) )
    goto LABEL_16;
  if ( !MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v26 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_16:
    *v25 = v26;
    goto LABEL_17;
  }
  if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
    v26 = ZeroPte | 0x8000000000000000uLL;
  *v25 = v26;
  MiWritePteShadow((__int64)v25, v26, v45);
LABEL_17:
  v3[7] = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v46 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v46 <= 0xFu && v24 <= 0xFu && v46 >= 2u )
    {
      v47 = KeGetCurrentPrcb();
      v48 = v47->SchedulerAssist;
      v49 = ~(unsigned __int16)(-1LL << (v24 + 1));
      v35 = (v49 & v48[5]) == 0;
      v48[5] &= v49;
      if ( v35 )
        KiRemoveSystemWorkPriorityKick(v47);
    }
  }
  __writecr8(v24);
  if ( v23 )
  {
    *a2 = 0LL;
    return 1LL;
  }
  return 0LL;
}
