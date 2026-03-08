/*
 * XREFs of ?SetCallbackId@CAnimationMarshaler@DirectComposition@@MEAAJIPEA_N@Z @ 0x1C024D050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::SetCallbackId(
        DirectComposition::CAnimationMarshaler *this,
        int a2,
        bool *a3)
{
  *a3 = 0;
  if ( a2 != *((_DWORD *)this + 52) )
  {
    *((_DWORD *)this + 4) |= 0x20000u;
    *((_DWORD *)this + 52) = a2;
    *a3 = 1;
  }
  return 0LL;
}
