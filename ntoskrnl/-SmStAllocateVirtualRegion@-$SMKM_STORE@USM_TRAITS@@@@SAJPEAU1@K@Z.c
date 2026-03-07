__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStAllocateVirtualRegion(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // ecx
  __int64 result; // rax
  bool v8; // zf
  __int64 v9; // rax
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  __int128 v12; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 6216);
  v4 = a2;
  if ( *(_QWORD *)(v2 + 8LL * a2) )
    return 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v5 = *(unsigned int *)(a1 + 6208);
  v6 = *(unsigned __int8 *)(a1 + 6021) >> 6;
  *((_QWORD *)&v10 + 1) = v5;
  LODWORD(v5) = _mm_cvtsi128_si32((__m128i)0LL);
  LODWORD(v11) = ((unsigned __int8)v5 ^ (unsigned __int8)v6) & 1 ^ v5;
  result = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 2LL, &v10);
  if ( (int)result >= 0 )
  {
    result = DWORD2(v12);
    if ( (SDWORD2(v12) & 0x80000000) == 0 )
    {
      v8 = (v12 & 1) == 0;
      v9 = *((_QWORD *)&v11 + 1);
      *(_QWORD *)(v2 + 8 * v4) = *((_QWORD *)&v11 + 1);
      if ( !v8 )
        *(_QWORD *)(v2 + 8 * v4) = v9 | 0x8000000000000000uLL;
      return 0LL;
    }
  }
  return result;
}
