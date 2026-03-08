/*
 * XREFs of ?ConvertMonochromeToColor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@@Z @ 0x1C0333F44
 * Callers:
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C0334BC8 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     <none>
 */

void __fastcall ConvertMonochromeToColor(
        const struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2)
{
  UINT Pitch; // r14d
  UINT Width; // edx
  __int64 v5; // r15
  UINT v6; // ebx
  _BYTE *pPixels; // r12
  char *v8; // r15
  UINT v9; // eax
  UINT i; // ebp
  int v11; // r10d
  __int64 v12; // r8
  unsigned int *v13; // r9

  Pitch = a1->Pitch;
  Width = a1->Width;
  v5 = a1->Height * Pitch;
  v6 = 0;
  pPixels = a1->pPixels;
  a2->Width = Width;
  a2->Height = a1->Height;
  a2->Pitch = 4 * Width;
  v8 = &pPixels[v5];
  a2->Flags.Value = 4;
  a2->XHot = a1->XHot;
  a2->YHot = a1->YHot;
  a2->VidPnSourceId = a1->VidPnSourceId;
  if ( a1->Height )
  {
    v9 = a1->Width;
    do
    {
      for ( i = 0; i < v9; v9 = a1->Width )
      {
        v11 = 128 >> (i & 7);
        v12 = Pitch * v6 + (i >> 3);
        v13 = (unsigned int *)((char *)a2->pPixels + 4 * i++ + (unsigned __int64)(a2->Pitch * v6));
        *v13 = (((unsigned __int8)v11 & pPixels[v12]) != 0 ? 0xFF000000 : 0) | (((unsigned __int8)v11 & (unsigned __int8)v8[v12]) != 0
                                                                              ? 0xFFFFFF
                                                                              : 0);
      }
      ++v6;
    }
    while ( v6 < a1->Height );
  }
}
