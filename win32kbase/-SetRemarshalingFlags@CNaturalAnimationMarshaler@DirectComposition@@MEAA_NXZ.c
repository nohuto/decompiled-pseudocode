/*
 * XREFs of ?SetRemarshalingFlags@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C026B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0262E50 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CNaturalAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CNaturalAnimationMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4) | 0xB8000;
  *((_DWORD *)this + 4) = v1;
  if ( (v1 & 0x800) != 0 )
  {
    v1 |= 0x1000u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( (v1 & 0x2000) != 0 )
    *((_DWORD *)this + 4) = v1 | 0x4000;
  DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this);
  return 1;
}
