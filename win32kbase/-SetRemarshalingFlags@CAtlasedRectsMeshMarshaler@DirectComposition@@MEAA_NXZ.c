/*
 * XREFs of ?SetRemarshalingFlags@CAtlasedRectsMeshMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025DEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CAtlasedRectsMeshMarshaler::SetRemarshalingFlags(
        DirectComposition::CAtlasedRectsMeshMarshaler *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_BYTE *)this + 56) )
    *v1 |= 0x20u;
  if ( *((_DWORD *)this + 15) )
    *v1 |= 0x40u;
  *((_QWORD *)this + 8) = 0LL;
  if ( *((_QWORD *)this + 10) )
    *v1 |= 0x80u;
  *((_QWORD *)this + 11) = 0LL;
  if ( *((_QWORD *)this + 13) )
    *v1 |= 0x100u;
  return (*v1 & 0x1E0) != 0;
}
