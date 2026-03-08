/*
 * XREFs of SpiMax311BufferRxData @ 0x14067AC44
 * Callers:
 *     SpiMax311PutByte @ 0x14067AD50 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x14067ADE0 (SpiMax311RxReady.c)
 *     SpiMax311TxEmpty @ 0x14067AF94 (SpiMax311TxEmpty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpiMax311BufferRxData(__int16 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = (unsigned int)qword_140D1AEE0;
  v2 = ((_WORD)qword_140D1AEE0 + 1) & 0x3FF;
  if ( v2 != HIDWORD(qword_140D1AEE0) )
  {
    word_140D1AEEA[(unsigned int)qword_140D1AEE0] = a1;
    LODWORD(qword_140D1AEE0) = v2;
  }
  return result;
}
