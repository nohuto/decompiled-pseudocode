/*
 * XREFs of ?SetRemarshalingFlags@CSurfaceBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C021C900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSurfaceBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CSurfaceBrushMarshaler *this)
{
  int v1; // eax

  if ( *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 11) )
    *((_DWORD *)this + 4) |= 0x40u;
  v1 = *((_DWORD *)this + 4);
  if ( *((_BYTE *)this + 128) )
    v1 |= 0x800u;
  *((_DWORD *)this + 4) = v1 | 0x780;
  return 1;
}
