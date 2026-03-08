/*
 * XREFs of PpmResetPerfEngineForProcessor @ 0x14058B178
 * Callers:
 *     PopHandleNextState @ 0x140AA4FAC (PopHandleNextState.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     PpmResetPerfTimes @ 0x1403A1BA0 (PpmResetPerfTimes.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PpmHeteroHgsProcessorThreadFeedbackInit @ 0x14059C38C (PpmHeteroHgsProcessorThreadFeedbackInit.c)
 */

__int64 __fastcall PpmResetPerfEngineForProcessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  __int64 v5; // rsi
  __int64 i; // rbx
  __int64 j; // rdi
  void (__fastcall *v8)(_QWORD); // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 InterruptTimePrecise; // rax
  __int64 v13; // r8
  void (__fastcall *v14)(_QWORD); // rax
  __int64 k; // rsi
  int v16; // eax
  void (__fastcall *v17)(_QWORD); // rax
  LARGE_INTEGER v19; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v5 = a1;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 304) )
      {
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(i + 296); j = (unsigned int)(j + 1) )
        {
          a1 = *(_QWORD *)(i + 312) + 144 * j;
          if ( v4 )
          {
            if ( *(_DWORD *)(a1 + 16) == 1 )
              PpmResetPerfTimes(*(_QWORD *)a1);
          }
          else
          {
            v8 = *(void (__fastcall **)(_QWORD))(i + 368);
            if ( v8 )
              v8(*(_QWORD *)(a1 + 8));
          }
        }
      }
    }
  }
  v9 = v5 + 33968;
  v10 = *(_QWORD *)(v5 + 33968);
  v11 = *(_QWORD *)(v5 + 33976);
  if ( v10 && v11 )
  {
    if ( v4 )
    {
      if ( *(_QWORD *)(v10 + 408) )
      {
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&v19);
        LOBYTE(v13) = 1;
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(v10 + 408))(*(_QWORD *)(v11 + 8), InterruptTimePrecise, v13);
      }
    }
    else
    {
      v14 = *(void (__fastcall **)(_QWORD))(v10 + 368);
      if ( v14 )
        v14(*(_QWORD *)(v11 + 8));
    }
    if ( v9 == *(_QWORD *)(v10 + 16) )
    {
      for ( k = 0LL; (unsigned int)k < *(_DWORD *)(v10 + 296); k = (unsigned int)(k + 1) )
      {
        a1 = *(_QWORD *)(v10 + 312) + 144 * k;
        v16 = *(_DWORD *)(a1 + 16);
        if ( v16 )
        {
          if ( v4 )
          {
            if ( v16 == 1 )
              PpmResetPerfTimes(*(_QWORD *)a1);
          }
          else
          {
            v17 = *(void (__fastcall **)(_QWORD))(v10 + 368);
            if ( v17 )
              v17(*(_QWORD *)(a1 + 8));
          }
        }
      }
    }
  }
  if ( v4 )
    return PpmResetPerfTimes(v9);
  else
    return PpmHeteroHgsProcessorThreadFeedbackInit(a1, a2, a3, a4);
}
