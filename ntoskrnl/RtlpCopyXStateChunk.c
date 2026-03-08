/*
 * XREFs of RtlpCopyXStateChunk @ 0x1403D1A88
 * Callers:
 *     RtlpCopyExtendedContext @ 0x140364B00 (RtlpCopyExtendedContext.c)
 *     RtlCopyContext @ 0x1407EE220 (RtlCopyContext.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall RtlpCopyXStateChunk(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // esi
  unsigned int v7; // ebx
  unsigned int v8; // r13d
  unsigned __int64 *v9; // r12
  _QWORD *v10; // rdi
  unsigned int v11; // r15d
  _QWORD *v12; // r9
  unsigned __int64 v13; // rbp
  char v14; // r8
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  _DWORD *v17; // r14
  _DWORD *v18; // r12
  __int64 v20; // rdx
  int v21; // ecx
  _QWORD *v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+28h] [rbp-40h]
  unsigned __int64 *v24; // [rsp+30h] [rbp-38h]
  unsigned int v25; // [rsp+80h] [rbp+18h]
  char v26; // [rsp+90h] [rbp+28h]

  v25 = *(_DWORD *)(a3 + 20);
  v6 = 64;
  v7 = 64;
  if ( v25 < 0x40 )
    return 2147483653LL;
  v8 = *(_DWORD *)(a5 + 20);
  if ( v8 < 0x40 )
    return 2147483653LL;
  v9 = (unsigned __int64 *)(a2 + *(int *)(a3 + 16));
  v10 = (_QWORD *)(a4 + *(int *)(a5 + 16));
  v24 = v9;
  v22 = v10;
  memset(v9, 0, 0x40uLL);
  v11 = 2;
  v12 = v10;
  v13 = *v10 & (MEMORY[0xFFFFF78000000708] | MEMORY[0xFFFFF780000003D8]) & 0xFFFFFFFFFFFFFFFCuLL;
  *v9 = v13;
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
  {
    v14 = 1;
    v15 = v10[1] & (MEMORY[0xFFFFF78000000708] | MEMORY[0xFFFFF780000003D8] | 3LL) | 0x8000000000000000uLL;
    v16 = MEMORY[0xFFFFF780000005F8];
  }
  else
  {
    v14 = 0;
    v15 = 0LL;
    v16 = 0LL;
  }
  v23 = v16;
  v26 = v14;
  v9[1] = v15;
  if ( a1 == 1 )
  {
    v17 = (_DWORD *)0xFFFFF78000000404LL;
    v18 = (_DWORD *)0xFFFFF7800000060CLL;
    while ( v13 )
    {
      v20 = 1LL << v11;
      if ( v14 )
      {
        if ( (v20 & v15) != 0 )
        {
          v7 = v6;
          if ( (v20 & v16) != 0 )
            v7 = (v6 + 63) & 0xFFFFFFC0;
          v6 = v7 + *v18;
        }
      }
      else
      {
        v21 = *(v17 - 1);
        v6 = *v17 + v21 - 512;
        v7 = v21 - 512;
      }
      if ( (v20 & v13) != 0 )
      {
        if ( v6 > v25 || v6 > v8 )
          return 2147483653LL;
        memmove((char *)v24 + v7, (char *)v12 + v7, v6 - v7);
        v14 = v26;
        _bittestandreset64((__int64 *)&v13, v11);
      }
      v16 = v23;
      ++v11;
      v12 = v22;
      ++v18;
      v17 += 2;
      if ( v11 >= 0x40 )
        return 0LL;
    }
  }
  return 0LL;
}
