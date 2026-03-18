/*
 * XREFs of ?SetRemarshalingFlags@CSceneNodeMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneNodeMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneNodeMarshaler *this)
{
  *((_QWORD *)this + 8) = 0LL;
  if ( *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x20u;
  *((_QWORD *)this + 11) = 0LL;
  if ( *((_QWORD *)this + 13) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_QWORD *)this + 14) )
    *((_DWORD *)this + 4) |= 0x80u;
  return (*((_DWORD *)this + 4) & 0xE0) != 0;
}
