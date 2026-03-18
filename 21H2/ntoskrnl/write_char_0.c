/*
 * XREFs of write_char_0 @ 0x1403E4FC8
 * Callers:
 *     _output_l @ 0x1403E478C (_output_l.c)
 *     write_multi_char_0 @ 0x1403E5018 (write_multi_char_0.c)
 *     write_string_0 @ 0x1403E5070 (write_string_0.c)
 *     _output_s @ 0x1403E7A78 (_output_s.c)
 * Callees:
 *     _flsbuf @ 0x1403E3D0C (_flsbuf.c)
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
