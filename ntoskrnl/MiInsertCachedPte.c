/*
 * XREFs of MiInsertCachedPte @ 0x14027D0C0
 * Callers:
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 * Callees:
 *     MiReleaseSmallPteMappings @ 0x14027D4D0 (MiReleaseSmallPteMappings.c)
 *     MiEmptyPteBins @ 0x140299F00 (MiEmptyPteBins.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x14029A144 (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseLargePdeMappings @ 0x14065D1F4 (MiReleaseLargePdeMappings.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // r13
  unsigned int v5; // r15d
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // r14
  int v10; // r12d
  volatile signed __int64 *v11; // r10
  __int64 v12; // rbx
  unsigned __int64 *v13; // r11
  unsigned __int64 v14; // rbx
  signed __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // ecx
  __int64 *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // r11
  unsigned __int8 CurrentIrql; // si
  int v29; // eax
  _DWORD *SchedulerAssist; // r9
  __int64 v31; // rdx
  unsigned __int64 v32; // rbx
  __int64 v33; // r11
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // eax
  unsigned __int64 v38; // rcx
  unsigned __int8 v39; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v41; // r9
  int v42; // eax
  bool v43; // zf
  signed __int32 v44[8]; // [rsp+0h] [rbp-88h] BYREF
  volatile signed __int64 *v45; // [rsp+20h] [rbp-68h]
  volatile signed __int64 v46; // [rsp+28h] [rbp-60h]
  signed __int64 v47; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v48; // [rsp+38h] [rbp-50h]
  __int64 v49; // [rsp+40h] [rbp-48h]
  signed __int64 v52; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v47 = 0LL;
  v52 = 0LL;
  v4 = a3;
  v5 = a3 >= 0x200;
  v48 = v3;
  v7 = (__int64)((_QWORD)a2 << 25) >> 16;
  v8 = 2LL;
  if ( v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v5 = 2;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v48 = v3;
    if ( (unsigned int)v4 > (4096 - ((unsigned __int16)a2 & 0xFFFu)) >> 3 )
      return 0LL;
  }
  if ( a2 == (unsigned __int64 *)v3 )
    return 0LL;
  if ( (_DWORD)v4 != 1 )
  {
    v22 = (__int64 *)(a2 + 1);
    v23 = v4 << 32;
    if ( qword_140C657C0 )
    {
      if ( (qword_140C657C0 & v23) != 0 )
        v23 |= 0x10uLL;
      else
        v23 |= qword_140C657C0;
    }
    if ( (unsigned int)MiPteInShadowRange(a2 + 1) )
    {
      if ( (unsigned int)MiPteHasShadow(v25, v24, v8) )
      {
        if ( !HIBYTE(word_140C6697C) && (v23 & 1) != 0 )
          v23 |= 0x8000000000000000uLL;
        *v22 = v23;
        MiWritePteShadow(v22, v23);
        goto LABEL_32;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v23 & 1) != 0 )
      {
        v23 |= 0x8000000000000000uLL;
      }
    }
    *v22 = v23;
LABEL_32:
    v49 = 0LL;
    goto LABEL_6;
  }
  v49 = 4096LL;
LABEL_6:
  v9 = *(_QWORD *)(a1 + 72)
     + 72
     * (KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]
      + (unsigned __int64)(v5 * (unsigned __int16)KeNumberNodes));
  while ( 1 )
  {
    _InterlockedOr(v44, 0);
    v10 = KiTbFlushTimeStamp;
    if ( KiTbFlushTimeStamp )
      break;
    KeFlushTb(0LL, 1LL);
  }
  v11 = (volatile signed __int64 *)(v9 + 8LL * (KiTbFlushTimeStamp & 7));
  v45 = v11;
  if ( v5 != 2 )
    goto LABEL_9;
  v38 = v4 + *(int *)(v9 + 64);
  if ( v38 >= 0x80 )
  {
    MiEmptyPteBins(a1, 1LL, v8);
    return 0LL;
  }
  if ( v38 >= 0x40 )
  {
    MiEmptyPteBins(a1, 0LL, v8);
    v11 = v45;
  }
LABEL_9:
  v12 = 0LL;
  if ( qword_140C657C0 )
    v12 = qword_140C657C0;
  v13 = a2;
  v14 = v49 | v12 & 0xFFFFFFFFFFFF0FFFuLL;
LABEL_12:
  v15 = *v11;
  v46 = *v11;
  while ( 1 )
  {
    while ( 1 )
    {
      v47 = v15;
      if ( (_DWORD)v15 != v10 )
      {
        if ( HIDWORD(v15) )
          break;
      }
      if ( v14 )
      {
        if ( qword_140C657C0 )
        {
          if ( (v14 & 0x10) != 0 )
            LODWORD(v14) = v14 & 0xFFFFFFEF;
          else
            LODWORD(v14) = ~(_DWORD)qword_140C657C0 & v14;
        }
      }
      else
      {
        LODWORD(v14) = 0;
      }
      v14 = ((unsigned __int64)HIDWORD(v46) << 32) | (unsigned int)v14;
      if ( qword_140C657C0 )
      {
        if ( (qword_140C657C0 & v14) != 0 )
          v14 |= 0x10uLL;
        else
          v14 |= qword_140C657C0;
      }
      v16 = v14;
      if ( (unsigned int)MiPteInShadowRange(v13) )
      {
        if ( (unsigned int)MiPteHasShadow(v18, v17, v19) )
        {
          if ( !HIBYTE(word_140C6697C) && (v14 & 1) != 0 )
            v16 = v14 | 0x8000000000000000uLL;
          *a2 = v16;
          MiWritePteShadow(a2, v16);
          goto LABEL_23;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v14 & 1) != 0 )
        {
          v16 = v14 | 0x8000000000000000uLL;
        }
      }
      v13 = a2;
      *a2 = v16;
LABEL_23:
      v11 = v45;
      HIDWORD(v52) = (__int64)((__int64)v13 - v48) >> 3;
      LODWORD(v52) = v10;
      v15 = _InterlockedCompareExchange64(v45, v52, v15);
      v46 = v15;
      if ( v15 == v47 )
      {
        v20 = v4;
        goto LABEL_25;
      }
    }
    if ( !(_DWORD)v15 )
      goto LABEL_12;
    _InterlockedOr(v44, 0);
    if ( (unsigned __int8)MiTbFlushTimeStampMayNeedFlush(
                            (unsigned int)v15,
                            (unsigned int)KiTbFlushTimeStamp,
                            0xFFFFFFFFLL) )
      break;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v31) = 4;
      else
        v31 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v31;
    }
    v15 = _InterlockedCompareExchange64(v11, 0LL, v15);
    v46 = v15;
    if ( v15 == v47 )
    {
      if ( v5 == 2 )
        v29 = MiReleaseLargePdeMappings(a1, &v47, 0LL);
      else
        v29 = MiReleaseSmallPteMappings(a1, v5, HIDWORD(v47), 0LL);
      _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 64), -v29);
      v11 = v45;
      v15 = 0LL;
      v46 = 0LL;
    }
    if ( KiIrqlFlags )
    {
      v39 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v41 = CurrentPrcb->SchedulerAssist;
        v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v43 = (v42 & v41[5]) == 0;
        v41[5] &= v42;
        if ( v43 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v11 = v45;
      }
    }
    __writecr8(CurrentIrql);
    v13 = a2;
  }
  HIDWORD(v52) = (v27 - v26) >> 3;
  v32 = v49 | MiSwizzleInvalidPte(0LL) & 0xFFFFFFFFFFFF0FFFuLL;
  if ( !(unsigned int)MiPteInShadowRange(v33) )
    goto LABEL_52;
  if ( (unsigned int)MiPteHasShadow(v35, v34, v36) )
  {
    if ( !HIBYTE(word_140C6697C) && (v32 & 1) != 0 )
      v32 |= 0x8000000000000000uLL;
    *a2 = v32;
    MiWritePteShadow(a2, v32);
  }
  else
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v32 & 1) != 0 )
      v32 |= 0x8000000000000000uLL;
LABEL_52:
    *a2 = v32;
  }
  if ( v5 == 2 )
    v37 = MiReleaseLargePdeMappings(a1, &v52, 0LL);
  else
    v37 = MiReleaseSmallPteMappings(a1, v5, HIDWORD(v52), 0LL);
  v20 = -v37;
LABEL_25:
  _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 64), v20);
  return 1LL;
}
