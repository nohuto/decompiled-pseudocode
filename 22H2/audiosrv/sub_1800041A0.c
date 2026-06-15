/*
 * XREFs of sub_1800041A0 @ 0x1800041A0
 * Callers:
 *     sub_180004350 @ 0x180004350 (sub_180004350.c)
 * Callees:
 *     sub_18000428C @ 0x18000428C (sub_18000428C.c)
 */

__int64 __fastcall sub_1800041A0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  signed int v6; // r8d
  __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r8
  _WORD *v11; // rcx
  __int64 v12; // rbx
  __int16 v13; // ax
  _WORD *v14; // rax
  __int64 v15; // rcx
  __int64 v17; // [rsp+40h] [rbp+18h] BYREF

  v17 = a3;
  v6 = sub_18000428C(a1, a2, &v17);
  if ( v6 >= 0 )
  {
    v8 = 260 - v17;
    v9 = v7 + 2 * v17;
    if ( v17 == 260 || v17 == 259 )
    {
      if ( !v7 )
        return (unsigned int)-2147024809;
      v6 = -2147024774;
    }
    else
    {
      v10 = 260 - v17;
      v11 = (_WORD *)(v7 + 2 * v17);
      v12 = 0LL;
      do
      {
        if ( !(2147483646 - v8 + v10) )
          break;
        v13 = *(_WORD *)((char *)v11 + (_QWORD)L"\\AUDIODG.EXE" - v9);
        if ( !v13 )
          break;
        *v11 = v13;
        ++v12;
        ++v11;
        --v10;
      }
      while ( v10 );
      v14 = v11 - 1;
      if ( v10 )
        v14 = v11;
      v15 = v12 - 1;
      if ( v10 )
        v15 = v12;
      *v14 = 0;
      v9 += 2 * v15;
      v6 = v10 != 0 ? 0 : 0x8007007A;
      v8 -= v15;
    }
    if ( a4 )
      *a4 = v9;
    if ( a5 )
      *a5 = 2 * v8;
  }
  return (unsigned int)v6;
}
