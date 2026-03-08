/*
 * XREFs of MiBuildForkPageTable @ 0x14065F934
 * Callers:
 *     MiUpdateForkMaps @ 0x140662E50 (MiUpdateForkMaps.c)
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiSetPfnPteFrame @ 0x14028A310 (MiSetPfnPteFrame.c)
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiBuildForkPageTable(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4, __int64 a5, int a6)
{
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  __int64 v20; // rbx
  int v21; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // r8

  v10 = 48 * a2 - 0x220000000000LL;
  v11 = 48 * a5 - 0x220000000000LL;
  *(_QWORD *)(v10 + 16) = MiSwizzleInvalidPte(128LL);
  MiSetPfnPteFrame(v10, v12);
  v13 = (unsigned __int8)MiLockPageInline(v11);
  *(_QWORD *)(v11 + 24) ^= ((*(_QWORD *)(v11 + 24) + 1LL) ^ *(_QWORD *)(v11 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LODWORD(a5) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a5);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  *(_BYTE *)(v10 + 34) |= 0x10u;
  if ( (*(_BYTE *)(v10 + 34) & 0xC0) != 0x40 )
    MiChangePageAttribute(v10, 1, 1u);
  v14 = *(_QWORD *)(v10 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v10 + 32) = 1;
  *(_QWORD *)(v10 + 8) = a3;
  *(_QWORD *)(v10 + 24) = v14 | 1;
  *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 6;
  MiAddLockedPageCharge(v10, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
      v19 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v13);
  if ( a6 == 1 )
  {
    v20 = MiSwizzleInvalidPte(((a2 & 0xFFFFFFFFFFLL) << 12) | 0x880);
    v21 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a4);
    if ( !(_DWORD)CurrentThread )
      goto LABEL_33;
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v21 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_33;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_33;
    }
    if ( (v20 & 1) != 0 )
      goto LABEL_32;
  }
  else
  {
    v20 = MiMakeValidPte(a3, a2, -2147483644) | 4;
    if ( a6 == 3 && (MiFlags & 0x600000) != 0 && *(_BYTE *)(a1 + 912) != 1 )
    {
      *(_QWORD *)((a3 & 0xFFF) + *(_QWORD *)(a1 + 1928)) = v20;
      if ( !HIBYTE(word_140C6697C) )
        v20 |= 0x8000000000000000uLL;
    }
    v21 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a4);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v21 = 1;
        if ( HIBYTE(word_140C6697C) )
          goto LABEL_33;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_33;
      }
      if ( (v20 & 1) != 0 )
LABEL_32:
        v20 |= 0x8000000000000000uLL;
    }
  }
LABEL_33:
  *a4 = v20;
  if ( v21 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a4, v20, v23);
  return (char)CurrentThread;
}
