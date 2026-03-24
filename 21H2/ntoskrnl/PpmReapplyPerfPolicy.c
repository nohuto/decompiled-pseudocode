/*
 * XREFs of PpmReapplyPerfPolicy @ 0x1407BA700
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x14067A000 (PpmSetProfilePolicySetting.c)
 *     PpmReinitializeHeteroEngine @ 0x1407B9AE8 (PpmReinitializeHeteroEngine.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408F07C0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1408F0AE0 (PpmPerfProcCapFloorSettingCallback.c)
 * Callees:
 *     PpmReleaseLock @ 0x14022AB00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140281A74 (PpmAcquireLock.c)
 *     PpmParkApplyPolicy @ 0x1403C1C84 (PpmParkApplyPolicy.c)
 *     PpmCheckApplyParkConstraints @ 0x1403C2048 (PpmCheckApplyParkConstraints.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14078B5DC (PpmPerfUpdateDomainPolicy.c)
 *     PpmUpdateProcessorPolicy @ 0x14078C8D0 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x1407B9B18 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x1407BA7E4 (PpmCheckReInit.c)
 *     PopInitializeHeteroProcessors @ 0x1407BAC0C (PopInitializeHeteroProcessors.c)
 *     PpmPerfResizeHistoryAll @ 0x1408E63A4 (PpmPerfResizeHistoryAll.c)
 */

char __fastcall PpmReapplyPerfPolicy(_DWORD *a1)
{
  _WORD *v1; // rbx
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  char v6; // si
  char v7; // di

  v1 = a1;
  if ( (*a1 & 0x1800) != 0 )
  {
    LOBYTE(a1) = (*a1 & 0x800) != 0;
    v2 = PopInitializeHeteroProcessors(a1);
    if ( (*(_DWORD *)v1 & 0x800) != 0 || v2 )
      *(_DWORD *)v1 |= 0x200Eu;
  }
  PpmUpdateProcessorPolicy(v1, 0LL);
  v5 = *(_DWORD *)v1;
  if ( (*(_DWORD *)v1 & 4) != 0 )
  {
    PpmParkApplyPolicy();
    v5 = *(_DWORD *)v1;
  }
  if ( (v5 & 0x10) != 0 )
  {
    PpmPerfResizeHistoryAll();
    v5 = *(_DWORD *)v1;
  }
  if ( (v5 & 8) != 0 )
  {
    PpmCheckReInit(v4, v3);
    v5 = *(_DWORD *)v1;
  }
  v6 = 0;
  v7 = 1;
  if ( (v5 & 2) != 0 )
  {
    v7 = 0;
    v6 = 1;
    PpmPerfUpdateDomainPolicy(0);
    v5 = *(_DWORD *)v1;
  }
  if ( (v5 & 4) != 0 )
  {
    if ( v6 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      v5 = *(_DWORD *)v1;
    }
    v7 = 0;
    if ( (v5 & 0x2000) != 0 )
    {
      LOBYTE(v5) = PpmCheckInitProcessors(1);
      return v5;
    }
    LOBYTE(v5) = PpmCheckApplyParkConstraints();
  }
  if ( v7 )
    LOBYTE(v5) = PpmReleaseLock(&PpmPerfPolicyLock);
  return v5;
}
