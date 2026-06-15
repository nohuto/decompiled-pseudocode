/*
 * XREFs of sub_1800DDA70 @ 0x1800DDA70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DDA70(__int64 a1, _WORD *a2, _WORD *a3, unsigned int a4, _QWORD *a5)
{
  int v8; // edi
  std::_Ref_count_base *v9; // rdx
  signed __int32 v10; // eax
  __int64 v11; // r15
  std::_Ref_count_base *v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  __int64 v16[2]; // [rsp+30h] [rbp-88h] BYREF
  __m128i si128; // [rsp+40h] [rbp-78h]
  __int64 v18[3]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-50h]

  v8 = -2147467261;
  if ( a5 )
  {
    *a5 = 0LL;
    v9 = qword_18019EEF0;
    if ( qword_18019EEF0 )
    {
      while ( 1 )
      {
        v10 = *((_DWORD *)v9 + 2);
        if ( !v10 )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)v9 + 2, v10 + 1, v10) )
        {
          v11 = qword_18019EEE8;
          v12 = qword_18019EEF0;
          if ( qword_18019EEE8 )
          {
            v13 = sub_18006A18C(0x10uLL);
            v14 = v13;
            if ( v13 )
            {
              *v13 = 0LL;
              v13[1] = 0LL;
            }
            else
            {
              v14 = 0LL;
            }
            if ( v14 )
            {
              sub_180060060(v18, a3);
              sub_180060060(v16, a2);
              v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD, _QWORD *))(*(_QWORD *)v11 + 24LL))(
                     v11,
                     v16,
                     v18,
                     a4,
                     v14);
              if ( si128.m128i_i64[1] >= 8uLL )
                sub_1800472E0(v16[0], 2 * si128.m128i_i64[1] + 2);
              LOWORD(v16[0]) = 0;
              si128 = _mm_load_si128((const __m128i *)&xmmword_180178FC0);
              if ( v19 >= 8 )
                sub_1800472E0(v18[0], 2 * v19 + 2);
              if ( v8 >= 0 )
                *a5 = v14;
            }
            else
            {
              v8 = -2147024882;
            }
          }
          if ( v12 )
            sub_180052600(v12);
          return (unsigned int)v8;
        }
      }
    }
  }
  return (unsigned int)v8;
}
