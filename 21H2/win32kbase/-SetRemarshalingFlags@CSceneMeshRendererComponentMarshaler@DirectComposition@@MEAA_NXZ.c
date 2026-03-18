/*
 * XREFs of ?SetRemarshalingFlags@CSceneMeshRendererComponentMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0237D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneMeshRendererComponentMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneMeshRendererComponentMarshaler *this)
{
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_DWORD *)this + 22) )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((_DWORD *)this + 23) = 0;
  }
  return (*((_DWORD *)this + 4) & 0xE0) != 0;
}
