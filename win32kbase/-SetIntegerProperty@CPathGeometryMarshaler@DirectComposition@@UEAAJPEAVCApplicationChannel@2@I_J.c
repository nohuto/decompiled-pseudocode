/*
 * XREFs of ?SetIntegerProperty@CPathGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00C1D00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00A6C00 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CPathGeometryMarshaler::SetIntegerProperty(
        DirectComposition::CPathGeometryMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // r11d

  v5 = 0;
  *a5 = 0;
  if ( a3 == 5 )
  {
    *((_DWORD *)this + 26) = a4;
  }
  else
  {
    if ( a3 != 6 )
      return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
    *((_DWORD *)this + 27) = a4;
  }
  *((_DWORD *)this + 4) |= 0x800u;
  *a5 = 1;
  return v5;
}
