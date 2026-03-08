/*
 * XREFs of ?SetIntegerProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00A6830
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00A6C00 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetIntegerProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case 0x14u:
      if ( !*((_BYTE *)this + 144) && !*((_BYTE *)this + 145) && a4 )
      {
        *((_BYTE *)this + 144) = 1;
        *a5 = 1;
        *((_DWORD *)this + 4) &= ~0x800u;
        return v5;
      }
      return (unsigned int)-1073741811;
    case 0x15u:
      if ( !*((_BYTE *)this + 145) && !*((_BYTE *)this + 144) && a4 )
      {
        *((_BYTE *)this + 145) = 1;
        *a5 = 1;
        *((_OWORD *)this + 6) = 0LL;
        *((_DWORD *)this + 4) &= 0xFFFFA7FF;
        return v5;
      }
      return (unsigned int)-1073741811;
    case 0x16u:
      if ( *((_BYTE *)this + 146) != (a4 != 0) )
      {
        *((_BYTE *)this + 146) = a4 != 0;
        *a5 = 1;
        *((_DWORD *)this + 4) &= ~0x800u;
      }
      break;
    default:
      return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  }
  return v5;
}
