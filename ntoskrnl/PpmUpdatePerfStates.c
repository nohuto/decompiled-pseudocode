/*
 * XREFs of PpmUpdatePerfStates @ 0x140983CC0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14075DE18 (PpmPerfUpdateDomainPolicy.c)
 *     PpmReinitializeHeteroEngine @ 0x140828C88 (PpmReinitializeHeteroEngine.c)
 */

void __fastcall PpmUpdatePerfStates(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r10
  char v4; // cl
  unsigned int v5; // r11d
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rax

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( a1[2] )
  {
    v2 = PpmPerfDomainHead;
    v3 = 0LL;
    v4 = 0;
    while ( (__int64 *)v2 != &PpmPerfDomainHead )
    {
      v5 = *(_DWORD *)(v2 + 296);
      v6 = 0LL;
      v3 = v2;
      if ( v5 )
      {
        v7 = *(_QWORD *)(v2 + 312);
        while ( !*(_DWORD *)(v7 + 144 * v6 + 16) || *(_DWORD *)(v7 + 144 * v6 + 20) != a1[1] )
        {
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= v5 )
            goto LABEL_8;
        }
        v4 = 1;
        break;
      }
LABEL_8:
      v2 = *(_QWORD *)v2;
    }
    v8 = v3 & -(__int64)(v4 != 0);
  }
  else
  {
    v8 = *(_QWORD *)(KeGetPrcb(a1[1]) + 33968);
  }
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 444) == *a1 )
    {
      PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      *(_DWORD *)(v8 + 444) = *a1;
      PpmPerfUpdateDomainPolicy(1);
    }
    if ( (unsigned int)PpmPerfDomainCount > 1 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      PpmReinitializeHeteroEngine(1, 0);
    }
  }
}
