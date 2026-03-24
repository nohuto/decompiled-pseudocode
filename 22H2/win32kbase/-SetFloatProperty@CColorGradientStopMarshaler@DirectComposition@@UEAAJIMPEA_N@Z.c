/*
 * XREFs of ?SetFloatProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01E63B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CColorGradientStopMarshaler::SetFloatProperty(
        DirectComposition::CColorGradientStopMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  if ( !a2 )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *((float *)this + 14) = a3;
    *a4 = 1;
  }
  return 0LL;
}
