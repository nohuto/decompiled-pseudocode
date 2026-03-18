/*
 * XREFs of SpiMax311BufferRxData @ 0x140656234
 * Callers:
 *     SpiMax311PutByte @ 0x140656340 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x1406563D0 (SpiMax311RxReady.c)
 *     SpiMax311TxEmpty @ 0x140656584 (SpiMax311TxEmpty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpiMax311BufferRxData(__int16 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = (unsigned int)qword_140D03CC0;
  v2 = ((_WORD)qword_140D03CC0 + 1) & 0x3FF;
  if ( v2 != HIDWORD(qword_140D03CC0) )
  {
    word_140D03CCA[(unsigned int)qword_140D03CC0] = a1;
    LODWORD(qword_140D03CC0) = v2;
  }
  return result;
}
