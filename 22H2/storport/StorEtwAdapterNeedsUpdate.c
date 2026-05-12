/*
 * XREFs of StorEtwAdapterNeedsUpdate @ 0x1C004F09C
 * Callers:
 *     StorEtwEnableCallback @ 0x1C004F140 (StorEtwEnableCallback.c)
 * Callees:
 *     <none>
 */

char __fastcall StorEtwAdapterNeedsUpdate(__int64 a1, char a2)
{
  __int64 v2; // rax
  char result; // al

  v2 = *(_QWORD *)(a1 + 552);
  if ( !v2 )
    return 0;
  if ( !*(_QWORD *)(v2 + 176) )
    return 0;
  result = 1;
  if ( (*(_BYTE *)(a1 + 110) & 1) == a2 )
    return 0;
  return result;
}
