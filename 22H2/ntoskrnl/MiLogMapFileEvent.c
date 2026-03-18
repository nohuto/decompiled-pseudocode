/*
 * XREFs of MiLogMapFileEvent @ 0x1408AC522
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiUnmapVad @ 0x14071F314 (MiUnmapVad.c)
 *     MiMapViewOfDataSection @ 0x1407202F0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiLogPerfMemoryEvent @ 0x14046B306 (MiLogPerfMemoryEvent.c)
 *     MiFillMapFileInfo @ 0x1408AC30A (MiFillMapFileInfo.c)
 */

char __fastcall MiLogMapFileEvent(__int64 a1, __int16 a2)
{
  char result; // al
  _OWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF

  result = *(_DWORD *)(a1 + 48) & 0x70;
  memset(v4, 0, sizeof(v4));
  if ( result != 16 )
  {
    MiFillMapFileInfo(a1, (__int64)v4);
    return MiLogPerfMemoryEvent(a2, 0x8000u, (__int64)v4, 44, 4200707);
  }
  return result;
}
