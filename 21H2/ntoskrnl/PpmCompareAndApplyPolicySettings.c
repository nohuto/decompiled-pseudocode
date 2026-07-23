/*
 * XREFs of PpmCompareAndApplyPolicySettings @ 0x1408F0920
 * Callers:
 *     PpmApplyProfile @ 0x1408F5C5C (PpmApplyProfile.c)
 *     PpmProfileAcDcUpdate @ 0x1408F61AC (PpmProfileAcDcUpdate.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PpmReleaseLock @ 0x1402CF3B0 (PpmReleaseLock.c)
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     PpmReapplyPerfPolicy @ 0x1407BAE90 (PpmReapplyPerfPolicy.c)
 *     PpmGetPolicyAction @ 0x1407C53A0 (PpmGetPolicyAction.c)
 *     PpmReapplyIdlePolicy @ 0x1408E2A4C (PpmReapplyIdlePolicy.c)
 */

char __fastcall PpmCompareAndApplyPolicySettings(__int64 *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r13
  unsigned int v11; // r15d
  __int64 v12; // rsi
  __int64 v13; // rbp
  unsigned int v14; // r12d
  __int64 v15; // r14
  char *v16; // r8
  unsigned __int64 v18; // [rsp+20h] [rbp-58h]
  int v19; // [rsp+80h] [rbp+8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+10h]
  __int64 v21; // [rsp+90h] [rbp+18h]
  __int64 v22; // [rsp+98h] [rbp+20h] BYREF

  v21 = a3;
  v20 = a2;
  v3 = 0;
  v19 = 0;
  LODWORD(v22) = 0;
  if ( PopHeteroSystem && PpmPerfSchedulerDirectedPerfStatesSupported )
  {
    v3 = 4098;
    v19 = 4098;
  }
  v4 = *a1;
  v22 = 0LL;
  v5 = 0LL;
  v6 = v4 & 0x1CFFFFD8030FC0LL;
  if ( v6 )
  {
    v7 = !_BitScanForward64((unsigned __int64 *)&v8, v6);
    if ( !v7 )
    {
      v9 = v21;
      do
      {
        v10 = 5 * v8;
        v18 = v6 & ~(1LL << v8);
        v11 = 0;
        v12 = v20;
        v13 = 1LL << *((_BYTE *)&PpmPolicyConfigTable + 40 * v8 + 36);
        v14 = ((*((_BYTE *)&PpmPolicyConfigTable + 40 * v8 + 37) & 4) != 0) + 1;
        do
        {
          v15 = LODWORD((&PpmPolicyConfigTable)[v10 + 4]);
          v16 = &(&PpmPolicyConfigTable)[v10 + 3][v11 * LODWORD((&PpmPolicyConfigTable)[v10 + 4])];
          if ( RtlCompareMemory(&v16[v12], &v16[v9], (unsigned int)v15) != v15 )
            v5 |= v13;
          ++v11;
        }
        while ( v11 < v14 );
        v6 = v18;
        v7 = !_BitScanForward64((unsigned __int64 *)&v8, v18);
        v22 = v5;
      }
      while ( !v7 );
      v3 = v19;
      if ( v5 )
      {
        PpmGetPolicyAction(&v22, &v19);
        v3 = v19;
      }
    }
  }
  if ( (v3 & 1) != 0 )
  {
    PpmReapplyIdlePolicy();
    v3 &= ~1u;
    v19 = v3;
  }
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  if ( (_WORD)v3 )
    return PpmReapplyPerfPolicy(&v19);
  else
    return PpmReleaseLock(&PpmPerfPolicyLock);
}
