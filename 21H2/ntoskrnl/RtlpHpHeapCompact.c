/*
 * XREFs of RtlpHpHeapCompact @ 0x140242578
 * Callers:
 *     ExpHpCompactSessionPools @ 0x140286B94 (ExpHpCompactSessionPools.c)
 *     ExpHpCompactionRoutine @ 0x1403057A0 (ExpHpCompactionRoutine.c)
 * Callees:
 *     RtlpHpSegContextCompact @ 0x140311520 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x14031187C (RtlpHpLfhContextCompact.c)
 *     RtlpHpVsContextFreeList @ 0x140349770 (RtlpHpVsContextFreeList.c)
 *     RtlpInterlockedFlushSList @ 0x140407B90 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1)
{
  int v2; // r8d
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // edi
  PSLIST_ENTRY v6; // rax

  v2 = *(_DWORD *)(a1 + 220);
  v3 = *(_DWORD *)(a1 + 20) & 0x13000003;
  v4 = 0;
  if ( v2 )
    LOBYTE(v4) = v2 == KeGetCurrentThread()[1].CurrentRunTime;
  v5 = v3 | 1;
  if ( !v4 )
    v5 = v3;
  v6 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 704));
  if ( v6 )
    RtlpHpVsContextFreeList(a1 + 640, v5, v6);
  RtlpHpLfhContextCompact(a1 + 832, v5);
  RtlpHpSegContextCompact(a1 + 256, v5);
  RtlpHpSegContextCompact(a1 + 448, v5);
  return 0LL;
}
