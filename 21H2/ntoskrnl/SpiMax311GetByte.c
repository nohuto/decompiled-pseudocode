/*
 * XREFs of SpiMax311GetByte @ 0x1405CB4B0
 * Callers:
 *     <none>
 * Callees:
 *     SpiSend16 @ 0x1405CB80C (SpiSend16.c)
 */

__int64 __fastcall SpiMax311GetByte(_QWORD *a1, _BYTE *a2)
{
  __int16 v3; // cx
  bool v4; // zf
  __int16 v5; // ax

  if ( !a1 || !*a1 )
    return 3LL;
  if ( HIDWORD(qword_140CF9AE0) == (_DWORD)qword_140CF9AE0 )
  {
    v5 = SpiSend16(a1, 0LL);
    if ( v5 >= 0 )
      return 1LL;
    *a2 = v5;
    v4 = (v5 & 0x400) == 0;
  }
  else
  {
    v3 = word_140CF9AEA[HIDWORD(qword_140CF9AE0)];
    *a2 = v3;
    HIDWORD(qword_140CF9AE0) = (WORD2(qword_140CF9AE0) + 1) & 0x3FF;
    v4 = (v3 & 0x400) == 0;
  }
  if ( v4 )
    return 0LL;
  else
    return 2LL;
}
