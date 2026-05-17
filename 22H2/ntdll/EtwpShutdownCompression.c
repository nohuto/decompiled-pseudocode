/*
 * XREFs of EtwpShutdownCompression @ 0x180088340
 * Callers:
 *     EtwpFreeLoggerContext @ 0x18004F614 (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     ZwFreeVirtualMemory @ 0x18009D8A0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall EtwpShutdownCompression(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 432);
  if ( v1 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( *(_QWORD *)(a1 + 440) )
  {
    v4 = 0LL;
    return ZwFreeVirtualMemory(-1LL, a1 + 440, &v4, 0x8000LL);
  }
  return result;
}
