/*
 * XREFs of write_string @ 0x180093788
 * Callers:
 *     _output_l @ 0x180092E80 (_output_l.c)
 * Callees:
 *     _errno @ 0x1800858B0 (_errno.c)
 *     write_char @ 0x1800936E0 (write_char.c)
 */

void __fastcall write_string(unsigned __int8 *a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx

  v6 = a2;
  if ( (*(_BYTE *)(a3 + 24) & 0x40) == 0 || *(_QWORD *)(a3 + 16) )
  {
    if ( a2 > 0 )
    {
      do
      {
        --v6;
        write_char(*a1++, a3, a4);
        if ( *a4 == -1 )
        {
          if ( *errno() != 42 )
            return;
          write_char(0x3Fu, a3, a4);
        }
      }
      while ( v6 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
}
