/*
 * XREFs of ?SetIntegerProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C021EF20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0099660 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetIntegerProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case 20:
      if ( !*((_BYTE *)this + 152) && !*((_BYTE *)this + 153) && a4 )
      {
        *((_BYTE *)this + 152) = 1;
        *a5 = 1;
        *((_DWORD *)this + 4) &= ~0x800u;
        return v5;
      }
      return (unsigned int)-1073741811;
    case 21:
      if ( !*((_BYTE *)this + 153) && !*((_BYTE *)this + 152) && a4 )
      {
        *((_BYTE *)this + 153) = 1;
        *a5 = 1;
        *(_OWORD *)((char *)this + 104) = 0LL;
        *((_DWORD *)this + 4) &= 0xFFFFA7FF;
        return v5;
      }
      return (unsigned int)-1073741811;
    case 22:
      if ( *((_BYTE *)this + 154) != (a4 != 0) )
      {
        *((_BYTE *)this + 154) = a4 != 0;
        *a5 = 1;
        *((_DWORD *)this + 4) &= ~0x800u;
      }
      break;
    default:
      return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  }
  return v5;
}
