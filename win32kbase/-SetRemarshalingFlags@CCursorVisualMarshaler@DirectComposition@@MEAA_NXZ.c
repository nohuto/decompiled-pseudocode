/*
 * XREFs of ?SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025DFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0252DA0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CCursorVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CCursorVisualMarshaler *this)
{
  int v2; // eax
  bool v3; // zf
  char v4; // al
  char v5; // cl

  v2 = *((_DWORD *)this + 97) | 2;
  v3 = *((_BYTE *)this + 384) == 1;
  *((_DWORD *)this + 97) = v2;
  if ( !v3 )
    *((_DWORD *)this + 97) = v2 | 4;
  v4 = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  v5 = 0;
  if ( v4 || (*((_DWORD *)this + 97) & 6) != 0 )
    return 1;
  return v5;
}
