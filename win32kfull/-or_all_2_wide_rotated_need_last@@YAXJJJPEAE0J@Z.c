void __fastcall or_all_2_wide_rotated_need_last(int a1, char a2, int a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  __int64 v5; // rdi
  unsigned __int8 *v8; // r10
  char v9; // r11
  __int16 v10; // dx
  unsigned __int8 v11; // al

  v5 = a3;
  v8 = &a4[2 * a1];
  v9 = 8 - a2;
  do
  {
    v10 = *(_WORD *)a4;
    v11 = *(_WORD *)a4;
    a4 += 2;
    *a5 |= v11 >> a2;
    a5[1] |= (unsigned __int8)((_BYTE)v10 << v9) | (HIBYTE(v10) >> a2);
    a5 += v5;
  }
  while ( a4 != v8 );
}
