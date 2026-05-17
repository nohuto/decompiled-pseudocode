/*
 * XREFs of _inc_0 @ 0x180099528
 * Callers:
 *     ReadString_0 @ 0x1800991F8 (ReadString_0.c)
 *     _input_s @ 0x180099558 (_input_s.c)
 * Callees:
 *     _filbuf_s @ 0x18009B940 (_filbuf_s.c)
 */

__int64 __fastcall inc_0(__int64 a1)
{
  if ( --*(_DWORD *)(a1 + 8) < 0 )
    return (unsigned int)filbuf_s();
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1)++;
}
