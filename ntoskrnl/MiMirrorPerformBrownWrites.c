/*
 * XREFs of MiMirrorPerformBrownWrites @ 0x1406251F8
 * Callers:
 *     MiMirrorBrownPhase @ 0x140AA94BC (MiMirrorBrownPhase.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPfnReferenceCountIsZero @ 0x1402879C0 (MiPfnReferenceCountIsZero.c)
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDiscardTransitionPteEx @ 0x14064E040 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiMirrorPerformBrownWrites(__int64 a1, char a2, _QWORD *a3)
{
  char v3; // r12
  int v4; // r15d
  ULONG_PTR v5; // rsi
  int v6; // ebp
  __int64 v7; // r14
  unsigned __int64 v8; // r9
  unsigned __int64 i; // r8
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rdi
  __int64 j; // rax
  ULONG_PTR v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r11
  __int64 *v18; // r10
  _QWORD *v19; // rax
  __int64 k; // r9
  unsigned __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rbx
  int v28; // r12d
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rdx
  volatile signed __int32 *v31; // r9
  unsigned int v32; // eax
  unsigned __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // r14
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // rbp
  unsigned __int64 v39; // rbx
  unsigned __int8 v40; // al
  unsigned __int64 v41; // rdx
  ULONG_PTR v42; // r9
  volatile signed __int32 *v43; // r8
  unsigned int v44; // eax
  unsigned __int64 v45; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v49; // eax
  bool v50; // zf
  ULONG_PTR v51; // r10
  unsigned __int64 v52; // r9
  volatile signed __int32 *v53; // r8
  unsigned int v54; // eax
  unsigned __int64 v55; // rdx
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r10
  _DWORD *v58; // r9
  int v59; // eax
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r10
  _DWORD *v62; // r9
  int v63; // eax
  unsigned __int64 v64; // rsi
  unsigned __int64 v65; // rbp
  unsigned __int64 v66; // r14
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  _DWORD *v69; // r9
  int v70; // eax
  int v72; // [rsp+24h] [rbp-64h]
  __int64 v73; // [rsp+30h] [rbp-58h]
  int v77; // [rsp+A8h] [rbp+20h]

  v3 = a2;
  v4 = 0;
  v72 = 0;
  v5 = 0LL;
  v77 = 0;
  v6 = 0;
  v73 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = v5 & -(__int64)(v5 < (unsigned __int64)xmmword_140C67B10);
    for ( i = xmmword_140C67B10 - 1; ; i = v13 - 1 )
    {
      if ( i - v8 == -1LL )
      {
        v10 = -1LL;
      }
      else
      {
        v11 = (_QWORD *)(*((_QWORD *)&xmmword_140C67B10 + 1) + 8 * (v8 >> 6));
        for ( j = ((1LL << (v8 & 0x3F)) - 1) | ~*v11; j == -1; j = ~*v11 )
        {
          if ( (unsigned __int64)++v11 > *((_QWORD *)&xmmword_140C67B10 + 1) + 8 * (i >> 6) )
            goto LABEL_15;
        }
        _BitScanForward64((unsigned __int64 *)&j, ~j);
        v10 = j + (((__int64)v11 - *((_QWORD *)&xmmword_140C67B10 + 1)) >> 3 << 6);
        if ( v10 > i )
        {
LABEL_15:
          v10 = -1LL;
          goto LABEL_11;
        }
        if ( v10 != -1LL )
          break;
      }
LABEL_11:
      if ( !v8 )
        break;
      v13 = v5 + 1;
      v8 = 0LL;
      if ( v5 + 1 > (unsigned __int64)xmmword_140C67B10 )
        v13 = xmmword_140C67B10;
    }
    if ( v10 < v5 || v10 == -1LL )
      goto LABEL_127;
    v14 = xmmword_140C67B10;
    v15 = 0LL;
    if ( (unsigned __int64)xmmword_140C67B10 <= v10 )
    {
      v16 = 0LL;
LABEL_37:
      v23 = v14;
      goto LABEL_38;
    }
    v17 = *((_QWORD *)&xmmword_140C67B10 + 1) + 8 * ((unsigned __int64)(xmmword_140C67B10 - 1) >> 6);
    v18 = (__int64 *)(*((_QWORD *)&xmmword_140C67B10 + 1) + 8 * (v10 >> 6));
    v19 = v18 + 1;
    for ( k = ((1LL << (v10 & 0x3F)) - 1) | *v18; ; k = *v18 )
    {
      v21 = ~k;
      if ( v21 )
        break;
      if ( (unsigned __int64)v19 > v17 )
      {
        v14 = xmmword_140C67B10;
LABEL_26:
        v23 = v14;
        goto LABEL_36;
      }
      ++v18;
      ++v19;
    }
    _BitScanForward64((unsigned __int64 *)&v22, v21);
    v23 = (unsigned int)v22 + (((__int64)v18 - *((_QWORD *)&xmmword_140C67B10 + 1)) >> 3 << 6);
    v14 = xmmword_140C67B10;
    if ( v23 > (unsigned __int64)xmmword_140C67B10 )
      goto LABEL_26;
    v24 = ~(((1LL << v22) - 1) | v21);
    while ( !v24 )
    {
      if ( (unsigned __int64)(v18 + 1) > v17 )
      {
        v25 = 64LL;
        goto LABEL_33;
      }
      v24 = v18[1];
      ++v18;
    }
    _BitScanForward64((unsigned __int64 *)&v25, v24);
LABEL_33:
    v26 = v25 + (((__int64)v18 - *((_QWORD *)&xmmword_140C67B10 + 1)) >> 3 << 6);
    v14 = xmmword_140C67B10;
    if ( v26 > (unsigned __int64)xmmword_140C67B10 )
      v26 = xmmword_140C67B10;
    v15 = v26 - v23;
LABEL_36:
    v16 = v15;
    if ( !v15 )
      goto LABEL_37;
LABEL_38:
    v27 = v23 - v10;
    v28 = v3 & 8;
    if ( !v28 )
      goto LABEL_113;
    if ( !v6 )
      break;
    v29 = v10 & 0x1F;
    v30 = v27;
    v31 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 4 * (v10 >> 5));
    if ( v29 + v27 <= 0x20 )
    {
      if ( v27 == 32 )
      {
        *v31 = -1;
        goto LABEL_52;
      }
      v32 = ((1 << v27) - 1) << v29;
      goto LABEL_51;
    }
    if ( (v10 & 0x1F) != 0 )
    {
      _InterlockedOr(v31, ((1 << (32 - (v10 & 0x1F))) - 1) << v29);
      v30 = v27 - (32 - (unsigned int)(v10 & 0x1F));
      ++v31;
    }
    if ( v30 >= 0x20 )
    {
      v33 = v30 >> 5;
      v30 += -32LL * (v30 >> 5);
      do
      {
        *v31++ = -1;
        --v33;
      }
      while ( v33 );
    }
    if ( v30 )
    {
      v32 = (1 << v30) - 1;
LABEL_51:
      _InterlockedOr(v31, v32);
    }
LABEL_52:
    v5 = v27 + v15 + v10;
LABEL_126:
    v7 = v73;
    v3 = a2;
    if ( v5 >= (unsigned __int64)xmmword_140C67B10 )
      goto LABEL_127;
  }
  v5 = v10;
  v34 = 3 * v10;
  v16 = 0LL;
  if ( v27 > 0x100 )
    v27 = 256LL;
  v35 = -1LL;
  v36 = 16 * v34 - 0x220000000000LL;
  v37 = v36 + 48 * v27;
  v38 = v36 + 24;
  while ( 1 )
  {
    v39 = (unsigned __int8)MiLockPageInline(v36);
    if ( *(_WORD *)(v38 + 8) )
      goto LABEL_70;
    v40 = *(_BYTE *)(v38 + 10) & 7;
    if ( v40 < 2u || v40 > 4u )
      goto LABEL_70;
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v38 + 16) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    {
      LOBYTE(v41) = 1;
      v42 = v5 & 0x1F;
      v43 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 4 * (v5 >> 5));
      if ( v42 + 1 > 0x20 )
      {
        if ( (v5 & 0x1F) != 0 )
        {
          _InterlockedOr(v43++, ((1 << (32 - (v5 & 0x1F))) - 1) << v42);
          v41 = 1LL - (32 - (unsigned int)(v5 & 0x1F));
          if ( v41 >= 0x20 )
          {
            v45 = v41 >> 5;
            v41 += -32LL * (v41 >> 5);
            do
            {
              *v43++ = -1;
              --v45;
            }
            while ( v45 );
          }
          if ( !v41 )
          {
LABEL_70:
            _InterlockedAnd64((volatile signed __int64 *)v38, 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v39 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
                v50 = (v49 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v49;
                if ( v50 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            __writecr8(v39);
            if ( v35 != -1 )
              goto LABEL_112;
            goto LABEL_78;
          }
        }
        v44 = (1 << v41) - 1;
      }
      else
      {
        v44 = 1 << v42;
      }
      _InterlockedOr(v43, v44);
      goto LABEL_70;
    }
    if ( (MiUnlinkPageFromListEx(v36, 0LL) & 3) != 0 )
      break;
    *(_QWORD *)v38 &= 0xC000000000000000uLL;
    if ( !(unsigned int)MiAddLockedPageCharge(v36, 0) )
    {
      MiPfnReferenceCountIsZero(v36, v5);
      goto LABEL_103;
    }
    v51 = v5 & 0x1F;
    LOBYTE(v52) = 1;
    v53 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 4 * (v5 >> 5));
    if ( v51 + 1 > 0x20 )
    {
      if ( (v5 & 0x1F) != 0 )
      {
        _InterlockedAnd(v53++, ~(((1 << (32 - (v5 & 0x1F))) - 1) << v51));
        v52 = 1LL - (32 - (unsigned int)(v5 & 0x1F));
        if ( v52 >= 0x20 )
        {
          v55 = v52 >> 5;
          v52 += -32LL * (v52 >> 5);
          do
          {
            *v53++ = 0;
            --v55;
          }
          while ( v55 );
        }
        if ( !v52 )
          goto LABEL_93;
      }
      v54 = -1 << v52;
    }
    else
    {
      v54 = ~(1 << v51);
    }
    _InterlockedAnd(v53, v54);
LABEL_93:
    _InterlockedAnd64((volatile signed __int64 *)v38, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v56 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v56 <= 0xFu && (unsigned __int8)v39 <= 0xFu && v56 >= 2u )
      {
        v57 = KeGetCurrentPrcb();
        v58 = v57->SchedulerAssist;
        v59 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
        v50 = (v59 & v58[5]) == 0;
        v58[5] &= v59;
        if ( v50 )
          KiRemoveSystemWorkPriorityKick((__int64)v57);
      }
    }
    __writecr8(v39);
    if ( v35 == -1 )
      v35 = v5;
LABEL_78:
    v36 += 48LL;
    v38 += 48LL;
    ++v5;
    if ( v36 >= v37 )
    {
      v6 = v77;
      goto LABEL_80;
    }
  }
  MiDiscardTransitionPteEx(v36, 0LL);
LABEL_103:
  _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v60 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v60 <= 0xFu && (unsigned __int8)v39 <= 0xFu && v60 >= 2u )
    {
      v61 = KeGetCurrentPrcb();
      v62 = v61->SchedulerAssist;
      v63 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
      v50 = (v63 & v62[5]) == 0;
      v62[5] &= v63;
      if ( v50 )
        KiRemoveSystemWorkPriorityKick((__int64)v61);
    }
  }
  __writecr8(v39);
  v6 = 1;
  v77 = 1;
LABEL_80:
  if ( v35 == -1 )
  {
    v4 = v72;
    goto LABEL_126;
  }
LABEL_112:
  v10 = v35;
  v27 = v5 - v35;
  v7 = v73;
LABEL_113:
  v73 = v27 + v7;
  v72 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(a1 + 16))(v10 << 12, v27 << 12);
  v4 = v72;
  if ( v28 )
  {
    v64 = 48 * v10 - 0x220000000000LL;
    v65 = v64 + 48 * v27;
    do
    {
      v66 = (unsigned __int8)MiLockPageInline(v64);
      MiRemoveLockedPageChargeAndDecRef(v64);
      _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v67 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v67 <= 0xFu && (unsigned __int8)v66 <= 0xFu && v67 >= 2u )
        {
          v68 = KeGetCurrentPrcb();
          v69 = v68->SchedulerAssist;
          v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v66 + 1));
          v50 = (v70 & v69[5]) == 0;
          v69[5] &= v70;
          if ( v50 )
            KiRemoveSystemWorkPriorityKick((__int64)v68);
        }
      }
      __writecr8(v66);
      v64 += 48LL;
    }
    while ( v64 < v65 );
    v4 = v72;
  }
  if ( v4 >= 0 )
  {
    v6 = v77;
    v5 = v16 + v10 + v27;
    goto LABEL_126;
  }
LABEL_127:
  *a3 = v73;
  return (unsigned int)v4;
}
