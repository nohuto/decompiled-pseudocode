/*
 * XREFs of PopGetNextTable @ 0x140383810
 * Callers:
 *     PopWriteHiberImage @ 0x140994C74 (PopWriteHiberImage.c)
 *     PopCompressHiberBlocks @ 0x14099532C (PopCompressHiberBlocks.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x140383B80 (MmMapMemoryDumpMdlEx2.c)
 */

__int64 __fastcall PopGetNextTable(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  unsigned __int64 *v7; // r13
  __int64 v8; // r12
  __int64 v9; // r10
  unsigned __int16 v10; // r14
  unsigned int v11; // ebp
  __int64 v12; // r15
  unsigned int i; // r8d
  __int64 v14; // rsi
  unsigned int v15; // r8d
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  __int64 v18; // rdx
  _DWORD *v19; // rdi
  _DWORD *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r11
  unsigned int j; // eax
  bool v24; // cc
  __int64 v25; // rbx
  _DWORD *v27; // r9
  unsigned int v28; // ecx
  __int64 v29; // r9
  unsigned int v30; // ecx
  __int64 v31; // r8
  unsigned int v32; // edi
  __int64 v33; // r14
  __int64 v34; // rax
  unsigned int v35; // esi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned __int16 v37; // [rsp+70h] [rbp+8h]
  _BYTE *v38; // [rsp+78h] [rbp+10h]
  BOOL v41; // [rsp+90h] [rbp+28h]

  v38 = (_BYTE *)a2;
  v7 = (unsigned __int64 *)(a4 + 48);
  v8 = a4;
  *(_DWORD *)a2 = 0;
  v9 = a3;
  v37 = 0;
  v10 = 0;
  v41 = a5 == 0;
  v11 = 0;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), 1, 0) )
  {
    do
      _mm_pause();
    while ( *(_DWORD *)(a1 + 8) );
  }
  v12 = a1 + 64;
  if ( *(_QWORD *)(a1 + 104) != a1 + 64 )
  {
    v28 = *(_DWORD *)(a1 + 284);
    if ( v28 )
    {
      do
      {
        a2 = *(_QWORD *)(a1 + 104);
        if ( a2 == v12 )
          break;
        v29 = *(_QWORD *)(a1 + 112);
        v30 = v28 - v11;
        v31 = v29 + *(_QWORD *)(a2 + 24);
        v32 = *(_DWORD *)(a2 + 32) - v31;
        v33 = *(_QWORD *)(a2 + 40) + (v29 << 12);
        if ( v32 > v30 )
        {
          v34 = v29 + v30;
          v32 = v30;
        }
        else
        {
          *(_QWORD *)(a1 + 104) = *(_QWORD *)a2;
          v34 = 0LL;
        }
        *(_QWORD *)(a1 + 112) = v34;
        *(_QWORD *)(v9 + 8LL * v37++) = (16 * v31) | ((_BYTE)v32 - 1) & 0xF;
        v35 = 0;
        if ( v32 )
        {
          v11 += v32;
          do
          {
            PhysicalAddress = MmGetPhysicalAddress((PVOID)(v33 + ((unsigned __int64)v35++ << 12)));
            *v7++ = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
            --v32;
          }
          while ( v32 );
          v9 = a3;
          v12 = a1 + 64;
        }
        v28 = *(_DWORD *)(a1 + 284);
      }
      while ( v11 < v28 );
      v8 = a4;
      v10 = v37;
    }
  }
  for ( i = *(_DWORD *)(a1 + 284); v11 < i; i = *(_DWORD *)(a1 + 284) )
  {
    v14 = *(_QWORD *)(a1 + 96);
    v15 = i - v11;
    v16 = *(_DWORD *)(a1 + 112);
    v17 = *(_DWORD *)v14;
    if ( *(_DWORD *)v14 <= v16 )
    {
LABEL_37:
      *(_QWORD *)(a1 + 112) = **(unsigned int **)(a1 + 96);
      break;
    }
    v18 = *(_QWORD *)(v14 + 8);
    v19 = (_DWORD *)(v18 + 4 * ((unsigned __int64)(v17 - 1) >> 5));
    v20 = (_DWORD *)(v18 + 4 * ((unsigned __int64)v16 >> 5));
    if ( v20 != v19 )
    {
      v21 = v16 & 0x1F;
      if ( (*v20 | *((_DWORD *)qword_140012120 + v21)) == -1 )
      {
        v16 = v16 - v21 + 32;
        for ( ++v20; v20 < v19 && *v20 == -1; ++v20 )
          v16 += 32;
      }
    }
    for ( ; v16 < v17; ++v16 )
    {
      if ( !_bittest(*(const signed __int32 **)(v14 + 8), v16) )
        break;
    }
    a2 = 0LL;
    if ( v20 != v19 )
    {
      v22 = v16 & 0x1F;
      if ( (*v20 & ~*((_DWORD *)qword_140012120 + v22)) == 0 )
      {
        a2 = (unsigned int)(32 - v22);
        v24 = (unsigned int)a2 <= v15;
        if ( (unsigned int)a2 >= v15 )
          goto LABEL_22;
        v27 = v20 + 1;
        while ( v27 < v19 && !*v27 )
        {
          ++v27;
          a2 = (unsigned int)(a2 + 32);
          v24 = (unsigned int)a2 <= v15;
          if ( (unsigned int)a2 >= v15 )
            goto LABEL_22;
        }
      }
    }
    for ( j = a2 + v16; j < *(_DWORD *)v14; a2 = (unsigned int)(a2 + 1) )
    {
      if ( _bittest(*(const signed __int32 **)(v14 + 8), j) )
        break;
      v24 = (unsigned int)a2 <= v15;
      if ( (unsigned int)a2 >= v15 )
        goto LABEL_22;
      ++j;
    }
    v24 = (unsigned int)a2 <= v15;
LABEL_22:
    if ( v24 )
      v15 = a2;
    if ( !v15 )
      goto LABEL_37;
    *(_QWORD *)(a1 + 112) = v15 + v16;
    v11 += v15;
    a2 = v16;
    *(_QWORD *)(a3 + 8LL * v10++) = (16LL * v16) | ((_BYTE)v15 - 1) & 0xF;
    do
    {
      *v7++ = a2++;
      --v15;
    }
    while ( v15 );
  }
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v11 )
    return 0LL;
  v25 = v11;
  *v38 = v10;
  *(_QWORD *)v8 = 0LL;
  *(_WORD *)(v8 + 10) = 0;
  *(_WORD *)(v8 + 8) = 8 * (v11 + 6);
  *(_QWORD *)(v8 + 32) = 0LL;
  *(_DWORD *)(v8 + 44) = 0;
  *(_DWORD *)(v8 + 40) = v11 << 12;
  MmMapMemoryDumpMdlEx2(a6, a2, v8, v41);
  return v25;
}
