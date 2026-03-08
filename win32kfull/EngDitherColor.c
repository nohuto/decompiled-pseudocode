/*
 * XREFs of EngDitherColor @ 0x1C028B920
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C012448C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?PanDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C029E340 (-PanDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?vComputeSubspaces@@YAPEAU_VERTEX_DATA@@KPEAU1@@Z @ 0x1C028B0DC (-vComputeSubspaces@@YAPEAU_VERTEX_DATA@@KPEAU1@@Z.c)
 *     ?vDitherColor4bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z @ 0x1C028B370 (-vDitherColor4bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z.c)
 *     ?vDitherColor8bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z @ 0x1C028B668 (-vDitherColor8bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z.c)
 */

ULONG __stdcall EngDitherColor(HDEV hdev, ULONG iMode, ULONG rgb, ULONG *pul)
{
  ULONG v6; // r8d
  int v7; // edi
  struct _VERTEX_DATA *v8; // r8
  unsigned int v9; // r9d
  unsigned int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE v15[32]; // [rsp+28h] [rbp-30h] BYREF

  v6 = 0;
  if ( *((_WORD *)hdev + 1040) == 8 && *((_WORD *)hdev + 1041) == 8 )
  {
    if ( iMode == 2 )
    {
      *(_OWORD *)pul = 0LL;
      *((_OWORD *)pul + 1) = 0LL;
      v10 = ((unsigned int)(unsigned __int8)((unsigned __int16)(28 * BYTE2(rgb)
                                                              + 77 * (unsigned __int8)rgb
                                                              + 151 * BYTE1(rgb)) >> 8)
           + 1) >> 2;
      if ( v10 )
      {
        v11 = v10;
        do
        {
          v12 = byte_1C032A23F[v11];
          pul[v12] |= byte_1C032A100[--v11 + 128];
          --v10;
        }
        while ( v10 );
      }
      return 1;
    }
    v7 = *((_DWORD *)hdev + 519);
    if ( (unsigned int)(v7 - 2) <= 1 )
    {
      v8 = vComputeSubspaces(rgb, (struct _VERTEX_DATA *)v15);
      v9 = (v8 - (struct _VERTEX_DATA *)v15) >> 3;
      if ( v7 == 3 )
        vDitherColor8bpp(pul, (struct _VERTEX_DATA *)v15, v8, v9);
      else
        vDitherColor4bpp(pul, (struct _VERTEX_DATA *)v15, v8, v9);
      return 1;
    }
  }
  return v6;
}
