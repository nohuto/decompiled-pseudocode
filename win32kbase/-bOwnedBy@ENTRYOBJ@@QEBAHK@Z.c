/*
 * XREFs of ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C00A72DC
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C006F338 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgIsObjectOwnedByW32Pid @ 0x1C00A726C (HmgIsObjectOwnedByW32Pid.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ENTRYOBJ::bOwnedBy(ENTRYOBJ *this, int a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 14) )
  {
    if ( ((*((_DWORD *)this + 2) ^ a2 & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
      return 1LL;
  }
  return result;
}
