/*
 * XREFs of ?SetBufferProperty@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025C0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x1C0252730 (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 */

__int64 __fastcall DirectComposition::CGradientLegacyMilBrushMarshaler::SetBufferProperty(
        DirectComposition::CGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 != 7 || !a4 && a5 )
    return 3221225485LL;
  result = DirectComposition::CMarshaledArrayBase::Copy(
             (DirectComposition::CGradientLegacyMilBrushMarshaler *)((char *)this + 104),
             a4,
             a5,
             0x18uLL,
             0x62674344u);
  if ( (int)result >= 0 )
  {
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x1000u;
  }
  return result;
}
