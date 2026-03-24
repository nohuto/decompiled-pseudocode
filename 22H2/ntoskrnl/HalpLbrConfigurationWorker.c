/*
 * XREFs of HalpLbrConfigurationWorker @ 0x140866E0C
 * Callers:
 *     HalpLbrConfigureRecording @ 0x140866E80 (HalpLbrConfigureRecording.c)
 *     HalpLbrStartRecording @ 0x140866EC0 (HalpLbrStartRecording.c)
 *     HalpLbrStopRecording @ 0x140866F70 (HalpLbrStopRecording.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140344620 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403A4420 (KeIpiGenericCall.c)
 */

__int64 __fastcall HalpLbrConfigurationWorker(int a1, unsigned __int8 a2)
{
  unsigned int v3; // edi
  int v4; // r8d
  __int64 result; // rax

  v3 = a2;
  HalpLbrSyncBarrier = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4 = a1 | 0x1C4;
  if ( (a1 & 0x200) == 0 )
    v4 = a1;
  HalpLbrSelectFlags = v4;
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)HalpLbrConfigureProcessor, v3);
  while ( 1 )
  {
    result = (unsigned int)HalpLbrSyncBarrier;
    if ( HalpLbrSyncBarrier <= 0 )
      break;
    _mm_pause();
  }
  return result;
}
