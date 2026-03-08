/*
 * XREFs of KiPerformSoftParkElectionRound @ 0x14040B194
 * Callers:
 *     KiPerformMultiRoundSoftParkElection @ 0x14040B0E8 (KiPerformMultiRoundSoftParkElection.c)
 *     KiPerformSoftParkElection @ 0x14057BE58 (KiPerformSoftParkElection.c)
 * Callees:
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting @ 0x14040AF08 (Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting.c)
 *     KiPerformHeteroSoftParkElection @ 0x14057BD18 (KiPerformHeteroSoftParkElection.c)
 */

__int64 __fastcall KiPerformSoftParkElectionRound(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rsi
  unsigned int v10; // ecx
  unsigned __int8 *v11; // rdx
  unsigned __int8 v12; // r8

  v8 = 0;
  if ( (unsigned int)Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting() )
    v9 = *(_QWORD *)(a2 + 1680);
  else
    v9 = -1LL;
  if ( KeHeteroSystem && a2 != -784 )
  {
    a3 = KiPerformHeteroSoftParkElection(a1, (int)a2 + 784, a3, v9, a4);
    if ( a3 )
      goto LABEL_7;
    return 0xFFFFFFFFLL;
  }
  if ( (unsigned int)Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting() )
  {
    a3 &= v9;
    if ( !a3 )
      return 0xFFFFFFFFLL;
  }
LABEL_7:
  v10 = -1;
  v11 = (unsigned __int8 *)(a1 + 320);
  v12 = -1;
  do
  {
    if ( _bittest64(&a3, v8) && (v10 == -1 || *v11 < v12) )
    {
      v10 = v8;
      v12 = *v11;
    }
    ++v8;
    ++v11;
  }
  while ( v8 < 0x40 );
  return v10;
}
