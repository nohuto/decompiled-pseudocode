/*
 * XREFs of write_multi_char_0 @ 0x1C00DC330
 * Callers:
 *     _woutput_l @ 0x1C00DB98C (_woutput_l.c)
 * Callees:
 *     write_char_0 @ 0x1C00DC2DC (write_char_0.c)
 */

__int16 __fastcall write_multi_char_0(wchar_t a1, int a2, FILE *a3, _DWORD *a4)
{
  int v6; // ebx
  __int16 result; // ax

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      result = write_char_0(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
  return result;
}
