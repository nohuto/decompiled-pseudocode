/*
 * XREFs of ?SetRemarshalingFlags@CVisualSurfaceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0262A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CVisualSurfaceMarshaler::SetRemarshalingFlags(
        DirectComposition::CVisualSurfaceMarshaler *this)
{
  int v1; // eax
  bool v2; // zf

  v1 = *((_DWORD *)this + 4) | 0x3E0;
  v2 = *((_BYTE *)this + 92) == 0;
  *((_DWORD *)this + 4) = v1;
  if ( !v2 )
    *((_DWORD *)this + 4) = v1 | 0x400;
  return 1;
}
