__int64 __fastcall VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        UINT a3,
        LONG a4,
        unsigned __int64 a5,
        struct _DXGK_UPDATEPAGETABLEFLAGS a6)
{
  VIDMM_GLOBAL *v6; // rbp
  enum _DXGK_PAGETABLEUPDATEMODE v11; // ecx
  void *v12; // rbx
  __int64 v13; // r8
  void *v15; // [rsp+90h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+D8h] [rbp+10h] BYREF

  v6 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  v16 = 0;
  v17 = 0LL;
  v15 = 0LL;
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(this, a2, &v16, &v17, &v15) < 0 )
  {
    WdLogSingleEntry1(2LL, 3949LL);
    return 3221225473LL;
  }
  else
  {
    if ( (*((_BYTE *)v6 + 40936) & 0x40) != 0 )
      v11 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v11 = (int)(*(_DWORD *)this << 16) >> 29;
    v12 = (void *)v17;
    VIDMM_GLOBAL::UpdatePageTable(
      v6,
      *(_DWORD *)this & 7,
      *((struct VIDMM_PROCESS **)a2 + 12),
      0LL,
      0LL,
      0LL,
      0LL,
      a3,
      a4,
      0LL,
      0LL,
      (*(_DWORD *)this >> 7) & 0x1F,
      v16,
      v17,
      v11,
      a5,
      *(_DWORD *)&a6,
      0LL);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(this, a2, v13, v12, v15);
    return 0LL;
  }
}
