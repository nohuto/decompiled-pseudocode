/*
 * XREFs of BgpFwInitializeReservePool @ 0x1409F35B8
 * Callers:
 *     BgpFwReservePoolSwap @ 0x1409F11AC (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x1409F29E8 (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x1409F3F0C (BgpFwLibraryDestroy.c)
 * Callees:
 *     RtlClearAllBits @ 0x140361940 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  dword_140C50770 = 0;
  qword_140C50768 = a1;
  dword_140C50788 = a2;
  stru_140C50778.SizeOfBitMap = a2;
  stru_140C50778.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&stru_140C50778);
}
