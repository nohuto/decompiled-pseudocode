/*
 * XREFs of ?SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00C5F70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00A6910 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 */

__int64 __fastcall DirectComposition::CLayerVisualMarshaler::SetIntegerProperty(
        DirectComposition::CLayerVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( a3 != 54 )
  {
    if ( a3 != 55 )
      return (unsigned int)DirectComposition::CVisualMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
    if ( *((_BYTE *)this + 393) == ((_DWORD)a4 != 0) )
      return v5;
    *((_DWORD *)this + 99) |= 8u;
    *((_BYTE *)this + 393) = (_DWORD)a4 != 0;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 392) != ((_DWORD)a4 != 0) )
  {
    *((_DWORD *)this + 99) |= 4u;
    *((_BYTE *)this + 392) = (_DWORD)a4 != 0;
LABEL_4:
    *a5 = 1;
  }
  return v5;
}
