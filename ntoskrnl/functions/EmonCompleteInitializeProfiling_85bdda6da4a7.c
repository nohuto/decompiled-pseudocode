void __fastcall EmonCompleteInitializeProfiling()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  _PROCESSOR_PROFILE_CONTROL_AREA *v2; // rbx
  size_t v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 *PebsFixedCounterReset; // rcx
  unsigned int MaximumRegisteredProcessorCount; // eax
  unsigned int PebsBufferBase; // ecx
  _PROCESSOR_PROFILE_CONTROL_AREA *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( EmonPebsAvailable )
  {
    LODWORD(v0) = KeGetPcr()->Prcb.Number;
    v1 = 4096LL;
    if ( ((_DWORD)v0
       || (MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount(),
           (int)KeAllocateProcessorProfileStructures(
                  MaximumRegisteredProcessorCount,
                  4096LL,
                  (_PROCESSOR_PROFILE_CONTROL_AREA **)&EmonDsManagementAreas,
                  1) >= 0))
      && (v8 = (_PROCESSOR_PROFILE_CONTROL_AREA *)(EmonDsManagementAreas + 160 * v0),
          (int)KeAllocateProcessorProfileStructures(0, 0LL, &v8, 0) >= 0) )
    {
      if ( EmonPebsEntrySize )
        v1 = EmonPebsEntrySize * (0x1000u / EmonPebsEntrySize);
      v2 = v8;
      v3 = 8LL * (unsigned int)EmonNumberArchCounters;
      if ( EmonPebs64Bit )
      {
        v4 = v8->PebsDsSaveArea.As32Bit.PebsGpCounterReset[0];
        v8->PebsDsSaveArea.As32Bit.PebsGpCounterReset[1] = v4;
        v2->PebsDsSaveArea.As32Bit.PebsGpCounterReset[2] = v1 + v4;
        v2->PebsDsSaveArea.As32Bit.PebsGpCounterReset[3] = v4;
        memset(v2->PebsDsSaveArea.As64Bit.PebsGpCounterReset, 0, v3);
        PebsFixedCounterReset = v2->PebsDsSaveArea.As64Bit.PebsFixedCounterReset;
      }
      else
      {
        PebsBufferBase = v8->PebsDsSaveArea.As32Bit.PebsBufferBase;
        v8->PebsDsSaveArea.As32Bit.PebsBufferBase = PebsBufferBase;
        v2->PebsDsSaveArea.As32Bit.PebsIndex = PebsBufferBase;
        v2->PebsDsSaveArea.As32Bit.PebsAbsoluteMaximum = PebsBufferBase + v1;
        v2->PebsDsSaveArea.As32Bit.PebsInterruptThreshold = PebsBufferBase;
        memset(&v2->PebsDsSaveArea.As64Bit.PebsBufferBase, 0, v3);
        PebsFixedCounterReset = v2->PebsDsSaveArea.As32Bit.PebsFixedCounterReset;
      }
      memset(PebsFixedCounterReset, 0, 8LL * (unsigned int)EmonNumberFixedCounters);
      __writemsr(0x600u, (unsigned __int64)v2);
    }
    else
    {
      EmonPebsAvailable = 0;
    }
  }
}
