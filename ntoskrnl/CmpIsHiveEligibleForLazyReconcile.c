/*
 * XREFs of CmpIsHiveEligibleForLazyReconcile @ 0x140732BD4
 * Callers:
 *     CmpDoReconcileNextHive @ 0x140732AC0 (CmpDoReconcileNextHive.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x140730814 (HvGetEffectiveLogSizeCapForHive.c)
 */

bool __fastcall CmpIsHiveEligibleForLazyReconcile(unsigned int *a1)
{
  unsigned int EffectiveLogSizeCapForHive; // eax
  unsigned int v3; // r10d
  __int64 v4; // r11
  int v5; // r9d
  unsigned int v6; // edx
  unsigned int v7; // eax
  _BYTE *v8; // r8
  unsigned __int64 UnbiasedInterruptTime; // rax
  __int64 v10; // r11

  if ( (a1[40] & 0x8001) != 0 || !a1[32] || CmpHoldLazyFlush )
    return 0;
  if ( !CmpUserPresent )
    return 1;
  EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive(a1);
  if ( *(_DWORD *)(v4 + 180) >= EffectiveLogSizeCapForHive )
    return 1;
  v5 = *(_DWORD *)(v4 + 168);
  v6 = v3;
  if ( v5 == 1 )
    return 1;
  v7 = v3;
  v8 = (_BYTE *)(v4 + 192);
  do
  {
    if ( v7 != v5 && *v8 == (_BYTE)v3 )
      ++v6;
    ++v7;
    ++v8;
  }
  while ( v7 < 2 );
  if ( !v6 )
    return 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  return UnbiasedInterruptTime >= *(_QWORD *)(v10 + 4144) + 10000000 * (unsigned __int64)(unsigned int)dword_140C02000;
}
