/*
 * XREFs of MiInsertCachedPte @ 0x140245570
 * Callers:
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MmUnmapIoSpace @ 0x1402EA680 (MmUnmapIoSpace.c)
 * Callees:
 *     KeFlushTb @ 0x14022FA90 (KeFlushTb.c)
 *     MiEmptyPteBins @ 0x14028F900 (MiEmptyPteBins.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiReplenishBitMap @ 0x1402DEAF0 (MiReplenishBitMap.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseLargePteMappings @ 0x140553EFC (MiReleaseLargePteMappings.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // rbp
  int v7; // r11d
  unsigned __int64 v8; // r9
  unsigned __int64 SchedulerAssist; // r9
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r10
  int v14; // r12d
  volatile signed __int64 *v15; // r13
  unsigned __int64 v16; // rcx
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  signed __int64 v20; // rdi
  int v21; // eax
  unsigned __int8 CurrentIrql; // bp
  int v23; // ecx
  unsigned __int64 v24; // rax
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v27; // eax
  bool v28; // zf
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // rax
  signed __int32 v38[8]; // [rsp+0h] [rbp-88h] BYREF
  signed __int64 v39; // [rsp+20h] [rbp-68h] BYREF
  signed __int64 v40; // [rsp+28h] [rbp-60h]
  signed __int64 v41; // [rsp+30h] [rbp-58h] BYREF
  __int64 v42; // [rsp+38h] [rbp-50h]
  __int64 v43; // [rsp+40h] [rbp-48h]
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]
  unsigned int v45; // [rsp+A0h] [rbp+18h]
  int v46; // [rsp+A8h] [rbp+20h]

  v45 = a3;
  v3 = (unsigned int)a3;
  v39 = 0LL;
  if ( (unsigned int)a3 >= 0x200 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v44 = v6;
  v7 = 0;
  v46 = 0;
  v8 = (__int64)(a2 << 25) >> 16;
  if ( v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v7 = 1;
    v46 = 1;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v44 = v6;
    if ( (unsigned int)a3 > (4096 - (a2 & 0xFFF)) >> 3 )
      return 0LL;
  }
  if ( a2 == v6 )
    return 0LL;
  SchedulerAssist = 0x8000000000000000uLL;
  if ( (_DWORD)a3 != 1 )
  {
    a3 = a2 + 8;
    v11 = v3 << 32;
    if ( qword_140C4DF40 )
    {
      if ( (v11 & qword_140C4DF40) != 0 )
        v11 |= 0x10uLL;
      else
        v11 |= qword_140C4DF40;
    }
    if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(qword_140C4DF40, v11, a3, 0x8000000000000000uLL) )
      {
        if ( !HIBYTE(word_140C4E008) && (v11 & 1) != 0 )
          v11 |= SchedulerAssist;
        *(_QWORD *)a3 = v11;
        MiWritePteShadow(a3, v11);
        goto LABEL_23;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v11 & 1) != 0 )
      {
        v11 |= SchedulerAssist;
      }
    }
    *(_QWORD *)a3 = v11;
LABEL_23:
    v10 = 0LL;
    goto LABEL_24;
  }
  v10 = 4096LL;
LABEL_24:
  v12 = *(_QWORD *)(a1 + 80);
  v42 = v10;
  if ( v7 )
    v12 += 72LL * (unsigned __int16)KeNumberNodes;
  v13 = v12 + 72LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  v43 = v13;
  _InterlockedOr(v38, 0);
  v14 = KiTbFlushTimeStamp;
  if ( !KiTbFlushTimeStamp )
  {
    do
    {
      KeFlushTb(0, 1u);
      _InterlockedOr(v38, 0);
      v14 = KiTbFlushTimeStamp;
    }
    while ( !KiTbFlushTimeStamp );
    v13 = v43;
    v7 = v46;
  }
  v15 = (volatile signed __int64 *)(v13 + 8LL * (v14 & 7));
  if ( v7 )
  {
    v16 = v3 + *(int *)(v13 + 64);
    if ( v16 >= 0x80 )
    {
      MiEmptyPteBins(a1, 1LL);
      return 0LL;
    }
    if ( v16 >= 0x40 )
    {
      MiEmptyPteBins(a1, 0LL);
      v7 = v46;
    }
  }
  v18 = 0LL;
  if ( qword_140C4DF40 )
    v18 = qword_140C4DF40;
  v19 = v10 | v18 & 0xFFFFFFFFFFFF0FFFuLL;
LABEL_38:
  v20 = *v15;
  v40 = *v15;
  while ( 1 )
  {
    while ( 1 )
    {
      v41 = v20;
      if ( (_DWORD)v20 != v14 )
      {
        if ( HIDWORD(v20) )
          break;
      }
      if ( v19 )
      {
        if ( qword_140C4DF40 )
        {
          if ( (v19 & 0x10) != 0 )
            LODWORD(v19) = v19 & 0xFFFFFFEF;
          else
            LODWORD(v19) = ~(_DWORD)qword_140C4DF40 & v19;
        }
      }
      else
      {
        LODWORD(v19) = 0;
      }
      v29 = (unsigned __int64)HIDWORD(v40) << 32;
      v19 = v29 | (unsigned int)v19;
      if ( qword_140C4DF40 )
      {
        if ( (qword_140C4DF40 & v19) != 0 )
          v19 |= 0x10uLL;
        else
          v19 |= qword_140C4DF40;
      }
      v30 = v19;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(v29, v19, a3, SchedulerAssist) )
        {
          if ( !HIBYTE(word_140C4E008) && (v19 & 1) != 0 )
            v30 |= 0x8000000000000000uLL;
          *(_QWORD *)a2 = v30;
          MiWritePteShadow(a2, v30);
          goto LABEL_86;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v19 & 1) != 0 )
        {
          v30 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a2 = v30;
LABEL_86:
      LODWORD(v39) = v14;
      HIDWORD(v39) = (__int64)(a2 - v6) >> 3;
      v20 = _InterlockedCompareExchange64(v15, v39, v20);
      v40 = v20;
      if ( v20 == v41 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + 64), v45);
        return 1LL;
      }
    }
    if ( !(_DWORD)v20 )
      goto LABEL_38;
    _InterlockedOr(v38, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - v20) <= 2 )
    {
      if ( (v20 & 1) != 0 || (v21 = 0, (unsigned int)(KiTbFlushTimeStamp - v20) < 2) )
        v21 = 1;
    }
    else
    {
      v21 = 0;
    }
    if ( v21 )
      break;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(SchedulerAssist + 20);
      *(_DWORD *)(SchedulerAssist + 20) = a3;
    }
    v20 = _InterlockedCompareExchange64(v15, 0LL, v20);
    v40 = v20;
    if ( v20 == v41 )
    {
      if ( v7 )
      {
        v23 = MiReleaseLargePteMappings(a1, &v41, 0LL);
      }
      else
      {
        v24 = MiReplenishBitMap(a1, HIDWORD(v41), 0LL);
        v23 = v24;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v24);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + 64), -v23);
      v20 = 0LL;
      v40 = 0LL;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (unsigned __int64)CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v28 = (v27 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
          a3 = (unsigned int)v27 & *(_DWORD *)(SchedulerAssist + 20);
          *(_DWORD *)(SchedulerAssist + 20) = a3;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v6 = v44;
    v7 = v46;
  }
  HIDWORD(v39) = (__int64)(a2 - v6) >> 3;
  v31 = v42 | MiSwizzleInvalidPte(0LL) & 0xFFFFFFFFFFFF0FFFuLL;
  if ( !(unsigned int)MiPteInShadowRange(a2, v32) )
  {
LABEL_97:
    *(_QWORD *)a2 = v31;
    goto LABEL_98;
  }
  if ( !(unsigned int)MiPteHasShadow(v34, v33, v35, v36) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v31 & 1) != 0 )
      v31 |= 0x8000000000000000uLL;
    goto LABEL_97;
  }
  if ( !HIBYTE(word_140C4E008) && (v31 & 1) != 0 )
    v31 |= 0x8000000000000000uLL;
  *(_QWORD *)a2 = v31;
  MiWritePteShadow(a2, v31);
LABEL_98:
  if ( v46 )
  {
    LODWORD(v37) = MiReleaseLargePteMappings(a1, &v39, 0LL);
  }
  else
  {
    v37 = MiReplenishBitMap(a1, HIDWORD(v39), 0LL);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v37);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + 64), -(int)v37);
  return 1LL;
}
