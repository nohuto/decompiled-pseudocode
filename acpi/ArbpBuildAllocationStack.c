/*
 * XREFs of ArbpBuildAllocationStack @ 0x1C00A2D80
 * Callers:
 *     ArbTestAllocation @ 0x1C00A2BE0 (ArbTestAllocation.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     ArbpBuildAlternative @ 0x1C00A2EEC (ArbpBuildAlternative.c)
 */

__int64 __fastcall ArbpBuildAllocationStack(__int64 a1, __int64 *a2, int a3)
{
  int v3; // edi
  __int64 v4; // r15
  int v5; // ebx
  __int64 *v6; // r14
  int v8; // r8d
  int v9; // ecx
  unsigned int v10; // edi
  __int64 Pool2; // rbp
  __int64 result; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 *i; // rbx
  unsigned __int64 v16; // rbp
  unsigned __int64 j; // rax

  v3 = 0;
  v4 = (unsigned int)(a3 + 1);
  v5 = 0;
  v6 = a2;
  while ( 1 )
  {
    a2 = (__int64 *)*a2;
    if ( v6 == a2 )
      break;
    v8 = *((_DWORD *)a2 + 4);
    v9 = v5;
    if ( v8 )
      v3 += v8 << 6;
    else
      v4 = (unsigned int)(v4 - 1);
    ++v5;
    if ( !v8 )
      v5 = v9;
  }
  v10 = 80 * v4 + v3;
  if ( *(_DWORD *)(a1 + 104) < v10 )
  {
    Pool2 = ExAllocatePool2(256LL, v10, 1096970817LL);
    if ( !Pool2 )
      return 3221225626LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x41627241u);
    *(_QWORD *)(a1 + 112) = Pool2;
    *(_DWORD *)(a1 + 104) = v10;
  }
  memset(*(void **)(a1 + 112), 0, v10);
  v13 = *(_QWORD *)(a1 + 112);
  if ( v5 )
    v14 = v13 + 80 * v4;
  else
    v14 = 0LL;
  for ( i = (__int64 *)*v6; v6 != i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) )
    {
      *(_QWORD *)(v13 + 32) = i;
      *(_DWORD *)(v13 + 48) = *((_DWORD *)i + 4);
      *(_QWORD *)(v13 + 56) = v14;
      *(_QWORD *)v13 = 1LL;
      v16 = i[3];
      for ( j = v16 + 32LL * *((unsigned int *)i + 4); v16 < j; j = i[3] + 32LL * *((unsigned int *)i + 4) )
      {
        result = ArbpBuildAlternative(a1, v16, v14);
        if ( (int)result < 0 )
          return result;
        *(_DWORD *)(v14 + 32) = 0;
        v16 += 32LL;
        v14 += 64LL;
      }
      v13 += 80LL;
    }
  }
  *(_QWORD *)(v13 + 32) = 0LL;
  return 0LL;
}
