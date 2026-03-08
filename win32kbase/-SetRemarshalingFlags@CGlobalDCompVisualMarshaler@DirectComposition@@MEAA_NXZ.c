/*
 * XREFs of ?SetRemarshalingFlags@CGlobalDCompVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025E0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGlobalDCompVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CGlobalDCompVisualMarshaler *this)
{
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x20u;
  *((_DWORD *)this + 4) |= 0x40u;
  return 1;
}
