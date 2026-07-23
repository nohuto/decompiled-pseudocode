/*
 * XREFs of VslpFlushBufferArrayEntryCallback @ 0x1404FDDB0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     VslpSkInitializeBuffer @ 0x140890A38 (VslpSkInitializeBuffer.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall VslpFlushBufferArrayEntryCallback(__int64 a1, __int64 a2, unsigned int *a3)
{
  signed __int64 *v3; // rbx

  v3 = (signed __int64 *)VslpEventLog;
  if ( VslpEventLog )
  {
    VslpSkInitializeBuffer(*((_QWORD *)a3 + 1), *((unsigned int *)VslpEventLog + 1), *a3);
    _bittestandset64(&v3[((unsigned __int64)*a3 >> 6) + 3], *a3 & 0x3F);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&VslpBufferFlushRundown);
    ExFreePoolWithTag(a3, 0x54736D56u);
  }
}
