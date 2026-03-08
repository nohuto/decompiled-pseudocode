/*
 * XREFs of ?SetRemarshalingFlags@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025E2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025E10C (-SetRemarshalingFlags@CGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CLinearGradientLegacyMilBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CLinearGradientLegacyMilBrushMarshaler *this)
{
  char v2; // al
  char v3; // dl

  *((_DWORD *)this + 4) |= 0x6000u;
  v2 = DirectComposition::CGradientLegacyMilBrushMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*((_DWORD *)this + 4) & 0x6000) != 0 )
    return 1;
  return v3;
}
