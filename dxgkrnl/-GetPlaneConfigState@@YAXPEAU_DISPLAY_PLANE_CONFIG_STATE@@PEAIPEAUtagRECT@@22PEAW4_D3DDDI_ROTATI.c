void __fastcall GetPlaneConfigState(
        struct _DISPLAY_PLANE_CONFIG_STATE *a1,
        unsigned int *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        enum _D3DDDI_ROTATION *a6,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND *a7,
        enum D3DDDI_COLOR_SPACE_TYPE *a8,
        unsigned int *a9)
{
  unsigned int v9; // r10d

  v9 = 0;
  *a2 = 0;
  if ( (*((_DWORD *)a1 + 2) & 0x10) != 0 )
  {
    *a2 = 1;
    v9 = 1;
  }
  if ( (*((_DWORD *)a1 + 2) & 0x20) != 0 )
  {
    v9 |= 2u;
    *a2 = v9;
  }
  if ( (*((_DWORD *)a1 + 2) & 0x40) != 0 )
    *a2 = v9 | 4;
  *a3 = *(struct tagRECT *)((char *)a1 + 12);
  *a4 = *(struct tagRECT *)((char *)a1 + 28);
  *a5 = *(struct tagRECT *)((char *)a1 + 44);
  *a6 = *((enum _D3DDDI_ROTATION *)a1 + 15);
  *a7 = (*((_DWORD *)a1 + 2) >> 2) & 1;
  *a8 = *((enum D3DDDI_COLOR_SPACE_TYPE *)a1 + 16);
  *a9 = *((_DWORD *)a1 + 17);
}
