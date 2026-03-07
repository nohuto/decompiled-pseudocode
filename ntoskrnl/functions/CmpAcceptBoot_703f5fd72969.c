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
