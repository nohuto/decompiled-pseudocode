/*
 * XREFs of ?SetRemarshalingFlags@CRadialGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C021D800
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C021D2B8 (-SetRemarshalingFlags@CGradientBrushMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CRadialGradientBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CRadialGradientBrushMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x1C00u;
  DirectComposition::CGradientBrushMarshaler::SetRemarshalingFlags(this);
  return 1;
}
