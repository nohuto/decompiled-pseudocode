/*
 * XREFs of write_char_0 @ 0x1403D7AC8
 * Callers:
 *     _output_l @ 0x1403D7270 (_output_l.c)
 *     write_multi_char_0 @ 0x1403D7B18 (write_multi_char_0.c)
 *     write_string_0 @ 0x1403D7B70 (write_string_0.c)
 *     _output_s @ 0x1403DA5B8 (_output_s.c)
 * Callees:
 *     _flsbuf @ 0x1403D67F0 (_flsbuf.c)
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
