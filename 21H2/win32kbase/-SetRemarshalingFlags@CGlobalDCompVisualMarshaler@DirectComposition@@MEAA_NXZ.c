/*
 * XREFs of ?SetRemarshalingFlags@CGlobalDCompVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGlobalDCompVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CGlobalDCompVisualMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 8) )
    v1 |= 0x20u;
  *((_DWORD *)this + 4) = v1 | 0x40;
  return 1;
}
