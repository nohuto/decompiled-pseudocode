/*
 * XREFs of write_char @ 0x1C00DB870
 * Callers:
 *     _output_l @ 0x1C00DB018 (_output_l.c)
 *     write_multi_char @ 0x1C00DB8C0 (write_multi_char.c)
 *     write_string @ 0x1C00DB918 (write_string.c)
 * Callees:
 *     _flsbuf @ 0x1C00DB008 (_flsbuf.c)
 */

int __fastcall write_char(char a1, FILE *a2, _DWORD *a3)
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
