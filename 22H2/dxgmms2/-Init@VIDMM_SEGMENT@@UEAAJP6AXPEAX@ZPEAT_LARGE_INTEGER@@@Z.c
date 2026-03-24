/*
 * XREFs of ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C0090640
 * Callers:
 *     ?Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C0090400 (-Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 *     ?Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00904C0 (-Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00C3720 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001FC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0090800 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ @ 0x1C0090820 (-InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C00908EC (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C00909B4 (--0VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x1C00C4E90 (-BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::Init(PHYSICAL_ADDRESS *this, void (*a2)(void *), union _LARGE_INTEGER *a3)
{
  void (*v4)(void *); // rdi
  VIDMM_LINEAR_POOL *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  LONGLONG QuadPart; // rax
  PMDL PagesForMdl; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  SIZE_T v23; // rax
  unsigned __int64 v24; // kr00_8
  PVOID v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax

  v4 = a2;
  if ( (this[10].LowPart & 0x1000) != 0 )
  {
    this[26].QuadPart = -1LL;
  }
  else
  {
    if ( !this[26].QuadPart )
      this[26].QuadPart = this[6].QuadPart - this[9].QuadPart;
    v6 = (VIDMM_LINEAR_POOL *)operator new[](0x140uLL, 0x37316956u, (POOL_TYPE)512);
    if ( v6 )
      v6 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v6);
    this[19].QuadPart = (LONGLONG)v6;
    if ( !v6 )
    {
      _InterlockedIncrement(&dword_1C0050680);
      v21 = WdLogNewEntry5_WdLowResource(v7);
      *(_QWORD *)(v21 + 24) = 355LL;
      goto LABEL_23;
    }
    v8 = VIDMM_LINEAR_POOL::Init(v6, this[6].QuadPart, 1u, v4, (int (*)(void *))IsAllocationOffered);
    v10 = v8;
    if ( v8 < 0 )
    {
      _InterlockedIncrement(&dword_1C0050684);
      v22 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v22 + 24) = v10;
      WdLogEvent5_WdLowResource(v22);
      return (unsigned int)v10;
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
        QuadPart = *(_QWORD *)(*(_QWORD *)(this[1].QuadPart + 24) + 1992LL);
      this[15].QuadPart = QuadPart;
      LODWORD(v10) = VIDMM_SEGMENT::InitializeForwardProgressMdl((VIDMM_SEGMENT *)this);
      if ( (int)v10 >= 0 )
      {
        PagesForMdl = MmAllocatePagesForMdl(gs_PhysicalAddressZero, this[15], gs_PhysicalAddressZero, 0x1000uLL);
        this[34].QuadPart = (LONGLONG)PagesForMdl;
        if ( PagesForMdl )
        {
          v15 = (unsigned int)dword_1C0050204;
          this[30].QuadPart = (unsigned int)dword_1C0050204;
          if ( (_DWORD)v15 )
          {
            v24 = v15;
            v23 = 16 * v15;
            if ( !is_mul_ok(v24, 0x10uLL) )
              v23 = -1LL;
            v25 = operator new[](v23, 0x36336956u, (POOL_TYPE)512);
            this[31].QuadPart = (LONGLONG)v25;
            if ( v25 )
            {
              memset(v25, 0, 16LL * this[30].LowPart);
            }
            else
            {
              this[30].LowPart = 0;
              _InterlockedIncrement(dword_1C0050754);
              v27 = WdLogNewEntry5_WdLowResource(v26);
              *(_QWORD *)(v27 + 24) = 824LL;
              WdLogEvent5_WdLowResource(v27);
            }
          }
          v16 = WdLogNewEntry5_WdEvent(v14, v13);
          WdLogEvent5_WdEvent(v16);
          v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v18, v17);
          v19[3] = this[6].QuadPart;
          v19[4] = this[3].HighPart;
          v19[5] = this[3].LowPart;
          v19[6] = this[2].LowPart;
          WdLogEvent5_WdEvent(v19);
          if ( bTracingEnabled )
            VIDMM_SEGMENT::ReportSegment((VIDMM_SEGMENT *)this);
          return (unsigned int)v10;
        }
        _InterlockedIncrement(&dword_1C0050718);
        v21 = WdLogNewEntry5_WdLowResource(v14);
        *(_QWORD *)(v21 + 24) = 434LL;
LABEL_23:
        WdLogEvent5_WdLowResource(v21);
        return 3221225495LL;
      }
      return (unsigned int)v10;
    }
  }
  return result;
}
