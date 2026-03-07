unsigned __int8 __fastcall VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct _DXGK_GPUMMUCAPS *a3,
        const struct COMMIT_VA_STATE *a4,
        const struct VIDMM_PAGE_TABLE_LEVEL_DESC *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned __int8 *a10,
        unsigned __int8 *a11)
{
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r9
  bool v14; // bp
  char v15; // r13
  _DWORD *v16; // r15
  unsigned __int8 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  struct CVirtualAddressAllocator *v23; // [rsp+58h] [rbp+10h]

  v23 = a2;
  v12 = 0LL;
  v13 = *((_QWORD *)a2 + 11);
  v14 = 0;
  v15 = 0;
  v16 = 0LL;
  if ( (*(_QWORD *)a4 & 1) != 0 )
  {
    if ( (*(_QWORD *)a4 & 2) != 0 )
    {
      v14 = (*(_BYTE *)(v13 + 40937) & 2) != 0;
      if ( (*(_BYTE *)(v13 + 40937) & 2) == 0 )
        return 0;
    }
    else
    {
      if ( (*(_DWORD *)this & 0x20) == 0 )
        return 0;
      if ( !*((_BYTE *)a4 + 67) )
        return 0;
      v12 = a9 + (*((_QWORD *)a4 + 5) << 12);
      if ( (a3->Value & 0x100) == 0 && (((*((_QWORD *)a5 + 5) << 12) - 1LL) & v12) != 0 )
        return 0;
      v16 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v13 + 40256));
      if ( !v16 )
      {
        WdLogSingleEntry0(3LL);
        return 0;
      }
      a2 = v23;
    }
  }
  else
  {
    v15 = 1;
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * a6) & 1) != 0 )
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, a2, a6, v13);
    *a10 = 1;
    *a11 = 1;
  }
  if ( a7 == a6 || (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * a7) & 1) == 0 )
  {
    v19 = a10;
  }
  else
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, v23, a7, v13);
    v19 = a10;
    *a10 = 1;
    *a11 = 1;
  }
  if ( !v15 )
  {
    v20 = *((_QWORD *)this + 5);
    *v19 = 1;
    *(_QWORD *)(v20 + 16LL * a6) |= 1uLL;
    ++*((_DWORD *)this + 1);
    v21 = *((_QWORD *)this + 5);
    v22 = *(_QWORD *)(v21 + 16LL * a6);
    if ( v14 )
    {
      *(_QWORD *)(v21 + 16LL * a6) = v22 | 2;
    }
    else
    {
      *(_QWORD *)(v21 + 16LL * a6) = v22 | 0x400;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6 + 8) = v12 >> 12;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^ (32 * *((_DWORD *)a4 + 15))) & 0x3E0;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 8;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 0x10;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 4;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 0x1F800;
      v16[2] = *((_DWORD *)a4 + 14);
      *(_QWORD *)v16 = *((_QWORD *)a4 + 6);
      *((_QWORD *)v16 + 2) = *((_QWORD *)a4 + 2);
      *((_QWORD *)v16 + 3) = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6);
      *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6) = v16;
    }
  }
  return 1;
}
