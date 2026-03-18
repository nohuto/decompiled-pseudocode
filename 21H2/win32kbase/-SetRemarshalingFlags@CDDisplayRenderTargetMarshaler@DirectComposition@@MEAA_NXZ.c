/*
 * XREFs of ?SetRemarshalingFlags@CDDisplayRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022EBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CDDisplayRenderTargetMarshaler *this)
{
  int v1; // eax
  float v2; // xmm0_4
  int v3; // eax

  if ( *((_DWORD *)this + 19) || *((_QWORD *)this + 11) )
    *((_DWORD *)this + 4) |= 0x20u;
  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 21) )
    v1 |= 0x40u;
  v2 = *((float *)this + 38);
  v3 = v1 | 0x80;
  *((_DWORD *)this + 4) = v3;
  if ( v2 != 1.0 )
    *((_DWORD *)this + 4) = v3 | 0x100;
  return 1;
}
