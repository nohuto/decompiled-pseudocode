/*
 * XREFs of sub_18013B170 @ 0x18013B170
 * Callers:
 *     sub_18013AD18 @ 0x18013AD18 (sub_18013AD18.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C3630 @ 0x1800C3630 (sub_1800C3630.c)
 *     sub_1800F3AD4 @ 0x1800F3AD4 (sub_1800F3AD4.c)
 *     sub_18013A944 @ 0x18013A944 (sub_18013A944.c)
 *     sub_18013B06C @ 0x18013B06C (sub_18013B06C.c)
 */

__int64 __fastcall sub_18013B170(unsigned int *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // esi
  int v7; // ebx
  int v8; // ebp
  _DWORD *v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r15
  int v13; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 0;
  v8 = 1;
  v13 = 1;
  while ( v8 )
  {
    v7 = sub_18013A944(a1, a2, (__int64)L"Endpoint", (__int64)L"ExclusiveEndpoints", 0, &v13);
    if ( v7 < 0 )
      return (unsigned int)v7;
    v8 = v13;
    if ( !v13 )
      break;
    v9 = sub_180055F40(0x3A8uLL);
    v10 = (__int64)v9;
    if ( v9 )
    {
      v9[231] = 0;
      v9[232] = 0;
      v9[233] = -1;
      memset(v9, 0, 0x39CuLL);
    }
    else
    {
      v10 = 0LL;
    }
    if ( !v10 )
      v7 = -2147024882;
    if ( v7 < 0 )
      return (unsigned int)v7;
    v7 = sub_18013B06C(a1, a2, v10);
    if ( v7 < 0 )
      return (unsigned int)v7;
    v11 = a3[1];
    if ( v11 >= a3[2] && !sub_1800C3630((__int64)a3, v11 + 1) )
      sub_1800B8610(-2147024882);
    *(_QWORD *)(*a3 + 8 * v11) = v10;
    ++a3[1];
    ++v3;
  }
  if ( v3 < 2 )
    sub_1800F3AD4((__int64)L"ExclusiveEndpoints list must have more than one endpoint (only found %d)", v3);
  return (unsigned int)v7;
}
