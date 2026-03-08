/*
 * XREFs of ?SetRemarshalingFlags@CSceneMeshRendererComponentMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C026EA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneMeshRendererComponentMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneMeshRendererComponentMarshaler *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x20u;
  if ( *((_QWORD *)this + 8) )
    *v1 |= 0x40u;
  if ( *((_DWORD *)this + 20) )
  {
    *v1 |= 0x80u;
    *((_DWORD *)this + 21) = 0;
  }
  return (*v1 & 0xE0) != 0;
}
