/*
 * XREFs of PpmUpdateProcessorPolicy @ 0x14078CA90
 * Callers:
 *     PpmPerfReApplyStates @ 0x14077A510 (PpmPerfReApplyStates.c)
 *     PpmCheckInitProcessors @ 0x1407BA2A8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407BA470 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1407BAE90 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14026977C (PopExecuteOnTargetProcessors.c)
 *     KeOrAffinityEx @ 0x1402D0100 (KeOrAffinityEx.c)
 *     PpmUpdateTargetProcessorPolicy @ 0x1403A505C (PpmUpdateTargetProcessorPolicy.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int16 __fastcall PpmUpdateProcessorPolicy(_WORD *a1, __int64 a2)
{
  int started; // eax
  __int64 *v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 *v8; // rsi
  unsigned int i; // ebx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  _DWORD v14[4]; // [rsp+20h] [rbp-99h] BYREF
  _DWORD v15[44]; // [rsp+30h] [rbp-89h] BYREF

  v14[0] = 0;
  memset(&v15[2], 0, 0xA0uLL);
  LOWORD(started) = PpmAllowedActions & *a1;
  v5 = &PpmCurrentProfile[342 * dword_140C2332C];
  LOWORD(v14[0]) = started;
  if ( !a2 && (v14[0] & 0x400) != 0 )
  {
    LOWORD(started) = 0;
    if ( (KeGetCurrentPrcb()->FeatureBits & 0x8000000000LL) != 0 )
    {
      v11 = __readmsr(0xDB0u);
      v12 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *((_BYTE *)v5 + 160) )
        v12 = v11 | 1;
      LOWORD(started) = v12;
      __writemsr(0xDB0u, v12);
    }
  }
  v14[0] &= ~0x400u;
  if ( LOWORD(v14[0]) )
  {
    v6 = (unsigned int)(10000 * *((_DWORD *)v5 + 15));
    if ( v6 <= KeMaximumIncrement )
      LODWORD(v7) = 0;
    else
      v7 = (v6 - KeMaximumIncrement) / 0x2710;
    PpmPerfTimeWindow = v7;
    if ( !PpmPerfControlStartPolicyUpdate || (started = PpmPerfControlStartPolicyUpdate(), started >= 0) )
    {
      if ( a2 )
      {
        v8 = *(__int64 **)a2;
      }
      else
      {
        a2 = PpmPerfDomainHead;
        v8 = &PpmPerfDomainHead;
      }
      v15[0] = 1310721;
      memset(&v15[1], 0, 0xA4uLL);
      while ( (__int64 *)a2 != v8 )
      {
        KeOrAffinityEx((unsigned __int16 *)(a2 + 24), (unsigned __int16 *)v15, v15);
        for ( i = 0; i < *(_DWORD *)(a2 + 200); ++i )
        {
          v10 = *(_QWORD *)(a2 + 216) + 136LL * i;
          if ( !*(_DWORD *)(v10 + 16) )
            PpmUpdateTargetProcessorPolicy(a2, (_QWORD *)v10, v14, (__int64)(v5 + 5));
        }
        a2 = *(_QWORD *)a2;
      }
      PopExecuteOnTargetProcessors(
        (__int64)&PpmPerfStatesRegistered,
        (__int64)PpmUpdateProcessorPolicyCallback,
        (__int64)v14,
        (__int64)(v5 + 5));
      LOWORD(started) = (_WORD)PpmPerfControlCompletePolicyUpdate;
      if ( PpmPerfControlCompletePolicyUpdate )
        LOWORD(started) = PpmPerfControlCompletePolicyUpdate();
    }
  }
  return started;
}
