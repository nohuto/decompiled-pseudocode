__int64 EmonInitializeProfiling()
{
  unsigned int Number; // ebp
  unsigned int v6; // r9d
  unsigned int v7; // r14d
  int v8; // r15d
  __int64 v9; // rdi
  unsigned __int8 *v10; // rbx
  void *v11; // rdx
  __int64 v12; // rsi
  __int64 result; // rax
  unsigned int v14; // r9d
  unsigned int i; // ebx
  unsigned int v16; // r11d
  unsigned __int64 v17; // rbx
  int v18; // r11d
  unsigned int v19; // r10d
  int v20; // edx
  int MaximumRegisteredProcessorCount; // ebx
  __int64 Memory; // rax
  __int64 v23; // rbx
  __int64 v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  char v27; // r10
  char v28; // r9
  __int64 v29; // rdx

  Number = KeGetPcr()->Prcb.Number;
  _RAX = 10LL;
  __asm { cpuid }
  v6 = _RDX;
  v7 = BYTE3(_RAX);
  v8 = _RBX;
  if ( !Number )
  {
    v20 = 0;
    EmonNumberFixedCounters = 0;
    EmonCounterResolution = BYTE2(_RAX);
    EmonPebsAvailable = 0;
    EmonVersion = (unsigned __int8)_RAX;
    EmonNumberArchCounters = BYTE1(_RAX);
    if ( (unsigned __int8)_RAX >= 2u )
    {
      v20 = v6 & 0xF;
      EmonFixedCounterResolution = (unsigned __int8)(v6 >> 5);
      EmonNumberFixedCounters = v20;
    }
    EmonNumberCounters = BYTE1(_RAX) + v20;
    MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
    HalpCounterStatus = HalpMmAllocateMemory((unsigned int)(8 * EmonNumberCounters * MaximumRegisteredProcessorCount));
    EmonCounterStatus = HalpMmAllocateMemory((unsigned int)(4 * EmonNumberCounters * MaximumRegisteredProcessorCount));
    Memory = HalpMmAllocateMemory((unsigned int)(40 * EmonNumberCounters * MaximumRegisteredProcessorCount));
    v23 = (unsigned int)(EmonNumberCounters * MaximumRegisteredProcessorCount);
    EmonCoreCounterStatus = Memory;
    if ( (_DWORD)v23 )
    {
      _RCX = HalpCounterStatus;
      v24 = EmonCounterStatus;
      do
      {
        *(_QWORD *)_RCX = Memory;
        _RCX += 8LL;
        *(_QWORD *)(Memory + 16) = v24;
        Memory += 40LL;
        v24 += 4LL;
        --v23;
      }
      while ( v23 );
    }
    HalpProfileSourceDescriptorListLock = 0LL;
    EmonReservedResourcesLock = 0LL;
    HalpNumberOfCounters = EmonNumberCounters;
    HalpNumberOfGpCounters = EmonNumberArchCounters;
    HalpNumberOfFixedCounters = EmonNumberFixedCounters;
    HalpProfileIntervalLimits = (__int64)EmonProfileIntervalLimits;
    qword_140C60098 = (__int64)&EmonReservedResourcesList;
    EmonReservedResourcesList = (__int64)&EmonReservedResourcesList;
    qword_140C62DA8 = (__int64)&HalpProfileSourceDescriptorListHead;
    HalpProfileSourceDescriptorListHead = (__int64)&HalpProfileSourceDescriptorListHead;
    if ( HalpCounterStatus && EmonCounterStatus )
    {
      _RCX = 0LL;
      do
      {
        if ( !*((_BYTE *)&EmonProfileSourceDescriptorTable + 320 * _RCX + 29) )
        {
          v25 = (_QWORD *)((char *)&EmonProfileSourceDescriptorTable + 320 * _RCX + 8);
          v26 = (_QWORD *)qword_140C62DA8;
          if ( *(__int64 **)qword_140C62DA8 != &HalpProfileSourceDescriptorListHead )
            __fastfail(3u);
          ++HalpProfileSourceDescriptorCount;
          *v25 = &HalpProfileSourceDescriptorListHead;
          v25[1] = v26;
          *v26 = v25;
          qword_140C62DA8 = (__int64)&EmonProfileSourceDescriptorTable + 320 * _RCX + 8;
        }
        _RCX = (unsigned int)(_RCX + 1);
      }
      while ( (unsigned int)_RCX < 0x12 );
    }
  }
  v9 = 0LL;
  v10 = (unsigned __int8 *)&unk_140C04CC4;
  v11 = &unk_140C04BB0;
  v12 = 32LL;
  do
  {
    result = *v10;
    if ( v10[8] )
    {
      if ( (unsigned int)result < EmonNumberFixedCounters )
        goto LABEL_7;
    }
    else if ( (_BYTE)result != 0xFF && (unsigned int)result < v7 && !_bittest(&v8, result)
           || *((_DWORD *)v10 - 77) == 32 && HalpLbrIsInitialized )
    {
LABEL_7:
      result = KeAddProcessorAffinityEx((unsigned __int16 *)&unk_140C04BB0 + 160 * v9, Number);
      v11 = &unk_140C04BB0;
    }
    v9 = (unsigned int)(v9 + 1);
    v10 += 320;
  }
  while ( (unsigned int)v9 < 0x12 );
  v14 = EmonNumberArchCounters;
  for ( i = 0; i < v14; ++i )
  {
    __writemsr(i + 390, 0LL);
    result = EmonFreeCounter(i);
  }
  if ( EmonNumberFixedCounters )
  {
    __writemsr(0x38Du, 0LL);
    v16 = 0;
    v17 = __readmsr(0x38Fu);
    do
    {
      v17 &= ~(1LL << v12);
      EmonFreeCounter(v14 + v16);
      v16 = v18 + 1;
      ++v12;
    }
    while ( v16 < v19 );
    result = v17;
    v11 = (void *)HIDWORD(v17);
    _RCX = 911LL;
    __writemsr(0x38Fu, v17);
  }
  if ( !Number )
  {
    EmonInitializePebs(_RCX, v11);
    result = (1LL << v28) - 1;
    v29 = result | (((1LL << v27) - 1) << 32);
    EmonOverflowMask = v29;
    if ( EmonPebsAvailable )
    {
      result = 0x4000000000000000LL;
      EmonOverflowMask = v29 | 0x4000000000000000LL;
    }
  }
  if ( (unsigned int)EmonVersion >= 2 )
  {
    result = EmonOverflowMask;
    __writemsr(0x390u, EmonOverflowMask);
  }
  return result;
}
