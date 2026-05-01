/*
 * XREFs of ?SetPositioningAnchorRect@XamlLauncherState@@UEAAJUtagRECT@@0@Z @ 0x1803A5890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::SetPositioningAnchorRect(XamlLauncherState *this, __m128i *a2, __m128i *a3)
{
  __m128i v3; // xmm1
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  __m128i v7; // xmm1
  __int64 v8; // rdx
  __int128 v9; // xmm2
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int64 (__fastcall *v13)(__int64 *, __int128 *, __int128 *); // rax
  __int128 v15; // [rsp+20h] [rbp-20h] BYREF
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF

  v3 = *a3;
  v5 = a3->m128i_i64[0];
  v6 = _mm_srli_si128(v3, 8).m128i_u64[0];
  v7 = *a2;
  v8 = a2->m128i_i64[0];
  v7.m128i_i64[0] = _mm_srli_si128(v7, 8).m128i_u64[0];
  *(float *)&v15 = (float)(int)v5;
  *((float *)&v15 + 1) = (float)SHIDWORD(v5);
  *((float *)&v15 + 2) = (float)((int)v6 - v5);
  *((float *)&v15 + 3) = (float)(HIDWORD(v6) - HIDWORD(v5));
  v9 = v15;
  *(float *)&v15 = (float)(int)v8;
  *((float *)&v15 + 1) = (float)SHIDWORD(v8);
  *((float *)&v15 + 2) = (float)(v7.m128i_i32[0] - v8);
  v10 = (__int64 *)*((_QWORD *)this + 7);
  v11 = *v10;
  *((float *)&v15 + 3) = (float)(v7.m128i_i32[1] - HIDWORD(v8));
  v12 = v15;
  v13 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int128 *))(v11 + 64);
  v15 = v9;
  v16 = v12;
  return v13(v10, &v16, &v15);
}
