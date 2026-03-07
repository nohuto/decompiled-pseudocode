__int64 __fastcall MiAllocateSkipPagesForMdl(__int64 a1, int a2, int a3)
{
  __int64 v3; // r14
  __int64 v5; // rax
  unsigned __int64 v7; // rdi
  __int64 v9; // r12
  __int64 v10; // r8
  unsigned __int64 v11; // rbp
  int v12; // r15d
  __int64 result; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rcx
  __int64 *v17; // r10
  __int64 v18; // r9
  __int64 v19; // [rsp+A0h] [rbp+8h] BYREF

  v19 = -1LL;
  v3 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 16);
  v11 = v5 * ((unsigned __int64)*(unsigned int *)(v3 + 40) >> 12);
  if ( v7 )
  {
    if ( v5 != 1 )
      v3 = 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 32) - v11;
  }
  v12 = a3 | 0x60000000;
  do
  {
    result = MiFindContiguousPagesEx(
               *(_QWORD *)a1,
               v9,
               v10,
               *(_QWORD *)(a1 + 24),
               0,
               v7,
               *(_DWORD *)(a1 + 80),
               a2,
               0x80000000,
               v12,
               0,
               v3,
               (__int64)&v19);
    if ( (int)result < 0 )
      break;
    if ( !v3 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      v15 = *(_QWORD *)(a1 + 48);
      v16 = 0LL;
      v17 = (__int64 *)(v14 + 8 * (((unsigned __int64)*(unsigned int *)(v14 + 40) >> 12) + 6));
      for ( result = v7 / v15; v16 < v7 / v15; result = v7 / v15 )
      {
        v18 = v19 + v16 * v15;
        ++v16;
        *v17++ = v18;
        v15 = *(_QWORD *)(a1 + 48);
      }
      *(_DWORD *)(v14 + 40) += (_DWORD)v16 << 12;
    }
    v11 += v7;
    if ( v11 == *(_QWORD *)(a1 + 32) )
      break;
    LODWORD(v10) = v19 - 1;
    result = v19 - v9;
  }
  while ( v19 - v9 >= v7 );
  return result;
}
