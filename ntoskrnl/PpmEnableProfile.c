/*
 * XREFs of PpmEnableProfile @ 0x140825808
 * Callers:
 *     PdcPoPpmResetProfile @ 0x1409949D0 (PdcPoPpmResetProfile.c)
 *     PpmRegisterSpmSettings @ 0x14099A640 (PpmRegisterSpmSettings.c)
 *     PpmInitPolicyConfiguration @ 0x140B5CAC0 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PpmEventTraceProfileEnable @ 0x140825884 (PpmEventTraceProfileEnable.c)
 *     PpmReinitializeHeteroEngine @ 0x140828C88 (PpmReinitializeHeteroEngine.c)
 */

__int64 __fastcall PpmEnableProfile(__int64 a1)
{
  __int64 **v1; // rdi
  char v2; // bp
  __int64 v4; // rsi
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rax

  *(_DWORD *)(a1 + 28) |= 1u;
  v1 = &off_140C07388;
  v2 = *(_BYTE *)(a1 + 8);
  v4 = 6LL;
  do
  {
    v5 = *(v1 - 1);
    v6 = *(_QWORD *)(a1 + 12) - *v5;
    if ( !v6 )
      v6 = *(_QWORD *)(a1 + 20) - v5[1];
    if ( !v6 )
    {
      **v1 = a1;
      v8 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
      if ( !v8 )
        v8 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
      if ( v8 )
      {
        LOBYTE(v6) = 1;
        PpmReinitializeHeteroEngine(v6, 0LL);
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      }
    }
    v1 += 2;
    --v4;
  }
  while ( v4 );
  LOBYTE(v5) = 1;
  LOBYTE(v6) = v2;
  return PpmEventTraceProfileEnable(v6, v5);
}
