/*
 * XREFs of RtlpHpHeapCompact @ 0x180006AE4
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x180006920 (RtlpFlushHeapsCallback.c)
 *     RtlpHpGCFlushCallback @ 0x180006940 (RtlpHpGCFlushCallback.c)
 *     RtlCompactHeap @ 0x1800F2280 (RtlCompactHeap.c)
 * Callees:
 *     RtlpHpSegContextCompact @ 0x180006B88 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x180006E1C (RtlpHpLfhContextCompact.c)
 *     RtlpInterlockedFlushSList @ 0x1800A1130 (RtlpInterlockedFlushSList.c)
 *     RtlpHpVsContextFreeList @ 0x18010FC70 (RtlpHpVsContextFreeList.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1, int a2)
{
  int v3; // ecx
  __int64 v4; // rdx
  int v5; // r8d
  unsigned int v6; // ebx

  v3 = a2 | *(_DWORD *)(a1 + 20) & 0x13000003;
  v4 = 0LL;
  v5 = *(_DWORD *)(a1 + 220);
  if ( v5 )
    LOBYTE(v4) = v5 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v6 = v3 | 1;
  if ( !(_DWORD)v4 )
    v6 = v3;
  if ( RtlpInterlockedFlushSList(a1 + 704, v4) )
    RtlpHpVsContextFreeList((PRTL_SRWLOCK)(a1 + 640));
  RtlpHpLfhContextCompact(a1 + 832, v6);
  RtlpHpSegContextCompact(a1 + 256);
  RtlpHpSegContextCompact(a1 + 448);
  return 0LL;
}
