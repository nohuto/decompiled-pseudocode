/*
 * XREFs of EtwTraceFlipManagerStopTokenReleaseToFrame @ 0x1C01225B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C01261B0 (McTemplateK0pq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerStopTokenReleaseToFrame(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0pq_EtwWriteTransfer(a1, &FlipManagerStopTokenReleaseToFrame, a3, a1, a2);
  return result;
}
