/*
 * XREFs of NtGdiClearBitmapAttributes @ 0x1C00AE430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiClearBitmapAttributes(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return GreMakeBitmapNonStock();
  else
    return 0LL;
}
