/*
 * XREFs of ?SetIntegerProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C025C780
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00A6910 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 */

__int64 __fastcall DirectComposition::CCursorVisualMarshaler::SetIntegerProperty(
        DirectComposition::CCursorVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( a3 == 1 )
  {
    if ( *((_BYTE *)this + 384) != ((_DWORD)a4 != 0) )
    {
      *((_DWORD *)this + 97) |= 4u;
      *((_BYTE *)this + 384) = (_DWORD)a4 != 0;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)DirectComposition::CVisualMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  }
  return v5;
}
