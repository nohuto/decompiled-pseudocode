/*
 * XREFs of HalpTscSynchronizationWorker @ 0x140387F60
 * Callers:
 *     HalpPostSleepMP @ 0x140A93F28 (HalpPostSleepMP.c)
 * Callees:
 *     HalpTscAdvSynchLeader @ 0x140387D38 (HalpTscAdvSynchLeader.c)
 *     HalpTscAdvSynchTarget @ 0x140388384 (HalpTscAdvSynchTarget.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpTscCompatibilitySynchronization @ 0x140508124 (HalpTscCompatibilitySynchronization.c)
 */

char __fastcall HalpTscSynchronizationWorker(ULONG_PTR Argument)
{
  _QWORD *v1; // rbp
  char result; // al
  __int64 v3; // rdx
  __int16 v4; // bx
  int v5; // ebx
  _WORD v6[148]; // [rsp+60h] [rbp-8h] BYREF

  v1 = (_QWORD *)((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFC0uLL);
  *(_QWORD *)((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFC0uLL) = Argument;
  result = (unsigned __int8)memset((void *)(((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0xC0uLL);
  v3 = *(_QWORD *)((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( *(_DWORD *)(v3 + 40) >= 2u )
  {
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    {
      v4 = v6[144];
      *(_QWORD *)(((unsigned __int64)KeGetCurrentPrcb()->Number << 7) + TscRequest + 16) = v1 + 16;
      _disable();
      v5 = v4 & 0x200;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) != 1 )
      {
        do
          _mm_pause();
        while ( *(_DWORD *)v3 );
      }
      if ( KeGetCurrentPrcb()->Number == HalpTscRequestedLeadProcessor )
        result = HalpTscAdvSynchLeader(v3);
      else
        result = HalpTscAdvSynchTarget();
      if ( v5 )
        _enable();
    }
    else
    {
      return HalpTscCompatibilitySynchronization(*v1);
    }
  }
  return result;
}
