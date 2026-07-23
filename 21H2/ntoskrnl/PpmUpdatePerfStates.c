/*
 * XREFs of PpmUpdatePerfStates @ 0x1408E66F0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14026FCB4 (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x1402CF3B0 (PpmReleaseLock.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14078B79C (PpmPerfUpdateDomainPolicy.c)
 *     PpmReinitializeHeteroEngine @ 0x1407BA278 (PpmReinitializeHeteroEngine.c)
 */

char __fastcall PpmUpdatePerfStates(_DWORD *a1)
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
      v5 = *(_DWORD *)(v2 + 200);
      v6 = 0;
      v3 = v2;
      if ( v5 )
      {
        v7 = *(_QWORD *)(v2 + 216);
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
    v9 = *(_QWORD *)(KeGetPrcb(a1[1]) + 33128);
  }
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 320) == *a1 )
    {
      LOBYTE(v9) = PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      *(_DWORD *)(v9 + 320) = *a1;
      LOBYTE(v9) = PpmPerfUpdateDomainPolicy(1);
    }
    if ( (unsigned int)PpmPerfDomainCount > 1 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      LOBYTE(v9) = PpmReinitializeHeteroEngine(1);
    }
  }
  return v9;
}
