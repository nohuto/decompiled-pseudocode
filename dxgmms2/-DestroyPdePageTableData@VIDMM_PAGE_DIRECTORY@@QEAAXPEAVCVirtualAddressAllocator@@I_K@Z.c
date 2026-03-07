void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax

  v4 = 2LL * a3;
  v5 = a3;
  if ( (*(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a3) & 0x402) == 0x400LL )
  {
    ExFreeToPagedLookasideList(
      (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 11) + 40256LL),
      *(PVOID *)(*((_QWORD *)this + 6) + 8LL * a3));
    *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v5) = 0LL;
  }
  v6 = *((_QWORD *)this + 5);
  *(_QWORD *)(v6 + 8 * v4) = 0LL;
  *(_QWORD *)(v6 + 8 * v4 + 8) = 0LL;
  --*((_DWORD *)this + 1);
}
