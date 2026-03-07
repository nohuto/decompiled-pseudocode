__int64 __fastcall VIDMM_SEGMENT::Init(PHYSICAL_ADDRESS *this, void (*a2)(void *), union _LARGE_INTEGER *a3)
{
  void (*v4)(void *); // rbp
  VIDMM_LINEAR_POOL *v6; // rax
  VIDMM_LINEAR_POOL *v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  LONGLONG QuadPart; // rax
  PMDL PagesForMdl; // rax
  unsigned __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // kr00_8
  __int64 v18; // rax
  __int64 v19; // rcx

  v4 = a2;
  if ( (this[10].LowPart & 0x1000) != 0 )
  {
    this[26].QuadPart = -1LL;
  }
  else
  {
    if ( !this[26].QuadPart )
      this[26].QuadPart = this[6].QuadPart - this[9].QuadPart;
    v6 = (VIDMM_LINEAR_POOL *)operator new(320LL, 0x37316956u, 64LL);
    if ( v6 )
      v7 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v6);
    else
      v7 = 0LL;
    this[19].QuadPart = (LONGLONG)v7;
    if ( !v7 )
    {
      _InterlockedIncrement(&dword_1C00767A0);
      WdLogSingleEntry1(6LL, 475LL);
      goto LABEL_23;
    }
    v8 = VIDMM_LINEAR_POOL::Init(v7, this[6].QuadPart, 1u, v4, (int (*)(void *))IsAllocationOffered);
    v9 = v8;
    if ( v8 < 0 )
    {
      _InterlockedIncrement(&dword_1C00767A4);
      WdLogSingleEntry1(6LL, v8);
      DxgkLogInternalTriageEvent(v15, 262145LL);
      return v9;
    }
  }
  if ( !this[10].HighPart
    || (LOBYTE(a2) = 6, result = VIDMM_SEGMENT::BlockMemoryRanges(this, a2, 12LL), (int)result >= 0) )
  {
    if ( !this[11].LowPart
      || (LOBYTE(a2) = 7, result = VIDMM_SEGMENT::BlockMemoryRanges(this, a2, 18LL), (int)result >= 0) )
    {
      if ( a3 )
        QuadPart = a3->QuadPart;
      else
        QuadPart = *(_QWORD *)(*(_QWORD *)(this[1].QuadPart + 24) + 2216LL);
      this[15].QuadPart = QuadPart;
      v9 = VIDMM_SEGMENT::InitializeForwardProgressMdl((VIDMM_SEGMENT *)this);
      if ( (v9 & 0x80000000) == 0 )
      {
        PagesForMdl = MmAllocatePagesForMdl(gs_PhysicalAddressZero, this[15], gs_PhysicalAddressZero, 0x1000uLL);
        this[34].QuadPart = (LONGLONG)PagesForMdl;
        if ( PagesForMdl )
        {
          v12 = (unsigned int)dword_1C00762B4;
          this[30].LowPart = dword_1C00762B4;
          this[30].HighPart = 0;
          if ( (_DWORD)v12 )
          {
            v17 = v12;
            v16 = 16 * v12;
            if ( !is_mul_ok(v17, 0x10uLL) )
              v16 = -1LL;
            v18 = operator new[](v16, 0x36336956u, 64LL);
            this[31].QuadPart = v18;
            if ( !v18 )
            {
              this[30].LowPart = 0;
              _InterlockedIncrement(dword_1C0076874);
              WdLogSingleEntry1(6LL, 1027LL);
              DxgkLogInternalTriageEvent(v19, 262145LL);
            }
          }
          WdLogSingleEntry0(4LL);
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry4)(
            4LL,
            (PHYSICAL_ADDRESS)this[6].QuadPart,
            this[3].HighPart,
            this[3].LowPart,
            this[2].LowPart);
          if ( bTracingEnabled )
            VIDMM_SEGMENT::ReportSegment((VIDMM_SEGMENT *)this);
          return v9;
        }
        _InterlockedIncrement(&dword_1C0076838);
        WdLogSingleEntry1(6LL, 554LL);
LABEL_23:
        DxgkLogInternalTriageEvent(v14, 262145LL);
        return 3221225495LL;
      }
      return v9;
    }
  }
  return result;
}
