unsigned __int64 __fastcall MiGetHugeRangeFromNode(__int64 a1, unsigned int a2, int a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rbp
  __int64 v9; // rcx
  _QWORD *v10; // r15
  __int64 v11; // r13
  _QWORD *v12; // r14
  KIRQL v13; // r12
  __int64 v14; // r10
  const signed __int64 *v15; // rdi
  unsigned int v16; // ecx
  _QWORD *v17; // rdx
  unsigned __int64 v18; // rax
  _QWORD *v20; // r8
  __int64 v21; // rdx
  int v22; // ebp
  __int64 v23; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  KIRQL v29; // al
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  unsigned __int8 v34; // cl
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  unsigned __int64 v38; // rsi
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  int v41; // edx
  _DWORD *v42; // r9
  unsigned int v43; // [rsp+20h] [rbp-68h]
  int v44; // [rsp+24h] [rbp-64h]
  __int64 v45; // [rsp+28h] [rbp-60h]
  __int64 v46; // [rsp+30h] [rbp-58h]
  _QWORD *v47; // [rsp+38h] [rbp-50h]
  __int64 v48; // [rsp+90h] [rbp+8h]
  int v49; // [rsp+A0h] [rbp+18h]

  v49 = a3;
  v48 = a1;
  v4 = a2;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 16208);
  if ( !v6 )
    return v5;
  v7 = 25408 * v4;
  do
  {
    v8 = (unsigned int)dword_140C65800[0];
    v9 = v7 + *(_QWORD *)(a1 + 16);
    v45 = v9;
    v43 = dword_140C65800[0];
    v10 = (_QWORD *)(v6 + 8LL * (unsigned int)(2 * v4 * dword_140C65800[0]));
    if ( a4 || !a3 )
    {
      v10 += (unsigned int)dword_140C65800[0];
      v11 = 1LL;
    }
    else
    {
      v11 = 0LL;
    }
    v12 = 0LL;
    v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 23104));
    v46 = v8;
    v14 = v8;
    v44 = 0;
    v15 = 0LL;
    while ( 2 )
    {
      v16 = 0;
      if ( MmNumberOfChannels )
      {
        v17 = (_QWORD *)(32 * v11 + v45 + 22864);
        do
        {
          if ( *v17 )
            break;
          ++v16;
          ++v17;
        }
        while ( v16 < MmNumberOfChannels );
      }
      if ( v16 == MmNumberOfChannels
        || (v20 = &v10[v14],
            v47 = v20,
            v21 = *(_DWORD *)(v45 + 22848) % (unsigned int)v8,
            v5 &= 0xFFFFFFFFFFC00000uLL,
            v22 = 0,
            v12 = &v10[v21],
            !v43) )
      {
        v18 = a4;
        goto LABEL_12;
      }
      while ( 1 )
      {
        v5 ^= ((unsigned int)v5 ^ (unsigned int)(*v12 >> 15)) & 0x3FFFFF;
        if ( (v5 & 0x3FFFFF) == 0 )
          goto LABEL_26;
        v23 = v5 & 0x3FFFFF;
        v15 = (const signed __int64 *)(qword_140C67A70 + 8 * v23);
        if ( !a4 || !_bittest64(v15, 0x3Bu) )
          break;
        v5 &= 0xFFFFFFFFFFC00000uLL;
LABEL_26:
        if ( ++v12 == v20 )
          v12 = v10;
LABEL_28:
        if ( ++v22 >= v43 )
          goto LABEL_41;
      }
      if ( !(unsigned int)MiLockHugePfnInternal(qword_140C67A70 + 8 * v23, 1LL) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v45 + 23104));
        v44 = 1;
        --v22;
        MiLockHugePfnInternal(v15, 0LL);
        _InterlockedAnd(
          (volatile signed __int32 *)(qword_140C67A78
                                    + 4 * (((((__int64)v15 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
          ~(1 << ((((__int64)v15 - qword_140C67A70) >> 3) & 0x1F)));
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v13 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << (v13 + 1));
            v28 = (v27 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v27;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v13);
        v29 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v45 + 23104));
        v20 = v47;
        v13 = v29;
        goto LABEL_28;
      }
      MiUnlinkHugeRange(v48, v5);
      v18 = a4;
      if ( !a4 )
        goto LABEL_42;
      MiBeginPageAccessor(a4, (__int64)v15, 1);
      MiInsertHugeRangeInList(0LL, v5, 17LL);
LABEL_41:
      v18 = a4;
LABEL_42:
      v14 = v46;
LABEL_12:
      if ( (v5 & 0x3FFFFF) != 0 )
      {
        *(_DWORD *)(v45 + 22848) = v12 - v10 + 1;
LABEL_14:
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v45 + 23104));
        if ( (v5 & 0x3FFFFF) != 0 )
          _InterlockedAnd(
            (volatile signed __int32 *)(qword_140C67A78
                                      + 4 * (((((__int64)v15 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
            ~(1 << ((((__int64)v15 - qword_140C67A70) >> 3) & 0x1F)));
        if ( KiIrqlFlags )
        {
          v34 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && v13 <= 0xFu && v34 >= 2u )
          {
            v35 = KeGetCurrentPrcb();
            v36 = v35->SchedulerAssist;
            v37 = ~(unsigned __int16)(-1LL << (v13 + 1));
            v28 = (v37 & v36[5]) == 0;
            v36[5] &= v37;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick(v35);
          }
        }
        __writecr8(v13);
        if ( (v5 & 0x3FFFFF) != 0 && v49 && (*(_DWORD *)(qword_140C67A70 + 8 * (v5 & 0x3FFFFF)) & 0x10000LL) != 0 )
        {
          MiHugePageOperation(v48, v5);
          v38 = (unsigned __int8)MiLockHugePfn(v15);
          *v15 &= ~0x10000uLL;
          _InterlockedAnd(
            (volatile signed __int32 *)(qword_140C67A78
                                      + 4 * (((((__int64)v15 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
            ~(1 << ((((__int64)v15 - qword_140C67A70) >> 3) & 0x1F)));
          if ( KiIrqlFlags )
          {
            v39 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v39 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v39 >= 2u )
            {
              v40 = KeGetCurrentPrcb();
              v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
              v42 = v40->SchedulerAssist;
              v28 = (v41 & v42[5]) == 0;
              v42[5] &= v41;
              if ( v28 )
                KiRemoveSystemWorkPriorityKick(v40);
            }
          }
          __writecr8(v38);
        }
        return v5;
      }
      if ( v18 )
        goto LABEL_14;
      if ( v49 )
      {
        if ( !v11 )
        {
          v10 += v14;
          v11 = 1LL;
LABEL_47:
          LODWORD(v8) = v43;
          continue;
        }
      }
      else if ( v11 == 1 )
      {
        v11 = 0LL;
        v10 -= v14;
        goto LABEL_47;
      }
      break;
    }
    if ( !v44 )
      goto LABEL_14;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v45 + 23104));
    if ( KiIrqlFlags )
    {
      v30 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && v13 <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << (v13 + 1));
        v28 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
    __writecr8(v13);
    a1 = v48;
    v5 &= 0xFFFFFFFFFFC00000uLL;
    a3 = v49;
    v7 = 25408 * v4;
    v6 = *(_QWORD *)(v48 + 16208);
  }
  while ( v6 );
  return v5;
}
