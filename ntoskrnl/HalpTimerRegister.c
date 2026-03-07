__int64 __fastcall HalpTimerRegister(__int64 a1, UNICODE_STRING *p_DestinationString)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // ebp
  unsigned int MaximumProcessorCount; // r12d
  unsigned int v9; // r14d
  void *MemoryInternal; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  __int128 v14; // xmm0
  unsigned int i; // ebp
  __int64 v16; // rcx
  __int64 *v17; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-F8h] BYREF
  WCHAR SourceString[80]; // [rsp+30h] [rbp-E8h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  if ( !HalpTimerRegistrationAllowed )
    return (unsigned int)-1073741431;
  if ( *(_DWORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)(a1 + 4) != 144 )
    return (unsigned int)-1073741811;
  v5 = *(unsigned int *)(a1 + 116);
  if ( (v5 & 0xFE000000) != 0
    || (v5 & 0x400000) != 0
    || !*(_DWORD *)(a1 + 136)
    || (v5 & 0x400) != 0 && !*(_QWORD *)(a1 + 56) )
  {
    return (unsigned int)-1073741811;
  }
  if ( (v5 & 0x1000) != 0 || (v5 & 0x80u) != 0LL )
    return (unsigned int)-1073741637;
  v6 = 2048LL;
  if ( (v5 & 0x800) != 0 && !*(_QWORD *)(a1 + 72) )
    return (unsigned int)-1073741811;
  if ( (v5 & 0x801) == 0x800 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    if ( (v5 & 0xF00) != 0 && !*(_QWORD *)(a1 + 40)
      || (v5 & 2) != 0 && !*(_QWORD *)(a1 + 16)
      || (v5 & 0x10000) != 0 && (v5 & 1) == 0 )
    {
      return (unsigned int)-1073741811;
    }
    if ( !p_DestinationString )
    {
      HalpTimerBuildKnownResourceIdString(a1, 75LL, SourceString);
      p_DestinationString = &DestinationString;
      RtlInitUnicodeString(&DestinationString, SourceString);
    }
    if ( _bittest((const signed __int32 *)(a1 + 116), 0x10u) )
    {
      MaximumProcessorCount = HalQueryMaximumProcessorCount(v5, v6);
      v7 = (*(_DWORD *)(a1 + 96) + 7) & 0xFFFFFFF8;
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 96);
      MaximumProcessorCount = 1;
    }
    v9 = (((MaximumProcessorCount * v7 + 351) & 0xFFFFFFF8) + 9 + p_DestinationString->Length) & 0xFFFFFFF8;
    MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v9, 1LL);
    v11 = (__int64)MemoryInternal;
    if ( MemoryInternal )
    {
      memset(MemoryInternal, 0, v9);
      v12 = (v11 + 303) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v11 + 288) = v12;
      v13 = (v12 + 55) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v11 + 72) = v13;
      *(_QWORD *)(v12 + 32) = (MaximumProcessorCount * v7 + v13 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v11 + 192) = *(_QWORD *)(a1 + 104);
      *(_OWORD *)(v11 + 104) = *(_OWORD *)(a1 + 8);
      *(_OWORD *)(v11 + 120) = *(_OWORD *)(a1 + 24);
      *(_OWORD *)(v11 + 136) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(v11 + 152) = *(_OWORD *)(a1 + 56);
      v14 = *(_OWORD *)(a1 + 72);
      *(_DWORD *)(v11 + 80) = v7;
      *(_OWORD *)(v11 + 168) = v14;
      *(_DWORD *)(v11 + 220) = *(_DWORD *)(a1 + 100);
      *(_DWORD *)(v11 + 224) = *(_DWORD *)(a1 + 116);
      *(_DWORD *)(v11 + 84) = *(_DWORD *)(a1 + 120);
      *(_DWORD *)(v11 + 88) = *(_DWORD *)(a1 + 124);
      *(_DWORD *)(v11 + 96) = *(_DWORD *)(a1 + 132);
      *(_DWORD *)(v11 + 92) = *(_DWORD *)(a1 + 128);
      *(_DWORD *)(v11 + 228) = *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v11 + 216) = *(_DWORD *)(a1 + 112);
      if ( *(_DWORD *)(a1 + 96) )
      {
        if ( *(_QWORD *)(a1 + 88) )
        {
          for ( i = 0; i < MaximumProcessorCount; ++i )
            memmove(
              (void *)(*(_QWORD *)(v11 + 72) + *(_DWORD *)(v11 + 80) * i),
              *(const void **)(a1 + 88),
              *(unsigned int *)(a1 + 96));
        }
      }
      *(_DWORD *)(v11 + 284) = *(_DWORD *)(a1 + 140);
      *(_WORD *)(v12 + 24) = 0;
      *(_WORD *)(v12 + 26) = p_DestinationString->Length + 2;
      RtlCopyUnicodeString((PUNICODE_STRING)(v12 + 24), p_DestinationString);
      if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
      {
        *(_QWORD *)(v12 + 12) = 0LL;
        *(_DWORD *)(v12 + 8) = 0;
        *(_DWORD *)v12 = 0;
        *(_DWORD *)(v12 + 4) = 0;
        if ( *(_DWORD *)(a1 + 136) == 3 )
        {
          LOBYTE(v16) = *(_BYTE *)(a1 + 142);
          HalpPciGetHpetInterruptSource(v16, v12 + 8, (v11 + 303) & 0xFFFFFFFFFFFFFFF8uLL);
        }
      }
      v17 = (__int64 *)qword_140C64228;
      if ( *(ULONG_PTR **)qword_140C64228 != &HalpRegisteredTimers )
        __fastfail(3u);
      LODWORD(HalpRegisteredTimerCount) = HalpRegisteredTimerCount + 1;
      *(_QWORD *)v11 = &HalpRegisteredTimers;
      *(_QWORD *)(v11 + 8) = v17;
      *v17 = v11;
      qword_140C64228 = v11;
      if ( (*(_DWORD *)(v11 + 224) & 0x100000) != 0 )
        HalpTimerAuxiliaryClockEnabled = 1;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
