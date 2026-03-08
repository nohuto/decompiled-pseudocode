/*
 * XREFs of PopGetNextTable @ 0x14058C744
 * Callers:
 *     PopCompressHiberBlocks @ 0x140A9EE04 (PopCompressHiberBlocks.c)
 *     PopWriteHiberImage @ 0x140AA272C (PopWriteHiberImage.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x14062E298 (MmMapMemoryDumpMdlEx2.c)
 */

__int64 __fastcall PopGetNextTable(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  unsigned int v6; // ebp
  unsigned __int64 *v7; // r13
  __int64 v9; // r14
  __int64 v10; // r11
  unsigned __int16 v11; // r10
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r12
  unsigned int v15; // ecx
  __int64 v16; // r9
  unsigned int v17; // ecx
  __int64 v18; // r8
  unsigned int v19; // edi
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned __int16 i; // r15
  unsigned int *v25; // rax
  unsigned int v26; // r9d
  unsigned int v27; // ecx
  __int64 v28; // r11
  __int64 v29; // r12
  unsigned int v30; // r8d
  unsigned __int64 v31; // rbp
  _DWORD *v32; // r10
  int v33; // edi
  _DWORD *j; // rax
  unsigned int v35; // edi
  __int64 v36; // rcx
  unsigned __int64 k; // rax
  unsigned int *v38; // rax
  unsigned int v39; // r8d
  unsigned __int64 v40; // r9
  unsigned int v41; // r9d
  __int64 v42; // rbx
  unsigned __int16 v44; // [rsp+80h] [rbp+8h]

  v6 = 0;
  v7 = (unsigned __int64 *)(a4 + 48);
  v44 = 0;
  v9 = a4;
  v10 = a3;
  v11 = 0;
  *a2 = 0;
  v12 = 0;
  v13 = 1LL;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), 1, 0) )
  {
    do
      _mm_pause();
    while ( *(_DWORD *)(a1 + 8) );
  }
  v14 = a1 + 64;
  if ( *(_QWORD *)(a1 + 104) != a1 + 64 )
  {
    v15 = *(_DWORD *)(a1 + 284);
    if ( v15 )
    {
      do
      {
        v13 = *(_QWORD *)(a1 + 104);
        if ( v13 == v14 )
          break;
        v16 = *(_QWORD *)(a1 + 112);
        v17 = v15 - v12;
        v18 = v16 + *(_QWORD *)(v13 + 24);
        v19 = *(_DWORD *)(v13 + 32) - v18;
        v20 = *(_QWORD *)(v13 + 40) + (v16 << 12);
        if ( v19 <= v17 )
        {
          *(_QWORD *)(a1 + 104) = *(_QWORD *)v13;
          v21 = 0LL;
        }
        else
        {
          v21 = v16 + v17;
          v19 = v17;
        }
        *(_QWORD *)(a1 + 112) = v21;
        v22 = v11++;
        v44 = v11;
        *(_QWORD *)(v10 + 8 * v22) = (16 * v18) | ((_BYTE)v19 - 1) & 0xF;
        if ( v19 )
        {
          v12 += v19;
          do
          {
            PhysicalAddress = MmGetPhysicalAddress((PVOID)(v20 + ((unsigned __int64)v6++ << 12)));
            *v7++ = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
            --v19;
          }
          while ( v19 );
          v11 = v44;
          v14 = a1 + 64;
          v10 = a3;
        }
        v15 = *(_DWORD *)(a1 + 284);
        v6 = 0;
      }
      while ( v12 < v15 );
      v9 = a4;
    }
  }
  for ( i = v44; ; ++i )
  {
    v41 = *(_DWORD *)(a1 + 284);
    if ( v12 >= v41 )
      break;
    v25 = *(unsigned int **)(a1 + 96);
    v26 = v41 - v12;
    v27 = *(_DWORD *)(a1 + 112);
    v28 = *v25;
    if ( (unsigned int)v28 <= v27 )
      goto LABEL_40;
    v29 = *((_QWORD *)v25 + 1);
    v30 = 0;
    v31 = v29 + 4 * ((unsigned __int64)(unsigned int)(v28 - 1) >> 5);
    v32 = (_DWORD *)(v29 + 4 * ((unsigned __int64)v27 >> 5));
    v33 = ((1 << (v27 & 0x1F)) - 1) | *v32;
    for ( j = v32 + 1; ; ++j )
    {
      v35 = ~v33;
      if ( v35 )
        break;
      if ( (unsigned __int64)j > v31 )
        goto LABEL_23;
      v33 = *++v32;
    }
    _BitScanForward64((unsigned __int64 *)&v36, v35);
    v13 = (unsigned int)v36 + 32 * (unsigned int)(((__int64)v32 - v29) >> 2);
    if ( (unsigned int)v13 > (unsigned int)v28 )
    {
LABEL_23:
      v13 = (unsigned int)v28;
      goto LABEL_35;
    }
    for ( k = ~(v35 | ((1 << v36) - 1)); !(_DWORD)k; k = *v38 )
    {
      if ( v30 > v26 || (v30 += 32, v38 = v32 + 1, (unsigned __int64)(v32 + 1) > v31) )
      {
        LODWORD(k) = 32;
        goto LABEL_31;
      }
      ++v32;
    }
    _BitScanForward64(&k, k);
LABEL_31:
    v39 = k + 32 * (((__int64)v32 - v29) >> 2);
    if ( v39 > (unsigned int)v28 )
      v39 = v28;
    v30 = v39 - v13;
    if ( v30 > v26 )
      v30 = v26;
LABEL_35:
    if ( !v30 )
    {
LABEL_40:
      *(_QWORD *)(a1 + 112) = v28;
      break;
    }
    *(_QWORD *)(a1 + 112) = (unsigned int)v13 + v30;
    v12 += v30;
    v40 = (unsigned int)v13;
    *(_QWORD *)(a3 + 8LL * i) = (16LL * (unsigned int)v13) | ((_BYTE)v30 - 1) & 0xF;
    v13 = 1LL;
    do
    {
      *v7++ = v40++;
      --v30;
    }
    while ( v30 );
  }
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v12 )
    return 0LL;
  v42 = v12;
  *(_BYTE *)a2 = i;
  *(_QWORD *)v9 = 0LL;
  *(_WORD *)(v9 + 10) = 0;
  *(_QWORD *)(v9 + 32) = 0LL;
  *(_WORD *)(v9 + 8) = 8 * (v12 + 6);
  *(_QWORD *)(v9 + 40) = v12 << 12;
  MmMapMemoryDumpMdlEx2(a6, v13, v9, a5 == 0);
  return v42;
}
