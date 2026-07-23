/*
 * XREFs of write_multi_char_0 @ 0x1403D5DC8
 * Callers:
 *     _output_l @ 0x1403D553C (_output_l.c)
 *     _output_s @ 0x1403D879C (_output_s.c)
 * Callees:
 *     write_char_0 @ 0x1403D5D78 (write_char_0.c)
 */

int __fastcall write_multi_char_0(char a1, int a2, FILE *a3, _DWORD *a4)
{
  int v6; // ebx
  int result; // eax

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
