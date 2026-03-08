/*
 * XREFs of LZNT1DecompressChunkWorkItem @ 0x140298C90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     LZNT1DecompressChunk @ 0x1404217D0 (LZNT1DecompressChunk.c)
 */

void __fastcall LZNT1DecompressChunkWorkItem(PVOID Entry)
{
  int v2; // eax
  __int64 v3; // rcx

  v2 = LZNT1DecompressChunk(
         *((_QWORD *)Entry + 4),
         *((_QWORD *)Entry + 5),
         *((_QWORD *)Entry + 6),
         *((_QWORD *)Entry + 7),
         *((_QWORD *)Entry + 8));
  if ( v2 < 0 )
  {
    v3 = *((_QWORD *)Entry + 10);
    if ( *(int *)(v3 + 28) >= 0 )
      *(_DWORD *)(v3 + 28) = v2;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)Entry + 10) + 24LL), 0xFFFFFFFF) == 1 )
    KeSetEvent(*((PRKEVENT *)Entry + 10), 0, 0);
  ExFreeToNPagedLookasideList(&RtlLznt1DecompressChunkLookaside, Entry);
}
