/*
 * XREFs of ?SetRemarshalingFlags@CRemoteRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0266060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CRemoteRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CRemoteRenderTargetMarshaler *this)
{
  int v1; // eax
  bool v2; // zf

  v1 = *((_DWORD *)this + 4) | 0xA0;
  v2 = *((_QWORD *)this + 14) == 0LL;
  *((_DWORD *)this + 4) = v1;
  if ( !v2 )
    *((_DWORD *)this + 4) = v1 | 0x40;
  return 1;
}
