/*
 * XREFs of HvTruncateAllLogFilesIfRequired @ 0x1407320E4
 * Callers:
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 * Callees:
 *     HvGetEffectiveLogSizeCapForHive @ 0x140730814 (HvGetEffectiveLogSizeCapForHive.c)
 *     CmpDoFileSetSizeEx @ 0x140731FA4 (CmpDoFileSetSizeEx.c)
 */

__int64 __fastcall HvTruncateAllLogFilesIfRequired(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edx

  if ( *(_DWORD *)(a1 + 168) == 1 )
  {
    result = HvGetEffectiveLogSizeCapForHive((unsigned int *)a1);
    if ( *(_QWORD *)(a1 + 1808) <= (unsigned __int64)(unsigned int)result )
      return result;
    v3 = 1;
    return CmpDoFileSetSizeEx(a1, v3, 0LL, 0);
  }
  if ( *(_QWORD *)(a1 + 1808) > (unsigned __int64)(unsigned int)HvGetEffectiveLogSizeCapForHive((unsigned int *)a1) )
    CmpDoFileSetSizeEx(a1, 4u, 0LL, 0);
  result = HvGetEffectiveLogSizeCapForHive((unsigned int *)a1);
  if ( *(_QWORD *)(a1 + 1816) > (unsigned __int64)(unsigned int)result )
  {
    v3 = 5;
    return CmpDoFileSetSizeEx(a1, v3, 0LL, 0);
  }
  return result;
}
