/*
 * XREFs of MiWritePteHighLevelIsr @ 0x14064BEE0
 * Callers:
 *     <none>
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall MiWritePteHighLevelIsr(ULONG_PTR Argument)
{
  __int64 v1; // rdi
  __int64 v2; // r12
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rdx
  volatile signed __int32 *v16; // rsi
  signed __int32 v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // r14
  unsigned __int64 ValidPte; // rbx
  __int64 v21; // r8
  int v22; // eax
  bool v23; // zf
  unsigned __int64 v24; // rbx
  int v25; // r14d
  __int64 v26; // r8
  bool v27; // zf
  signed __int32 v28; // eax
  unsigned int v29; // ebx
  signed __int32 v30; // eax
  unsigned int v31; // ebx
  signed __int32 v32; // eax
  unsigned int v33; // r14d
  __int64 *v34; // rbx
  BOOL v35; // eax
  __int64 v36; // r8
  BOOL HasShadow; // edx
  unsigned __int64 *v38; // rdi
  unsigned __int64 v39; // rbx
  int v40; // r14d
  __int64 v41; // r8
  signed __int32 v42; // eax
  unsigned int v43; // ebx
  signed __int32 v44; // eax
  unsigned int v45; // ebx
  unsigned __int8 v46; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v48; // r8
  int v49; // eax
  ULONG_PTR result; // rax
  unsigned __int8 v51; // [rsp+30h] [rbp-D8h]
  int v52; // [rsp+38h] [rbp-D0h] BYREF
  int v53; // [rsp+3Ch] [rbp-CCh] BYREF
  int v54; // [rsp+40h] [rbp-C8h] BYREF
  int v55; // [rsp+44h] [rbp-C4h] BYREF
  int v56; // [rsp+48h] [rbp-C0h] BYREF
  int v57[3]; // [rsp+4Ch] [rbp-BCh] BYREF
  _OWORD v58[11]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+108h] [rbp+0h]

  v1 = *(_QWORD *)(Argument + 16);
  v2 = *(_QWORD *)Argument;
  v4 = *(_OWORD *)(Argument + 56);
  v58[0] = *(_OWORD *)(Argument + 40);
  v5 = *(_OWORD *)(Argument + 72);
  v58[1] = v4;
  v6 = *(_OWORD *)(Argument + 88);
  v58[2] = v5;
  v7 = *(_OWORD *)(Argument + 104);
  v58[3] = v6;
  v8 = *(_OWORD *)(Argument + 120);
  v58[4] = v7;
  v9 = *(_OWORD *)(Argument + 136);
  v58[5] = v8;
  v58[6] = v9;
  v58[7] = *(_OWORD *)(Argument + 152);
  v10 = *(_OWORD *)(Argument + 184);
  v58[8] = *(_OWORD *)(Argument + 168);
  v11 = *(_OWORD *)(Argument + 200);
  v12 = *(_QWORD *)(Argument + 216);
  v58[9] = v10;
  v58[10] = v11;
  v59 = v12;
  CurrentIrql = KeGetCurrentIrql();
  v51 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v15) = 0x8000;
    else
      v15 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v15;
  }
  v16 = (volatile signed __int32 *)(Argument + 32);
  v17 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 32));
  v18 = ~v17 & 0x80000000;
  if ( (v17 & 0x7FFFFFFF) != 0 )
  {
    v53 = 0;
    while ( (*v16 & 0x80000000) != v18 )
      KeYieldProcessorEx(&v53);
    v30 = _InterlockedDecrement(v16);
    v31 = ~v30 & 0x80000000;
    if ( (v30 & 0x7FFFFFFF) != 0 )
    {
      v54 = 0;
      while ( (*v16 & 0x80000000) != v31 )
        KeYieldProcessorEx(&v54);
    }
    else
    {
      *v16 = *(_DWORD *)(Argument + 36) | v31;
    }
    goto LABEL_45;
  }
  *v16 = *(_DWORD *)(Argument + 36) | v18;
  v19 = qword_140C68168;
  if ( qword_140C68168 )
  {
    ValidPte = MiMakeValidPte(v2, *(_QWORD *)(Argument + 24), -1610612732);
    if ( MiPteInShadowRange(v19) )
    {
      if ( MiPteHasShadow() )
      {
        v22 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
          v23 = (ValidPte & 1) == 0;
          goto LABEL_14;
        }
      }
      else
      {
        v22 = 0;
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v23 = (ValidPte & 1) == 0;
LABEL_14:
          if ( !v23 )
            ValidPte |= 0x8000000000000000uLL;
        }
      }
    }
    else
    {
      v22 = 0;
    }
    *(_QWORD *)v19 = ValidPte;
    if ( v22 )
      MiWritePteShadow(v19, ValidPte, v21);
    v2 = (v19 << 25 >> 16) + (v2 & 0xFFF);
  }
  v24 = ZeroPte;
  v25 = 0;
  if ( MiPteInShadowRange(v2) )
  {
    if ( MiPteHasShadow() )
    {
      v25 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
        v27 = (ZeroPte & 1) == 0;
        goto LABEL_28;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v27 = (ZeroPte & 1) == 0;
LABEL_28:
      if ( !v27 )
        v24 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  *(_QWORD *)v2 = v24;
  if ( v25 )
    MiWritePteShadow(v2, v24, v26);
  *(_QWORD *)(Argument + 8) = v2;
  v28 = _InterlockedDecrement(v16);
  v29 = ~v28 & 0x80000000;
  if ( (v28 & 0x7FFFFFFF) != 0 )
  {
    v52 = 0;
    while ( (*v16 & 0x80000000) != v29 )
      KeYieldProcessorEx(&v52);
  }
  else
  {
    *v16 = *(_DWORD *)(Argument + 36) | v29;
  }
LABEL_45:
  MiFlushTbList((int *)v58);
  v32 = _InterlockedDecrement(v16);
  v33 = ~v32 & 0x80000000;
  if ( (v32 & 0x7FFFFFFF) == 0 )
  {
    *v16 = *(_DWORD *)(Argument + 36) | v33;
    v34 = *(__int64 **)(Argument + 8);
    v35 = MiPteInShadowRange((unsigned __int64)v34);
    HasShadow = 0;
    if ( (v1 & 1) != 0 )
    {
      if ( !v35 )
        goto LABEL_55;
      if ( MiPteHasShadow() )
      {
        HasShadow = 1;
        if ( HIBYTE(word_140C6697C) )
          goto LABEL_55;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_55;
      }
      v1 |= 0x8000000000000000uLL;
    }
    else if ( v35 )
    {
      HasShadow = MiPteHasShadow();
    }
LABEL_55:
    *v34 = v1;
    if ( HasShadow )
      MiWritePteShadow((__int64)v34, v1, v36);
    v38 = (unsigned __int64 *)qword_140C68168;
    if ( !qword_140C68168 )
      goto LABEL_67;
    v39 = ZeroPte;
    v40 = 0;
    if ( MiPteInShadowRange(qword_140C68168) )
    {
      if ( MiPteHasShadow() )
      {
        v40 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
LABEL_63:
          if ( (ZeroPte & 1) != 0 )
            v39 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_63;
      }
    }
    *v38 = v39;
    if ( v40 )
      MiWritePteShadow((__int64)v38, v39, v41);
LABEL_67:
    v42 = _InterlockedDecrement(v16);
    v43 = ~v42 & 0x80000000;
    if ( (v42 & 0x7FFFFFFF) != 0 )
    {
      v55 = 0;
      while ( (*v16 & 0x80000000) != v43 )
        KeYieldProcessorEx(&v55);
    }
    else
    {
      *(_DWORD *)(Argument + 32) = *(_DWORD *)(Argument + 36) | v43;
    }
    goto LABEL_80;
  }
  v56 = 0;
  while ( (*v16 & 0x80000000) != v33 )
    KeYieldProcessorEx(&v56);
  v44 = _InterlockedDecrement(v16);
  v45 = ~v44 & 0x80000000;
  if ( (v44 & 0x7FFFFFFF) != 0 )
  {
    v57[0] = 0;
    while ( (*v16 & 0x80000000) != v45 )
      KeYieldProcessorEx(v57);
  }
  else
  {
    *v16 = *(_DWORD *)(Argument + 36) | v45;
  }
LABEL_80:
  if ( qword_140C68168 )
  {
    MiInsertTbFlushEntry((__int64)v58, qword_140C68168 << 25 >> 16, 1LL, 0);
    MiFlushTbList((int *)v58);
  }
  if ( KiIrqlFlags )
  {
    v46 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v46 <= 0xFu && v51 <= 0xFu && v46 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v48 = CurrentPrcb->SchedulerAssist;
      v49 = ~(unsigned __int16)(-1LL << (v51 + 1));
      v23 = (v49 & v48[5]) == 0;
      v48[5] &= v49;
      if ( v23 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = v51;
  __writecr8(v51);
  return result;
}
