/*
 * XREFs of sub_1800D0504 @ 0x1800D0504
 * Callers:
 *     sub_1800D05D4 @ 0x1800D05D4 (sub_1800D05D4.c)
 * Callees:
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_1800D05F4 @ 0x1800D05F4 (sub_1800D05F4.c)
 *     sub_1801037F0 @ 0x1801037F0 (sub_1801037F0.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800D0504(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 *v8; // rcx
  unsigned __int64 *i; // rdx
  bool v10; // cf
  _BYTE v12[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = a1;
  sub_1800619A8(a1);
  sub_1800D05F4(a1, v12, a2);
  if ( v12[0] )
  {
    v6 = sub_1801037F0(*(_QWORD *)(a1 + 16 * (v13 + 4)), a3, 0LL);
    if ( v6 )
    {
      v7 = 4;
      if ( v6 > 0 )
      {
        if ( v6 <= 2 )
        {
          v7 = 1;
        }
        else if ( v6 == 3 )
        {
          v7 = 0;
        }
      }
      goto LABEL_16;
    }
LABEL_15:
    v7 = 3;
    goto LABEL_16;
  }
  v8 = (unsigned __int64 *)(a1 + 144);
  if ( a1 + 144 != a1 + 184 )
  {
    for ( i = (unsigned __int64 *)(a1 + 152); i != (unsigned __int64 *)(a1 + 184); ++i )
    {
      if ( *i < *v8 )
        v8 = i;
    }
  }
  v10 = a2 < *v8;
  v7 = 2;
  if ( !v10 )
    goto LABEL_15;
LABEL_16:
  sub_180061A34(a1);
  return v7;
}
