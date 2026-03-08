/*
 * XREFs of ?SetRemarshalingFlags@CDDisplayRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0266940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CDDisplayRenderTargetMarshaler *this)
{
  float v1; // xmm0_4
  int v2; // eax

  if ( *((_DWORD *)this + 17) || *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 20) )
    *((_DWORD *)this + 4) |= 0x40u;
  v1 = *((float *)this + 36);
  v2 = *((_DWORD *)this + 4) | 0x80;
  *((_DWORD *)this + 4) = v2;
  if ( v1 != 1.0 )
    *((_DWORD *)this + 4) = v2 | 0x100;
  return 1;
}
