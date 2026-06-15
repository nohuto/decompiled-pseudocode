/*
 * XREFs of sub_180108588 @ 0x180108588
 * Callers:
 *     sub_180106E0C @ 0x180106E0C (sub_180106E0C.c)
 * Callees:
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_180106378 @ 0x180106378 (sub_180106378.c)
 *     sub_180106850 @ 0x180106850 (sub_180106850.c)
 *     sub_1801069E4 @ 0x1801069E4 (sub_1801069E4.c)
 *     sub_180108708 @ 0x180108708 (sub_180108708.c)
 *     sub_18010BA60 @ 0x18010BA60 (sub_18010BA60.c)
 */

__int64 __fastcall sub_180108588(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 i; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // rcx
  double v10; // xmm0_8
  char v11; // bl
  __int64 v12; // rdi
  __int64 result; // rax
  int v14; // eax
  __int128 v15; // [rsp+20h] [rbp-50h]
  __int64 (__fastcall **v16)(); // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+38h] [rbp-38h]
  __int64 (__fastcall ***v18)(); // [rsp+68h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+18h]
  LARGE_INTEGER PerformanceCount; // [rsp+A0h] [rbp+30h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  for ( i = sub_180106850(a1, a2); i; i = sub_1801069E4(a1, a2) )
  {
    v7 = v2;
    v8 = v3;
    v9 = *(__int64 **)(*(_QWORD *)(i + 8) + 16LL);
    v2 = *v9;
    v3 = v9[1];
    if ( v7 > *v9 )
      v2 = v7;
    if ( v8 > v3 )
      v3 = v8;
  }
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  if ( qword_180145000 < 0 )
    v10 = (double)(int)(qword_180145000 & 1 | ((unsigned __int64)qword_180145000 >> 1))
        + (double)(int)(qword_180145000 & 1 | ((unsigned __int64)qword_180145000 >> 1));
  else
    v10 = (double)(int)qword_180145000;
  v11 = 0;
  v12 = v2 - (unsigned int)(int)((double)(int)PerformanceCount.LowPart * -10000000.0 / v10);
  result = sub_180106850(a1, a2);
  if ( result )
  {
    do
    {
      if ( *(_DWORD *)(result + 80) )
      {
        v14 = sub_18010BA60(result, 0LL, v12);
        if ( v14 < 0 )
          sub_18006D26C(
            (int)retaddr,
            880,
            (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            v14);
        v11 = 1;
      }
      result = sub_1801069E4(a1, a2);
    }
    while ( result );
    if ( v11 )
    {
      sub_180106378(a1 + 344, v12 + v3);
      *(_QWORD *)&v15 = a1;
      v16 = off_180155850;
      DWORD2(v15) = a2;
      v18 = &v16;
      v17 = v15;
      return sub_180108708(a1 + 344, &v16);
    }
  }
  return result;
}
