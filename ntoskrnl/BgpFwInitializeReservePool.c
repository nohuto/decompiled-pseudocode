/*
 * XREFs of BgpFwInitializeReservePool @ 0x140AEB5A8
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AEAC78 (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140AEBA88 (BgpFwLibraryDestroy.c)
 *     BgpFwReservePoolSwap @ 0x140AEEE38 (BgpFwReservePoolSwap.c)
 * Callees:
 *     RtlClearAllBits @ 0x1402B24A0 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  HintIndex = 0;
  qword_140C709D0 = a1;
  dword_140C709F0 = a2;
  stru_140C709E0.SizeOfBitMap = a2;
  stru_140C709E0.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&stru_140C709E0);
}
