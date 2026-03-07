bool __fastcall PlaneConfigsMatch(
        struct _DISPLAY_PLANE_CONFIG *a1,
        char a2,
        unsigned __int8 a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5,
        const struct tagRECT *a6,
        enum _D3DDDI_ROTATION a7,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a8,
        enum D3DDDI_COLOR_SPACE_TYPE a9,
        unsigned int a10)
{
  unsigned int v10; // r10d
  char v11; // dl

  v10 = *((_DWORD *)a1 + 2);
  if ( !a2 )
    return (v10 & 1) == 0;
  v11 = 1;
  if ( ((a3 ^ (unsigned __int8)(v10 >> 4)) & 1) != 0
    || ((a3 ^ (unsigned __int8)(v10 >> 4)) & 2) != 0
    || *((_DWORD *)a1 + 3) != a4->left
    || *((_DWORD *)a1 + 5) != a4->right
    || *((_DWORD *)a1 + 4) != a4->top
    || *((_DWORD *)a1 + 6) != a4->bottom
    || *((_DWORD *)a1 + 7) != a5->left
    || *((_DWORD *)a1 + 9) != a5->right
    || *((_DWORD *)a1 + 8) != a5->top
    || *((_DWORD *)a1 + 10) != a5->bottom
    || *((_DWORD *)a1 + 11) != a6->left
    || *((_DWORD *)a1 + 13) != a6->right
    || *((_DWORD *)a1 + 12) != a6->top
    || *((_DWORD *)a1 + 14) != a6->bottom
    || *((_DWORD *)a1 + 15) != a7
    || ((v10 >> 2) & 1) != (a8 == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND)
    || *((_DWORD *)a1 + 16) != a9
    || *((_DWORD *)a1 + 17) != a10 )
  {
    return 0;
  }
  return v11;
}
