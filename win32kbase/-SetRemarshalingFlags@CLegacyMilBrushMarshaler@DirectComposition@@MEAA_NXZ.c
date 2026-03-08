/*
 * XREFs of ?SetRemarshalingFlags@CLegacyMilBrushMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025E260
 * Callers:
 *     ?SetRemarshalingFlags@CGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025E10C (-SetRemarshalingFlags@CGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CImageLegacyMilBrushMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025E170 (-SetRemarshalingFlags@CImageLegacyMilBrushMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSolidColorLegacyMilBrushMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025EC80 (-SetRemarshalingFlags@CSolidColorLegacyMilBrushMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CLegacyMilBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CLegacyMilBrushMarshaler *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 14) != 0.0 )
    *v1 |= 0x20u;
  if ( *((_QWORD *)this + 8) )
    *v1 |= 0x40u;
  if ( *((_QWORD *)this + 9) )
    *v1 |= 0x80u;
  if ( *((_QWORD *)this + 10) )
    *v1 |= 0x100u;
  return (*v1 & 0x1E0) != 0;
}
