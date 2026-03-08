/*
 * XREFs of ?SetBufferProperty@CRegionGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025C5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x1C0252730 (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 */

__int64 __fastcall DirectComposition::CRegionGeometryMarshaler::SetBufferProperty(
        DirectComposition::CRegionGeometryMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 || !a4 && a5 )
    return 3221225485LL;
  result = DirectComposition::CMarshaledArrayBase::Copy(
             (DirectComposition::CRegionGeometryMarshaler *)((char *)this + 96),
             a4,
             a5,
             0x10uLL,
             0x67724344u);
  if ( (int)result >= 0 )
  {
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x800u;
  }
  return result;
}
