/*
 * XREFs of HalpCmciInit @ 0x1409A0EB4
 * Callers:
 *     HalpCmcWorkerRoutine @ 0x140864490 (HalpCmcWorkerRoutine.c)
 *     HalpInitializeCmc @ 0x1409A0E28 (HalpInitializeCmc.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     KeQueryActiveProcessorCountEx @ 0x140344620 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035CA50 (KeSetSystemGroupAffinityThread.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1403C5218 (HalpCmciLoadThresholdConfiguration.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HalpCmciInitProcessor @ 0x140999D10 (HalpCmciInitProcessor.c)
 *     HalpCmciInitializeErrorPacket @ 0x1409A0FDC (HalpCmciInitializeErrorPacket.c)
 */

void __fastcall HalpCmciInit(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rdi
  ULONG v3; // ebp
  ULONG ActiveProcessorCount; // r15d
  int *v5; // r14
  unsigned int v6; // ecx
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 i; // rsi
  __int64 v9; // rbx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  HalpCmciLoadThresholdConfiguration();
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v5 = KiProcessorIndexToNumberMappingTable;
    do
    {
      v6 = *v5;
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v6 >> 6);
      Affinity.Mask = 1LL << (v6 & 0x3F);
      if ( v3 )
        p_PreviousAffinity = 0LL;
      else
        p_PreviousAffinity = &PreviousAffinity;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 176) )
      {
        v9 = *(_QWORD *)(i + 164);
        *(LARGE_INTEGER *)(i + 104) = PerformanceCounter;
        HalpCmciInitializeErrorPacket(a1, v9);
        HalpCmciInitProcessor(a1, v9);
      }
      ++v3;
      ++v5;
    }
    while ( v3 < ActiveProcessorCount );
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
