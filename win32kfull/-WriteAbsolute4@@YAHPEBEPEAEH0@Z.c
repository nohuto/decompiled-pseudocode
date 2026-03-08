/*
 * XREFs of ?WriteAbsolute4@@YAHPEBEPEAEH0@Z @ 0x1C02F0F14
 * Callers:
 *     EncodeRLE4 @ 0x1C02F2C7C (EncodeRLE4.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall WriteAbsolute4(const unsigned __int8 *Src, unsigned __int8 *a2, int a3, unsigned __int8 *a4)
{
  __int64 v4; // r14
  unsigned int v5; // edi
  int v6; // edi
  __int64 result; // rax
  unsigned __int8 *v8; // rsi
  unsigned __int8 *v9; // rsi
  char v10; // bl
  unsigned __int8 *v11; // rsi

  v4 = a3;
  if ( a3 >= 3 )
  {
    v6 = (a3 + 1) >> 1;
    if ( (((_BYTE)a3 + 1) & 2) != 0 )
      v5 = v6 + 3;
    else
      v5 = v6 + 2;
  }
  else
  {
    v5 = 2;
  }
  if ( !a2 )
    return v5;
  if ( &a2[v5] > a4 )
    return 0LL;
  v8 = a2 + 1;
  if ( a3 >= 3 )
  {
    *a2 = 0;
    *v8 = a3;
    v9 = a2 + 2;
    v10 = a3 + 1;
    memmove(a2 + 2, Src, (a3 + 1) >> 1);
    v11 = &v9[(unsigned __int64)(v4 + 1) >> 1];
    result = v5;
    if ( (v10 & 2) != 0 )
      *v11 = 0;
  }
  else
  {
    *a2 = a3;
    *v8 = *Src;
    return 2LL;
  }
  return result;
}
