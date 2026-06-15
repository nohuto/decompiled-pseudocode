/*
 * XREFs of sub_1800DAF14 @ 0x1800DAF14
 * Callers:
 *     sub_1800DAE90 @ 0x1800DAE90 (sub_1800DAE90.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     ?_HasCapturedContext@_ContextCallback@details@Concurrency@@QEBA_NXZ @ 0x18002DD48 (-_HasCapturedContext@_ContextCallback@details@Concurrency@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006EDE0 @ 0x18006EDE0 (sub_18006EDE0.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800D1B84 @ 0x1800D1B84 (sub_1800D1B84.c)
 *     sub_1800D1ED8 @ 0x1800D1ED8 (sub_1800D1ED8.c)
 *     sub_1800DA4AC @ 0x1800DA4AC (sub_1800DA4AC.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800DAF14(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // r13
  _WORD *v4; // rax
  __int64 v5; // rcx
  bool HasCapturedContext; // si
  __int64 *v7; // rax
  __int64 v8; // r11
  __int64 v9; // r10
  _WORD *v10; // r12
  int v11; // r15d
  __int128 *v12; // r14
  int v13; // ecx
  __int64 v14; // r8
  int v15; // edx
  __int64 v16; // r9
  const wchar_t *v17; // rax
  __int64 v18; // rcx
  char v19; // [rsp+F8h] [rbp-80h] BYREF
  bool v20[3]; // [rsp+F9h] [rbp-7Fh] BYREF
  unsigned __int32 v21; // [rsp+FCh] [rbp-7Ch] BYREF
  _WORD v22[2]; // [rsp+100h] [rbp-78h] BYREF
  unsigned __int32 v23; // [rsp+104h] [rbp-74h] BYREF
  int v24; // [rsp+108h] [rbp-70h] BYREF
  int v25; // [rsp+10Ch] [rbp-6Ch] BYREF
  int v26; // [rsp+110h] [rbp-68h] BYREF
  int v27; // [rsp+114h] [rbp-64h] BYREF
  int v28; // [rsp+118h] [rbp-60h] BYREF
  int v29; // [rsp+11Ch] [rbp-5Ch] BYREF
  int v30; // [rsp+120h] [rbp-58h] BYREF
  int v31; // [rsp+124h] [rbp-54h] BYREF
  int v32; // [rsp+128h] [rbp-50h] BYREF
  int v33; // [rsp+12Ch] [rbp-4Ch] BYREF
  int v34; // [rsp+130h] [rbp-48h] BYREF
  int v35; // [rsp+134h] [rbp-44h] BYREF
  int v36; // [rsp+138h] [rbp-40h] BYREF
  int v37; // [rsp+13Ch] [rbp-3Ch] BYREF
  int v38; // [rsp+140h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+148h] [rbp-30h] BYREF
  __int64 v40; // [rsp+150h] [rbp-28h] BYREF
  __int128 *v41; // [rsp+158h] [rbp-20h] BYREF
  const wchar_t *v42; // [rsp+160h] [rbp-18h] BYREF
  void *v43; // [rsp+168h] [rbp-10h] BYREF
  void *v44; // [rsp+170h] [rbp-8h] BYREF
  __int64 v45; // [rsp+178h] [rbp+0h] BYREF
  __int128 v46; // [rsp+180h] [rbp+8h] BYREF

  sub_18006EDE0((struct _RTL_CRITICAL_SECTION *)(a1 + 224), (unsigned __int64 *)&lpCriticalSection);
  v46 = xmmword_18015B730;
  v2 = 0LL;
  v3 = 0;
  v21 = -1082130432;
  v4 = *(_WORD **)(a1 + 176);
  if ( *v4 == 0xFFFE )
  {
    v2 = *(_QWORD *)(a1 + 176);
  }
  else
  {
    v46 = xmmword_18015B740;
    LODWORD(v46) = (unsigned __int16)*v4;
  }
  HasCapturedContext = Concurrency::details::_ContextCallback::_HasCapturedContext((Concurrency::details::_ContextCallback *)&lpCriticalSection);
  if ( HasCapturedContext )
  {
    v5 = *(_QWORD *)(a1 + 192);
    if ( v5 )
    {
      if ( *(_QWORD *)(v5 + 56) )
      {
        v3 = *(_BYTE *)(v5 + 224);
        v21 = sub_1800D1ED8(v5).m128_u32[0];
      }
    }
  }
  v7 = sub_180008448(v5, sub_1800B6240);
  if ( *(_DWORD *)v7[1] > 4u
    && __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)v7[1], 3uLL) )
  {
    v9 = *(_QWORD *)(a1 + 176);
    v10 = (_WORD *)(v2 + 18);
    if ( v2 )
    {
      v11 = *(_DWORD *)(v2 + 20);
    }
    else
    {
      v10 = (_WORD *)(v9 + 14);
      v11 = 0;
    }
    v12 = (__int128 *)(v2 + 24);
    if ( !v2 )
      v12 = &v46;
    v13 = *(_DWORD *)(a1 + 268);
    v14 = *(unsigned int *)(a1 + 264);
    v15 = *(_DWORD *)(a1 + 552);
    v16 = *(_QWORD *)(a1 + 544);
    v23 = v21;
    v19 = v3;
    v40 = a1 + 376;
    v24 = *(_DWORD *)(a1 + 364);
    v25 = *(_DWORD *)(a1 + 360);
    v26 = *(_DWORD *)(a1 + 356);
    v27 = *(_DWORD *)(a1 + 352);
    v22[0] = *v10;
    v28 = v11;
    v41 = v12;
    v29 = *(_DWORD *)(v9 + 8);
    v30 = *(_DWORD *)(v9 + 4);
    LOWORD(v21) = *(_WORD *)(v9 + 2);
    v17 = L"WAVEFORMATEXTENSIBLE";
    if ( !v2 )
      v17 = L"WAVEFORMATEX";
    v42 = v17;
    v31 = v13;
    v20[0] = *(_DWORD *)(a1 + 332) == 1;
    v32 = *(_DWORD *)(a1 + 348);
    v33 = *(_DWORD *)(a1 + 336);
    v34 = v14;
    v35 = *(_DWORD *)(a1 + 328);
    v36 = v15;
    v37 = v14;
    v43 = *(void **)(a1 + 208);
    v38 = *(_DWORD *)(a1 + 64);
    v44 = *(void **)(a1 + 144);
    v45 = v16;
    sub_1800DA4AC(
      v8,
      byte_1801671BB,
      v14,
      v16,
      (__int64)&v45,
      &v44,
      (__int64)&v38,
      &v43,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)v20,
      (__int64)&v31,
      (void **)&v42,
      (__int64)&v21,
      (__int64)&v30,
      (__int64)&v29,
      (__int64 *)&v41,
      (__int64)&v28,
      (__int64)v22,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      &v40,
      (__int64)&v19,
      (__int64)&v23);
  }
  if ( HasCapturedContext )
  {
    v18 = *(_QWORD *)(a1 + 192);
    if ( v18 )
    {
      if ( *(_QWORD *)(v18 + 56) )
        sub_1800D1B84(v18);
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
