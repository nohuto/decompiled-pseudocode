/*
 * XREFs of sub_1800EE680 @ 0x1800EE680
 * Callers:
 *     sub_1800EEAD4 @ 0x1800EEAD4 (sub_1800EEAD4.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800D5EAC @ 0x1800D5EAC (sub_1800D5EAC.c)
 *     sub_1800EE8F8 @ 0x1800EE8F8 (sub_1800EE8F8.c)
 *     sub_1800F06B0 @ 0x1800F06B0 (sub_1800F06B0.c)
 */

__int64 __fastcall sub_1800EE680(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  _DWORD *v11; // rbp
  _DWORD *v12; // rsi
  __int64 v13; // rbx
  __int64 result; // rax
  __int64 v15; // rsi
  __int64 i; // rbx

  v5 = a2;
  v6 = a1[1];
  v7 = *a1;
  v8 = (__int64)((unsigned __int128)((a3 - a2) * (__int128)0x6666666666666667LL) >> 64) >> 4;
  v9 = (v8 >> 63) + v8;
  v10 = (v6 - *a1) / 40;
  if ( v9 <= v10 )
  {
    result = 5 * v9;
    v15 = v7 + 40 * v9;
    if ( a2 != a3 )
    {
      do
      {
        std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)v7, (_QWORD *)v5);
        std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v7 + 16), (_QWORD *)(v5 + 16));
        result = *(unsigned int *)(v5 + 32);
        v5 += 40LL;
        *(_DWORD *)(v7 + 32) = result;
        v7 += 40LL;
      }
      while ( v5 != a3 );
      v6 = a1[1];
    }
    for ( i = v15; i != v6; i += 40LL )
      result = sub_1800D5EAC(i);
  }
  else
  {
    if ( v9 > (a1[2] - v7) / 40 )
    {
      sub_1800F06B0(a1, v9);
      v7 = *a1;
      v10 = 0LL;
    }
    v11 = (_DWORD *)(v5 + 40 * v10);
    if ( (_DWORD *)v5 != v11 )
    {
      v12 = (_DWORD *)(v7 + 32);
      v13 = v5 - v7;
      do
      {
        std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)v12 - 4, (_DWORD *)((char *)v12 + v13 - 32));
        std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)v12 - 2, (_DWORD *)((char *)v12 + v13 - 16));
        *v12 = *(_DWORD *)((char *)v12 + v13);
        v12 += 10;
      }
      while ( (_DWORD *)((char *)v12 + v13 - 32) != v11 );
    }
    result = sub_1800EE8F8(v11, a3, a1[1], a1);
    v15 = result;
  }
  a1[1] = v15;
  return result;
}
