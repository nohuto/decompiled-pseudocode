/*
 * XREFs of MiGetPerfectColorHeadPage @ 0x140270750
 * Callers:
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiRemovePageAnyColor @ 0x1402D748C (MiRemovePageAnyColor.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140276500 (MiUnlinkFreeOrZeroedPage.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140305AB0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReplenishPageSlist @ 0x14034E120 (MiReplenishPageSlist.c)
 *     MiReturnFreeZeroPage @ 0x14034E5C4 (MiReturnFreeZeroPage.c)
 *     MiIsFreeZeroPfnCold @ 0x140350240 (MiIsFreeZeroPfnCold.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPerfectColorHeadPage(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  ULONG_PTR v5; // rdi
  int v11; // edx
  __int64 v12; // r13
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int32 *v14; // r12
  signed __int8 v15; // dl
  volatile LONG *v16; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v18; // rdx
  unsigned __int8 v19; // dl
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // dl
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  unsigned __int8 v28; // cl
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  unsigned __int8 v32; // cl
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  unsigned __int8 v36; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v38; // r8
  int v39; // eax
  unsigned __int8 v40; // cl
  _DWORD *v41; // r8
  int v42; // eax
  __int64 v43; // [rsp+20h] [rbp-F8h] BYREF
  PEX_SPIN_LOCK SpinLock; // [rsp+28h] [rbp-F0h]
  __int128 v45; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v46; // [rsp+40h] [rbp-D8h]
  __int128 v47; // [rsp+50h] [rbp-C8h]
  __int128 v48; // [rsp+60h] [rbp-B8h]
  __int128 v49; // [rsp+70h] [rbp-A8h]
  __int128 v50; // [rsp+80h] [rbp-98h]
  __int128 v51; // [rsp+90h] [rbp-88h]
  __int128 v52; // [rsp+A0h] [rbp-78h]
  __int64 v53; // [rsp+B0h] [rbp-68h]
  int v54; // [rsp+B8h] [rbp-60h]

  v5 = *(_QWORD *)(a2 + 16);
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v53 = 0LL;
  v54 = 0;
  v52 = 0LL;
  if ( v5 == 0x3FFFFFFFFFLL )
    return 0LL;
  v11 = a5 & 1;
  for ( HIDWORD(v43) = v11; ; v11 = HIDWORD(v43) )
  {
    v12 = 48 * v5 - 0x220000000000LL;
    if ( v11 )
    {
      v14 = (volatile signed __int32 *)(v12 + 24);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
        return 0LL;
      CurrentIrql = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v18) = 4;
        else
          v18 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v18;
      }
      v14 = (volatile signed __int32 *)(v12 + 24);
      v15 = _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL);
      if ( (a5 & 0x44000) != 0 )
      {
        LODWORD(v43) = 0;
        if ( v15 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v43);
            while ( *(__int64 *)v14 < 0 );
          }
          while ( _interlockedbittestandset64(v14, 0x3FuLL) );
        }
      }
      else if ( v15 )
      {
        if ( !KiIrqlFlags )
          goto LABEL_33;
        v40 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_33;
        if ( v40 > 0xFu )
          goto LABEL_33;
        if ( CurrentIrql > 0xFu )
          goto LABEL_33;
        if ( v40 < 2u )
          goto LABEL_33;
        CurrentPrcb = KeGetCurrentPrcb();
        v41 = CurrentPrcb->SchedulerAssist;
        v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v42 & v41[5]) == 0;
        v41[5] &= v42;
        if ( !v23 )
          goto LABEL_33;
        goto LABEL_91;
      }
    }
    if ( (*(_BYTE *)(v12 + 34) & 7) != a4 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql == 17 )
        goto LABEL_30;
      if ( KiIrqlFlags )
      {
        v19 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v23 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      goto LABEL_29;
    }
    SpinLock = (PEX_SPIN_LOCK)(a2 + 32);
    v16 = (volatile LONG *)(a2 + 32);
    if ( (a5 & 0x44000) == 0 )
    {
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v16) )
        goto LABEL_11;
      _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql == 17 )
        return 0LL;
      if ( !KiIrqlFlags
        || (v36 = KeGetCurrentIrql(), (KiIrqlFlags & 1) == 0)
        || v36 > 0xFu
        || CurrentIrql > 0xFu
        || v36 < 2u
        || (CurrentPrcb = KeGetCurrentPrcb(),
            v38 = CurrentPrcb->SchedulerAssist,
            v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1)),
            v23 = (v39 & v38[5]) == 0,
            v38[5] &= v39,
            !v23) )
      {
LABEL_33:
        __writecr8(CurrentIrql);
        return 0LL;
      }
LABEL_91:
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      goto LABEL_33;
    }
    ExAcquireSpinLockExclusive(v16);
LABEL_11:
    if ( v5 == *(_QWORD *)(a2 + 16) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 32));
    _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        v24 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v23 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
LABEL_29:
      __writecr8(CurrentIrql);
    }
LABEL_30:
    v5 = *(_QWORD *)(a2 + 16);
    if ( v5 == 0x3FFFFFFFFFLL )
      return 0LL;
  }
  if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v5) )
  {
    _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
    if ( (a5 & 0xC01) == 0 && *(_QWORD *)(a2 + 16) != 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)&v45 = 1LL;
      DWORD2(v45) = 16;
      if ( (HvlEnlightenments & 0x200000) != 0 && (unsigned int)MiIsFreeZeroPfnCold(48 * v5 - 0x220000000000LL) )
      {
        *(_QWORD *)&v46 = v5 << 12;
        DWORD1(v45) = 1;
      }
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int128 *, __int64, PEX_SPIN_LOCK))MiReplenishPageSlist)(
        a1,
        a4,
        a3,
        &v45,
        v43,
        SpinLock);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 32));
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        v32 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          v34 = v33->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v23 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
      __writecr8(CurrentIrql);
    }
    return 48 * v5 - 0x220000000000LL;
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    MiReturnFreeZeroPage(48 * v5 - 0x220000000000LL, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        v28 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v23 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
      __writecr8(CurrentIrql);
    }
    return 1LL;
  }
}
