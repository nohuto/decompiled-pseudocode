/*
 * XREFs of ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0099660
 * Callers:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00993D0 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 *     ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0215D90 (-SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_J.c)
 *     ?SetIntegerProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C021EF20 (-SetIntegerProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_.c)
 *     ?SetIntegerProperty@CPathGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C021F710 (-SetIntegerProperty@CPathGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_J.c)
 *     ?SetIntegerProperty@CEffectGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C02266C0 (-SetIntegerProperty@CEffectGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JP.c)
 *     ?SetIntegerProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C022C040 (-SetIntegerProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JP.c)
 *     ?SetIntegerProperty@CDropShadowMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0231DC0 (-SetIntegerProperty@CDropShadowMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPE.c)
 *     ?SetIntegerProperty@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0236BB0 (-SetIntegerProperty@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
        DirectComposition::CPropertyChangeResourceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  *a5 = 0;
  if ( a3 != 0xFFFF )
    return 3221225485LL;
  if ( *((_DWORD *)this + 18) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *((_DWORD *)this + 18) = a4;
    *a5 = 1;
  }
  return result;
}
