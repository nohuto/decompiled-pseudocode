/*
 * XREFs of ?ContainsXor@@YA_NPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C0333EDC
 * Callers:
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C0334BC8 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     <none>
 */

char __fastcall ContainsXor(const struct _DXGKARG_SETPOINTERSHAPE *a1)
{
  UINT Height; // r10d
  int v2; // edx
  UINT Width; // r11d
  int v4; // r9d

  Height = a1->Height;
  v2 = 0;
  if ( !Height )
    return 0;
  Width = a1->Width;
  while ( 1 )
  {
    v4 = 0;
    if ( Width )
      break;
LABEL_6:
    if ( ++v2 >= Height )
      return 0;
  }
  while ( *(_DWORD *)((char *)a1->pPixels + a1->Pitch * v2 + (unsigned __int64)(unsigned int)(4 * v4)) != -1 )
  {
    if ( ++v4 >= Width )
      goto LABEL_6;
  }
  return 1;
}
