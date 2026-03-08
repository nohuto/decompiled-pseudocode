/*
 * XREFs of FsRtlIs32BitProcess @ 0x14093BD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall FsRtlIs32BitProcess(__int64 a1)
{
  char result; // al
  __int16 v2; // dx

  result = 0;
  if ( *(_QWORD *)(a1 + 1408) )
  {
    v2 = *(_WORD *)(a1 + 2412);
    if ( v2 == 332 || v2 == 452 )
      return 1;
  }
  return result;
}
