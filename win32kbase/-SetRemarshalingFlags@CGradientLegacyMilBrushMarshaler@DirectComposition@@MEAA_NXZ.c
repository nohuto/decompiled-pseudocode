/*
 * XREFs of ?SetRemarshalingFlags@CGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025E10C
 * Callers:
 *     ?SetRemarshalingFlags@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025E2B0 (-SetRemarshalingFlags@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CLegacyMilBrushMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025E260 (-SetRemarshalingFlags@CLegacyMilBrushMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CGradientLegacyMilBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CGradientLegacyMilBrushMarshaler *this)
{
  char v1; // di
  _DWORD *v2; // rbx

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 16);
  if ( *((_DWORD *)this + 22) )
    *v2 |= 0x200u;
  if ( *((_DWORD *)this + 23) )
    *v2 |= 0x400u;
  if ( *((_DWORD *)this + 24) )
    *v2 |= 0x800u;
  *((_QWORD *)this + 13) = 0LL;
  if ( *((_QWORD *)this + 15) )
    *v2 |= 0x1000u;
  if ( DirectComposition::CLegacyMilBrushMarshaler::SetRemarshalingFlags(this) || (*v2 & 0x1E00) != 0 )
    return 1;
  return v1;
}
