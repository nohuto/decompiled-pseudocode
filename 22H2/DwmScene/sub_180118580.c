/*
 * XREFs of sub_180118580 @ 0x180118580
 * Callers:
 *     sub_180118580 @ 0x180118580 (sub_180118580.c)
 *     sub_18011ACB0 @ 0x18011ACB0 (sub_18011ACB0.c)
 *     sub_18011B660 @ 0x18011B660 (sub_18011B660.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_180087B70 @ 0x180087B70 (sub_180087B70.c)
 *     sub_180118580 @ 0x180118580 (sub_180118580.c)
 *     sub_18011A458 @ 0x18011A458 (sub_18011A458.c)
 *     sub_18011CB80 @ 0x18011CB80 (sub_18011CB80.c)
 *     sub_18011CBDC @ 0x18011CBDC (sub_18011CBDC.c)
 *     sub_18011CCD8 @ 0x18011CCD8 (sub_18011CCD8.c)
 *     sub_18011CD50 @ 0x18011CD50 (sub_18011CD50.c)
 *     sub_18011CD60 @ 0x18011CD60 (sub_18011CD60.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180118580(__int64 a1, _QWORD *a2, double *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r15
  _QWORD *v10; // rdx
  unsigned int v11; // edi
  volatile signed __int32 *v12; // rsi
  __int64 v13; // rdi
  __int64 *v14; // rdx
  __int64 v15; // rdi
  int v16; // eax
  struct _Mtx_internal_imp_t *v18; // [rsp+20h] [rbp-89h]
  _QWORD v19[4]; // [rsp+28h] [rbp-81h] BYREF
  _QWORD v20[4]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v21; // [rsp+68h] [rbp-41h] BYREF
  __int64 v22[4]; // [rsp+78h] [rbp-31h] BYREF
  __int128 v23; // [rsp+98h] [rbp-11h] BYREF
  __int64 v24[2]; // [rsp+A8h] [rbp-1h] BYREF
  __m128i si128; // [rsp+B8h] [rbp+Fh]

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v18 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v7 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v7 )
  {
LABEL_27:
    std::_Throw_C_error(v7);
    JUMPOUT(0x1801187C2LL);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v22, a2);
  sub_18011A458(a1 + 144, &v21, v8);
  v9 = v21;
  unknown_libname_101(v22);
  v10 = a2;
  if ( a2[3] >= 8uLL )
    v10 = (_QWORD *)*a2;
  if ( (unsigned __int8)sub_18011CCD8(v9 + 64, v10) )
  {
    v19[2] = 0LL;
    v19[3] = 0LL;
    sub_18001269C(v19, (__int64)a2);
    v13 = sub_18011CB80(v9 + 64, v19);
    if ( (unsigned __int8)sub_18011CD60(v13) )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
      LOWORD(v24[0]) = 0;
      std::wstring::assign((char *)v24, L"Value", 5uLL);
      v14 = v24;
      if ( si128.m128i_i64[1] >= 8uLL )
        v14 = (__int64 *)v24[0];
      if ( (unsigned __int8)sub_18011CCD8(v13, v14)
        && (v20[2] = 0LL,
            v20[3] = 0LL,
            sub_18001269C(v20, (__int64)v24),
            v15 = sub_18011CB80(v13, v20),
            (unsigned __int8)sub_18011CD50(v15)) )
      {
        *a3 = sub_18011CBDC(v15);
        v11 = 0;
      }
      else
      {
        v11 = 1;
      }
      unknown_libname_101(v24);
    }
    else if ( (unsigned __int8)sub_18011CD50(v13) )
    {
      *a3 = *(double *)(v13 + 48);
      v11 = 0;
    }
    else
    {
      v11 = 1;
    }
  }
  else
  {
    v23 = 0LL;
    sub_180087B70(a1, &v23);
    if ( (_QWORD)v23 )
      v11 = sub_180118580(v23, a2, a3);
    else
      v11 = 2;
    v12 = (volatile signed __int32 *)*((_QWORD *)&v23 + 1);
    if ( *((_QWORD *)&v23 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
      v6 = v18;
    }
  }
  v16 = Mtx_unlock(v6);
  if ( v16 )
  {
    std::_Throw_C_error(v16);
    goto LABEL_27;
  }
  return v11;
}
