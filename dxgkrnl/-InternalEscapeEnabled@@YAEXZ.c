/*
 * XREFs of ?InternalEscapeEnabled@@YAEXZ @ 0x1C030CCC8
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 * Callees:
 *     DxgkpIsDrtEnabled @ 0x1C0305954 (DxgkpIsDrtEnabled.c)
 */

unsigned __int8 __fastcall InternalEscapeEnabled(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( g_OSTestSigningEnabled || DxgkpIsDrtEnabled(a1) )
    return 1;
  return v1;
}
