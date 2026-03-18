/*
 * XREFs of HvlDisableEnlightenment @ 0x14053F62C
 * Callers:
 *     PopSaveHiberContext @ 0x140AA4A40 (PopSaveHiberContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlDisableEnlightenment(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 == 1 )
    result = 0x2000LL;
  HvlEnlightenments &= result;
  return result;
}
