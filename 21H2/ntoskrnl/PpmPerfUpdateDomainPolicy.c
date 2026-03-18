/*
 * XREFs of PpmPerfUpdateDomainPolicy @ 0x14069DDE8
 * Callers:
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x14069DD40 (PopPowerRequestCallbackPerfBoostRequired.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PpmRegisterPerfStates @ 0x140848C18 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x140849940 (PpmReapplyPerfPolicy.c)
 *     PpmUpdatePerfStates @ 0x14098EE60 (PpmUpdatePerfStates.c)
 * Callees:
 *     PpmPerfUpdateQosDisableReasons @ 0x1402246C0 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmCheckCustomRun @ 0x14022475C (PpmCheckCustomRun.c)
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x140224EDC (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x140224F04 (PpmPerfCalculateQosClassPolicies.c)
 *     PpmEventQosSupport @ 0x14069DFF4 (PpmEventQosSupport.c)
 */

void __fastcall PpmPerfUpdateDomainPolicy(char a1)
{
  __int64 v1; // rbx
  char v2; // bp
  char v3; // r15
  char v4; // r14
  char v5; // di
  int v6; // esi
  unsigned int v7; // edx
  int *v8; // r8
  char v9; // r9
  __int64 v10; // r10
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  char updated; // al
  int v15; // eax
  int v17; // [rsp+68h] [rbp+10h] BYREF

  v1 = PpmPerfDomainHead;
  v2 = a1;
  v3 = 0;
  v4 = 0;
  if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
  {
    if ( PpmPerfVmQosSupported )
    {
      v5 = 1;
      v15 = 0;
    }
    else
    {
      v5 = 0;
      v15 = 128;
    }
    v17 = v15;
  }
  else
  {
    v5 = 0;
    v17 = 0;
    v6 = 0;
    do
    {
      if ( PpmPerfCalculateQosClassPolicies(v1) )
        v3 = 1;
      if ( (*(_BYTE *)(v1 + 700) & 0xF) == 0 )
        v4 = 1;
      if ( *(_BYTE *)(v1 + 724) )
      {
        v5 = 1;
      }
      else
      {
        v7 = 0;
        v8 = (int *)(v1 + 692);
        v9 = 1;
        v10 = 5LL;
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
    v17 = v6;
  }
  updated = PpmPerfUpdateQosDisableReasons(&v17);
  PpmPerfMultimediaQosSupported = v4;
  if ( v5 != PpmPerfQosEnabled )
  {
    PpmPerfQosEnabled = v5;
    v2 = 1;
    goto LABEL_19;
  }
  if ( updated )
LABEL_19:
    PpmEventQosSupport(0LL);
  if ( v3 || v2 )
  {
    PpmPerfSetAllDomainsToUpdate();
    PpmCheckCustomRun((v2 != 0) + 1);
  }
  else
  {
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
}
