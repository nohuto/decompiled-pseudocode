/*
 * XREFs of PpmIdleCheckCoordinatedStateEligibility @ 0x140582574
 * Callers:
 *     PpmIdleSelectStates @ 0x1403B2150 (PpmIdleSelectStates.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1405821CC (PpmIdleCheckCoordinatedDependency.c)
 * Callees:
 *     PpmIdleWaitForDependentTransitions @ 0x140235F24 (PpmIdleWaitForDependentTransitions.c)
 *     KeIsSubsetAffinityEx @ 0x1402B13D0 (KeIsSubsetAffinityEx.c)
 *     PpmCheckIdleVeto @ 0x140581B28 (PpmCheckIdleVeto.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x14058205C (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x140582F8C (PpmIdleRollbackCoordinatedSelection.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedStateEligibility(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        int a7,
        _DWORD *a8,
        __int64 a9,
        _QWORD *a10)
{
  unsigned int v10; // ebx
  __int64 v11; // rbp
  __int64 v12; // rdx
  _QWORD *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rbx
  unsigned int v18; // eax
  unsigned __int64 v19; // r9
  __int64 v20; // r10
  int v21; // r11d
  _DWORD *v22; // r12
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rdx
  __int64 v26; // [rsp+60h] [rbp-58h]
  unsigned __int64 v27; // [rsp+C0h] [rbp+8h] BYREF
  int v28; // [rsp+C8h] [rbp+10h]
  unsigned int v29; // [rsp+D0h] [rbp+18h]
  __int64 v30; // [rsp+D8h] [rbp+20h]

  v30 = a4;
  v29 = a3;
  v28 = a2;
  v10 = a6;
  v11 = a9;
  v12 = *(_QWORD *)(a1 + 33600);
  v14 = a10;
  v15 = PpmPlatformStates;
  v16 = 448LL * a6;
  v27 = 0LL;
  v26 = v12 + 344;
  a6 = *(_DWORD *)(a9 + 4);
  if ( a10 )
    *a10 = -1LL;
  if ( *(_BYTE *)(v16 + v15 + 121) )
  {
    if ( !*(_BYTE *)(v12 + 740) )
    {
      v17 = *(_BYTE *)(a1 + 33) != 0 ? 0xFFFFFFFFLL : 2147483660LL;
LABEL_32:
      PpmIdleRollbackCoordinatedSelection(v11, a6, a3);
      return v17;
    }
  }
  else
  {
    if ( !(unsigned int)KeIsSubsetAffinityEx((unsigned __int16 *)(v16 + v15 + 128), (unsigned __int16 *)(v12 + 776)) )
    {
LABEL_7:
      v17 = 0xFFFFFFFFLL;
      goto LABEL_32;
    }
    a3 = v29;
  }
  if ( _InterlockedCompareExchange(
         (volatile signed __int32 *)(v16 + v15 + 416),
         (a7 << 27) | KeGetPcr()->Prcb.Number & 0xFFF | 0x1000000,
         0) )
  {
    goto LABEL_7;
  }
  *(_DWORD *)(*(_QWORD *)(v11 + 16) + 4LL * (unsigned int)(*(_DWORD *)(v11 + 4))++) = v10;
  v18 = PpmCheckIdleVeto(v16 + v15 + 80);
  if ( v18 )
  {
    v17 = v18 | 0x100000000LL;
    goto LABEL_32;
  }
  if ( *(_DWORD *)(v16 + v15 + 72) > (unsigned int)a3 )
  {
    v17 = 2147483650LL;
    goto LABEL_32;
  }
  if ( *(_DWORD *)(v16 + v15 + 448) )
    goto LABEL_31;
  if ( *(unsigned int *)(v16 + v15 + 76) > v19 )
  {
    v17 = 2147483651LL;
    goto LABEL_32;
  }
  v22 = a8;
  v23 = a5;
  v17 = PpmIdleCheckCoordinatedDependencies(
          a1,
          v21,
          a7,
          (int)a3 - *(_DWORD *)(v16 + v15 + 72),
          v19,
          a5,
          *(_DWORD *)(v16 + v15 + 124),
          *(_QWORD *)(v16 + v15 + 408),
          (__int64)a8,
          v11,
          v20,
          &v27);
  if ( v17 )
    goto LABEL_32;
  if ( v27 != -1LL )
  {
    if ( v23 <= v27 )
      v24 = v27 - v23;
    else
      v24 = 0LL;
    if ( *(unsigned int *)(v16 + v15 + 76) > v24 )
    {
      v17 = 2147483662LL;
      goto LABEL_32;
    }
    if ( v14 )
      *v14 = v27;
  }
  if ( *v22 == -1 )
  {
    v17 = 2147483649LL;
    goto LABEL_32;
  }
  if ( (int)PpmIdleWaitForDependentTransitions(v26) < 0 )
  {
    v17 = 2147483653LL;
    goto LABEL_32;
  }
  if ( *(_DWORD *)(v16 + v15 + 448) )
  {
LABEL_31:
    v17 = 2147483652LL;
    goto LABEL_32;
  }
  return v17;
}
