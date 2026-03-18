/*
 * XREFs of PpmUpdatePerfStates @ 0x14098EE60
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14069DDE8 (PpmPerfUpdateDomainPolicy.c)
 *     PpmReinitializeHeteroEngine @ 0x140848BE8 (PpmReinitializeHeteroEngine.c)
 */

void __fastcall PpmUpdatePerfStates(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r10
  char v4; // cl
  unsigned int v5; // r11d
  unsigned int v6; // r8d
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // rax

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( a1[2] )
  {
    v2 = PpmPerfDomainHead;
    v3 = 0LL;
    v4 = 0;
    while ( (__int64 *)v2 != &PpmPerfDomainHead )
    {
      v5 = *(_DWORD *)(v2 + 296);
      v6 = 0;
      v3 = v2;
      if ( v5 )
      {
        v7 = *(_QWORD *)(v2 + 312);
        while ( 1 )
        {
          v8 = 136LL * v6;
          if ( *(_DWORD *)(v8 + v7 + 16) )
          {
            if ( *(_DWORD *)(v8 + v7 + 20) == a1[1] )
              break;
          }
          if ( ++v6 >= v5 )
            goto LABEL_8;
        }
        v4 = 1;
        break;
      }
LABEL_8:
      v2 = *(_QWORD *)v2;
    }
    v9 = v3 & -(__int64)(v4 != 0);
  }
  else
  {
    v9 = *(_QWORD *)(KeGetPrcb(a1[1]) + 33968);
  }
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 444) == *a1 )
    {
      PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      *(_DWORD *)(v9 + 444) = *a1;
      PpmPerfUpdateDomainPolicy(1);
    }
    if ( (unsigned int)PpmPerfDomainCount > 1 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      PpmReinitializeHeteroEngine(1);
    }
  }
}
