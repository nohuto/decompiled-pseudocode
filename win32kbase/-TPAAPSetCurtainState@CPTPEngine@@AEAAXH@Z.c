void __fastcall CPTPEngine::TPAAPSetCurtainState(CPTPEngine *this, int a2)
{
  int v2; // r9d
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+24h] [rbp-24h]

  v2 = *((_DWORD *)this + 984);
  if ( (v2 & 0x20000u) >> 17 != (a2 != 0) )
  {
    v3 = a2;
    v4 = 0LL;
    *((_DWORD *)this + 984) = v2 ^ (v2 ^ (a2 << 17)) & 0x20000;
    HIDWORD(v4) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    CBasePTPEngine::SendEtwOutput((__int64)this, 1, (__int64)&v3);
  }
}
