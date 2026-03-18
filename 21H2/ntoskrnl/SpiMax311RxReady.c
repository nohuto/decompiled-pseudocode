/*
 * XREFs of SpiMax311RxReady @ 0x1406563D0
 * Callers:
 *     <none>
 * Callees:
 *     SpiMax311BufferRxData @ 0x140656234 (SpiMax311BufferRxData.c)
 *     SpiSend16 @ 0x1406565BC (SpiSend16.c)
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
  return (_DWORD)qword_140D03CC0 != HIDWORD(qword_140D03CC0);
}
