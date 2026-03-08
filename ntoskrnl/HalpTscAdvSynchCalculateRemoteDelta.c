/*
 * XREFs of HalpTscAdvSynchCalculateRemoteDelta @ 0x14038829C
 * Callers:
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x140388048 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 *     HalpTscAdvSynchToLeader @ 0x140388164 (HalpTscAdvSynchToLeader.c)
 *     HalpTscAdvSynchToTarget @ 0x140507F18 (HalpTscAdvSynchToTarget.c)
 * Callees:
 *     HalpTscAdvSynchComputeMinimumDeltaAlternate @ 0x140388478 (HalpTscAdvSynchComputeMinimumDeltaAlternate.c)
 */

__int64 __fastcall HalpTscAdvSynchCalculateRemoteDelta(unsigned int a1, _DWORD *a2)
{
  unsigned __int64 v3; // rbx
  unsigned int Number; // r8d
  unsigned __int64 v5; // r9
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = (unsigned __int64)a1 << 7;
  Number = KeGetCurrentPrcb()->Number;
  v5 = (unsigned __int64)Number << 7;
  v6 = *(_QWORD **)(v3 + TscRequest + 16);
  *(_DWORD *)(v3 + TscRequest + 4) = Number;
  *v6 = 0LL;
  **(_QWORD **)(v5 + TscRequest + 16) = -1LL;
  _InterlockedExchange((volatile __int32 *)(v3 + TscRequest), 4);
  while ( *(_DWORD *)(v3 + TscRequest) == 4 )
    _mm_pause();
  v7 = HalpTscAdvSynchComputeMinimumDeltaAlternate(*(_QWORD *)(v5 + TscRequest + 16), *(_QWORD *)(v3 + TscRequest + 16));
  while ( *(_DWORD *)(v3 + TscRequest) )
    _mm_pause();
  _InterlockedOr(v10, 0);
  v8 = *(_QWORD *)(v3 + TscRequest + 8);
  if ( a2 )
    *a2 = v7 + v8;
  return (v8 - v7) / 2;
}
