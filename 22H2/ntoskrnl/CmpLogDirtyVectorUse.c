/*
 * XREFs of CmpLogDirtyVectorUse @ 0x140720FB0
 * Callers:
 *     HvpGenerateLogEntryDirtyData @ 0x140331580 (HvpGenerateLogEntryDirtyData.c)
 *     HvpMarkDirty @ 0x140655BF0 (HvpMarkDirty.c)
 *     HvpGenerateLogEntry @ 0x140720D30 (HvpGenerateLogEntry.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14021CDE0 (RtlCaptureStackBackTrace.c)
 */

USHORT __fastcall CmpLogDirtyVectorUse(__int64 a1, int a2, int a3, int a4)
{
  unsigned __int32 i; // ecx
  signed __int32 v6; // eax
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax

  for ( i = *(_DWORD *)(a1 + 2992); ; i = v6 )
  {
    v6 = _InterlockedCompareExchange(
           (volatile signed __int32 *)(a1 + 2992),
           i + 1 < *(_DWORD *)(a1 + 2996) ? i + 1 : 0,
           i);
    if ( i == v6 )
      break;
  }
  v7 = 9LL * i;
  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)(a1 + 8 * v7 + 3012) = a3;
  *(_DWORD *)(a1 + 8 * v7 + 3016) = a4;
  *(_DWORD *)(a1 + 8 * v7 + 3008) = a2;
  *(_QWORD *)(a1 + 8 * v7 + 3000) = CurrentThread;
  return RtlCaptureStackBackTrace(1u, 6u, (PVOID *)(a1 + 3024 + 8 * v7), 0LL);
}
