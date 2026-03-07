__int64 __fastcall GreScaleRgn(HDC a1, HRGN a2)
{
  DC *v3; // rcx
  DC *v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, a2, 0, 0);
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v6[0] && v5[0] )
  {
    if ( (unsigned int)DC::bDpiScaleTransform(v5[0]) )
    {
      RGNOBJ::vScale(
        v6,
        _mm_unpacklo_ps((__m128)*((unsigned int *)v3 + 131), (__m128)*((unsigned int *)v3 + 132)).m128_u64[0]);
      v3 = v5[0];
    }
    if ( v3 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v5);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
    return 1LL;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v5);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
    return 0LL;
  }
}
