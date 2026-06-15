/*
 * XREFs of sub_18013AD18 @ 0x18013AD18
 * Callers:
 *     sub_18013BE08 @ 0x18013BE08 (sub_18013BE08.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C3630 @ 0x1800C3630 (sub_1800C3630.c)
 *     sub_1800F3B8C @ 0x1800F3B8C (sub_1800F3B8C.c)
 *     sub_18013A8AC @ 0x18013A8AC (sub_18013A8AC.c)
 *     sub_18013A944 @ 0x18013A944 (sub_18013A944.c)
 *     sub_18013B170 @ 0x18013B170 (sub_18013B170.c)
 *     sub_18013B2C8 @ 0x18013B2C8 (sub_18013B2C8.c)
 *     sub_18013B62C @ 0x18013B62C (sub_18013B62C.c)
 */

__int64 __fastcall sub_18013AD18(unsigned int *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  __int64 v8; // r14
  int v11; // esi
  int v12; // ebp
  int v13; // ebx
  int v14; // r13d
  int v15; // eax
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  unsigned __int64 v18; // r14
  int v19; // edi
  int v21; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+34h] [rbp-34h]

  v8 = a4;
  sub_1800F3B8C((__int64)L"Parsing constraint model");
  v11 = 0;
  v22 = 0;
  v12 = 1;
  v21 = 1;
  v13 = sub_18013A8AC(a1, a2, (__int64)L"Limits");
  if ( v13 >= 0 )
    v13 = sub_18013B2C8((_DWORD)a1, a2, a3, v8, a5);
  v14 = 0;
  if ( v13 >= 0 )
  {
    while ( v14 >= 0 && v12 )
    {
      v15 = sub_18013A944(a1, a2, (__int64)L"ExclusiveEndpoints", (__int64)L"ConstraintModel", 1, &v21);
      v12 = v21;
      v14 = v15;
      if ( v15 >= 0 && v21 )
      {
        v16 = sub_180055F40(0x20uLL);
        v17 = v16;
        if ( v16 )
        {
          *v16 = 0LL;
          v16[1] = 0LL;
          v16[2] = 0LL;
          *((_DWORD *)v16 + 6) = 0;
        }
        else
        {
          v17 = 0LL;
        }
        if ( !v17 )
          v13 = -2147024882;
        if ( v13 < 0 )
          break;
        v13 = sub_18013B170(a1, a2, v17);
        if ( v13 < 0 )
          break;
        v18 = a7[1];
        if ( v18 >= a7[2] && !sub_1800C3630((__int64)a7, v18 + 1) )
          sub_1800B8610(-2147024882);
        *(_QWORD *)(*a7 + 8 * v18) = v17;
        ++a7[1];
      }
    }
    v8 = a4;
    v11 = v22;
  }
  v19 = 1;
  v21 = 1;
  if ( v13 >= 0 )
  {
    do
    {
      if ( !v19 )
        break;
      v13 = sub_18013A944(a1, a2, (__int64)L"ResourceConsumer", (__int64)L"ConstraintModel", 0, &v21);
      if ( v13 < 0 )
        return (unsigned int)v13;
      v19 = v21;
      if ( v21 )
      {
        v11 = 1;
        v13 = sub_18013B62C(a1, a2, v8, a6);
      }
    }
    while ( v13 >= 0 );
    if ( v13 >= 0 && !v11 )
      return (unsigned int)-2147024809;
  }
  return (unsigned int)v13;
}
