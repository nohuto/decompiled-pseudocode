/*
 * XREFs of ?SetRemarshalingFlags@CEffectBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0253680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CEffectBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CEffectBrushMarshaler *this)
{
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x40u;
  *((_DWORD *)this + 25) = 0;
  return 1;
}
