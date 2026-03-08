/*
 * XREFs of write_char_0 @ 0x1C00DC2DC
 * Callers:
 *     _woutput_l @ 0x1C00DB98C (_woutput_l.c)
 *     write_multi_char_0 @ 0x1C00DC330 (write_multi_char_0.c)
 *     write_string_0 @ 0x1C00DC388 (write_string_0.c)
 * Callees:
 *     _fputwc_nolock @ 0x1C00DC590 (_fputwc_nolock.c)
 */

__int16 __fastcall write_char_0(wchar_t a1, FILE *a2, _DWORD *a3)
{
  int flag; // eax

  flag = a2->_flag;
  if ( (flag & 0x40) == 0 || a2->_base )
  {
    LOWORD(flag) = fputwc_nolock(a1, a2);
    if ( (_WORD)flag == 0xFFFF && (flag = a2->_flag, (flag & 0x20) != 0) )
      *a3 = -1;
    else
      ++*a3;
  }
  else
  {
    ++*a3;
  }
  return flag;
}
