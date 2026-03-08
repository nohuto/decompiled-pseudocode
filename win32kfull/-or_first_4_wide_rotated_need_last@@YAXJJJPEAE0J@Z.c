/*
 * XREFs of ?or_first_4_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1C0305390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall or_first_4_wide_rotated_need_last(int a1, char a2, int a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  unsigned __int8 *v6; // r11
  __int64 v7; // rbx
  unsigned __int32 v8; // r8d

  v6 = &a4[4 * a1];
  v7 = a3;
  do
  {
    v8 = _byteswap_ulong(*(_DWORD *)a4) >> a2;
    a4 += 4;
    a5[3] = v8;
    *a5 |= HIBYTE(v8);
    a5[1] = BYTE2(v8);
    a5[2] = BYTE1(v8);
    a5 += v7;
  }
  while ( a4 != v6 );
}
