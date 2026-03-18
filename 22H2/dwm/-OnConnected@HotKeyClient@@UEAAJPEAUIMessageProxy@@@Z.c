/*
 * XREFs of ?OnConnected@HotKeyClient@@UEAAJPEAUIMessageProxy@@@Z @ 0x14000AD30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000BE28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HotKeyClient::OnConnected(HotKeyClient *this, struct IMessageProxy *a2, __int64 a3)
{
  int v4; // eax
  __m128i *v5; // rdi
  __m128i *v6; // rsi
  __m128i v7; // xmm1
  int v8; // eax
  int v10; // [rsp+20h] [rbp-68h]
  __int32 v11; // [rsp+20h] [rbp-68h]
  __int128 v12; // [rsp+40h] [rbp-48h] BYREF
  __int128 v13; // [rsp+50h] [rbp-38h] BYREF
  __int128 v14; // [rsp+60h] [rbp-28h]
  __int64 v15; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v12 = *(_OWORD *)((char *)this + 24);
  v13 = *((_OWORD *)this + 8);
  v14 = *((_OWORD *)this + 9);
  v15 = *((_QWORD *)this + 20);
  LOBYTE(a3) = *((_BYTE *)this + 120);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, __int128 *))(**((_QWORD **)this + 10) + 24LL))(
         *((_QWORD *)this + 10),
         &v13,
         a3,
         &v12);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDD,
      (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\hotkeyclient\\hotkeyclient.cpp",
      (const char *)(unsigned int)v4,
      v10);
  v5 = (__m128i *)*((_QWORD *)this + 12);
  v6 = (__m128i *)*((_QWORD *)this + 13);
  while ( v5 != v6 )
  {
    v7 = *v5;
    LODWORD(v14) = v5[1].m128i_i32[0];
    v12 = *(_OWORD *)((char *)this + 168);
    v11 = _mm_srli_si128(v7, 8).m128i_i32[1];
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD))(**((_QWORD **)this + 10) + 40LL))(
           *((_QWORD *)this + 10),
           &v12,
           (unsigned int)_mm_cvtsi128_si32(v7),
           (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) | v7.m128i_i32[1]);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xE8,
        (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\hotkeyclient\\hotkeyclient.cpp",
        (const char *)(unsigned int)v8,
        v11);
    v5 = (__m128i *)((char *)v5 + 20);
  }
  return 0LL;
}
