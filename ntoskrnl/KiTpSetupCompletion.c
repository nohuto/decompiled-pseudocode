/*
 * XREFs of KiTpSetupCompletion @ 0x140973808
 * Callers:
 *     KeSetTracepoint @ 0x140972D40 (KeSetTracepoint.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KiTpReadImageData @ 0x140973724 (KiTpReadImageData.c)
 *     KiTpParseInstruction @ 0x140AF1450 (KiTpParseInstruction.c)
 */

__int64 __fastcall KiTpSetupCompletion(_KPROCESS *a1, char a2, const void *a3, void *a4, unsigned int Size, __int64 a6)
{
  unsigned int v10; // esi
  int ImageData; // ebx

  *(_OWORD *)a6 = 0LL;
  *(_OWORD *)(a6 + 16) = 0LL;
  *(_QWORD *)(a6 + 32) = 0LL;
  v10 = 4096 - ((unsigned __int16)a3 & 0xFFF);
  if ( v10 > 0xF )
    v10 = 15;
  ImageData = KiTpReadImageData(a1, a2, a3, (void *)(a6 + 6), v10);
  if ( ImageData >= 0 )
  {
    *(_BYTE *)(a6 + 5) = v10;
    ImageData = KiTpParseInstruction(a6);
    if ( ImageData == -1073741306 )
    {
      if ( v10 >= 0xF )
        return (unsigned int)ImageData;
      *(_OWORD *)a6 = 0LL;
      *(_OWORD *)(a6 + 16) = 0LL;
      *(_QWORD *)(a6 + 32) = 0LL;
      ImageData = KiTpReadImageData(a1, a2, a3, (void *)(a6 + 6), 0xFu);
      if ( ImageData < 0 )
        return (unsigned int)ImageData;
      *(_BYTE *)(a6 + 5) = 15;
      ImageData = KiTpParseInstruction(a6);
    }
    if ( ImageData >= 0 )
      memmove(a4, (const void *)(a6 + 6), Size);
  }
  return (unsigned int)ImageData;
}
