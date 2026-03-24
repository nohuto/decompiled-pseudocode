/*
 * XREFs of PpmPerfUpdateDomainPolicy @ 0x14078B5DC
 * Callers:
 *     PopPowerInformationInternal @ 0x140678DF4 (PopPowerInformationInternal.c)
 *     PopPerfBoostPowerRequest @ 0x14078B530 (PopPerfBoostPowerRequest.c)
 *     PpmRegisterPerfStates @ 0x1407B9CE0 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1407BA700 (PpmReapplyPerfPolicy.c)
 *     PpmUpdatePerfStates @ 0x1408E6590 (PpmUpdatePerfStates.c)
 * Callees:
 *     PpmReleaseLock @ 0x14022AB00 (PpmReleaseLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x1402D2004 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmCheckCustomRun @ 0x14037D0D8 (PpmCheckCustomRun.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x140381028 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x1403A2DEC (PpmPerfCalculateQosClassPolicies.c)
 *     PpmEventQosSupport @ 0x14078B750 (PpmEventQosSupport.c)
 */

char __fastcall PpmPerfUpdateDomainPolicy(char a1)
{
  __int64 v1; // rbx
  char v2; // bp
  char v3; // r14
  char v4; // r15
  char v5; // di
  int v6; // esi
  unsigned int v7; // edx
  int *v8; // r8
  char v9; // r9
  __int64 v10; // r10
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  bool v14; // cl
  int v16; // eax
  int v18; // [rsp+68h] [rbp+10h] BYREF

  v1 = PpmPerfDomainHead;
  v2 = a1;
  v3 = 0;
  v4 = 0;
  if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
  {
    if ( PpmPerfVmQosSupported )
    {
      v5 = 1;
      v16 = 0;
    }
    else
    {
      v5 = 0;
      v16 = 128;
    }
    v18 = v16;
  }
  else
  {
    v5 = 0;
    v18 = 0;
    v6 = 0;
    do
    {
      if ( PpmPerfCalculateQosClassPolicies(v1) )
        v3 = 1;
      if ( (*(_BYTE *)(v1 + 528) & 0xF) == 0 )
        v4 = 1;
      if ( *(_BYTE *)(v1 + 546) )
      {
        v5 = 1;
      }
      else
      {
        v7 = 0;
        v8 = (int *)(v1 + 520);
        v9 = 1;
        v10 = 4LL;
        do
        {
          v11 = *v8;
          v12 = *v8++;
          v7 |= v11;
          v9 = (v12 & 2) != 0 ? v9 : 0;
          --v10;
        }
        while ( v10 );
        v13 = v7 & 0xFFFFFFFD;
        if ( v9 )
          v13 = v7;
        v6 |= v13;
      }
      v1 = *(_QWORD *)v1;
    }
    while ( (__int64 *)v1 != &PpmPerfDomainHead );
    v2 = a1;
    if ( v5 )
      v6 = 0;
    v18 = v6;
  }
  v14 = PpmPerfUpdateQosDisableReasons(&v18) != 0;
  if ( v5 != PpmPerfQosEnabled )
  {
    PpmPerfQosEnabled = v5;
    v2 = 1;
    v14 = 1;
  }
  PpmPerfMultimediaQosSupported = v4;
  if ( v14 )
    PpmEventQosSupport(0LL);
  if ( !v3 && !v2 )
    return PpmReleaseLock(&PpmPerfPolicyLock);
  PpmPerfSetAllDomainsToUpdate();
  return PpmCheckCustomRun((v2 != 0) + 1);
}
