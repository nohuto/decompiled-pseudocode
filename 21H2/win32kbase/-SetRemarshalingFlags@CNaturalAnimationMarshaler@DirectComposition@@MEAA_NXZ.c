/*
 * XREFs of ?SetRemarshalingFlags@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01F3F50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01EAEA0 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CNaturalAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CNaturalAnimationMarshaler *this)
{
  int v1; // eax

  *((_DWORD *)this + 4) |= 0x1C000u;
  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 0x400) != 0 )
  {
    v1 |= 0x800u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( (v1 & 0x1000) != 0 )
    *((_DWORD *)this + 4) = v1 | 0x2000;
  DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this);
  return 1;
}
