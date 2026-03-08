/*
 * XREFs of PopPepPromoteActivities @ 0x140307780
 * Callers:
 *     PopPepUpdateConstraints @ 0x1402B9328 (PopPepUpdateConstraints.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402E9500 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetLatency @ 0x1402EE890 (PopPepComponentSetLatency.c)
 *     PopPepTryPowerDownDevice @ 0x1403050D0 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x140307424 (PopPepProcessEvent.c)
 *     PopPepComponentSetResidency @ 0x1403AE9C4 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x14059C820 (PopPepComponentSetWakeHint.c)
 *     PopPepSurprisePowerOn @ 0x14059D930 (PopPepSurprisePowerOn.c)
 * Callees:
 *     PopPepAttemptAcitivityPromotion @ 0x140307A08 (PopPepAttemptAcitivityPromotion.c)
 */

void __fastcall PopPepPromoteActivities(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  __int64 v4; // rsi
  _DWORD *v6; // r8
  unsigned int v7; // r14d
  unsigned int v8; // ebp
  int v9; // ebx
  __int64 v10; // rdi
  _DWORD *v11; // r8
  _QWORD *v12; // rdi
  int i; // ebx

  if ( !a3 )
    return;
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
  }
  else
  {
    v8 = 0;
    if ( v3 != 3 )
      v8 = *(_DWORD *)(a1 + 180);
    v7 = *(_DWORD *)(a1 + 180) - 1;
    if ( v3 != 3 )
      v7 = 0;
    if ( v8 > v7 )
      goto LABEL_17;
  }
  do
  {
    v9 = 1;
    v10 = 64LL;
    v4 = 208LL * v8 + a1 + 192;
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
LABEL_17:
  v12 = (_QWORD *)(a1 + 104);
  for ( i = 4; i <= 5; ++i )
  {
    if ( (*(_DWORD *)*v12 & 1) != 0 )
      PopPepAttemptAcitivityPromotion(a1, v4, *v12, i, a1 + 120);
    ++v12;
  }
}
