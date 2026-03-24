/*
 * XREFs of ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_KPEAE@Z @ 0x1C0072720
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00723E8 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGE_TABLE::ModifyPageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int8 *a7)
{
  int v9; // r15d
  __int64 v10; // r10
  __int64 v11; // rbp
  __int64 v12; // rsi
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax

  v9 = 0;
  v10 = a4;
  if ( *((_DWORD *)a3 + 13) == -2 )
  {
    if ( a4 < a4 + a5 )
    {
      v26 = a5;
      v27 = 16LL * a4;
      do
      {
        v28 = *((_QWORD *)this + 4);
        v29 = v9 + 1;
        v27 += 16LL;
        if ( (*(_BYTE *)(v28 + v27 - 16) & 1) == 0 )
          v29 = v9;
        v9 = v29;
        *(_QWORD *)(v28 + v27 - 16) = *(_QWORD *)a3;
        --v26;
      }
      while ( v26 );
    }
  }
  else
  {
    v11 = *((_QWORD *)a3 + 4);
    if ( v11 )
    {
      v12 = 1LL;
      if ( (*(_DWORD *)this & 0x40) != 0 )
        v12 = 16LL;
      v13 = a6;
      if ( (unsigned int)v10 < (unsigned int)v10 + a5 )
      {
        v14 = v10;
        v15 = a5;
        v16 = 16 * v14;
        do
        {
          v17 = *((_QWORD *)this + 4);
          if ( (*(_BYTE *)(v17 + v16) & 1) != 0 )
            ++v9;
          *(_QWORD *)(v17 + v16) = *(_QWORD *)a3;
          v18 = *((_QWORD *)a3 + 8);
          if ( v18 )
            v19 = *(_QWORD *)(v11
                            + 8LL
                            * ((unsigned int)*((_QWORD *)a3 + 3) + (unsigned int)((v13 - *((_QWORD *)a3 + 3)) % v18))
                            + 48);
          else
            v19 = *(_QWORD *)(v11 + 8 * v13 + 48);
          v13 += v12;
          *(_QWORD *)(v16 + *((_QWORD *)this + 4) + 8) = v19;
          v16 += 16LL;
          --v15;
        }
        while ( v15 );
      }
    }
    else
    {
      v20 = a6;
      if ( (unsigned int)v10 < (unsigned int)v10 + a5 )
      {
        v21 = a5;
        v22 = 16 * v10;
        do
        {
          v23 = *((_QWORD *)this + 4);
          if ( (*(_BYTE *)(v23 + v22) & 1) != 0 )
            ++v9;
          *(_QWORD *)(v23 + v22) = *(_QWORD *)a3;
          v24 = *((_QWORD *)a3 + 8);
          if ( v24 )
            *(_QWORD *)(v22 + *((_QWORD *)this + 4) + 8) = *((_QWORD *)a3 + 3) + (v20 - *((_QWORD *)a3 + 3)) % v24;
          else
            *(_QWORD *)(v22 + *((_QWORD *)this + 4) + 8) = v20;
          v22 += 16LL;
          v25 = 16LL;
          if ( (*(_DWORD *)this & 0x40) == 0 )
            v25 = 1LL;
          v20 += v25;
          --v21;
        }
        while ( v21 );
      }
    }
  }
  *((_DWORD *)this + 1) += a5 - v9;
  if ( v9 )
    *a7 = 1;
}
