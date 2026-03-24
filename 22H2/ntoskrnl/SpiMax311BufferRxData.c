/*
 * XREFs of SpiMax311BufferRxData @ 0x1405CB184
 * Callers:
 *     SpiMax311PutByte @ 0x1405CB2A0 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x1405CB330 (SpiMax311RxReady.c)
 *     SpiMax311TxEmpty @ 0x1405CB4E4 (SpiMax311TxEmpty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpiMax311BufferRxData(__int16 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = (unsigned int)qword_140CF9A60;
  v2 = ((_WORD)qword_140CF9A60 + 1) & 0x3FF;
  if ( v2 != HIDWORD(qword_140CF9A60) )
  {
    word_140CF9A6A[(unsigned int)qword_140CF9A60] = a1;
    LODWORD(qword_140CF9A60) = v2;
  }
  return result;
}
