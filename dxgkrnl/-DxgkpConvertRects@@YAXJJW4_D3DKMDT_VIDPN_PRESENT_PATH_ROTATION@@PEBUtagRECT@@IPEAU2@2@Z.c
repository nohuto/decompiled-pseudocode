void __fastcall DxgkpConvertRects(
        int a1,
        int a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a3,
        const struct tagRECT *a4,
        unsigned int a5,
        struct tagRECT *a6,
        struct tagRECT *a7)
{
  int v8; // r10d
  int v9; // r11d
  LONG left; // ebp
  LONG top; // r14d
  int v12; // edi
  int v13; // r9d
  __int64 v14; // r15
  signed __int64 v15; // rsi
  LONG *p_right; // rcx
  int v17; // edx
  LONG v18; // r8d
  LONG v19; // eax
  __int128 v20; // [rsp+0h] [rbp-28h]

  v8 = a2;
  v9 = a1;
  if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
  {
    v8 = a1;
    v9 = a2;
  }
  left = a4->left;
  top = a4->top;
  v12 = a4->right - a4->left;
  v13 = a4->bottom - top;
  if ( a5 )
  {
    v14 = a5;
    v15 = (char *)a7 - (char *)a6;
    p_right = &a6->right;
    while ( a3 != D3DKMDT_VPPR_IDENTITY )
    {
      switch ( a3 )
      {
        case D3DKMDT_VPPR_ROTATE90:
          v17 = *(p_right - 1);
          v18 = p_right[1];
          DWORD1(v20) = v8 - *p_right;
          v19 = v8 - *(p_right - 2);
          break;
        case D3DKMDT_VPPR_ROTATE180:
          v17 = v9 - *p_right;
          v18 = v9 - *(p_right - 2);
          DWORD1(v20) = v8 - p_right[1];
          v19 = v8 - *(p_right - 1);
          break;
        case D3DKMDT_VPPR_ROTATE270:
          v17 = v9 - p_right[1];
          v18 = v9 - *(p_right - 1);
          DWORD1(v20) = *(p_right - 2);
          v19 = *p_right;
          break;
        default:
          goto LABEL_13;
      }
      HIDWORD(v20) = v19;
LABEL_14:
      *(LONG *)((char *)p_right + v15 - 8) = left + v12 * v17 / v9;
      *(LONG *)((char *)p_right + v15 - 4) = top + v13 * DWORD1(v20) / v8;
      *(LONG *)((char *)p_right + v15) = left + (v12 * v18 + v9 - 1) / v9;
      *(LONG *)((char *)p_right + v15 + 4) = top + (v8 + v13 * HIDWORD(v20) - 1) / v8;
      p_right += 4;
      if ( !--v14 )
        return;
    }
LABEL_13:
    v20 = *(_OWORD *)(p_right - 2);
    v18 = *(_QWORD *)p_right;
    v17 = v20;
    goto LABEL_14;
  }
}
