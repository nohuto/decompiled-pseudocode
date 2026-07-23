/*
 * XREFs of write_char_0 @ 0x1403D5D78
 * Callers:
 *     _output_l @ 0x1403D553C (_output_l.c)
 *     write_multi_char_0 @ 0x1403D5DC8 (write_multi_char_0.c)
 *     write_string_0 @ 0x1403D5E20 (write_string_0.c)
 *     _output_s @ 0x1403D879C (_output_s.c)
 *     write_string_1 @ 0x1403D91A0 (write_string_1.c)
 * Callees:
 *     _flsbuf @ 0x1403D4B08 (_flsbuf.c)
 */

int __fastcall write_char_0(char a1, FILE *a2, _DWORD *a3)
{
  int result; // eax

  result = a2->_flag;
  if ( (result & 0x40) == 0 || a2->_base )
  {
    if ( --a2->_cnt < 0 )
    {
      result = flsbuf(a1, a2);
    }
    else
    {
      *a2->_ptr++ = a1;
      result = (unsigned __int8)a1;
    }
    if ( result == -1 )
      *a3 = -1;
    else
      ++*a3;
  }
  else
  {
    ++*a3;
  }
  return result;
}
