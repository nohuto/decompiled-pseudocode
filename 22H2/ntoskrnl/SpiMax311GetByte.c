/*
 * XREFs of SpiMax311GetByte @ 0x14067D2D0
 * Callers:
 *     <none>
 * Callees:
 *     SpiSend16 @ 0x14067D61C (SpiSend16.c)
 */

__int64 __fastcall SpiMax311GetByte(_QWORD *a1, _BYTE *a2)
{
  __int16 v3; // cx
  unsigned __int16 v5; // ax

  if ( !a1 || !*a1 )
    return 3LL;
  if ( HIDWORD(qword_140D1B220) == (_DWORD)qword_140D1B220 )
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
    v3 = word_140D1B22A[HIDWORD(qword_140D1B220)];
    *a2 = v3;
    HIDWORD(qword_140D1B220) = (WORD2(qword_140D1B220) + 1) & 0x3FF;
    if ( (v3 & 0x400) != 0 )
      return 2LL;
    else
      return 0LL;
  }
}
