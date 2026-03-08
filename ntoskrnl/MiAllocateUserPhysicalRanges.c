/*
 * XREFs of MiAllocateUserPhysicalRanges @ 0x140A3E4C0
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x140A3D6E8 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MmAllocateMemoryRanges @ 0x140A2B5D0 (MmAllocateMemoryRanges.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiAllocateUserPhysicalRanges(__int64 a1, unsigned __int64 a2, int a3, int a4, _QWORD *a5)
{
  unsigned __int64 v5; // rsi
  _QWORD *v9; // r14
  _QWORD *v10; // rdi
  _QWORD *Pool; // rax
  __int64 v12; // rax
  int v13; // ecx
  _QWORD *v14; // r9
  _QWORD *v15; // rcx
  unsigned __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rax
  __int128 v21; // [rsp+20h] [rbp-40h] BYREF
  __int128 v22; // [rsp+30h] [rbp-30h]
  __int128 v23; // [rsp+40h] [rbp-20h]
  PVOID P; // [rsp+50h] [rbp-10h]

  v5 = a2 >> 18;
  v9 = 0LL;
  P = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( a5 )
  {
    v10 = a5;
  }
  else
  {
    Pool = MiAllocatePool(64, 8 * v5 + 48, 0x72506D4Du);
    v10 = Pool;
    if ( !Pool )
    {
LABEL_14:
      v15 = P;
      goto LABEL_15;
    }
    *Pool = 0LL;
    *((_WORD *)Pool + 4) = 8 * (v5 + 6);
    *((_DWORD *)Pool + 10) = (_DWORD)v5 << 12;
    *((_WORD *)Pool + 5) = 0;
    Pool[4] = 0LL;
    *((_DWORD *)Pool + 11) = 0;
  }
  v12 = *(_QWORD *)(a1 + 200);
  v13 = DWORD1(v21) | 1;
  LODWORD(v21) = 1;
  *((_QWORD *)&v22 + 1) = 0x40000000LL;
  *((_QWORD *)&v21 + 1) = v12;
  LODWORD(v23) = a3;
  *(_QWORD *)&v22 = v5;
  if ( !a4 )
    v13 = DWORD1(v21) | 3;
  DWORD1(v21) = v13 | 4;
  if ( (int)MmAllocateMemoryRanges((ULONG_PTR)&v21) < 0 )
    goto LABEL_14;
  v14 = v10 + 6;
  v15 = P;
  v16 = 0LL;
  if ( *((_QWORD *)&v23 + 1) )
  {
    do
    {
      v17 = 0LL;
      v18 = *v15 % *((_QWORD *)&v22 + 1) + 1LL;
      do
      {
        v19 = v17 + (*v15 >> 12);
        v17 += 0x40000LL;
        *v14++ = v19;
        --v18;
      }
      while ( v18 );
      ++v15;
      ++v16;
    }
    while ( v16 < *((_QWORD *)&v23 + 1) );
    v15 = P;
  }
  v9 = v10;
  v10 = 0LL;
LABEL_15:
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( v10 && v10 != a5 )
    ExFreePoolWithTag(v10, 0);
  return v9;
}
