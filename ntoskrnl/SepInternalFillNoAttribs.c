/*
 * XREFs of SepInternalFillNoAttribs @ 0x1402F9D00
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140247394 (SepInternalQuerySecurityAttributesTokenEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepInternalFillNoAttribs(_OWORD *a1, unsigned int a2, _DWORD *a3)
{
  *a3 = 16;
  if ( a2 < 0x10 )
    return 3221225507LL;
  *a1 = 0LL;
  *(_WORD *)a1 = 1;
  return 0LL;
}
