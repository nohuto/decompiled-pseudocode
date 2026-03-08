/*
 * XREFs of ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z @ 0x1C00933C0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0092740 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1C00C475A (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_.c)
 * Callees:
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00E6ED4 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 */

void __fastcall VIDMM_PAGE_TABLE::InvalidatePageTable(
        VIDMM_PAGE_TABLE *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  __int64 v6; // r14
  unsigned int v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  char v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // [rsp+30h] [rbp-18h]

  v6 = a3;
  v8 = a3 + a4;
  if ( *((_QWORD *)a2 + 5132) && a3 < v8 )
  {
    v9 = 16LL * a3;
    v10 = a4;
    do
    {
      v11 = *((_QWORD *)this + 4);
      v12 = *(_QWORD *)(v11 + v9);
      if ( (v12 & 1) != 0 )
        VIDMM_GLOBAL::RecordPageMappingHistory(a2, (v12 >> 5) & 0x1F, *(_QWORD *)(v11 + v9 + 8), 1LL, 1, 0LL, v17);
      v9 += 16LL;
      --v10;
    }
    while ( v10 );
    v13 = 0;
  }
  else
  {
    v13 = 0;
    if ( a3 >= v8 )
      return;
  }
  v14 = 16 * v6;
  v15 = v8 - (unsigned int)v6;
  do
  {
    v16 = *((_QWORD *)this + 4);
    if ( (*(_BYTE *)(v16 + v14) & 1) != 0 )
    {
      --*((_DWORD *)this + 1);
      v13 = 1;
      *(_QWORD *)(v16 + v14) = 0LL;
      *(_QWORD *)(v14 + *((_QWORD *)this + 4) + 8) = 0LL;
    }
    v14 += 16LL;
    --v15;
  }
  while ( v15 );
  if ( v13 )
    *a5 = 1;
}
