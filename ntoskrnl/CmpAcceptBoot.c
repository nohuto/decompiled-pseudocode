/*
 * XREFs of CmpAcceptBoot @ 0x14079A058
 * Callers:
 *     NtInitializeRegistry @ 0x140799FB0 (NtInitializeRegistry.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     KvfCommitFeatureStates @ 0x14030098C (KvfCommitFeatureStates.c)
 *     KeCommitSmtState @ 0x1403ADB24 (KeCommitSmtState.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     CmpUpdatePhaseAccessBit @ 0x14085A0A4 (CmpUpdatePhaseAccessBit.c)
 *     CmpSaveBootControlSet @ 0x140A078D8 (CmpSaveBootControlSet.c)
 */

__int64 __fastcall CmpAcceptBoot(__int16 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned __int16 v6; // di

  KvfCommitFeatureStates();
  v4 = 0;
  if ( !PsIsCurrentThreadInServerSilo(v3, v2) )
  {
    if ( _InterlockedExchange(&CmBootAcceptFirstTime, 0) )
    {
      v6 = a1 - 4096;
      if ( v6 )
      {
        KeCommitSmtState();
        if ( CmpLKGEnabled )
          v4 = CmpSaveBootControlSet(v6);
        off_140C02178[0]();
        CmpUpdatePhaseAccessBit();
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      return (unsigned int)-1073741790;
    }
  }
  return v4;
}
