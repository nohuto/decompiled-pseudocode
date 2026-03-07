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
  int v9; // r8d
  LONG top; // eax
  LONG bottom; // ecx
  int v12; // ecx
  unsigned int v13; // r10d
  unsigned int v14; // r9d
  __int64 result; // rax
  UINT v16; // ecx
  UINT v17; // r8d
  UINT v18; // eax
  UINT v19; // edi
  unsigned __int64 v20; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-20h]
  unsigned int v22; // [rsp+2Ch] [rbp-1Ch]
  UINT v23; // [rsp+30h] [rbp-18h]
  UINT v24; // [rsp+34h] [rbp-14h]

  v20 = 0LL;
  *a8 = 0;
  if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
  {
    v9 = a1->right - a1->left;
    top = a1->top;
    bottom = a1->bottom;
  }
  else
  {
    v9 = a1->bottom - a1->top;
    top = a1->left;
    bottom = a1->right;
  }
  v12 = bottom - top;
  v13 = a2->right - a2->left;
  v14 = a2->bottom - a2->top;
  v20 = __PAIR64__(v12, v9);
  v21 = v13;
  v22 = v14;
  if ( v9 == v13 && v12 == v14 )
    return 0LL;
  v16 = a4->Height * v12;
  v17 = (a4->Width * v9 + v13 - 1) / v13;
  v23 = v17;
  v18 = (v16 + v14 - 1) / v14;
  v24 = v18;
  if ( !v17 || !v18 || v17 > a7->MaxPointerWidth || v18 > a7->MaxPointerHeight )
    return 3221225659LL;
  if ( (a4->Flags.Value & 1) != 0 )
  {
    ConvertMonochromeToColor(a4, a6);
    a4 = a6;
  }
  a5->Flags.Value = 0;
  v19 = 4;
  if ( (a4->Flags.Value & 4) == 0 || !ContainsXor(a4) )
    v19 = 2;
  a5->Flags.Value = v19;
  if ( (a4->Flags.Value & 6) == 0 )
    return 3221225659LL;
  result = ScaleCursorShapeCoreBilinear((const struct CURSOR_SCALING_INFO *)&v20, a4, a5);
  if ( (int)result >= 0 )
    *a8 = 1;
  return result;
}
