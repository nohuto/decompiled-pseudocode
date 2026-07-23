/*
 * XREFs of RtlpFillMemoryWithInverseStride @ 0x140590918
 * Callers:
 *     RtlpGenericStrideWorker @ 0x14059115C (RtlpGenericStrideWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpFillMemoryWithInverseStride(unsigned int a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r11
  __int64 v6; // r10
  unsigned __int64 v7; // rdi
  unsigned int v8; // ecx
  unsigned __int64 result; // rax
  char *v10; // r10
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  _DWORD *v13; // rdi
  unsigned __int64 i; // rcx
  char *v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  char *v19; // rdi
  unsigned __int64 j; // rcx
  unsigned __int64 v21; // rcx
  char *v22; // rdi

  v4 = a1;
  v5 = a4 + 4096;
  v6 = 4096LL;
  v7 = (a4 >> 2) - 12 * ((unsigned __int64)(((a4 >> 2) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64) >> 3);
  v8 = 2 * a2 - v7;
  if ( (unsigned int)v7 > 2 * a2 )
    v8 += 12;
  result = 4LL * v8 + a4;
  if ( result <= v5 )
    v6 = 4LL * v8;
  v10 = (char *)(a4 + v6);
  v11 = (unsigned __int64)&v10[-a4 + 3] >> 2;
  if ( a4 > (unsigned __int64)v10 )
    v11 = 0LL;
  if ( v11 )
  {
    v12 = 4 * v11;
    v13 = (_DWORD *)a4;
    result = (unsigned int)v4;
    for ( i = v12 >> 2; i; --i )
      *v13++ = v4;
    a4 += v12;
  }
  v15 = (char *)(a4 + 8);
  if ( (unsigned __int64)v10 < v5 )
  {
    result = 4LL * ((unsigned int)((__int64)(v5 - (_QWORD)v10) >> 2) % 0xC);
    v16 = v5 - result;
    if ( v10 != (char *)(v5 - result) )
    {
      while ( 1 )
      {
        v10 += 48;
        if ( (unsigned __int64)v15 >= v16 )
          break;
        v17 = (unsigned __int64)(v10 - v15 + 3) >> 2;
        if ( v15 > v10 )
          v17 = 0LL;
        if ( v17 )
        {
          v18 = 4 * v17;
          v19 = v15;
          result = v4;
          for ( j = v18 >> 2; j; --j )
          {
            *(_DWORD *)v19 = v4;
            v19 += 4;
          }
          v15 += v18;
        }
        v15 += 8;
      }
    }
  }
  v21 = (v5 - (unsigned __int64)v15 + 3) >> 2;
  if ( (unsigned __int64)v15 > v5 )
    v21 = 0LL;
  if ( v21 )
  {
    result = v4;
    v22 = v15;
    while ( v21 )
    {
      *(_DWORD *)v22 = v4;
      v22 += 4;
      --v21;
    }
  }
  return result;
}
