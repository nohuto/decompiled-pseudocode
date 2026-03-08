/*
 * XREFs of CmpLogDirtyVectorUse @ 0x1406918DC
 * Callers:
 *     HvpGenerateLogEntryDirtyData @ 0x14030C5F8 (HvpGenerateLogEntryDirtyData.c)
 *     HvpGenerateLogEntry @ 0x14072DD08 (HvpGenerateLogEntry.c)
 *     HvpMarkDirty @ 0x1407D25D0 (HvpMarkDirty.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140205C20 (RtlCaptureStackBackTrace.c)
 */

USHORT __fastcall CmpLogDirtyVectorUse(__int64 a1, int a2, int a3, int a4)
{
  unsigned __int32 i; // ecx
  signed __int32 v6; // eax
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax

  for ( i = *(_DWORD *)(a1 + 2952); ; i = v6 )
  {
    v6 = _InterlockedCompareExchange(
           (volatile signed __int32 *)(a1 + 2952),
           i + 1 < *(_DWORD *)(a1 + 2956) ? i + 1 : 0,
           i);
    if ( i == v6 )
      break;
  }
  v7 = 9LL * i;
  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)(a1 + 8 * v7 + 2972) = a3;
  *(_DWORD *)(a1 + 8 * v7 + 2976) = a4;
  *(_DWORD *)(a1 + 8 * v7 + 2968) = a2;
  *(_QWORD *)(a1 + 8 * v7 + 2960) = CurrentThread;
  return RtlCaptureStackBackTrace(1u, 6u, (PVOID *)(a1 + 2984 + 8 * v7), 0LL);
}
