/*
 * XREFs of PpmCompareAndApplyPolicySettings @ 0x14098FE4C
 * Callers:
 *     PpmApplyProfile @ 0x14099A040 (PpmApplyProfile.c)
 *     PpmProfileAcDcUpdate @ 0x14099A59C (PpmProfileAcDcUpdate.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     PpmReapplyPerfPolicy @ 0x1408261A0 (PpmReapplyPerfPolicy.c)
 *     PpmGetPolicyAction @ 0x1408264A4 (PpmGetPolicyAction.c)
 *     PpmReapplyIdlePolicy @ 0x14097FAC4 (PpmReapplyIdlePolicy.c)
 */

void __fastcall PpmCompareAndApplyPolicySettings(__int64 *a1, __int64 a2, __int64 a3)
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
  unsigned __int64 v17; // [rsp+20h] [rbp-58h]
  int v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+88h] [rbp+10h]
  __int64 v20; // [rsp+90h] [rbp+18h]
  __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  v20 = a3;
  v19 = a2;
  v3 = 0;
  v18 = 0;
  LODWORD(v21) = 0;
  if ( PopHeteroSystem && PpmPerfSchedulerDirectedPerfStatesSupported )
  {
    v3 = 4098;
    v18 = 4098;
  }
  v4 = *a1;
  v21 = 0LL;
  v5 = 0LL;
  v6 = v4 & 0x3FFCFFFFD8034FC0LL;
  if ( v6 )
  {
    v7 = !_BitScanForward64((unsigned __int64 *)&v8, v6);
    if ( !v7 )
    {
      v9 = v20;
      do
      {
        v10 = 5 * v8;
        v17 = v6 & ~(1LL << v8);
        v11 = 0;
        v12 = v19;
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
        v6 = v17;
        v7 = !_BitScanForward64((unsigned __int64 *)&v8, v17);
        v21 = v5;
      }
      while ( !v7 );
      v3 = v18;
      if ( v5 )
      {
        PpmGetPolicyAction(&v21, &v18);
        v3 = v18;
      }
    }
  }
  if ( (v3 & 1) != 0 )
  {
    PpmReapplyIdlePolicy();
    v3 &= ~1u;
    v18 = v3;
  }
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  if ( (_WORD)v3 )
    PpmReapplyPerfPolicy(&v18);
  else
    PpmReleaseLock(&PpmPerfPolicyLock);
}
