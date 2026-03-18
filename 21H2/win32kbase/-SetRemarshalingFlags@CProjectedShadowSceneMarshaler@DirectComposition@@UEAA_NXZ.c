/*
 * XREFs of ?SetRemarshalingFlags@CProjectedShadowSceneMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0236CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0216428 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetRemarshalingFlags(
        DirectComposition::CProjectedShadowSceneMarshaler *this)
{
  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  *((_DWORD *)this + 4) |= 0xFE80u;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 27) = 0;
  if ( *((_QWORD *)this + 17) )
    *((_DWORD *)this + 4) |= 0x100u;
  return 1;
}
