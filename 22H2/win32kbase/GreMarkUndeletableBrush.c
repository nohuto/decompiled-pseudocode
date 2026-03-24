/*
 * XREFs of GreMarkUndeletableBrush @ 0x1C00B79D0
 * Callers:
 *     <none>
 * Callees:
 *     HmgMarkUndeletable @ 0x1C001CDB0 (HmgMarkUndeletable.c)
 */

__int64 __fastcall GreMarkUndeletableBrush(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return HmgMarkUndeletable(a1, 16);
  return result;
}
