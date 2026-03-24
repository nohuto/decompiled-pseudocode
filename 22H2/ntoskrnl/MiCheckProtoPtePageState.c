/*
 * XREFs of MiCheckProtoPtePageState @ 0x14023ABE0
 * Callers:
 *     MiFlushSectionInternal @ 0x140219D70 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x140238510 (MmPurgeSection.c)
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiAnyProtosAreMapped @ 0x14026EF90 (MiAnyProtosAreMapped.c)
 *     MiIsSubsectionClean @ 0x140529B74 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x14052A1F0 (MiPurgeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x140541CB4 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiInvalidPteConforms @ 0x14023AEB0 (MiInvalidPteConforms.c)
 *     MiWriteValidPteVolatile @ 0x140240CE0 (MiWriteValidPteVolatile.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiAreChargesNeededToLockPage @ 0x1402A3AC0 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1402A9130 (MiChargeForLockedPage.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiCheckProtoPtePageState(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  _BYTE *v3; // r14
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rsi
  _BYTE *v15; // rdi
  char v16; // al
  unsigned __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v19; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v23; // r9
  int v24; // eax
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  _QWORD v37[9]; // [rsp+20h] [rbp-48h] BYREF
  int i; // [rsp+80h] [rbp+18h] BYREF
  int v39; // [rsp+88h] [rbp+20h] BYREF

  v3 = (_BYTE *)a2;
  v4 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 2 )
  {
    v5 = 2LL;
    v6 = 0xFFFFFA8000000000uLL;
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v7 = *v4;
          v37[0] = v7;
          if ( (v7 & 1) != 0 )
            break;
          if ( (v7 & 0x400) != 0 || (v7 & 0x800) == 0 )
            goto LABEL_22;
          if ( (unsigned int)MiInvalidPteConforms(v7, a2, v5, v6) )
          {
            if ( qword_140C4DF40 && (v7 & 0x10) == 0 )
              v7 &= ~qword_140C4DF40;
            goto LABEL_7;
          }
        }
        if ( (v7 & 0x200) != 0 )
          goto LABEL_22;
        if ( (unsigned int)MiPteInShadowRange(v37, a2)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v19 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v37 >> 3) & 0x1FF));
            if ( (v19 & 0x20) != 0 )
              v7 |= 0x20uLL;
            if ( (v19 & 0x42) != 0 )
              v7 |= 0x42uLL;
          }
          else
          {
            v7 = v37[0];
          }
        }
        v5 = 2LL;
        v6 = 0xFFFFFA8000000000uLL;
LABEL_7:
        v8 = (v7 >> 12) & 0xFFFFFFFFFLL;
        a2 = 6 * v8;
      }
      while ( (*(_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
      v9 = v6 + 48 * v8;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v5);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        a2 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= a2;
        v5 = 2LL;
        v6 = 0xFFFFFA8000000000uLL;
      }
      v39 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v39);
          while ( *(__int64 *)(v9 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
        v5 = 2LL;
        v6 = 0xFFFFFA8000000000uLL;
      }
      v11 = *v4;
      *v3 = CurrentIrql;
      if ( v11 == v37[0] )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            a2 = -1LL << (CurrentIrql + 1);
            v23 = CurrentPrcb->SchedulerAssist;
            v24 = ~(unsigned __int16)a2;
            v25 = (v24 & v23[5]) == 0;
            v23[5] &= v24;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v6 = 0xFFFFFA8000000000uLL;
            v5 = 2LL;
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    if ( (v11 & 1) == 0 )
    {
      if ( (*(_BYTE *)(v9 + 34) & 7u) >= 6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v26 = KeGetCurrentIrql();
            if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
            {
              v27 = KeGetCurrentPrcb();
              v28 = v27->SchedulerAssist;
              v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v25 = (v29 & v28[5]) == 0;
              v28[5] &= v29;
              if ( v25 )
                KiRemoveSystemWorkPriorityKick(v27);
            }
          }
        }
        __writecr8(CurrentIrql);
        MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
        continue;
      }
LABEL_32:
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v33 = KeGetCurrentIrql();
          if ( v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
          {
            v34 = KeGetCurrentPrcb();
            v35 = v34->SchedulerAssist;
            v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v25 = (v36 & v35[5]) == 0;
            v35[5] &= v36;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
      }
      __writecr8(CurrentIrql);
LABEL_22:
      result = 0LL;
      *v3 = 17;
      return result;
    }
    break;
  }
  if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    goto LABEL_32;
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v9) || (unsigned int)MiChargeForLockedPage(v9, 1LL) )
    ++*(_WORD *)(v9 + 32);
  v14 = (unsigned __int8)*v3;
  v15 = (_BYTE *)(*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL);
  v16 = *(_BYTE *)(v9 + 34);
  for ( i = 0; (v16 & 0x20) != 0; v16 = *(_BYTE *)(v9 + 34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)v14 != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v30 = KeGetCurrentIrql();
          if ( v30 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v30 >= 2u )
          {
            v31 = KeGetCurrentPrcb();
            v32 = v31->SchedulerAssist;
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v25 = ((unsigned int)v12 & v32[5]) == 0;
            v13 = (unsigned int)v12 & v32[5];
            v32[5] = v13;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
      }
      __writecr8(v14);
    }
    i = 0;
    while ( (*(_BYTE *)(v9 + 34) & 0x20) != 0 )
      KeYieldProcessorEx(&i);
    MiLockPageInline(v9, v12, v13);
  }
  *(_BYTE *)(v9 + 34) = v16 | 0x20;
  if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) == 0 && (*v15 & 0x20) == 0 )
    MiWriteValidPteVolatile(v15, 1LL, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v9;
}
