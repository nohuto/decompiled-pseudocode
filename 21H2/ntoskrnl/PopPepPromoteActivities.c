/*
 * XREFs of PopPepPromoteActivities @ 0x1402832F8
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x1402828E0 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x140282F54 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x14038BCE8 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x1403A06BC (PopPepUpdateConstraints.c)
 *     PopPepComponentSetLatency @ 0x1405744DC (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1405745C8 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405746C0 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x140574C30 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopPepAttemptAcitivityPromotion @ 0x1402834B8 (PopPepAttemptAcitivityPromotion.c)
 */

__int64 __fastcall PopPepPromoteActivities(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  __int64 v4; // rbp
  _DWORD *v6; // r8
  unsigned int v7; // ebx
  unsigned int v8; // edi
  int v9; // r14d
  __int64 v10; // r15
  _DWORD *v11; // r8
  int v12; // ebx
  _QWORD *v13; // rdi
  __int64 result; // rax

  if ( !a3 )
    return result;
  v3 = a3;
  v4 = a2;
  if ( !a2 && a3 == 2 )
    v3 = 1;
  v6 = *(_DWORD **)(a1 + 72);
  if ( (*v6 & 1) != 0 )
    PopPepAttemptAcitivityPromotion(a1, a2, (_DWORD)v6, 0, a1 + 120);
  if ( v3 == 2 )
  {
    v7 = *(_DWORD *)(v4 + 8);
    v8 = v7;
    do
    {
LABEL_9:
      v9 = 1;
      v10 = 64LL;
      v4 = 200LL * v8 + a1 + 184;
      do
      {
        v11 = *(_DWORD **)(v10 + v4);
        if ( (*v11 & 1) != 0 )
          PopPepAttemptAcitivityPromotion(a1, v4, (_DWORD)v11, v9, v4 + 104);
        ++v9;
        v10 += 8LL;
      }
      while ( v9 <= 3 );
      ++v8;
    }
    while ( v8 <= v7 );
    goto LABEL_14;
  }
  v8 = *(_DWORD *)(a1 + 180);
  if ( v3 == 3 )
  {
    v7 = v8 - 1;
    v8 = 0;
    goto LABEL_9;
  }
  v7 = 0;
  if ( !v8 )
    goto LABEL_9;
LABEL_14:
  v12 = 4;
  v13 = (_QWORD *)(a1 + 104);
  do
  {
    result = *(unsigned int *)*v13;
    if ( (result & 1) != 0 )
      result = PopPepAttemptAcitivityPromotion(a1, v4, *v13, v12, a1 + 120);
    ++v12;
    ++v13;
  }
  while ( v12 <= 5 );
  return result;
}
