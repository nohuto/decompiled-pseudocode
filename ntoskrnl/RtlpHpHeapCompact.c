/*
 * XREFs of RtlpHpHeapCompact @ 0x1402CC2D4
 * Callers:
 *     ExpHpCompactionRoutine @ 0x1402CC0B0 (ExpHpCompactionRoutine.c)
 * Callees:
 *     RtlpHpVsContextFreeList @ 0x140249050 (RtlpHpVsContextFreeList.c)
 *     RtlpHpSegContextCompact @ 0x1402CC380 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x140308C98 (RtlpHpLfhContextCompact.c)
 *     RtlpInterlockedFlushSList @ 0x1404204E0 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1)
{
  int v1; // ebx
  int v3; // ecx
  unsigned int v4; // ebx
  PSLIST_ENTRY v5; // rax

  v1 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 220);
  v4 = v1 & 0x13000003;
  if ( v3 && v3 == KeGetCurrentThread()[1].CurrentRunTime )
    v4 |= 1u;
  v5 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 768));
  if ( v5 )
    RtlpHpVsContextFreeList(a1 + 704, v4, v5);
  RtlpHpLfhContextCompact(a1 + 896, v4);
  RtlpHpSegContextCompact(a1 + 320, v4);
  RtlpHpSegContextCompact(a1 + 512, v4);
  return 0LL;
}
