/*
 * XREFs of ArbpBuildAllocationStack @ 0x14081FC68
 * Callers:
 *     ArbTestAllocation @ 0x14081F960 (ArbTestAllocation.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ArbpBuildAlternative @ 0x14081FF70 (ArbpBuildAlternative.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *i; // rbx
  unsigned __int64 v14; // rbp
  unsigned __int64 j; // rax
  __int64 result; // rax
  __int64 Pool2; // rbp

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
  v11 = *(_QWORD *)(a1 + 112);
  if ( v5 )
    v12 = v11 + 80 * v4;
  else
    v12 = 0LL;
  for ( i = (__int64 *)*v6; v6 != i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) )
    {
      *(_QWORD *)(v11 + 32) = i;
      *(_DWORD *)(v11 + 48) = *((_DWORD *)i + 4);
      *(_QWORD *)(v11 + 56) = v12;
      *(_QWORD *)v11 = 1LL;
      v14 = i[3];
      for ( j = v14 + 32LL * *((unsigned int *)i + 4); v14 < j; j = i[3] + 32LL * *((unsigned int *)i + 4) )
      {
        result = ArbpBuildAlternative(a1, v14, v12);
        if ( (int)result < 0 )
          return result;
        *(_DWORD *)(v12 + 32) = 0;
        v14 += 32LL;
        v12 += 64LL;
      }
      v11 += 80LL;
    }
  }
  *(_QWORD *)(v11 + 32) = 0LL;
  return 0LL;
}
