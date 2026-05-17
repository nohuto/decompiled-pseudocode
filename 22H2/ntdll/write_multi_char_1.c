/*
 * XREFs of write_multi_char_1 @ 0x18009912C
 * Callers:
 *     _output_s @ 0x180098684 (_output_s.c)
 * Callees:
 *     write_char_1 @ 0x1800990DC (write_char_1.c)
 */

__int64 __fastcall write_multi_char_1(unsigned __int8 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx
  __int64 result; // rax

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      result = write_char_1(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
  return result;
}
