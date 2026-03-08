/*
 * XREFs of CmpAdjustRequestedFileSize @ 0x140732C80
 * Callers:
 *     CmpDoFileSetSizeEx @ 0x140731FA4 (CmpDoFileSetSizeEx.c)
 * Callees:
 *     HvGetEffectiveLogSizeCapForHive @ 0x140730814 (HvGetEffectiveLogSizeCapForHive.c)
 */

unsigned __int64 __fastcall CmpAdjustRequestedFileSize(
        unsigned int *a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r10
  int v5; // r11d
  unsigned __int64 EffectiveLogSizeCapForHive; // r8
  char v7; // si

  v4 = a3;
  v5 = 0;
  EffectiveLogSizeCapForHive = 0LL;
  v7 = 0;
  if ( v4 == a4 )
    return a4;
  if ( a2 )
  {
    if ( (unsigned int)(a2 - 4) <= 1 || a2 == 1 )
      EffectiveLogSizeCapForHive = (unsigned int)HvGetEffectiveLogSizeCapForHive(a1);
  }
  else
  {
    EffectiveLogSizeCapForHive = 0x40000LL;
    if ( (a1[1028] & 0x80u) != 0 || !v4 && a4 <= 0x40000 )
      v7 = 1;
    v5 = v7 != 0 ? 4096 : 0x40000;
  }
  if ( !v4 || a4 > EffectiveLogSizeCapForHive || v4 >= a4 || v7 )
  {
    v4 = a4;
  }
  else
  {
    if ( !a2 )
      v5 = 4096;
    while ( 1 )
    {
      v4 *= 2LL;
      if ( v4 > EffectiveLogSizeCapForHive )
        break;
      if ( v4 >= a4 )
        goto LABEL_15;
    }
    v4 = EffectiveLogSizeCapForHive;
  }
LABEL_15:
  if ( v5 )
    return -v5 & (unsigned int)(v5 + v4 - 1);
  return v4;
}
