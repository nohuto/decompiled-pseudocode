/*
 * XREFs of ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x140050D8C
 * Callers:
 *     ?Start@CCrossProcessControl@@UEAAJXZ @ 0x140061350 (-Start@CCrossProcessControl@@UEAAJXZ.c)
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14006BF64 (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 * Callees:
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x140050F10 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x1400510E8 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall AERTLockZoneHeap(void *a1, int a2, int a3)
{
  int v4; // ebx

  if ( a1 )
  {
    v4 = ((__int64 (*)(void))RtlLockMemoryZone)();
    if ( v4 == -1073741663 && (int)IncreaseProcessWorkingSet(0x100000uLL) >= 0 )
      v4 = RtlLockMemoryZone(a1);
  }
  else
  {
    v4 = 0;
  }
  if ( (byte_140090541 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer((_DWORD)a1, a2, a3, 8, (char)a1, 0, 0, 0);
  return v4 | 0x10000000u;
}
