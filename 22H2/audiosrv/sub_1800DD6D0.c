/*
 * XREFs of sub_1800DD6D0 @ 0x1800DD6D0
 * Callers:
 *     sub_1800DB2B4 @ 0x1800DB2B4 (sub_1800DB2B4.c)
 *     sub_180132E0C @ 0x180132E0C (sub_180132E0C.c)
 * Callees:
 *     sub_180065DC0 @ 0x180065DC0 (sub_180065DC0.c)
 */

__int64 __fastcall sub_1800DD6D0(_WORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r11
  signed int v5; // r9d
  signed int v7; // eax
  __int64 v8; // r8
  _WORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rbx
  __int16 v13; // ax
  _WORD *v14; // rax
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2 >> 1;
  v5 = 0;
  if ( (a2 >> 1) - 1 > 0x7FFFFFFE )
    v5 = -2147024809;
  if ( v5 < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    v7 = sub_180065DC0(a1, a2 >> 1, &v16);
    v8 = v16;
    v5 = v7;
  }
  if ( v5 >= 0 )
  {
    v9 = &a1[v8];
    v10 = v3 - v8;
    if ( v3 != v8 )
    {
      v11 = 2147483646LL;
      v12 = a3 - (_QWORD)v9;
      do
      {
        if ( !v11 )
          break;
        v13 = *(_WORD *)((char *)v9 + v12);
        if ( !v13 )
          break;
        *v9 = v13;
        --v11;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    v14 = v9 - 1;
    if ( v10 )
      v14 = v9;
    v5 = v10 == 0 ? 0x8007007A : 0;
    *v14 = 0;
  }
  return (unsigned int)v5;
}
