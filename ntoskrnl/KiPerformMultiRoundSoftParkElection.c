/*
 * XREFs of KiPerformMultiRoundSoftParkElection @ 0x14040B0E8
 * Callers:
 *     KiSoftParkElectionDpcRoutine @ 0x14057BEC0 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     KiPerformSoftParkElectionRound @ 0x14040B194 (KiPerformSoftParkElectionRound.c)
 */

__int64 __fastcall KiPerformMultiRoundSoftParkElection(__int64 a1, __int64 a2)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned __int64 v7; // r15
  __int64 i; // rbx
  int v9; // eax

  if ( !KeSoftParkedQueueThreshold )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 80);
  v6 = 0LL;
  v7 = *(_QWORD *)(a2 + 712) / (unsigned __int64)(unsigned int)KeSoftParkedQueueThreshold;
  for ( i = ~v5 & *(_QWORD *)(a1 + 96); i; i &= ~(1LL << v9) )
  {
    if ( !v7 )
      break;
    v9 = KiPerformSoftParkElectionRound(a1, a2, i, v5);
    if ( v9 == -1 )
      break;
    --v7;
    v6 |= 1LL << v9;
    v5 |= 1LL << v9;
  }
  return v6;
}
