__int64 __fastcall RtlParseLeapSecondData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  signed __int64 v7; // rbx
  unsigned int v8; // r12d
  unsigned __int64 *v9; // r15
  __int16 *v10; // r14
  int v11; // r10d
  unsigned __int64 v12; // rax
  _WORD *v13; // rdx
  signed __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h]
  __int16 v17[4]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+38h] [rbp-8h]
  int v20; // [rsp+98h] [rbp+58h]

  v4 = 0;
  v15 = 0LL;
  *(_DWORD *)(a4 + 4) = 0;
  v7 = 0LL;
  v20 = 0;
  v8 = 0;
  if ( a2 )
  {
    v9 = (unsigned __int64 *)(a4 + 8);
    v10 = (__int16 *)(a1 + 4);
    v16 = a3 - a4;
    while ( 1 )
    {
      v17[0] = *(v10 - 2);
      v17[1] = *(v10 - 1);
      v17[2] = *v10;
      v17[3] = v10[1];
      v18 = 3866683LL;
      if ( !RtlpTimeFieldsToTimeNoLeapSeconds(v17, &v15) )
        break;
      if ( v15 <= v7 )
        return 5;
      v7 = v15;
      if ( (int)RtlLongLongAdd(v15, 10000000LL * v20, (unsigned __int64 *)&v15) < 0 )
        return 7;
      v12 = v15;
      v13 = v10 + 2;
      if ( (v10[2] & 1) != 0 )
      {
        v12 = v15 | 0x8000000000000000uLL;
        v15 |= 0x8000000000000000uLL;
      }
      if ( a3 && v8 < *(_DWORD *)(a3 + 4) && v12 != *(unsigned __int64 *)((char *)v9 + v16) )
        return 6;
      *v9 = v12;
      ++v8;
      ++*(_DWORD *)(a4 + 4);
      ++v9;
      v10 += 6;
      v20 = v11 + 2 * ((*v13 & 1) == 0) - 1;
      if ( v8 >= a2 )
        return v4;
    }
    return 4;
  }
  return v4;
}
