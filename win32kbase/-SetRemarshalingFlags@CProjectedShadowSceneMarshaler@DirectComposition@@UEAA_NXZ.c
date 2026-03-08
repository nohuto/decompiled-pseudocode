/*
 * XREFs of ?SetRemarshalingFlags@CProjectedShadowSceneMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C026DE30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024D91C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetRemarshalingFlags(
        DirectComposition::CProjectedShadowSceneMarshaler *this)
{
  int v2; // eax

  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v2 = *((_DWORD *)this + 4) | 0xFE80;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 4) = v2;
  if ( *((_QWORD *)this + 16) )
    *((_DWORD *)this + 4) = v2 | 0x100;
  return 1;
}
