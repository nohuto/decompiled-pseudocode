/*
 * XREFs of ?SetRemarshalingFlags@CLegacyRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022E210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CLegacyRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CLegacyRenderTargetMarshaler *this)
{
  int v1; // eax
  float v2; // xmm0_4
  int v3; // eax

  if ( *((_DWORD *)this + 18) )
    *((_DWORD *)this + 4) |= 0x20u;
  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 19) )
    v1 |= 0x40u;
  v2 = *((float *)this + 34);
  v3 = v1 | 0x80;
  *((_DWORD *)this + 4) = v3;
  if ( v2 != 1.0 )
    *((_DWORD *)this + 4) = v3 | 0x100;
  return 1;
}
