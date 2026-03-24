/*
 * XREFs of ?SetRemarshalingFlags@CSceneNodeMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DF790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneNodeMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneNodeMarshaler *this)
{
  if ( *((_QWORD *)this + 8) )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_DWORD *)this + 20) = 0;
  }
  if ( *((_QWORD *)this + 12) )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *((_DWORD *)this + 28) = 0;
  }
  if ( *((_QWORD *)this + 15) )
    *((_DWORD *)this + 4) |= 0x80u;
  return (*((_DWORD *)this + 4) & 0xE0) != 0;
}
