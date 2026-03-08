/*
 * XREFs of RotateHTPat45 @ 0x1C0255388
 * Callers:
 *     Generate_HTSC_WORD @ 0x1C02550F0 (Generate_HTSC_WORD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RotateHTPat45(unsigned __int8 *a1, _WORD *a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v7; // r10d
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  unsigned int v13; // ecx
  __int64 result; // rax
  __int64 v15; // rsi
  __int64 v16; // rbp
  _WORD *v17; // rdi
  _WORD *v18; // r8
  unsigned int v19; // r9d
  int v20; // ecx
  unsigned int v21; // ecx
  __int64 v22; // [rsp+0h] [rbp-38h]

  v7 = a4 >> 1;
  v8 = a3 >> 1;
  v9 = 2 * a5;
  v10 = 6 * a3;
  v13 = 6 * ((a3 >> 1) + a6 * (a4 >> 1));
  result = (unsigned int)(6 * a6);
  if ( a4 >> 1 )
  {
    v15 = v13;
    v22 = v13;
    v16 = (unsigned int)result;
    do
    {
      v17 = a2;
      v18 = (_WORD *)((char *)a2 + v15);
      a2 = (_WORD *)((char *)a2 + v16);
      --v7;
      v19 = a3;
      if ( a3 )
      {
        do
        {
          v20 = 8190 * *a1;
          --v19;
          ++a1;
          v21 = a5 + v20;
          *v17 = v21 / v9;
          result = (v21 - 4095) / v9;
          v17 += 3;
          *v18 = result;
          v18 += 3;
          if ( v19 == v8 )
          {
            result = v10;
            v18 = (_WORD *)((char *)v18 - v10);
          }
        }
        while ( v19 );
        v15 = v22;
      }
    }
    while ( v7 );
  }
  return result;
}
