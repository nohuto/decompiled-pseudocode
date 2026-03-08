/*
 * XREFs of SpiMax311RxReady @ 0x14067ADE0
 * Callers:
 *     <none>
 * Callees:
 *     SpiMax311BufferRxData @ 0x14067AC44 (SpiMax311BufferRxData.c)
 *     SpiSend16 @ 0x14067AFCC (SpiSend16.c)
 */

bool __fastcall SpiMax311RxReady(_QWORD *a1)
{
  __int16 v2; // ax

  if ( !a1 || !*a1 )
    return 0;
  while ( 1 )
  {
    v2 = SpiSend16(a1, 0LL);
    if ( v2 >= 0 )
      break;
    SpiMax311BufferRxData(v2);
  }
  return (_DWORD)qword_140D1AEE0 != HIDWORD(qword_140D1AEE0);
}
