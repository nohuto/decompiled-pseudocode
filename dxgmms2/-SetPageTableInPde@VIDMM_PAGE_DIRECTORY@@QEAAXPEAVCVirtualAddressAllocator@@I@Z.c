void __fastcall VIDMM_PAGE_DIRECTORY::SetPageTableInPde(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3)
{
  __int64 v3; // r10
  __int64 v4; // rbx
  __int64 v5; // rdx

  v3 = 8LL * a3;
  v4 = 2LL * a3;
  *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4 + 8) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + v3)
                                                                          + 16LL)
                                                              + 128LL) >> 12;
  *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4) ^= (*(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a3) ^ (32
                                                                                                  * *(_DWORD *)(32LL * ((*(_DWORD *)this >> 7) & 0x1F) + *((_QWORD *)a2 + 15) + 28))) & 0x3E0;
  *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4) = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4) & 0xFFFFFFFFFFFE07FFuLL | (16LL * (**(_DWORD **)(v3 + *((_QWORD *)this + 6)) & 0xF80));
  v5 = *((_QWORD *)this + 5);
  if ( (**(_DWORD **)(v3 + *((_QWORD *)this + 6)) & 0x40) != 0 )
    *(_QWORD *)(v5 + 16LL * a3) = *(_QWORD *)(v5 + 16LL * a3) & 0xFFFFFFFFFFF9FFFFuLL | 0x20000;
  else
    *(_QWORD *)(v5 + 16LL * a3) &= 0xFFFFFFFFFFF9FFFFuLL;
}
