/*
 * XREFs of ?SetRemarshalingFlags@CSceneModelTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025EAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneModelTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneModelTransformMarshaler *this)
{
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x20u;
  return (*((_DWORD *)this + 4) & 0x20) != 0;
}
