/*
 * XREFs of ?SetRemarshalingFlags@CContainerShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C021ED20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CContainerShapeMarshaler::SetRemarshalingFlags(
        DirectComposition::CContainerShapeMarshaler *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 8) )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    result = 1;
  }
  if ( *((_DWORD *)this + 20) )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    result = 1;
    *((_DWORD *)this + 21) = 0;
  }
  return result;
}
