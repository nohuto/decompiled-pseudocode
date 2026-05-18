/*
 * XREFs of sub_1800D07D0 @ 0x1800D07D0
 * Callers:
 *     sub_1800D0900 @ 0x1800D0900 (sub_1800D0900.c)
 * Callees:
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180062A5C @ 0x180062A5C (sub_180062A5C.c)
 *     sub_1800646EC @ 0x1800646EC (sub_1800646EC.c)
 *     sub_180065588 @ 0x180065588 (sub_180065588.c)
 *     sub_1800D0CC4 @ 0x1800D0CC4 (sub_1800D0CC4.c)
 *     sub_1801037F0 @ 0x1801037F0 (sub_1801037F0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D07D0(__int64 a1)
{
  __int64 **v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 i; // rax
  __int64 j; // rcx
  __int64 v8; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v9[136]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v10[3]; // [rsp+B8h] [rbp-30h] BYREF

  sub_1800619A8(a1);
  sub_180065588((__int64)v9);
  v2 = *(__int64 ***)(a1 + 48);
  v3 = *v2;
  if ( *v2 != (__int64 *)v2 )
  {
    do
    {
      if ( (unsigned int)sub_1801037F0(*(_QWORD *)(a1 + 16 * (v3[4] + 4)), v9, 0LL) == 3 )
      {
        sub_1800D0CC4(a1 + 8, v3 + 4);
        v3 = (__int64 *)*sub_180062A5C((_QWORD *)(a1 + 48), &v8, v3);
      }
      else
      {
        v4 = v3[2];
        if ( *(_BYTE *)(v4 + 25) )
        {
          for ( i = v3[1]; !*(_BYTE *)(i + 25) && v3 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
            v3 = (__int64 *)i;
          v3 = (__int64 *)i;
        }
        else
        {
          v3 = (__int64 *)v3[2];
          for ( j = *(_QWORD *)v4; !*(_BYTE *)(j + 25); j = *(_QWORD *)j )
            v3 = (__int64 *)j;
        }
      }
    }
    while ( v3 != *(__int64 **)(a1 + 48) );
  }
  sub_1800646EC(v10, (__int64)v10);
  return sub_180061A34(a1);
}
