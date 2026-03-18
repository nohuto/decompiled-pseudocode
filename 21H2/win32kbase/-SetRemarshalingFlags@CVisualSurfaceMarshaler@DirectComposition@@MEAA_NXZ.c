/*
 * XREFs of ?SetRemarshalingFlags@CVisualSurfaceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022A3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CVisualSurfaceMarshaler::SetRemarshalingFlags(
        DirectComposition::CVisualSurfaceMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x3E0u;
  if ( *((_BYTE *)this + 100) )
    *((_DWORD *)this + 4) |= 0x400u;
  return 1;
}
