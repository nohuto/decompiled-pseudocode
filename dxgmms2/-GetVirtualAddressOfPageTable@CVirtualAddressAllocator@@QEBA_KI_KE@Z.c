__int64 __fastcall CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
        CVirtualAddressAllocator *this,
        unsigned int a2,
        unsigned __int64 a3,
        char a4)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  __int64 v8; // r11
  __int64 v9; // rbx
  unsigned __int64 v10; // r10
  unsigned int NumPde; // eax
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // r11

  v6 = *(_QWORD *)(*((_QWORD *)this + 11) + 40224LL) + 1616LL * a2;
  v7 = a3 >> 12;
  v8 = *(_QWORD *)(32LL * a2 + *((_QWORD *)this + 15));
  if ( *(int *)(v6 + 436) <= 0 )
    return VIDMM_ALLOC::GetGpuVirtualAddress(*(VIDMM_ALLOC **)(v8 + 24), (*(_DWORD *)v8 >> 7) & 0x1F);
  v9 = *(int *)(v6 + 436);
  while ( 1 )
  {
    v10 = (v7 & *(_QWORD *)(v6 + 48 * (v9 + 2) + 16)) >> *(_QWORD *)(v6 + 48 * (v9 + 2) + 24);
    if ( v9 == 1 && a4 && (**(_DWORD **)(v6 + 448) & 0x80u) != 0 )
    {
      NumPde = CVirtualAddressAllocator::GetNumPde(this, (struct VIDMM_PAGE_DIRECTORY *)v8);
      v10 = NumPde + v12;
    }
    v13 = *(_QWORD *)(v8 + 48);
    if ( !*(_QWORD *)(v13 + 8 * v10)
      || !VIDMM_PAGE_TABLE_BASE::IsResident(*(VIDMM_PAGE_TABLE_BASE **)(v13 + 8 * v10))
      || (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 16 * v15) & 1) == 0 )
    {
      break;
    }
    --v9;
    v8 = v14;
    if ( v9 <= 0 )
      return VIDMM_ALLOC::GetGpuVirtualAddress(*(VIDMM_ALLOC **)(v8 + 24), (*(_DWORD *)v8 >> 7) & 0x1F);
  }
  return 0LL;
}
