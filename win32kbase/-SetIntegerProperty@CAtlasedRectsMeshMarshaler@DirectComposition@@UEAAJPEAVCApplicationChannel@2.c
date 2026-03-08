/*
 * XREFs of ?SetIntegerProperty@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C025C730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAtlasedRectsMeshMarshaler::SetIntegerProperty(
        DirectComposition::CAtlasedRectsMeshMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // edx

  v5 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      if ( *((_DWORD *)this + 15) != a4 )
      {
        *((_DWORD *)this + 4) |= 0x40u;
        *((_DWORD *)this + 15) = a4;
        *a5 = 1;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else if ( *((_BYTE *)this + 56) != (a4 != 0) )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_BYTE *)this + 56) = a4 != 0;
    *a5 = 1;
  }
  return v5;
}
