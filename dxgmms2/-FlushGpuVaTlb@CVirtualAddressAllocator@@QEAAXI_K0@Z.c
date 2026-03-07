void __fastcall CVirtualAddressAllocator::FlushGpuVaTlb(
        CVirtualAddressAllocator *this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_GLOBAL *v4; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r10
  UINT v12; // eax
  bool v13; // zf
  unsigned int v14; // eax
  struct _D3DGPU_PHYSICAL_ADDRESS v15; // [rsp+40h] [rbp-18h] BYREF

  v4 = (VIDMM_GLOBAL *)*((_QWORD *)this + 11);
  if ( (*((_BYTE *)v4 + 40936) & 0x40) == 0
    && a3 <= a4
    && VIDMM_PAGE_TABLE_BASE::IsResident(*(VIDMM_PAGE_TABLE_BASE **)(32LL * a2 + *((_QWORD *)this + 15))) )
  {
    v12 = *(_DWORD *)(v11 + v10 + 24);
    *(&v15.SegmentId + 1) = 0;
    v13 = *((_QWORD *)this + 14) == 0LL;
    v15.SegmentId = v12;
    v15.SegmentOffset = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 128LL);
    if ( v13 )
    {
      v14 = VIDMM_GLOBAL::AdapterId(v4);
      *((_QWORD *)this + 14) = VIDMM_PROCESS::GetKmdProcessHandle(*((VIDMM_PROCESS **)this + 12), v14);
    }
    VIDMM_GLOBAL::FlushGpuVaTlb(v4, a2, &v15, *((struct VIDMM_PROCESS **)this + 12), *((void **)this + 14), a3, a4);
  }
}
