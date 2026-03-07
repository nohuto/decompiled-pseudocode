// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Lock(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        enum _LOCK_OPERATION a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int8 a7)
{
  __int64 v11; // rcx
  struct VIDMM_RECYCLE_RANGE *i; // rdi
  __int64 v13; // rcx
  enum _LOCK_OPERATION v14; // r8d
  int v15; // r15d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r15
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct VIDMM_RECYCLE_RANGE *v22; // r8
  struct VIDMM_RECYCLE_RANGE *j; // rax
  VIDMM_RECYCLE_RANGE *k; // rdi
  struct VIDMM_RECYCLE_RANGE *NextRange; // rdi
  struct VIDMM_RECYCLE_RANGE *v26; // r9
  struct VIDMM_RECYCLE_RANGE *v27; // rax
  int v28; // r8d
  int v29; // r10d
  struct VIDMM_RECYCLE_RANGE *v30; // rsi
  _QWORD *v31; // rdi
  __int64 result; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  struct VIDMM_RECYCLE_RANGE *v35; // r15
  unsigned __int64 v36; // r12
  unsigned __int64 m; // r13
  __int64 v38; // r8
  unsigned __int64 v39; // rdx
  enum _LOCK_OPERATION v40; // r8d
  VIDMM_RECYCLE_RANGE *v41; // rcx
  unsigned __int8 v42; // dl
  struct VIDMM_RECYCLE_RANGE *v43; // rax
  __int64 v44; // r8
  struct VIDMM_SEGMENT *v45; // rcx
  unsigned __int64 v46; // rdx
  enum _LOCK_OPERATION v47; // r8d
  int v48; // r12d
  int v49; // r12d
  __int64 v50; // r8
  __int64 v51; // rcx
  struct VIDMM_RECYCLE_RANGE *v52; // rdx
  struct VIDMM_RECYCLE_RANGE *v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // r8
  VIDMM_RECYCLE_RANGE *jj; // rbx
  unsigned __int64 v57; // rdx
  VIDMM_RECYCLE_RANGE *n; // rbx
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // rax
  VIDMM_RECYCLE_RANGE *ii; // rbx
  void *v61; // [rsp+20h] [rbp-40h]
  void *v62; // [rsp+28h] [rbp-38h]
  int v63; // [rsp+30h] [rbp-30h] BYREF
  __int64 v64; // [rsp+38h] [rbp-28h]
  char v65; // [rsp+40h] [rbp-20h]
  __int64 v66; // [rsp+90h] [rbp+30h]
  bool v67; // [rsp+90h] [rbp+30h]
  VIDMM_RECYCLE_RANGE *v68; // [rsp+98h] [rbp+38h]

  if ( *((_BYTE *)this + 130) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 12LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 28) = *((_QWORD *)a2 + 11);
  if ( !a3 )
  {
    v11 = *((_QWORD *)this + 6);
    if ( a4 == *((_QWORD *)this + 5) - v11 && v11 == *((_QWORD *)this + 4) )
    {
      for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
      {
        v13 = *((int *)i + 16);
        switch ( (_DWORD)v13 )
        {
          case 1:
            v63 = -1;
            v64 = 0LL;
            if ( (qword_1C0076010 & 2) != 0 )
            {
              v65 = 1;
              v63 = 8000;
              if ( byte_1C00769C1 < 0 )
                McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerEnter, a3, 8000);
            }
            else
            {
              v65 = 0;
            }
            DXGETWPROFILER_BASE::PushProfilerEntry();
            v15 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
                    (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)i + 9) + 88LL),
                    a2,
                    v14,
                    a6,
                    *((void **)i + 4),
                    *((void **)i + 5));
            if ( v15 < 0 )
            {
              WdLogSingleEntry3(
                3LL,
                i,
                a2,
                **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i + 9) + 32LL) + 8LL) + 8LL));
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
              if ( v65 && byte_1C00769C1 < 0 )
                McTemplateK0q_EtwWriteTransfer(v54, &EventProfilerExit, v55, v63);
              goto LABEL_94;
            }
            ++*((_DWORD *)i + 23);
            WdLogSingleEntry3(4LL, i, *((int *)i + 16), 2LL);
            if ( (byte_1C00769C2 & 2) != 0 )
            {
              LODWORD(v62) = 2;
              LODWORD(v61) = *((_DWORD *)i + 16);
              McTemplateK0pqq_EtwWriteTransfer(v16, &EventRecycleRangeTransition, v17, i, v61, v62);
            }
            v18 = *((_QWORD *)i + 9);
            v19 = *(_QWORD **)(v18 + 136);
            if ( v19 )
            {
              v50 = *v19 + 144LL * v19[1];
              *(_DWORD *)v50 = 2;
              *(_QWORD *)(v50 + 8) = i;
              RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v50 + 16), 0LL);
              ++*(_QWORD *)(*(_QWORD *)(v18 + 136) + 8LL);
              v51 = *(_QWORD *)(v18 + 136);
              if ( *(_QWORD *)(v51 + 8) == *(_QWORD *)(v51 + 48) )
              {
                *(_QWORD *)(v51 + 8) = 0LL;
                *(_BYTE *)(*(_QWORD *)(v18 + 136) + 16LL) = 1;
              }
            }
            *((_DWORD *)i + 16) = 2;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
            if ( v65 && byte_1C00769C1 < 0 )
              McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v63);
            break;
          case 2:
            ++*((_DWORD *)i + 23);
            break;
          case 3:
            VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce((VIDMM_RECYCLE_HEAP_MGR *)v13, i);
            ++*((_DWORD *)i + 23);
            WdLogSingleEntry3(4LL, i, *((int *)i + 16), 2LL);
            if ( (byte_1C00769C2 & 2) != 0 )
            {
              LODWORD(v62) = 2;
              LODWORD(v61) = *((_DWORD *)i + 16);
              McTemplateK0pqq_EtwWriteTransfer(v33, &EventRecycleRangeTransition, v34, i, v61, v62);
            }
            VIDMM_RECYCLE_BLOCK::NotifyRangeEvent(*((_QWORD *)i + 9), 2, (__int64)i);
            *((_DWORD *)i + 16) = 2;
            break;
          default:
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 52LL, 2LL, v13, 0LL);
            v15 = -1073741823;
LABEL_94:
            while ( i != *((struct VIDMM_RECYCLE_RANGE **)this + 8) )
            {
              i = VIDMM_RECYCLE_RANGE::GetPreviousRange(i);
              VIDMM_RECYCLE_RANGE::Unlock(i);
            }
            return (unsigned int)v15;
        }
        v22 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 9);
        if ( i == v22 )
          break;
      }
      ++*((_DWORD *)this + 23);
      if ( a7 )
        *((_BYTE *)this + 129) = 1;
      else
        *((_BYTE *)this + 128) = 1;
      if ( dword_1C0076490 )
      {
        for ( j = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
              *((_DWORD *)j + 20) != 3;
              j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
        {
          if ( j == v22 )
            goto LABEL_22;
        }
        VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(this);
LABEL_22:
        for ( k = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; k = VIDMM_RECYCLE_RANGE::GetNextRange(k) )
        {
          VIDMM_RECYCLE_RANGE::AccessZeroTransition(k);
          if ( k == *((VIDMM_RECYCLE_RANGE **)this + 9) )
            break;
        }
      }
      WdLogSingleEntry3(4LL, this, 0LL, a4);
      NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
      *((_DWORD *)this + 54) = 4;
      v26 = NextRange;
      v27 = NextRange;
      v28 = *((_DWORD *)NextRange + 16);
      v29 = *((_DWORD *)NextRange + 23);
      while ( 1 )
      {
        v30 = NextRange;
        if ( *((_DWORD *)NextRange + 16) != v28 || *((_DWORD *)NextRange + 23) != v29 )
        {
          if ( v26 != v27 )
            VIDMM_RECYCLE_MULTIRANGE::MergeRanges(this, v26, v27);
          v26 = NextRange;
        }
        if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
          break;
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
        v27 = v30;
      }
      if ( v26 != NextRange )
        VIDMM_RECYCLE_MULTIRANGE::MergeRanges(this, v26, NextRange);
      if ( !*((_DWORD *)this + 54) )
      {
        v52 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
        if ( v52 == *((struct VIDMM_RECYCLE_RANGE **)this + 9) && !*((_DWORD *)v52 + 16) )
          VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)this + 10), v52);
      }
      v31 = (_QWORD *)*((_QWORD *)this + 10);
      if ( *v31 == 1LL && !*((_DWORD *)this + 54) )
      {
        v53 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
        if ( !*((_DWORD *)v53 + 16) )
        {
          VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v31[4], 2LL, this);
          VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(v31[4] + 8LL), this);
          VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*(VIDMM_RECYCLE_HEAP_MGR **)(v31[4] + 8LL), v53);
        }
      }
      return 0LL;
    }
  }
  v35 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  v36 = a3 + *((_QWORD *)this + 6);
  for ( m = v36 + a4; v35; v35 = VIDMM_RECYCLE_RANGE::GetNextRange(v35) )
  {
    if ( *((_QWORD *)v35 + 5) > v36 )
      break;
  }
  v38 = *((_QWORD *)v35 + 4);
  v66 = v38;
  if ( *((_QWORD *)v35 + 5) >= m )
  {
    if ( v36 == v38 )
    {
      if ( *((_QWORD *)v35 + 5) == m )
      {
        result = VIDMM_RECYCLE_RANGE::Lock(v35, a2, (enum _LOCK_OPERATION)v38, a6);
        if ( (int)result < 0 )
          return result;
        goto LABEL_48;
      }
      LOBYTE(a5) = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(v35, m - v38, (bool *)&a5);
    }
    else
    {
      v39 = v36 - v38;
      if ( *((_QWORD *)v35 + 5) != m )
      {
        v41 = VIDMM_RECYCLE_RANGE::SplitMiddle(v35, v39, m - v38);
LABEL_47:
        result = VIDMM_RECYCLE_RANGE::Lock(v41, a2, v40, a6);
        if ( (int)result < 0 )
          return result;
        goto LABEL_48;
      }
      LOBYTE(a5) = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(v35, v39, (bool *)&a5);
      if ( (_BYTE)a5 )
        v35 = VIDMM_RECYCLE_RANGE::GetNextRange(v35);
    }
    v41 = v35;
    goto LABEL_47;
  }
  v43 = VIDMM_RECYCLE_RANGE::GetNextRange(v35);
  v45 = a6;
  v68 = v43;
  if ( !v43 )
  {
LABEL_63:
    v67 = *((_QWORD *)v43 + 5) != m;
    if ( v36 != v44 )
    {
      v46 = v36 - *((_QWORD *)v35 + 4);
      LOBYTE(a5) = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(v35, v46, (bool *)&a5);
      if ( (_BYTE)a5 )
        v35 = VIDMM_RECYCLE_RANGE::GetNextRange(v35);
      v45 = a6;
      v43 = v68;
    }
    if ( v67 )
    {
      v57 = m - *((_QWORD *)v43 + 4);
      LOBYTE(a5) = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(v43, v57, (bool *)&a5);
      v45 = a6;
    }
    v48 = VIDMM_RECYCLE_RANGE::Lock(v35, a2, (enum _LOCK_OPERATION)v44, v45);
    if ( v48 < 0 )
    {
      for ( n = VIDMM_RECYCLE_RANGE::GetPreviousRange(v68); n != v35; n = VIDMM_RECYCLE_RANGE::GetPreviousRange(n) )
        VIDMM_RECYCLE_RANGE::Unlock(n);
      return (unsigned int)v48;
    }
    v49 = VIDMM_RECYCLE_RANGE::Lock(v68, a2, v47, a6);
    if ( v49 < 0 )
    {
      PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v68);
      for ( ii = PreviousRange; ii != v35; ii = VIDMM_RECYCLE_RANGE::GetPreviousRange(ii) )
        VIDMM_RECYCLE_RANGE::Unlock(ii);
      VIDMM_RECYCLE_RANGE::Unlock(v35);
      return (unsigned int)v49;
    }
LABEL_48:
    ++*((_DWORD *)this + 23);
    if ( a7 )
      *((_BYTE *)this + 129) = 1;
    else
      *((_BYTE *)this + 128) = 1;
    VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded(this);
    WdLogSingleEntry3(4LL, this, a3, a4);
    *((_DWORD *)this + 54) = 4;
    VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(this, v42);
    return 0LL;
  }
  while ( 1 )
  {
    if ( *((_QWORD *)v43 + 5) >= m )
    {
LABEL_62:
      v44 = v66;
      goto LABEL_63;
    }
    a5 = (unsigned int)VIDMM_RECYCLE_RANGE::Lock(v43, a2, (enum _LOCK_OPERATION)v44, v45);
    if ( a5 < IoReadAccess )
      break;
    v43 = VIDMM_RECYCLE_RANGE::GetNextRange(v68);
    v45 = a6;
    v68 = v43;
    if ( !v43 )
      goto LABEL_62;
  }
  for ( jj = VIDMM_RECYCLE_RANGE::GetPreviousRange(v68); jj != v35; jj = VIDMM_RECYCLE_RANGE::GetPreviousRange(jj) )
    VIDMM_RECYCLE_RANGE::Unlock(jj);
  return (unsigned int)a5;
}
