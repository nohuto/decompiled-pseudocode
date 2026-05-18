/*
 * XREFs of sub_18011584C @ 0x18011584C
 * Callers:
 *     sub_180115590 @ 0x180115590 (sub_180115590.c)
 * Callees:
 *     unknown_libname_98 @ 0x180010B7C (unknown_libname_98.c)
 *     sub_18011571C @ 0x18011571C (sub_18011571C.c)
 *     sub_1801159EC @ 0x1801159EC (sub_1801159EC.c)
 *     sub_180115A74 @ 0x180115A74 (sub_180115A74.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18011584C(__int64 a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v5; // ecx
  unsigned int v6; // eax
  int v7; // r8d
  struct _Mtx_internal_imp_t *v8; // rbx
  int v9; // eax
  __int64 *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v14[2]; // [rsp+20h] [rbp-48h] BYREF
  __m128i si128; // [rsp+30h] [rbp-38h]
  struct _Mtx_internal_imp_t *v16; // [rsp+40h] [rbp-28h]
  _QWORD v17[3]; // [rsp+48h] [rbp-20h] BYREF

  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)a1 = dword_18020DD88;
  *(_DWORD *)(a1 + 4) = dword_18020DDA8;
  *(_DWORD *)(a1 + 8) = dword_18020DDC8;
  v5 = HIBYTE(a3) & 0xF;
  if ( !v5 )
    v5 = *(_DWORD *)a1;
  *(_DWORD *)a1 = v5;
  v6 = HIWORD(a3) & 0xF;
  if ( !v6 )
    v6 = *(_DWORD *)(a1 + 4);
  if ( v6 <= v5 )
    v5 = v6;
  *(_DWORD *)(a1 + 4) = v5;
  v7 = (a3 >> 8) & 0xF;
  if ( !v7 )
    v7 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v7;
  *(_DWORD *)(a1 + 12) = 6;
  v8 = (struct _Mtx_internal_imp_t *)sub_180115A74();
  v16 = v8;
  v9 = Mtx_lock(v8);
  if ( v9 )
  {
LABEL_18:
    std::_Throw_C_error(v9);
    __debugbreak();
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v14[0]) = 0;
  unknown_libname_98(v14, a2);
  v10 = (__int64 *)sub_1801159EC();
  sub_18011571C(v10, (__int64)v17, (size_t *)v14);
  *(_QWORD *)(v17[0] + 64LL) = a1;
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v11 = v14[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v11 = *(_QWORD *)(v14[0] - 8);
      if ( (unsigned __int64)(v14[0] - v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v11);
  }
  v12 = Mtx_unlock(v8);
  if ( v12 )
  {
    std::_Throw_C_error(v12);
    goto LABEL_18;
  }
  return a1;
}
