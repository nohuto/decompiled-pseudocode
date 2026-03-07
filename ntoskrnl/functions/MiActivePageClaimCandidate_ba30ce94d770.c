__int64 __fastcall MiActivePageClaimCandidate(__int64 a1, __int64 a2, char a3, int a4, _DWORD *a5)
{
  int v7; // ebp
  __int64 v9; // r8
  __int64 v10; // rsi
  unsigned __int8 v11; // r13
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r14
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r15
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rax
  int PfnPageSizeIndex; // eax
  int SystemRegionType; // r15d
  __int64 BaseResidentPage; // rbp
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int16 v31; // bp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  bool v36; // zf
  int v37; // [rsp+20h] [rbp-58h] BYREF
  __int64 v38; // [rsp+28h] [rbp-50h] BYREF
  __int64 v39; // [rsp+30h] [rbp-48h]
  int v41; // [rsp+88h] [rbp+10h] BYREF
  int v42; // [rsp+90h] [rbp+18h]

  v7 = a3 & 1;
  v42 = v7;
  v9 = a1;
  v10 = 1LL;
  v11 = 17;
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v13 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  if ( (*(_BYTE *)(a2 + 35) & 8) != 0 )
  {
    if ( a4 )
      ++dword_140C1363C;
    else
      ++dword_140C1377C;
  }
  else
  {
    if ( _bittest64((const signed __int64 *)(a2 + 40), 0x28u) )
    {
      if ( v7 )
      {
        BaseResidentPage = MiGetBaseResidentPage(a2);
        PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
        if ( BaseResidentPage != a2 )
          _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v7 = v42;
      }
      else
      {
        v37 = 0;
        v41 = 0;
        PfnPageSizeIndex = MiGetPfnPageSizeIndexUnsynchronized(a2, &v37, &v41);
      }
      if ( PfnPageSizeIndex != -1 )
        return MiLargePageSizes[PfnPageSizeIndex];
      v9 = a1;
    }
    if ( *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)) == v9 )
    {
      if ( (a3 & 2) == 0 )
      {
        PfnPageSizeIndex = MiPfnLargeBitSet(v9, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
        if ( PfnPageSizeIndex != -1 )
          return MiLargePageSizes[PfnPageSizeIndex];
      }
      v14 = *(_QWORD *)(a2 + 40);
      if ( v14 >= 0 )
      {
        if ( v13 == -8LL )
        {
          if ( a4 )
            ++dword_140C1368C;
          else
            ++dword_140C137AC;
        }
        else if ( (unsigned int)MiGetSystemRegionType(v13) == 5 )
        {
          if ( a4 )
            ++dword_140C13698;
          else
            ++dword_140C137C0;
        }
        else if ( (((unsigned __int64)v14 >> 60) & 7) == 1 || (v17 = v14 & 0xFFFFFFFFFFLL, v17 == 0x3FFFFFFFFELL) )
        {
          if ( a4 )
            ++dword_140C1369C;
          else
            ++dword_140C13764;
        }
        else
        {
          if ( v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            ++dword_140C137C8;
            return v10;
          }
          v39 = 0LL;
          v19 = (__int64)(v13 << 25) >> 16;
          if ( (*(_BYTE *)a2 & 1) != 0 )
          {
            if ( PsInitialSystemProcess && v12 == PsInitialSystemProcess->DirectoryTableBase >> 12 )
            {
              if ( a4 )
                ++dword_140C136BC;
              else
                ++dword_140C13734;
            }
            else
            {
              v20 = 0xFFFFF6FB40000000uLL;
              v21 = 0xFFFFF6FB5FFFFFF8uLL;
              LODWORD(v22) = 0;
              do
              {
                if ( v13 <= v21 && v13 >= v20 )
                {
                  if ( *(_WORD *)(a2 + 32) <= 1u )
                  {
                    if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
                      return 0LL;
                    if ( a4 )
                      ++dword_140C136C4;
                    else
                      ++dword_140C13740;
                  }
                  else if ( a4 )
                  {
                    ++dword_140C136C0;
                  }
                  else
                  {
                    ++dword_140C13738;
                  }
                  return v10;
                }
                v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v22 = (unsigned int)(v22 + 1);
              }
              while ( (unsigned int)v22 < 3 );
              if ( v17 == v12 )
              {
                v10 = 0LL;
                if ( v13 == 0xFFFFF6FB7DBEDF68uLL )
                {
                  if ( *(_WORD *)(a2 + 32) <= 1u )
                    return v10;
                  if ( a4 )
                    ++dword_140C136D8;
                  else
                    ++dword_140C13794;
                }
                else if ( a4 )
                {
                  ++dword_140C136C8;
                }
                else
                {
                  ++dword_140C137C4;
                }
                return 1LL;
              }
              v23 = *(_QWORD *)(a2 + 24);
              v24 = v23 & 0x3FFFFFFFFFFFFFFFLL;
              if ( (v23 & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
              {
                if ( (v23 & 0xFFFFFFFFFFLL) == 0 )
                {
                  if ( a4 )
                    ++dword_140C136E0;
                  else
                    ++dword_140C13760;
                  return v10;
                }
                v25 = *(unsigned __int16 *)(a2 + 32);
                if ( (unsigned __int16)v25 > 1u || v25 > v24 )
                {
                  if ( !v42 )
                    MiRequestIoPageMdlCacheRelease(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4), v21, v22);
                  v29 = *(unsigned __int16 *)(a2 + 32);
                  if ( (unsigned __int16)v29 > 1u || v29 > (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
                  {
                    if ( a4 )
                      ++dword_140C136E4;
                    else
                      ++dword_140C13748;
                    return v10;
                  }
                }
                return 0LL;
              }
              if ( (unsigned int)MiGetSystemRegionType(v19) == 6 )
              {
                if ( *(_WORD *)(a2 + 32) <= 1u )
                {
                  if ( v24 < 0x10000 )
                    return 0LL;
                  if ( a4 )
                    ++dword_140C136D0;
                  else
                    ++dword_140C13744;
                }
                else if ( a4 )
                {
                  ++dword_140C136CC;
                }
                else
                {
                  ++dword_140C1373C;
                }
              }
              else if ( (unsigned int)MiHyperPage(a2) )
              {
                if ( *(_WORD *)(a2 + 32) <= 1u )
                  return 0LL;
                if ( a4 )
                  ++dword_140C136D4;
                else
                  ++dword_140C137CC;
              }
              else if ( a4 )
              {
                ++dword_140C136DC;
              }
              else
              {
                ++dword_140C13798;
              }
            }
          }
          else if ( (unsigned int)MiHyperPage(a2) )
          {
            v30 = *(unsigned __int16 *)(a2 + 32);
            if ( (unsigned __int16)v30 <= 1u && v30 <= (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
              return 0LL;
            if ( a4 )
              ++dword_140C136D8;
            else
              ++dword_140C13794;
          }
          else
          {
            if ( MiVaIsPageFileHash(a1, v19) )
              return 0LL;
            SystemRegionType = MiGetSystemRegionType(v19);
            if ( SystemRegionType == 5 )
            {
              if ( (*(_BYTE *)(a2 + 35) & 0x10) != 0 )
              {
                if ( a4 )
                  ++dword_140C13684;
                else
                  ++dword_140C137A4;
              }
              else if ( *(_WORD *)(a2 + 32) <= 1u )
              {
                if ( (byte_140C6570F & 1) != 0 )
                {
                  if ( v42
                    || (++dword_140C137D4, v11 = MiLockPageInline(a2), (*(_BYTE *)(a2 + 34) & 7) == 6)
                    && !_bittest64((const signed __int64 *)(a2 + 40), 0x28u)
                    && (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) == v13
                    && (unsigned int)MiGetSystemRegionType(v19) == 5 )
                  {
                    v38 = MI_READ_PTE_LOCK_FREE(v13);
                    v31 = v38;
                    if ( (v38 & 1) != 0
                      && v12 == (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v38) >> 12) & 0xFFFFFFFFFFLL) )
                    {
                      if ( (v31 & 0x200) != 0 )
                      {
                        if ( a4 )
                          ++dword_140C13694;
                        else
                          ++dword_140C137B4;
                      }
                      else
                      {
                        v10 = 0LL;
                      }
                    }
                    else if ( a4 )
                    {
                      ++dword_140C13690;
                    }
                    else
                    {
                      ++dword_140C137B0;
                    }
                  }
                  else
                  {
                    ++dword_140C137B8;
                  }
                  if ( v11 != 17 )
                  {
                    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    if ( KiIrqlFlags )
                    {
                      CurrentIrql = KeGetCurrentIrql();
                      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v11 <= 0xFu && CurrentIrql >= 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        SchedulerAssist = CurrentPrcb->SchedulerAssist;
                        v35 = ~(unsigned __int16)(-1LL << (v11 + 1));
                        v36 = (v35 & SchedulerAssist[5]) == 0;
                        SchedulerAssist[5] &= v35;
                        if ( v36 )
                          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                      }
                    }
                    __writecr8(v11);
                  }
                }
                else if ( a4 )
                {
                  ++dword_140C13688;
                }
                else
                {
                  ++dword_140C137A8;
                }
              }
              else if ( a4 )
              {
                ++dword_140C13684;
              }
              else
              {
                ++dword_140C137A4;
              }
            }
            else if ( v19 < MmPfnDatabase || v19 > MmPfnDatabase + (MxPfnAllocation << 12) )
            {
              if ( SystemRegionType == 1
                || v19 >= 0xFFFFF68000000000uLL
                && v19 <= 0xFFFFF6FFFFFFFFFFuLL
                && (unsigned int)MiGetSystemRegionType((__int64)((v19 << 25) - v39) >> 16) == 1 )
              {
                if ( a4 )
                  ++dword_140C136A8;
                else
                  ++dword_140C13750;
              }
              else if ( SystemRegionType == 12 )
              {
                if ( a4 )
                  ++dword_140C136AC;
                else
                  ++dword_140C13754;
              }
              else if ( SystemRegionType == 9 )
              {
                if ( a4 )
                  ++dword_140C136B0;
                else
                  ++dword_140C13758;
              }
              else if ( v19 < 0xFFFFF68000000000uLL || v19 > 0xFFFFF6FFFFFFFFFFuLL )
              {
                if ( a4 )
                  ++dword_140C136B8;
                else
                  ++dword_140C1374C;
              }
              else if ( a4 )
              {
                ++dword_140C136B4;
              }
              else
              {
                ++dword_140C1375C;
              }
            }
            else if ( a4 )
            {
              ++dword_140C136A4;
            }
            else
            {
              ++dword_140C13784;
            }
          }
        }
      }
      else
      {
        if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) == 0 && v13 != qword_140C656A8 && v13 != qword_140C656B0 )
        {
          if ( v7 && (v14 & 0x20000000000000LL) != 0 )
          {
            if ( a4 )
              ++dword_140C13668;
            else
              ++dword_140C13770;
            return v10;
          }
          v15 = *(unsigned __int16 *)(a2 + 32);
          if ( (unsigned __int16)v15 > 1u || v15 > (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
          {
            if ( a4 )
              ++dword_140C13678;
            else
              ++dword_140C13778;
            return v10;
          }
          if ( (*(_BYTE *)a2 & 1) == 0 )
          {
            if ( a4 )
              ++dword_140C1367C;
            else
              ++dword_140C13774;
            return v10;
          }
          v16 = *(_QWORD *)(a2 + 8);
          if ( v16 >= 0 && (v14 & 0x10000000000LL) == 0 && v16 )
          {
            *a5 |= 2u;
            if ( a4 )
              ++dword_140C13680;
            else
              ++dword_140C13780;
            return v10;
          }
          return 0LL;
        }
        if ( a4 )
          ++dword_140C13674;
        else
          ++dword_140C1376C;
      }
    }
    else if ( a4 )
    {
      ++dword_140C1361C;
    }
    else
    {
      ++dword_140C136FC;
    }
  }
  return v10;
}
