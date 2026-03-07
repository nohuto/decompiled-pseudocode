__int64 __fastcall VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2)
{
  unsigned int NumPde; // eax
  unsigned int v5; // ebp
  int v6; // r12d
  __int64 i; // r14
  __int64 v8; // rax
  VIDMM_ALLOC **v9; // rdi
  VIDMM_ALLOC **v11; // r15
  unsigned int v12; // r9d
  struct _MDL *SegmentAddressMdl; // rax
  VIDMM_ALLOC *v14; // rcx
  struct _MDL *v15; // rdi
  unsigned __int64 LogicalAddress; // rax
  unsigned int v17; // r8d
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  int v20; // edi
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int128 v24; // [rsp+70h] [rbp-38h] BYREF
  DXGK_MULTIPLANE_OVERLAY_PLANE3 *v25; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v26; // [rsp+C0h] [rbp+18h]

  NumPde = CVirtualAddressAllocator::GetNumPde(a2, this);
  v5 = 2 * NumPde;
  if ( (*(_DWORD *)this & 0x1020) != 0x1020 )
    v5 = NumPde;
  v6 = 0;
  if ( !v5 )
    return 0LL;
  for ( i = 0LL; ; i += 8LL )
  {
    v8 = *((_QWORD *)this + 6);
    v9 = *(VIDMM_ALLOC ***)(i + v8);
    if ( !v9 )
      goto LABEL_6;
    if ( (*(_DWORD *)this & 0x20) == 0 )
    {
      VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(*(VIDMM_PAGE_DIRECTORY **)(i + v8), a2);
      goto LABEL_6;
    }
    v11 = v9 + 2;
    if ( !VIDMM_ALLOC::GetGpuVirtualAddress(v9[3], (*(_DWORD *)this >> 7) & 0x1F)
      && !CVirtualAddressAllocator::MapVirtualAddressRange(
            (struct _KTHREAD **)a2,
            (__int64)v9,
            0LL,
            5,
            *((unsigned int *)*v11 + 4),
            0LL,
            *(_QWORD *)(*((_QWORD *)a2 + 11) + 40944LL),
            *(_QWORD *)(*((_QWORD *)a2 + 11) + 40952LL),
            0x1000u,
            1LL,
            0LL,
            v12,
            0LL,
            0) )
    {
      break;
    }
    v26 = *((_QWORD *)v9[3] + 16) - 24LL;
    v24 = 0LL;
    SegmentAddressMdl = VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl((VIDMM_PAGE_TABLE_BASE *)v9);
    v14 = *v11;
    v15 = SegmentAddressMdl;
    if ( SegmentAddressMdl )
    {
      LogicalAddress = SysMmGetLogicalAddress(*((void *const *)v14 + 66));
      VidMmiInitializeAdlForMdl((struct _DXGK_ADL *)&v24, v15, LogicalAddress);
    }
    else
    {
      v21 = *((_DWORD *)v14 + 4);
      *((_QWORD *)&v24 + 1) = *((_QWORD *)v14 + 16) >> 12;
      DWORD1(v24) = 1;
      LODWORD(v24) = v21 >> 12;
    }
    v17 = *(_DWORD *)this;
    v18 = *((_QWORD *)a2 + 15);
    v19 = (unsigned __int64)*(unsigned int *)this >> 7;
    v25 = 0LL;
    v20 = CVirtualAddressAllocator::CommitVirtualAddressRange(
            (__int64)a2,
            v26,
            (v17 >> 7) & 0x1F,
            *(_DWORD *)(32 * (v19 & 0x1F) + v18 + 28),
            0LL,
            (struct _DXGK_ADL *)&v24,
            0,
            &v25,
            0LL);
    if ( v20 < 0 )
    {
      WdLogSingleEntry1(1LL, 3179LL);
      DxgkLogInternalTriageEvent(v23, 0x40000LL);
      return (unsigned int)v20;
    }
LABEL_6:
    if ( ++v6 >= v5 )
      return 0LL;
  }
  WdLogSingleEntry1(1LL, 3141LL);
  DxgkLogInternalTriageEvent(v22, 0x40000LL);
  return 3221225473LL;
}
