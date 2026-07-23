/*
 * XREFs of write_string_2 @ 0x1403D9CC4
 * Callers:
 *     _woutput_s @ 0x1403D9344 (_woutput_s.c)
 * Callees:
 *     write_char_1 @ 0x1403D9C70 (write_char_1.c)
 */

_WORD *__fastcall write_string_2(__int16 *a1, int a2, __int64 a3, _DWORD *a4)
{
  _WORD *result; // rax
  _DWORD *v5; // r11
  int v8; // r10d

  result = (_WORD *)*(unsigned int *)(a3 + 24);
  v5 = a4;
  if ( ((unsigned __int8)result & 0x40) == 0 || *(_QWORD *)(a3 + 16) )
  {
    if ( a2 > 0 )
    {
      do
        result = write_char_1(*a1++, a3, v5);
      while ( *v5 != -1 && v8 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
  return result;
}
