/*
 * XREFs of PpmUpdateProcessorPolicy @ 0x14081ACB4
 * Callers:
 *     PpmPerfReApplyStates @ 0x140808958 (PpmPerfReApplyStates.c)
 *     PpmRegisterPerfStates @ 0x140848C18 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140849690 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140849940 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140293A88 (PopExecuteOnTargetProcessors.c)
 *     KiOrAffinityEx @ 0x1402FEC10 (KiOrAffinityEx.c)
 *     PpmUpdateTargetProcessorPolicy @ 0x1403B488C (PpmUpdateTargetProcessorPolicy.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int16 __fastcall PpmUpdateProcessorPolicy(_WORD *a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 *v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 *v8; // rsi
  unsigned int i; // ebx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  _DWORD v14[4]; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v15[68]; // [rsp+30h] [rbp-D0h] BYREF

  v14[0] = 0;
  memset(&v15[2], 0, 0x100uLL);
  LOWORD(CurrentPrcb) = PpmAllowedActions & *a1;
  v5 = &PpmCurrentProfile[534 * dword_140C232CC];
  LOWORD(v14[0]) = (_WORD)CurrentPrcb;
  if ( !a2 && (v14[0] & 0x400) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( _bittest64((const signed __int64 *)&CurrentPrcb->FeatureBits, 0x27u) )
    {
      v11 = __readmsr(0xDB0u);
      v12 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *((_BYTE *)v5 + 160) )
        v12 = v11 | 1;
      LOWORD(CurrentPrcb) = v12;
      __writemsr(0xDB0u, v12);
    }
  }
  v14[0] &= ~0x400u;
  if ( LOWORD(v14[0]) )
  {
    v6 = (unsigned int)(10000 * *((_DWORD *)v5 + 15));
    if ( v6 <= (unsigned int)KeMaximumIncrement )
      LODWORD(v7) = 0;
    else
      v7 = (v6 - (unsigned int)KeMaximumIncrement) / 0x2710;
    PpmPerfTimeWindow = v7;
    if ( !PpmPerfControlStartPolicyUpdate
      || (LODWORD(CurrentPrcb) = PpmPerfControlStartPolicyUpdate(), (int)CurrentPrcb >= 0) )
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
      v15[0] = 2097153;
      memset(&v15[1], 0, 0x104uLL);
      while ( (__int64 *)a2 != v8 )
      {
        KiOrAffinityEx((char *)(a2 + 24), v15, v15, HIWORD(v15[0]));
        for ( i = 0; i < *(_DWORD *)(a2 + 296); ++i )
        {
          v10 = *(_QWORD *)(a2 + 312) + 136LL * i;
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
      LOWORD(CurrentPrcb) = (_WORD)PpmPerfControlCompletePolicyUpdate;
      if ( PpmPerfControlCompletePolicyUpdate )
        LOWORD(CurrentPrcb) = PpmPerfControlCompletePolicyUpdate();
    }
  }
  return (__int16)CurrentPrcb;
}
