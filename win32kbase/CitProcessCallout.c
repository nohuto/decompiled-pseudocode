void __fastcall CitProcessCallout(__int64 a1, char a2)
{
  __int64 i; // rax
  struct _LUID v4; // rax
  __int64 v5; // rbx
  unsigned __int16 v6; // dx
  char IsStateSeparationEnabled; // al
  const unsigned __int16 *v8; // rcx
  struct _CIT_IMPACT_CONTEXT *v9; // rsi
  struct _CIT_INTERACTION_SUMMARY *Outstanding; // rsi
  struct _LUID v11; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    *(_QWORD *)(a1 + 912) = 52976LL;
    if ( gppiList && !*(_QWORD *)(gppiList + 368) && !(_BYTE)g_CompatImpact )
    {
      IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
      v8 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
      if ( !IsStateSeparationEnabled )
        v8 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
      CitpInitialize(v8);
    }
    if ( xmmword_1C02D4DA0 && !*((_QWORD *)xmmword_1C02D4DA0 + 12) )
    {
      for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_UNKNOWN **)(i + 56) == &gTermIO )
        {
          v4 = *(struct _LUID *)(i + 184);
          goto LABEL_10;
        }
      }
      v4 = 0LL;
LABEL_10:
      v11 = v4;
      if ( v4 )
        CitpContextUserLogon(xmmword_1C02D4DA0, &v11);
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 912);
    if ( CitpProcessInfoIsValid((struct _CIT_PROCESS *)v5) )
    {
      v9 = xmmword_1C02D4DA0;
      if ( xmmword_1C02D4DA0 )
      {
        if ( a1 == *((_QWORD *)xmmword_1C02D4DA0 + 15) )
          CitpSetForegroundProcess(
            xmmword_1C02D4DA0,
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
            0LL,
            0LL,
            0LL);
        if ( a1 == *((_QWORD *)v9 + 16) )
          *((_QWORD *)v9 + 16) = 0LL;
        CitpClearDelegation((struct _CIT_PROCESS *)v5);
      }
      if ( *(_BYTE *)(v5 + 104) || *(_BYTE *)(v5 + 105) )
      {
        Outstanding = CitpInteractionSummaryGetOutstanding((struct _CIT_PROCESS *)v5, v6);
        if ( *(_BYTE *)(v5 + 104) )
        {
          PsUpdateComponentPower(**(_QWORD **)(v5 + 8), 10LL, 0LL);
          if ( Outstanding )
            CitpAudioStatDecrementStreams(
              (struct _CIT_INTERACTION_SUMMARY *)((char *)Outstanding + 116),
              *(_BYTE *)(v5 + 104));
        }
        if ( *(_BYTE *)(v5 + 105) )
        {
          PsUpdateComponentPower(**(_QWORD **)(v5 + 8), 11LL, 0LL);
          if ( Outstanding )
            CitpAudioStatDecrementStreams(
              (struct _CIT_INTERACTION_SUMMARY *)((char *)Outstanding + 124),
              *(_BYTE *)(v5 + 105));
        }
      }
      CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(v5 + 32));
      CitpProgramIdCleanup((struct _CIT_PROGRAM_ID *)(v5 + 48));
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)v5);
    }
    *(_QWORD *)(a1 + 912) = 52977LL;
    if ( gppiList && !*(_QWORD *)(gppiList + 368) )
    {
      if ( xmmword_1C02D4DA0 )
        CitpContextFlush(
          xmmword_1C02D4DA0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      CitpCleanup();
    }
  }
}
