__int64 Amd64InitializeProfiling()
{
  unsigned int Number; // r13d
  unsigned int v1; // edi
  __int64 v2; // r12
  unsigned int v8; // edx
  int v9; // r8d
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // r9
  unsigned int v13; // ebx
  int v14; // r9d
  __int64 v15; // r10
  __int64 v16; // rcx
  int v17; // eax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v19; // r8
  int v20; // ebx
  __int64 v21; // r9
  unsigned int MaximumRegisteredProcessorCount; // esi
  unsigned int v33; // ebx
  void *Memory; // rax
  unsigned int v35; // ebx
  void *v36; // rax
  unsigned int v37; // ebx
  unsigned int v38; // ebx
  unsigned int v39; // r9d
  unsigned int v40; // r8d
  unsigned int v41; // ebp
  __int64 v42; // r10
  __int64 v43; // r11
  __int64 v44; // r14
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 *v47; // r11
  unsigned int v48; // r9d
  __int64 v49; // rbx
  char v50; // r10
  __int64 GenericPerfEvent; // rax
  __int64 *v52; // rcx
  __int64 **v53; // rax
  unsigned __int16 *v54; // rbx
  __int64 result; // rax

  Number = KeGetPcr()->Prcb.Number;
  v1 = 0;
  v2 = 18LL;
  if ( !Number )
  {
    _RAX = 2147483649LL;
    __asm { cpuid }
    v8 = 4;
    v9 = _RCX;
    if ( (_RCX & 0x800000) != 0 )
    {
      Amd64PerfFeatures |= 1u;
      v10 = -1073675776;
      Amd64NumberCoreCounters = 6;
      v11 = 0LL;
      v12 = 6LL;
      do
      {
        *(_DWORD *)((char *)&Amd64EventSelectRegisters + v11) = v10;
        *(_DWORD *)((char *)&Amd64PerfCounterRegisters + v11) = v10 + 1;
        v10 += 2;
        v11 += 4LL;
        --v12;
      }
      while ( v12 );
    }
    else
    {
      Amd64PerfCounterRegisters = (__int128)_mm_load_si128((const __m128i *)&_xmm_c0010007c0010006c0010005c0010004);
      Amd64NumberCoreCounters = 4;
      Amd64EventSelectRegisters = (__int128)_mm_load_si128((const __m128i *)&_xmm_c0010003c0010002c0010001c0010000);
    }
    v13 = Amd64NumberCoreCounters;
    Amd64NumberCounters = Amd64NumberCoreCounters;
    if ( (v9 & 0x1000000) != 0 && (v9 & 0x400000) != 0 )
    {
      Amd64PerfFeatures |= 2u;
      v14 = -1073675712;
      Amd64NumberDataFabricCounters = 4;
      v15 = 4LL;
      do
      {
        v16 = v13;
        v17 = v14 + 1;
        ++v13;
        *((_DWORD *)&Amd64EventSelectRegisters + v16) = v14;
        v14 += 2;
        *((_DWORD *)&Amd64PerfCounterRegisters + v16) = v17;
        --v15;
      }
      while ( v15 );
      Amd64NumberCounters += 4;
      qword_140C5FAD8 = (__int64)&Amd64DataFabricStatusHead;
      Amd64DataFabricStatusHead = (__int64)&Amd64DataFabricStatusHead;
    }
    if ( (v9 & 0x10000000) != 0 && (v9 & 0x400000) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      Amd64PerfFeatures |= 4u;
      if ( CurrentPrcb->CpuType != 22 )
        v8 = 6;
      v19 = (unsigned int)(Amd64NumberCoreCounters + Amd64NumberDataFabricCounters);
      Amd64NumberCacheCounters = v8;
      v20 = -1073675728;
      v21 = v8;
      do
      {
        *((_DWORD *)&Amd64EventSelectRegisters + v19) = v20;
        *((_DWORD *)&Amd64PerfCounterRegisters + v19) = v20 + 1;
        v20 += 2;
        v19 = (unsigned int)(v19 + 1);
        --v21;
      }
      while ( v21 );
      Amd64NumberCounters += Amd64NumberCacheCounters;
      qword_140C5FB88 = (__int64)&Amd64CacheStatusHead;
      Amd64CacheStatusHead = (__int64)&Amd64CacheStatusHead;
    }
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x80000008 )
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0 && (KeGetCurrentPrcb()->CpuType != 23 || KeGetCurrentPrcb()->CpuModel >= 0x1Fu) )
        Amd64PerfFeatures |= 8u;
    }
    MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
    v33 = 24 * Amd64NumberCounters * MaximumRegisteredProcessorCount;
    Memory = (void *)HalpMmAllocateMemory(v33);
    Amd64CounterStatus = (__int64)Memory;
    if ( !Memory )
      KeBugCheckEx(0xACu, v33, 0xAB00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x841uLL);
    memset(Memory, 0, v33);
    v35 = 8 * Amd64NumberCounters * MaximumRegisteredProcessorCount;
    v36 = (void *)HalpMmAllocateMemory(v35);
    HalpCounterStatus = (__int64)v36;
    if ( !v36 )
      KeBugCheckEx(0xACu, v35, 0xAB00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x851uLL);
    memset(v36, 0, v35);
    v37 = 40 * Amd64NumberCoreCounters * MaximumRegisteredProcessorCount;
    Amd64CoreCounterStatus = HalpMmAllocateMemory(v37);
    if ( !Amd64CoreCounterStatus )
      KeBugCheckEx(0xACu, v37, 0xAB00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x861uLL);
    v38 = 0;
    v39 = Amd64NumberCounters;
    HalpNumberOfGpCounters = Amd64NumberCoreCounters;
    HalpProfileIntervalLimits = (__int64)Amd64ProfileIntervalLimits;
    qword_140C5FBB0 = (__int64)&DummyAmd64CounterStatus;
    HalpNumberOfCounters = Amd64NumberCounters;
    for ( HalpNumberOfFixedCounters = 0; v38 < MaximumRegisteredProcessorCount; ++v38 )
    {
      v40 = 0;
      if ( v39 )
      {
        v41 = Amd64NumberCoreCounters;
        v42 = 0LL;
        v43 = 0LL;
        v44 = Amd64CoreCounterStatus + 40LL * Amd64NumberCoreCounters * v38;
        v45 = Amd64CounterStatus + 24LL * v39 * v38;
        do
        {
          v46 = HalpCounterStatus;
          if ( HalpProfileInterface != &DefaultProfileInterface )
            v46 = HalpCounterStatus + 8LL * HalpNumberOfCounters * v38;
          if ( v40 >= v41 )
          {
            *(_QWORD *)(v42 + v46) = &DummyCounterStatus;
          }
          else
          {
            *(_QWORD *)(v42 + v46) = v43 + v44;
            *(_QWORD *)(v43 + v44 + 16) = v45 + 24LL * v40;
          }
          ++v40;
          v43 += 40LL;
          v42 += 8LL;
        }
        while ( v40 < v39 );
      }
    }
    v47 = &HalpProfileSourceDescriptorListHead;
    HalpProfileSourceDescriptorListLock = 0LL;
    qword_140C62DA8 = (__int64)&HalpProfileSourceDescriptorListHead;
    v48 = 0;
    HalpProfileSourceDescriptorListHead = (__int64)&HalpProfileSourceDescriptorListHead;
    do
    {
      v49 = 320LL * v48;
      v50 = byte_140C0033D[v49];
      if ( v50 && *(_DWORD *)((char *)&Amd64ProfileSourceDescriptorTable + v49) == 32 && (Amd64PerfFeatures & 8) != 0 )
      {
        v50 = 0;
        byte_140C0033D[v49] = 0;
      }
      if ( !*(_QWORD *)((char *)&unk_140C00450 + v49) )
      {
        GenericPerfEvent = Amd64GetGenericPerfEvent(*(_DWORD *)((char *)&Amd64ProfileSourceDescriptorTable + v49));
        if ( GenericPerfEvent )
          *(_QWORD *)((char *)&unk_140C00450 + v49) = GenericPerfEvent;
      }
      if ( !v50 )
      {
        v52 = (__int64 *)qword_140C62DA8;
        v53 = (__int64 **)((char *)&unk_140C00328 + v49);
        if ( *(__int64 **)qword_140C62DA8 != v47 )
          __fastfail(3u);
        ++HalpProfileSourceDescriptorCount;
        *v53 = v47;
        v53[1] = v52;
        *v52 = (__int64)v53;
        qword_140C62DA8 = (__int64)&unk_140C00328 + v49;
      }
      ++v48;
    }
    while ( v48 < 0x12 );
  }
  if ( (Amd64PerfFeatures & 8) != 0 )
    __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x40000000);
  v54 = (unsigned __int16 *)&unk_140C00340;
  do
  {
    result = KeAddProcessorAffinityEx(v54, Number);
    v54 += 160;
    --v2;
  }
  while ( v2 );
  if ( Amd64NumberCoreCounters )
  {
    do
    {
      __writemsr(*((_DWORD *)&Amd64EventSelectRegisters + v1), 0LL);
      result = Amd64FreeCounter(v1++);
    }
    while ( v1 < Amd64NumberCoreCounters );
  }
  return result;
}
