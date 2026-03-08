/*
 * XREFs of ?SetRemarshalingFlags@CCompositionMipmapSurfaceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C026E570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // r9d
  int v3; // edx

  *((_DWORD *)this + 4) |= 0x60u;
  v1 = 0;
  v2 = *((_DWORD *)this + 19);
  if ( v2 )
  {
    v3 = *((_DWORD *)this + 22);
    do
      v3 |= 1 << v1++;
    while ( v1 < v2 );
    *((_DWORD *)this + 22) = v3;
  }
  return 1;
}
