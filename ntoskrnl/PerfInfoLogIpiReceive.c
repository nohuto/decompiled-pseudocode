/*
 * XREFs of PerfInfoLogIpiReceive @ 0x1405FC640
 * Callers:
 *     KiIpiProcessRequests @ 0x1402CB4E0 (KiIpiProcessRequests.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x1402CD670 (EtwTraceTimedEvent.c)
 */

__int64 __fastcall PerfInfoLogIpiReceive(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+38h] [rbp-10h]

  v5 = a2;
  v4 = a3;
  return EtwTraceTimedEvent(3953, 0x40400000u, (__int64)&v4, 12, 4196866, a1);
}
