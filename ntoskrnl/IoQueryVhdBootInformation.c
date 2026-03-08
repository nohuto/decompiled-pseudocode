/*
 * XREFs of IoQueryVhdBootInformation @ 0x14085F678
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall IoQueryVhdBootInformation(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // edi

  v5 = 0;
  *a4 = 0;
  v6 = dword_140C0CED4;
  if ( a3 < (unsigned int)dword_140C0CED4 )
    v5 = -1073741789;
  else
    memmove(a2, off_140C073E0, (unsigned int)dword_140C0CED4);
  *a4 = v6;
  return v5;
}
