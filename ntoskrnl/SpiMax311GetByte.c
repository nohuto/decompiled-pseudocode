/*
 * XREFs of SpiMax311GetByte @ 0x14067AC80
 * Callers:
 *     <none>
 * Callees:
 *     SpiSend16 @ 0x14067AFCC (SpiSend16.c)
 */

__int64 __fastcall SpiMax311GetByte(_QWORD *a1, _BYTE *a2)
{
  __int16 v3; // cx
  unsigned __int16 v5; // ax

  if ( !a1 || !*a1 )
    return 3LL;
  if ( HIDWORD(qword_140D1AEE0) == (_DWORD)qword_140D1AEE0 )
  {
    v5 = SpiSend16(a1, 0LL);
    if ( (v5 & 0x8000u) == 0 )
    {
      return 1LL;
    }
    else
    {
      *a2 = v5;
      return (v5 >> 9) & 2;
    }
  }
  else
  {
    v3 = word_140D1AEEA[HIDWORD(qword_140D1AEE0)];
    *a2 = v3;
    HIDWORD(qword_140D1AEE0) = (WORD2(qword_140D1AEE0) + 1) & 0x3FF;
    if ( (v3 & 0x400) != 0 )
      return 2LL;
    else
      return 0LL;
  }
}
