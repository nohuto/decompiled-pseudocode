/*
 * XREFs of CmpAcceptBoot @ 0x14078D470
 * Callers:
 *     NtInitializeRegistry @ 0x14078D400 (NtInitializeRegistry.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     KvfCommitFeatureStates @ 0x1403A5BDC (KvfCommitFeatureStates.c)
 *     KeCommitSmtState @ 0x1403CD23C (KeCommitSmtState.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpUpdatePhaseAccessBit @ 0x1407CEE5C (CmpUpdatePhaseAccessBit.c)
 *     CmpSaveBootControlSet @ 0x140867AD0 (CmpSaveBootControlSet.c)
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
        off_140C00AF8[0]();
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
