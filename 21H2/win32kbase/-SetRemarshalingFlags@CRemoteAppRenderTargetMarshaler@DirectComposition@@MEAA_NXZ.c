/*
 * XREFs of ?SetRemarshalingFlags@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01ECD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 11) )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    v1 = 1;
  }
  if ( *((_DWORD *)this + 20) > *((_DWORD *)this + 18) || *((_DWORD *)this + 21) > *((_DWORD *)this + 19) )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    v1 = 1;
  }
  if ( *((_DWORD *)this + 14) != 3 )
  {
    *((_DWORD *)this + 4) |= 0x200u;
    return 1;
  }
  return v1;
}
