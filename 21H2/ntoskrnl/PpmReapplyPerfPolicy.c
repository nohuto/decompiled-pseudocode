/*
 * XREFs of PpmReapplyPerfPolicy @ 0x140849940
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1407FCE7C (PpmSetProfilePolicySetting.c)
 *     PpmReinitializeHeteroEngine @ 0x140848BE8 (PpmReinitializeHeteroEngine.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14099788C (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x140997BA0 (PpmPerfProcCapFloorSettingCallback.c)
 * Callees:
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PpmParkApplyPolicy @ 0x1403CEDC4 (PpmParkApplyPolicy.c)
 *     PpmCheckApplyParkConstraints @ 0x1403CF1A0 (PpmCheckApplyParkConstraints.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14069DDE8 (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckReInit @ 0x14081A3AC (PpmCheckReInit.c)
 *     PpmUpdateProcessorPolicy @ 0x14081ACB4 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x140849690 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x140849B04 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResizeHistoryAll @ 0x14098EC78 (PpmPerfResizeHistoryAll.c)
 */

void __fastcall PpmReapplyPerfPolicy(_DWORD *a1)
{
  char v1; // bp
  _WORD *v2; // rbx
  char v3; // al
  int v4; // eax
  char v5; // si
  char v6; // di

  v1 = 0;
  v2 = a1;
  if ( (*a1 & 0x1800) != 0 )
  {
    LOBYTE(a1) = (*a1 & 0x800) != 0;
    v3 = PopInitializeHeteroProcessors(a1);
    if ( (*(_DWORD *)v2 & 0x800) != 0 || v3 )
    {
      v1 = 1;
      *(_DWORD *)v2 |= 0x200Eu;
    }
  }
  PpmUpdateProcessorPolicy(v2, 0LL);
  v4 = *(_DWORD *)v2;
  if ( (*(_DWORD *)v2 & 4) != 0 )
  {
    PpmParkApplyPolicy();
    v4 = *(_DWORD *)v2;
  }
  if ( (v4 & 0x10) != 0 )
  {
    PpmPerfResizeHistoryAll();
    v4 = *(_DWORD *)v2;
  }
  if ( (v4 & 8) != 0 )
  {
    PpmCheckReInit();
    v4 = *(_DWORD *)v2;
  }
  v5 = 0;
  v6 = 1;
  if ( (v4 & 2) != 0 )
  {
    v6 = 0;
    v5 = 1;
    PpmPerfUpdateDomainPolicy(v1);
    v4 = *(_DWORD *)v2;
  }
  if ( (v4 & 4) != 0 )
  {
    if ( v5 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      v4 = *(_DWORD *)v2;
    }
    if ( (v4 & 0x2000) != 0 )
      PpmCheckInitProcessors(1);
    else
      PpmCheckApplyParkConstraints();
  }
  else if ( v6 )
  {
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
}
