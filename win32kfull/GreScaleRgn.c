/*
 * XREFs of GreScaleRgn @ 0x1C02AA6D4
 * Callers:
 *     NtGdiScaleRgn @ 0x1C02C7090 (NtGdiScaleRgn.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00508E4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C00E90D4 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 */

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
