/*
 * XREFs of ?SetRemarshalingFlags@CGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0253848
 * Callers:
 *     ?SetRemarshalingFlags@CLinearGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0253870 (-SetRemarshalingFlags@CLinearGradientBrushMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRadialGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0253B60 (-SetRemarshalingFlags@CRadialGradientBrushMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGradientBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CGradientBrushMarshaler *this)
{
  if ( *((_DWORD *)this + 26) )
  {
    *((_DWORD *)this + 4) |= 0x100u;
    *((_DWORD *)this + 27) = 0;
  }
  *((_DWORD *)this + 4) |= 0x2E0u;
  return 1;
}
