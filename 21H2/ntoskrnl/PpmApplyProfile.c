/*
 * XREFs of PpmApplyProfile @ 0x1408F5C5C
 * Callers:
 *     PdcPoPpmApplyProfile @ 0x1408EFA90 (PdcPoPpmApplyProfile.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PpmAcquireLock @ 0x14026FCB4 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PpmReleaseLock @ 0x1402CF3B0 (PpmReleaseLock.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408F0920 (PpmCompareAndApplyPolicySettings.c)
 *     PpmEventTraceProfileChange @ 0x1408F4118 (PpmEventTraceProfileChange.c)
 *     PpmEndProfileAccumulation @ 0x1408F5ECC (PpmEndProfileAccumulation.c)
 *     PpmPostProcessMediaBuffering @ 0x1408F5F88 (PpmPostProcessMediaBuffering.c)
 */

LONG __fastcall PpmApplyProfile(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v3; // rbx
  __int64 *v4; // rbp
  __int64 *v5; // rsi
  __int64 *v6; // rax
  LONG result; // eax
  __int64 v8; // rax
  __int64 *v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = dword_140C2332C;
  v3 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v4 = PpmCurrentProfile;
  v5 = PpmDefaultProfile;
  if ( a1 )
    v5 = a1;
  if ( v5 == (__int64 *)PpmLowPowerProfile )
  {
    v6 = v5;
    v5 = PpmDefaultProfile;
    if ( !PpmPerfMultimediaQosSupported )
      v5 = v6;
  }
  if ( PpmCurrentProfile == v5 )
  {
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    return PpmReleaseLock(&PpmPerfPolicyLock);
  }
  else
  {
    v8 = PpmEndProfileAccumulation(PpmCurrentProfile, MEMORY[0xFFFFF78000000008]);
    v10 = 2LL;
    *((_DWORD *)v5 + 7) |= 2u;
    *((_DWORD *)v4 + 7) &= ~2u;
    PpmCurrentProfile = v5;
    v11 = 0LL;
    v5[689] = v8;
    do
    {
      if ( v5 != v9 )
        v3 |= v5[342 * v1 + 5 + v11];
      if ( v4 != v9 )
        v3 |= v4[342 * v1 + 5 + v11];
      ++v11;
      --v10;
    }
    while ( v10 );
    v12 = v3 & 0x1CFFFFD8030FC0LL;
    PpmCompareAndApplyPolicySettings(&v12, (__int64)&v4[342 * v1 + 5], (__int64)&v5[342 * v1 + 5]);
    PpmEventTraceProfileChange((__int64)v4, (__int64)v5);
    result = PpmLowPowerProfile;
    if ( PpmLowPowerProfile )
    {
      if ( v4 == (__int64 *)PpmLowPowerProfile )
      {
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
        return PpmPostProcessMediaBuffering();
      }
    }
  }
  return result;
}
