/*
 * XREFs of ?Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z @ 0x1C00114B0
 * Callers:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0011258 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x1C00112B4 (-EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z.c)
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x1C0011344 (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonDescParser::EDID_PARSER::Validate(MonDescParser::EDID_PARSER *this)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __m128i v3; // xmm2
  __m128i v4; // xmm1
  __int64 v5; // rcx
  __m128i v6; // xmm0
  __m128i v7; // xmm2
  __m128i v8; // xmm2
  __m128i v9; // xmm2
  __m128i v10; // xmm2

  if ( **(_QWORD **)this != 0xFFFFFFFFFFFF00LL )
    return 3223126018LL;
  v1 = 0LL;
  if ( this == (MonDescParser::EDID_PARSER *)((char *)this + 8 * *((_QWORD *)this + 10)) )
    this = 0LL;
  v2 = *(_QWORD *)this;
  v3 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)this + 16LL;
  do
  {
    v6 = _mm_loadu_si128((const __m128i *)(v2 + v1));
    v1 += 32LL;
    v5 += 32LL;
    v3 = _mm_add_epi8(v3, v6);
    v4 = _mm_add_epi8(v4, _mm_loadu_si128((const __m128i *)(v5 - 32)));
  }
  while ( v1 < 128 );
  v7 = _mm_add_epi8(v3, v4);
  v8 = _mm_add_epi8(v7, _mm_srli_si128(v7, 8));
  v9 = _mm_add_epi8(v8, _mm_srli_si128(v8, 4));
  v10 = _mm_add_epi8(v9, _mm_srli_si128(v9, 2));
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_add_epi8(v10, _mm_srli_si128(v10, 1))) )
    return 3223126019LL;
  else
    return 0LL;
}
