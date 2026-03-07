__int64 __fastcall VIDMM_PAGE_TABLE::InitializePageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        char a4,
        char a5)
{
  __int64 v7; // r10
  __int64 v9; // rbx
  __int64 v10; // rsi
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // r8d
  int VidMmObjects; // ebx
  __int64 v17; // rcx
  __int64 v18; // rcx

  v7 = (*(_DWORD *)this >> 7) & 0x1F;
  v9 = *(_QWORD *)(*((_QWORD *)a2 + 11) + 40224LL) + 1616 * v7;
  v10 = *((_QWORD *)a2 + 15) + 32LL * (unsigned int)v7;
  v11 = *(_DWORD *)this ^ ((unsigned __int8)*(_DWORD *)this ^ (unsigned __int8)(a4 << 6)) & 0x40;
  *(_DWORD *)this = v11;
  *(_DWORD *)this = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v9 + 432) << 13)) & 0xE000;
  v12 = 16LL * a3;
  if ( !is_mul_ok(a3, 0x10uLL) )
    v12 = -1LL;
  v13 = operator new[](v12, 0x34356956u, 256LL);
  *((_QWORD *)this + 4) = v13;
  if ( v13 )
  {
    if ( a4 )
    {
      v14 = *(_DWORD *)(*(_QWORD *)(v9 + 448) + 12LL);
    }
    else
    {
      v14 = *(_DWORD *)(v9 + 40);
      if ( a5 && *(_DWORD *)(*(_QWORD *)(v9 + 448) + 12LL) > v14 )
        v14 = *(_DWORD *)(*(_QWORD *)(v9 + 448) + 12LL);
    }
    VidMmObjects = VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(this, a2, v14, *(_DWORD *)(v10 + 28));
    if ( VidMmObjects < 0 )
    {
      WdLogSingleEntry1(1LL, 4254LL);
      DxgkLogInternalTriageEvent(v18, 0x40000LL);
      return (unsigned int)VidMmObjects;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1C00768BC);
    WdLogSingleEntry1(6LL, 4223LL);
    DxgkLogInternalTriageEvent(v17, 262145LL);
    return 3221225495LL;
  }
}
