/*
 * XREFs of RtlSleepConditionVariableCS @ 0x180065760
 * Callers:
 *     EtwpSwitchBuffer @ 0x180051284 (EtwpSwitchBuffer.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpWakeSingle @ 0x180065690 (RtlpWakeSingle.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x1800658C8 (RtlpOptimizeConditionVariableWaitList.c)
 *     NtWaitForAlertByThreadId @ 0x1800A0F10 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlSleepConditionVariableCS(signed __int64 *a1, __int64 a2, __int64 a3)
{
  signed __int64 v6; // rbx
  unsigned int v7; // edi
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rax
  signed __int64 v10; // rax
  int i; // edx
  unsigned int v12; // ebx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  _QWORD v19[4]; // [rsp+20h] [rbp-30h] BYREF
  signed __int32 v20; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v21; // [rsp+48h] [rbp-8h]

  _m_prefetchw(a1);
  v6 = *a1;
  v7 = 0;
  v19[2] = 0LL;
  v21 = 0LL;
  v20 = 2;
  v19[3] = NtCurrentTeb()->ClientId.UniqueThread;
  while ( 1 )
  {
    v8 = (unsigned __int64)v19 | v6 & 0xF;
    v9 = v19;
    v19[0] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (v6 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v9 = 0LL;
    v19[1] = v9;
    if ( (v6 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v8 |= 8uLL;
    v10 = _InterlockedCompareExchange64(a1, v8, v6);
    if ( v6 == v10 )
      break;
    v6 = v10;
  }
  RtlLeaveCriticalSection(a2, a2, a3);
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)v8) & 8) != 0 )
    RtlpOptimizeConditionVariableWaitList(a1, v8);
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    if ( MEMORY[0x7FFE0297] )
    {
      v15 = __rdtsc();
      v16 = v15 + (unsigned int)ConditionVariableSpinCycleCount;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        if ( (v20 & 2) == 0 )
          break;
        v17 = v15;
        v18 = __rdtsc();
        v15 = v18;
        if ( v18 <= v17 || v18 >= v16 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    else
    {
      for ( i = 0; (v20 & 2) != 0 && i != ConditionVariableSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6]; ++i )
        _mm_pause();
    }
  }
  v12 = 0;
  if ( _interlockedbittestandreset(&v20, 1u) )
    v12 = NtWaitForAlertByThreadId(a2, a3);
  else
    _InterlockedOr(&v20, 4u);
  if ( v12 == 258 || (v20 & 4) == 0 )
  {
    if ( RtlpWakeSingle(a1, (__int64)v19) )
    {
      if ( v12 != 258 )
        v12 = 0;
      v7 = v12;
    }
    else
    {
      do
        NtWaitForAlertByThreadId(a2, 0LL);
      while ( (v20 & 4) == 0 );
    }
  }
  RtlEnterCriticalSection(a2);
  return v7;
}
