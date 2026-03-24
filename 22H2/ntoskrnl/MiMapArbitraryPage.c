/*
 * XREFs of MiMapArbitraryPage @ 0x140368F60
 * Callers:
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 *     MiCombinePte @ 0x14055C840 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x140727470 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiCombineCandidate @ 0x1403690F0 (MiCombineCandidate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMapArbitraryPage(__int64 a1, _QWORD *a2, __int64 a3, _DWORD *SchedulerAssist, int a5)
{
  __int64 v5; // rdi
  int v6; // r15d
  __int64 *v7; // rsi
  unsigned int v8; // r12d
  __int64 v11; // rdx
  unsigned __int8 CurrentIrql; // r14
  int v13; // eax
  __int64 v14; // r9
  char v15; // al
  __int64 v16; // r8
  unsigned __int64 ValidPte; // rax
  __int64 v18; // rbx
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  _DWORD *v26; // r8
  int v27; // eax
  __int64 v28; // r8
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // edx
  int v33; // [rsp+68h] [rbp+20h] BYREF

  v5 = a2[8];
  v6 = (int)SchedulerAssist;
  v7 = (__int64 *)a2[9];
  v8 = a3;
  v11 = (unsigned __int128)((v5 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v11 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)v11 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v33 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v33, v11, a3, (__int64)SchedulerAssist);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  v13 = MiCombineCandidate(a1, v8, v5);
  if ( v6 )
  {
    if ( v13 != v6 )
      goto LABEL_24;
  }
  else if ( !v13 )
  {
    goto LABEL_24;
  }
  if ( a5 == 1 && (unsigned __int8)((*(_BYTE *)(v5 + 34) & 7) - 2) > 1u )
  {
LABEL_24:
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags )
      goto LABEL_38;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_38;
    v20 = KeGetCurrentIrql();
    if ( v20 > 0xFu )
      goto LABEL_38;
    if ( CurrentIrql > 0xFu )
      goto LABEL_38;
    if ( v20 < 2u )
      goto LABEL_38;
    CurrentPrcb = KeGetCurrentPrcb();
    v22 = CurrentPrcb->SchedulerAssist;
    v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
    v24 = (v23 & v22[5]) == 0;
    v22[5] &= v23;
    if ( !v24 )
      goto LABEL_38;
LABEL_37:
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_38:
    __writecr8(CurrentIrql);
    return 0LL;
  }
  v15 = *(_BYTE *)(v5 + 34) >> 6;
  if ( v15 == 3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags )
      goto LABEL_38;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_38;
    v25 = KeGetCurrentIrql();
    if ( v25 > 0xFu )
      goto LABEL_38;
    if ( CurrentIrql > 0xFu )
      goto LABEL_38;
    if ( v25 < 2u )
      goto LABEL_38;
    CurrentPrcb = KeGetCurrentPrcb();
    v26 = CurrentPrcb->SchedulerAssist;
    v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
    v24 = (v27 & v26[5]) == 0;
    v26[5] &= v27;
    if ( !v24 )
      goto LABEL_38;
    goto LABEL_37;
  }
  v16 = 1LL;
  if ( v15 )
  {
    if ( v15 == 2 )
      v16 = 25LL;
  }
  else
  {
    v16 = 9LL;
  }
  LODWORD(v16) = v16 | 0x20000000;
  ValidPte = MiMakeValidPte((unsigned __int64)v7, (v5 + 0x58000000000LL) / 48, v16, v14);
  a2[7] = v7;
  v18 = ValidPte;
  a2[6] = v5;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C4E008) && (v18 & 1) != 0 )
        v18 |= 0x8000000000000000uLL;
      *v7 = v18;
      MiWritePteShadow((__int64)v7, v18, v28);
      goto LABEL_12;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v18 & 1) != 0 )
      v18 |= 0x8000000000000000uLL;
  }
  *v7 = v18;
LABEL_12:
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 1LL;
}
