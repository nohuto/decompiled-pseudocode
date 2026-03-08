/*
 * XREFs of MiFindLoaderAppliedHotPatchEntry @ 0x140B968B8
 * Callers:
 *     MiHandleBootImage @ 0x140B3BA98 (MiHandleBootImage.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiFindLoaderAppliedHotPatchEntry(__int64 a1, __int64 a2)
{
  __int64 **v2; // r9
  __int64 *v3; // r8
  __int64 *i; // rdx

  v2 = (__int64 **)(*(_QWORD *)(a2 + 240) + 3784LL);
  v3 = 0LL;
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    v3 = i;
    if ( (i[5] & 1) != 0 && (i[10] == a1 || i[11] == a1) )
      break;
  }
  if ( i == (__int64 *)v2 )
    return 0LL;
  return v3;
}
