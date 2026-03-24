/*
 * XREFs of ?SetRemarshalingFlags@CHwndBitmapMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E92D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CHwndBitmapMarshaler::SetRemarshalingFlags(
        DirectComposition::CHwndBitmapMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 7) )
  {
    v1 |= 0x20u;
    *((_DWORD *)this + 4) = v1;
  }
  return (v1 & 0x20) != 0;
}
