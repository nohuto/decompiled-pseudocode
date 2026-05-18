/*
 * XREFs of sub_180013110 @ 0x180013110
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012E34 @ 0x180012E34 (sub_180012E34.c)
 *     sub_18008CE38 @ 0x18008CE38 (sub_18008CE38.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180013110(__int64 a1, int a2, __int64 a3)
{
  int v3; // edi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 *v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __m128i si128; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    v3 = a3;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
    LOBYTE(v11[0]) = 0;
    if ( !a2 )
    {
      sub_180012E34(v11, &qword_18020B6B8);
      goto LABEL_13;
    }
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 1 )
          {
LABEL_13:
            LOBYTE(a3) = v3 == 1;
            sub_18008CE38(*(_QWORD *)(a1 + 16), v11, a3);
            if ( si128.m128i_i64[1] >= 0x10uLL )
            {
              v9 = v11[0];
              if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
              {
                v9 = *(_QWORD *)(v11[0] - 8);
                if ( (unsigned __int64)(v11[0] - v9 - 8) > 0x1F )
                {
                  o__invalid_parameter_noinfo_noreturn(v9, si128.m128i_i64[1] + 40);
                  __debugbreak();
                }
              }
              j_j__o_free(v9);
            }
            return 0LL;
          }
          v8 = &qword_18020B698;
        }
        else
        {
          v8 = &qword_18020B678;
        }
      }
      else
      {
        v8 = &qword_18020B6D8;
      }
    }
    else
    {
      v8 = &qword_18020B658;
    }
    sub_180012E34(v11, v8);
    goto LABEL_13;
  }
  catch ( ... )
  {
    sub_18000DC98(retaddr, 222, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
