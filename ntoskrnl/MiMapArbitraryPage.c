/*
 * XREFs of MiMapArbitraryPage @ 0x14029EE40
 * Callers:
 *     MiConvertStandbyToProto @ 0x14029ED24 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiCombineCandidate @ 0x14032C640 (MiCombineCandidate.c)
 *     MiMakeProtectionPfnCompatible @ 0x14034A974 (MiMakeProtectionPfnCompatible.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMapArbitraryPage(__int64 a1, _QWORD *a2, unsigned int a3, int a4, int a5)
{
  __int64 v5; // rsi
  unsigned __int64 *v7; // r14
  unsigned __int64 v11; // rbp
  int v12; // eax
  unsigned int v13; // edi
  unsigned __int8 v14; // al
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v17; // rbx
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v31; // eax

  v5 = a2[8];
  v7 = (unsigned __int64 *)a2[9];
  v11 = (unsigned __int8)MiLockPageInline(v5);
  v12 = MiCombineCandidate(a1, a3, v5);
  v13 = 0;
  if ( a4 )
  {
    if ( v12 != a4 )
      goto LABEL_14;
  }
  else if ( !v12 )
  {
    goto LABEL_14;
  }
  if ( !a5 || (v14 = *(_BYTE *)(v5 + 34) & 7, v14 >= 2u) && v14 <= 3u )
  {
    if ( (*(_BYTE *)(v5 + 34) & 0xC0) != 0xC0 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1LL, v5);
      ValidPte = MiMakeValidPte(
                   (unsigned __int64)v7,
                   0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4),
                   ProtectionPfnCompatible | 0x20000000u);
      a2[7] = v7;
      v17 = ValidPte;
      a2[6] = v5;
      v18 = 0;
      if ( !(unsigned int)MiPteInShadowRange(v7) )
      {
LABEL_8:
        *v7 = v17;
        if ( v18 )
          MiWritePteShadow(v7, v17);
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v27 = (v31 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v31;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v13 = 1;
        goto LABEL_12;
      }
      if ( (unsigned int)MiPteHasShadow(v20, v19, v21) )
      {
        v18 = 1;
        if ( HIBYTE(word_140C6697C) )
          goto LABEL_8;
        v27 = (v17 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_8;
        v27 = (v17 & 1) == 0;
      }
      if ( !v27 )
        v17 |= 0x8000000000000000uLL;
      goto LABEL_8;
    }
  }
LABEL_14:
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v23 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v23 >= 2u )
    {
      v24 = KeGetCurrentPrcb();
      v25 = v24->SchedulerAssist;
      v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v27 = (v26 & v25[5]) == 0;
      v25[5] &= v26;
      if ( v27 )
        KiRemoveSystemWorkPriorityKick(v24);
    }
  }
LABEL_12:
  __writecr8(v11);
  return v13;
}
