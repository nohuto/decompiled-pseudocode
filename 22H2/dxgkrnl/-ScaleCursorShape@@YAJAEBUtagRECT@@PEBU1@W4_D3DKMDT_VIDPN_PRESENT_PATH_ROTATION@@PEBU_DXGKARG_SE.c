/*
 * XREFs of ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C0121A00
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C01204C0 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     ?ContainsXor@@YA_NPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C027DCDC (-ContainsXor@@YA_NPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?ConvertMonochromeToColor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@@Z @ 0x1C027DD44 (-ConvertMonochromeToColor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@@Z.c)
 *     ?ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x1C027E2C8 (-ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@.c)
 */

__int64 __fastcall ScaleCursorShape(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a3,
        const struct _DXGKARG_SETPOINTERSHAPE *a4,
        struct _DXGKARG_SETPOINTERSHAPE *a5,
        struct _DXGKARG_SETPOINTERSHAPE *a6,
        const struct _DXGK_DRIVERCAPS *a7,
        int *a8)
{
  int v9; // r9d
  int v10; // r8d
  unsigned int v11; // ecx
  unsigned int v12; // r10d
  __int64 result; // rax
  UINT v14; // eax
  UINT Height; // ecx
  UINT v16; // r9d
  UINT v17; // eax
  UINT v18; // edi
  unsigned __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-20h]
  unsigned int v21; // [rsp+2Ch] [rbp-1Ch]
  UINT v22; // [rsp+30h] [rbp-18h]
  UINT v23; // [rsp+34h] [rbp-14h]

  v19 = 0LL;
  *a8 = 0;
  if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
  {
    v9 = a1->right - a1->left;
    v10 = a1->bottom - a1->top;
  }
  else
  {
    v9 = a1->bottom - a1->top;
    v10 = a1->right - a1->left;
  }
  v11 = a2->right - a2->left;
  v12 = a2->bottom - a2->top;
  v19 = __PAIR64__(v10, v9);
  v20 = v11;
  v21 = v12;
  if ( v9 == v11 && v10 == v12 )
    return 0LL;
  v14 = (v11 + v9 * a4->Width - 1) / v11;
  Height = a4->Height;
  v16 = v14;
  v22 = v14;
  v17 = (v10 * Height + v12 - 1) / v12;
  v23 = v17;
  if ( !v16 || !v17 || v16 > a7->MaxPointerWidth || v17 > a7->MaxPointerHeight )
    return 3221225659LL;
  if ( (a4->Flags.Value & 1) != 0 )
  {
    ConvertMonochromeToColor(a4, a6);
    a4 = a6;
  }
  a5->Flags.Value = 0;
  v18 = 4;
  if ( (a4->Flags.Value & 4) == 0 || !ContainsXor(a4) )
    v18 = 2;
  a5->Flags.Value = v18;
  if ( (a4->Flags.Value & 6) == 0 )
    return 3221225659LL;
  result = ScaleCursorShapeCoreBilinear((const struct CURSOR_SCALING_INFO *)&v19, a4, a5);
  if ( (int)result >= 0 )
    *a8 = 1;
  return result;
}
