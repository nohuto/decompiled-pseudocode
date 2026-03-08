/*
 * XREFs of ?SetRemarshalingFlags@CHolographicInteropTextureMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0264FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CHolographicInteropTextureMarshaler::SetRemarshalingFlags(
        DirectComposition::CHolographicInteropTextureMarshaler *this)
{
  char v1; // dl
  int v2; // eax

  v1 = 0;
  v2 = *((_DWORD *)this + 4) | 0x20;
  *((_DWORD *)this + 4) = v2;
  if ( *((_DWORD *)this + 17) || *((_DWORD *)this + 18) || *((_DWORD *)this + 15) || *((_DWORD *)this + 16) )
  {
    v2 |= 0x40u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((_DWORD *)this + 14) )
  {
    v2 |= 0x100u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((_QWORD *)this + 11) )
  {
    v2 |= 0x80u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((_DWORD *)this + 19) || (v2 & 0xC0) != 0 )
    return 1;
  return v1;
}
