/*
 * XREFs of sub_1800B2DF4 @ 0x1800B2DF4
 * Callers:
 *     sub_1800B2C3C @ 0x1800B2C3C (sub_1800B2C3C.c)
 * Callees:
 *     sub_180017744 @ 0x180017744 (sub_180017744.c)
 *     sub_1800B2258 @ 0x1800B2258 (sub_1800B2258.c)
 *     sub_1800C6564 @ 0x1800C6564 (sub_1800C6564.c)
 *     sub_1800EAE04 @ 0x1800EAE04 (sub_1800EAE04.c)
 *     sub_1800EB244 @ 0x1800EB244 (sub_1800EB244.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800B2DF4(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __m128i si128; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+48h] [rbp-10h]

  v8 = a1;
  si128.m128i_i64[1] = 15LL;
  si128.m128i_i64[0] = 10LL;
  strcpy((char *)v6, "LightProbe");
  sub_1800EAE04(a1, v6, a2);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v3 = v6[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v3 = *(_QWORD *)(v6[0] - 8LL);
      if ( (unsigned __int64)(v6[0] - v3 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v3, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v3);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v6[0]) = 0;
  *(_QWORD *)a1 = &Spectre::Engine::LightProbe::`vftable';
  *(_BYTE *)(a1 + 88) = 1;
  *(_OWORD *)(a1 + 92) = xmmword_18020DC50;
  sub_1800B2258((_DWORD *)(a1 + 108));
  sub_1800C6564(a1 + 256);
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 412) = 1065353216LL;
  *(_QWORD *)(a1 + 420) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  v9 = a1 + 448;
  v4 = (_QWORD *)sub_1800EB244(a1);
  sub_180017744(v4, (_QWORD *)(a1 + 448), 1u);
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_OWORD *)(a1 + 496) = xmmword_18020DC60;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 528) = 1065353216;
  return a1;
}
