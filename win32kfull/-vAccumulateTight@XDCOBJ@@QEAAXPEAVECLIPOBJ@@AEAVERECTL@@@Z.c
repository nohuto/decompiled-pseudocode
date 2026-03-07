void __fastcall XDCOBJ::vAccumulateTight(XDCOBJ *this, struct ECLIPOBJ *a2, __m128i *a3)
{
  __m128i v3; // xmm0
  _DWORD *v5; // rcx
  __int64 v6; // rdx
  struct _RECTL *v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  struct _RECTL v11; // [rsp+38h] [rbp-18h] BYREF

  v3 = *a3;
  v5 = *(_DWORD **)this;
  v11 = (struct _RECTL)v3;
  v6 = v5[10] & 1;
  v11.left = _mm_cvtsi128_si32(v3) - v5[2 * v6 + 254];
  v11.right = v3.m128i_i32[2] - v5[2 * v6 + 254];
  v11.top = v3.m128i_i32[1] - v5[2 * v6 + 255];
  v11.bottom = v3.m128i_i32[3] - v5[2 * v6 + 255];
  if ( (v5[9] & 0x40) != 0 )
  {
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)(v5 + 270)) )
      *v7 = v11;
    else
      ERECTL::operator|=(v7, &v11);
    v10 = *(_QWORD *)(*(_QWORD *)this + 1184LL);
    if ( v10 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v9);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v9);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v8);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v8);
      if ( v9 && v8 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v8, &v11);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v9, (struct RGNOBJ *)&v10, (struct RGNOBJ *)&v8, 0xEu) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v10, (struct RGNOBJ *)&v9);
          *(_QWORD *)(*(_QWORD *)this + 1184LL) = v10;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v8);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v9);
    }
  }
}
