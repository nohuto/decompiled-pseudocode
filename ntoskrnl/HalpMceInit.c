/*
 * XREFs of HalpMceInit @ 0x140A87B68
 * Callers:
 *     HalpInitializeMce @ 0x140A87FF0 (HalpInitializeMce.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     HalpHvInitMcaPcrContext @ 0x14037CEA4 (HalpHvInitMcaPcrContext.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x140509010 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x140509C30 (HalpHvSetMachineCheckHandlerState.c)
 *     HalpMceInitProcessor @ 0x140A87C98 (HalpMceInitProcessor.c)
 */

void __fastcall HalpMceInit(__int64 a1)
{
  ULONG v2; // edi
  ULONG ActiveProcessorCount; // ebp
  int *v4; // rsi
  unsigned int v5; // edx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 i; // rbx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (HalpFeatureBits & 4) == 0 || !*(_BYTE *)(a1 + 42) )
    HalpMcaEnabled = 0;
  if ( !HalpMcaEnabled && (HalpFeatureBits & 8) == 0 )
    HalpMceEnabled = 0;
  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v4 = KiProcessorIndexToNumberMappingTable;
    do
    {
      v5 = *v4;
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v5 >> 6);
      Affinity.Mask = 1LL << (v5 & 0x3F);
      if ( v2 )
        p_PreviousAffinity = 0LL;
      else
        p_PreviousAffinity = &PreviousAffinity;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      HalpHvInitMcaPcrContext();
      for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
        HalpMceInitProcessor(a1, *(_QWORD *)(i + 172));
      ++v2;
      ++v4;
    }
    while ( v2 < ActiveProcessorCount );
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    if ( HalpMceEnabled )
    {
      HalpHvInitMcaStatusMsrCache();
      HalpHvSetMachineCheckHandlerState();
    }
  }
}
