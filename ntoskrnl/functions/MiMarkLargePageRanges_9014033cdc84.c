void __fastcall MiMarkLargePageRanges(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbp
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  int v20; // eax

  MiMarkLargePageMappings();
  v2 = *(_DWORD *)MmPhysicalMemoryBlock;
  if ( *(_DWORD *)MmPhysicalMemoryBlock )
  {
    v3 = 16LL * v2;
    while ( 1 )
    {
      v3 -= 16LL;
      --v2;
      v4 = *(_QWORD *)((char *)MmPhysicalMemoryBlock + v3 + 16);
      v5 = (v4 + *(_QWORD *)((char *)MmPhysicalMemoryBlock + v3 + 24)) & 0xFFFFFFFFFFFFFE00uLL;
      v6 = (v4 + 511) & 0xFFFFFFFFFFFFFE00uLL;
      if ( !v6 )
        goto LABEL_17;
      if ( v6 >= v5 )
        goto LABEL_17;
      v7 = -1LL;
      v8 = 0LL;
      v9 = 48 * v6 - 0x220000000000LL;
      v10 = v9 + 48 * (v5 - v6);
      if ( v9 >= v10 )
        goto LABEL_17;
LABEL_6:
      if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
        && (*(_BYTE *)(v9 + 34) & 7) == 6
        && (*(_QWORD *)(v9 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
      {
        break;
      }
      if ( v8 >= 0x200 )
      {
        v8 &= 0xFFFFFFFFFFFFFE00uLL;
        MiUpdateLargePageBitMap((__int64)MiSystemPartition, v7, v8, 1, 1);
      }
      else if ( !v8 )
      {
        v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v9 + 0x220000000000LL) >> 4);
      }
      v11 = v8 + 512;
      v8 = 0LL;
      v12 = (v7 + v11) & 0xFFFFFFFFFFFFFE00uLL;
      if ( v12 )
      {
        v9 = 48 * v12;
        v13 = 0xFFFFDE0000000000uLL;
        goto LABEL_14;
      }
LABEL_17:
      if ( !v2 )
        return;
    }
    v14 = *(_QWORD *)(a1 + 352);
    v15 = 1LL;
    v16 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v9 + 0x220000000000LL) >> 4);
    if ( !v8 )
      v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v9 + 0x220000000000LL) >> 4);
    if ( (*(_BYTE *)(a1 + 360) & 1) != 0 && v14 )
      v14 ^= a1 + 352;
    v17 = 0LL;
    while ( 1 )
    {
      if ( !v14 )
      {
        if ( v17 )
        {
          v20 = *(_DWORD *)(v17 + 24);
          if ( (v20 & 0x20000000) == 0 && v20 != 2 && v20 != 24 )
            v15 = *(_QWORD *)(v17 + 32) + *(_QWORD *)(v17 + 40) - v16;
        }
        v8 += v15;
        v13 = 48 * v15;
LABEL_14:
        v9 += v13;
        if ( v9 >= v10 )
        {
          if ( v8 >= 0x200 )
            MiUpdateLargePageBitMap((__int64)MiSystemPartition, v7, v8 & 0xFFFFFFFFFFFFFE00uLL, 1, 1);
          goto LABEL_17;
        }
        goto LABEL_6;
      }
      v18 = *(_QWORD *)(v14 + 32);
      if ( v16 >= v18 )
      {
        if ( v16 >= *(_QWORD *)(v14 + 40) + v18 )
        {
          v19 = *(_QWORD *)(v14 + 8);
          goto LABEL_30;
        }
        v17 = v14;
      }
      v19 = *(_QWORD *)v14;
LABEL_30:
      if ( (*(_BYTE *)(a1 + 360) & 1) != 0 && v19 )
        v14 ^= v19;
      else
        v14 = v19;
    }
  }
}
