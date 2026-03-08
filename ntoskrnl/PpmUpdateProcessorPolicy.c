/*
 * XREFs of PpmUpdateProcessorPolicy @ 0x140826290
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1408261A0 (PpmReapplyPerfPolicy.c)
 *     PpmCheckInitProcessors @ 0x140827DA4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082802C (PpmRegisterPerfStates.c)
 *     PpmPerfReApplyStates @ 0x1409839D4 (PpmPerfReApplyStates.c)
 * Callees:
 *     KiOrAffinityEx @ 0x14022B190 (KiOrAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x140236D20 (PopExecuteOnTargetProcessors.c)
 *     PpmUpdateTargetProcessorPolicy @ 0x14038E1DC (PpmUpdateTargetProcessorPolicy.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int16 __fastcall PpmUpdateProcessorPolicy(_WORD *a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 *v5; // r14
  unsigned __int64 v6; // r8
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 *v10; // rsi
  unsigned int i; // ebx
  __int64 v12; // rdx
  _DWORD v14[4]; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v15[68]; // [rsp+30h] [rbp-D0h] BYREF

  v14[0] = 0;
  memset(&v15[2], 0, 0x100uLL);
  LOWORD(CurrentPrcb) = PpmAllowedActions & *a1;
  v5 = &PpmCurrentProfile[55 * dword_140C3D48C];
  LOWORD(v14[0]) = (_WORD)CurrentPrcb;
  if ( !a2 && (v14[0] & 0x400) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( _bittest64((const signed __int64 *)&CurrentPrcb->FeatureBits, 0x27u) )
    {
      v6 = __readmsr(0xDB0u);
      CurrentPrcb = (struct _KPRCB *)(v6 & 0xFFFFFFFFFFFFFFFEuLL);
      v7 = v6 | 1;
      if ( *((_BYTE *)v5 + 160) )
        CurrentPrcb = (struct _KPRCB *)v7;
      __writemsr(0xDB0u, (unsigned __int64)CurrentPrcb);
    }
  }
  v14[0] &= ~0x400u;
  if ( LOWORD(v14[0]) )
  {
    v8 = (unsigned int)(10000 * *((_DWORD *)v5 + 15));
    if ( v8 <= (unsigned int)KeMaximumIncrement )
      LODWORD(v9) = 0;
    else
      v9 = (v8 - (unsigned int)KeMaximumIncrement) / 0x2710;
    PpmPerfTimeWindow = v9;
    if ( !PpmPerfControlStartPolicyUpdate
      || (LODWORD(CurrentPrcb) = PpmPerfControlStartPolicyUpdate(), (int)CurrentPrcb >= 0) )
    {
      if ( a2 )
      {
        v10 = *(__int64 **)a2;
      }
      else
      {
        a2 = PpmPerfDomainHead;
        v10 = &PpmPerfDomainHead;
      }
      v15[0] = 2097153;
      memset(&v15[1], 0, 0x104uLL);
      while ( (__int64 *)a2 != v10 )
      {
        KiOrAffinityEx((char *)(a2 + 24), v15, v15, HIWORD(v15[0]));
        for ( i = 0; i < *(_DWORD *)(a2 + 296); ++i )
        {
          v12 = *(_QWORD *)(a2 + 312) + 144LL * i;
          if ( !*(_DWORD *)(v12 + 16) )
            PpmUpdateTargetProcessorPolicy(a2, (_QWORD *)v12, v14, (__int64)(v5 + 5));
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
