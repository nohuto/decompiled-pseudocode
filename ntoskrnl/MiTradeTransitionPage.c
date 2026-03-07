__int64 __fastcall MiTradeTransitionPage(ULONG_PTR BugCheckParameter2, unsigned __int8 a2, int a3, int a4, __int64 *a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v8; // r14
  int v9; // r12d
  int PfnChannel; // eax
  unsigned int v11; // r8d
  unsigned int v12; // r12d
  __int64 Page; // rax
  __int64 v14; // r13
  unsigned __int64 v15; // r12
  int v16; // eax
  int v17; // r8d
  unsigned __int8 v18; // al
  __int64 v19; // r14
  unsigned int v21; // r14d
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  bool v26; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  int v33; // edx
  _DWORD *v34; // r9
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  int v37; // eax
  _DWORD *v38; // r8
  __int64 v39; // [rsp+20h] [rbp-38h]
  __int64 v40; // [rsp+60h] [rbp+8h]

  v5 = a2;
  if ( *(_WORD *)(BugCheckParameter2 + 32) )
  {
    ++dword_140C13644;
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    if ( (unsigned int)MiCanPageMove(BugCheckParameter2) )
    {
      if ( !(unsigned int)MiCheckSlabPfnBitmap(BugCheckParameter2, 1LL, 0) )
      {
        v40 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            v26 = (v30 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v30;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v5);
        v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
        if ( a3 == -1 )
        {
          v9 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4))
               + 2);
          PfnChannel = MiGetPfnChannel(BugCheckParameter2);
          v11 = (a4 & 0x1000000 | 0x8000u) >> 8;
          v12 = (PfnChannel << byte_140C6570E) | dword_140C65778 & v8 | (v9 << byte_140C6570D);
          if ( (a4 & 0x2000000) != 0 )
            v11 |= 0x20000u;
        }
        else
        {
          v11 = 48;
          v12 = dword_140C65778 & v8 | a3 & ~dword_140C65778;
        }
        Page = MiGetPage(v40, v12, v11);
        v39 = Page;
        if ( Page == -1 )
        {
          ++dword_140C13670;
          return 1LL;
        }
        v14 = 48 * Page - 0x220000000000LL;
        v15 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
        if ( v14 == BugCheckParameter2 )
        {
          v19 = -1LL;
LABEL_21:
          ++dword_140C13600;
          *(_QWORD *)(BugCheckParameter2 + 16) = ZeroPte;
          MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(BugCheckParameter2 + 16));
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            v35 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v35 >= 2u )
            {
              v36 = KeGetCurrentPrcb();
              v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
              v38 = v36->SchedulerAssist;
              v26 = (v37 & v38[5]) == 0;
              v38[5] &= v37;
              if ( v26 )
                KiRemoveSystemWorkPriorityKick(v36);
            }
          }
          __writecr8(v15);
          if ( a5 )
            *a5 = v19;
          return 3LL;
        }
        if ( v8 > qword_140C65820
          || !_bittest64(
                (const signed __int64 *)(16 * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL),
                0x36u)
          || _bittest64((const signed __int64 *)(BugCheckParameter2 + 40), 0x35u) )
        {
          v17 = 0;
        }
        else
        {
          v16 = MiCheckSlabPfnBitmap(BugCheckParameter2, 1LL, 0);
          v17 = 0;
          if ( !v16
            && !*(_WORD *)(BugCheckParameter2 + 32)
            && *(char *)(BugCheckParameter2 + 35) >= 0
            && v40 == *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL))
            && (unsigned int)MiCanPageMove(BugCheckParameter2) )
          {
            v18 = *(_BYTE *)(BugCheckParameter2 + 34) & 7;
            if ( v18 >= 2u && v18 <= 4u )
            {
              MiReplaceTransitionPage(BugCheckParameter2, v14, v17);
              v19 = v39;
              goto LABEL_21;
            }
            v21 = 2;
            goto LABEL_49;
          }
        }
        v21 = v17;
LABEL_49:
        ++dword_140C13644;
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v31 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v31 >= 2u )
          {
            v32 = KeGetCurrentPrcb();
            v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v34 = v32->SchedulerAssist;
            v26 = (v33 & v34[5]) == 0;
            v34[5] &= v33;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(v32);
          }
        }
        __writecr8(v15);
        MiReleaseFreshPage(v14);
        return v21;
      }
      ++dword_140C1364C;
    }
    else
    {
      ++dword_140C13648;
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
  {
    v22 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v22 >= 2u )
    {
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v26 = (v25 & v24[5]) == 0;
      v24[5] &= v25;
      if ( v26 )
        KiRemoveSystemWorkPriorityKick(v23);
    }
  }
  __writecr8(v5);
  return 0LL;
}
