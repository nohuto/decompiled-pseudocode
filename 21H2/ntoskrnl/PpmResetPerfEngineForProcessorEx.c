/*
 * XREFs of PpmResetPerfEngineForProcessorEx @ 0x140419B58
 * Callers:
 *     PopHandleNextState @ 0x140A4B5A0 (PopHandleNextState.c)
 * Callees:
 *     PpmHeteroHgsProcessorThreadFeedbackInit @ 0x14025E708 (PpmHeteroHgsProcessorThreadFeedbackInit.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     PpmResetPerfTimes @ 0x1403B4C90 (PpmResetPerfTimes.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __fastcall PpmResetPerfEngineForProcessorEx(__int64 a1, char a2)
{
  __int64 i; // rbx
  unsigned int j; // edi
  __int64 v6; // rcx
  void (__fastcall *v7)(_QWORD); // rax
  __int64 *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 InterruptTimePrecise; // rax
  __int64 v12; // r8
  void (__fastcall *v13)(_QWORD); // rax
  unsigned int k; // edi
  __int64 v15; // rcx
  int v16; // eax
  void (__fastcall *v17)(_QWORD); // rax
  LARGE_INTEGER v18; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_DWORD *)(a1 + 36) )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 304) )
      {
        for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
        {
          v6 = *(_QWORD *)(i + 312) + 136LL * j;
          if ( a2 )
          {
            if ( *(_DWORD *)(v6 + 16) == 1 )
              PpmResetPerfTimes(*(_QWORD *)v6);
          }
          else
          {
            v7 = *(void (__fastcall **)(_QWORD))(i + 368);
            if ( v7 )
              v7(*(_QWORD *)(v6 + 8));
          }
        }
      }
    }
  }
  v8 = (__int64 *)(a1 + 33968);
  v9 = *v8;
  v10 = v8[1];
  if ( *v8 && v10 )
  {
    if ( a2 )
    {
      if ( *(_QWORD *)(v9 + 408) )
      {
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&v18);
        LOBYTE(v12) = 1;
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(v9 + 408))(*(_QWORD *)(v10 + 8), InterruptTimePrecise, v12);
      }
    }
    else
    {
      v13 = *(void (__fastcall **)(_QWORD))(v9 + 368);
      if ( v13 )
        v13(*(_QWORD *)(v10 + 8));
    }
    if ( v8 == *(__int64 **)(v9 + 16) )
    {
      for ( k = 0; k < *(_DWORD *)(v9 + 296); ++k )
      {
        v15 = *(_QWORD *)(v9 + 312) + 136LL * k;
        v16 = *(_DWORD *)(v15 + 16);
        if ( v16 )
        {
          if ( a2 )
          {
            if ( v16 == 1 )
              PpmResetPerfTimes(*(_QWORD *)v15);
          }
          else
          {
            v17 = *(void (__fastcall **)(_QWORD))(v9 + 368);
            if ( v17 )
              v17(*(_QWORD *)(v15 + 8));
          }
        }
      }
    }
  }
  if ( a2 )
    PpmResetPerfTimes((__int64)v8);
  else
    PpmHeteroHgsProcessorThreadFeedbackInit();
}
