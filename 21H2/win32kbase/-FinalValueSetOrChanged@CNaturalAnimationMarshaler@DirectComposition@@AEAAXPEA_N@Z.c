/*
 * XREFs of ?FinalValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z @ 0x1C02342BC
 * Callers:
 *     ?SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0234450 (-SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CNaturalAnimationMarshaler::FinalValueSetOrChanged(
        DirectComposition::CNaturalAnimationMarshaler *this,
        bool *a2)
{
  int v2; // eax

  *a2 = 0;
  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 0x2000) == 0 )
  {
    *((_DWORD *)this + 4) = v2 | 0x2000;
    *a2 = 1;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x4000) == 0 )
  {
    *((_DWORD *)this + 4) = v2 | 0x4000;
    *a2 = 1;
  }
}
