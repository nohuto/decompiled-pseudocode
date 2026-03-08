/*
 * XREFs of PpmReapplyPerfPolicy @ 0x1408261A0
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x140825A60 (PpmSetProfilePolicySetting.c)
 *     PpmReinitializeHeteroEngine @ 0x140828C88 (PpmReinitializeHeteroEngine.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14098FE4C (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x140990170 (PpmPerfProcCapFloorSettingCallback.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PpmParkApplyPolicy @ 0x14038E5E0 (PpmParkApplyPolicy.c)
 *     PpmCheckApplyParkConstraints @ 0x14038F03C (PpmCheckApplyParkConstraints.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14075DE18 (PpmPerfUpdateDomainPolicy.c)
 *     PpmUpdateProcessorPolicy @ 0x140826290 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckReInit @ 0x1408265CC (PpmCheckReInit.c)
 *     PopInitializeHeteroProcessors @ 0x140826970 (PopInitializeHeteroProcessors.c)
 *     PpmCheckInitProcessors @ 0x140827DA4 (PpmCheckInitProcessors.c)
 *     PpmPerfResizeHistoryAll @ 0x140983ACC (PpmPerfResizeHistoryAll.c)
 */

void __fastcall PpmReapplyPerfPolicy(_DWORD *a1)
{
  char v1; // bp
  _DWORD *v2; // rbx
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // si
  char v7; // di

  v1 = 0;
  v2 = a1;
  if ( (*a1 & 0x1800) != 0 )
  {
    LOBYTE(a1) = (*a1 & 0x800) != 0;
    v3 = PopInitializeHeteroProcessors(a1);
    if ( (*v2 & 0x800) != 0 || v3 )
    {
      v1 = 1;
      *v2 |= 0x200Eu;
    }
  }
  PpmUpdateProcessorPolicy(v2, 0LL);
  if ( (*v2 & 4) != 0 )
    PpmParkApplyPolicy(v5);
  if ( (*v2 & 0x10) != 0 )
    PpmPerfResizeHistoryAll();
  if ( (*v2 & 8) != 0 )
    PpmCheckReInit(v5, v4);
  v6 = 0;
  v7 = 1;
  if ( (*v2 & 2) != 0 )
  {
    v7 = 0;
    v6 = 1;
    PpmPerfUpdateDomainPolicy(v1);
  }
  if ( (*v2 & 4) != 0 )
  {
    if ( v6 )
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    if ( (*v2 & 0x2000) != 0 )
      PpmCheckInitProcessors(1LL, (*v2 >> 14) & 1);
    else
      PpmCheckApplyParkConstraints();
  }
  else if ( v7 )
  {
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
}
