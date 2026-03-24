/*
 * XREFs of HvTruncateAllLogFilesIfRequired @ 0x140724BD8
 * Callers:
 *     CmpFlushHive @ 0x14062A4F8 (CmpFlushHive.c)
 * Callees:
 *     HvGetEffectiveLogSizeCapForHive @ 0x1407239C0 (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140723A2C (HvpLogTypeToLogArrayIndex.c)
 *     CmpDoFileSetSizeEx @ 0x140723DD0 (CmpDoFileSetSizeEx.c)
 */

__int64 __fastcall HvTruncateAllLogFilesIfRequired(unsigned int *a1)
{
  unsigned int EffectiveLogSizeCapForHive; // eax
  __int64 v3; // r11
  __int64 result; // rax
  __int64 v5; // r11
  __int64 v6; // r11
  unsigned int v7; // edx

  if ( a1[41] == 1 )
  {
    HvpLogTypeToLogArrayIndex(1);
    result = HvGetEffectiveLogSizeCapForHive(a1);
    if ( *(_QWORD *)&a1[2 * v6 + 450] <= (unsigned __int64)(unsigned int)result )
      return result;
    v7 = 1;
    return CmpDoFileSetSizeEx((__int64)a1, v7, 0LL, 0);
  }
  HvpLogTypeToLogArrayIndex(4);
  EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive(a1);
  if ( *(_QWORD *)&a1[2 * v3 + 450] > (unsigned __int64)EffectiveLogSizeCapForHive )
    CmpDoFileSetSizeEx((__int64)a1, 4u, 0LL, 0);
  HvpLogTypeToLogArrayIndex(5);
  result = HvGetEffectiveLogSizeCapForHive(a1);
  if ( *(_QWORD *)&a1[2 * v5 + 450] > (unsigned __int64)(unsigned int)result )
  {
    v7 = 5;
    return CmpDoFileSetSizeEx((__int64)a1, v7, 0LL, 0);
  }
  return result;
}
