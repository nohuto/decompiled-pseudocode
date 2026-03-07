__int64 __fastcall DxgkUpdateCddDevmodeExtraData(_DWORD *a1, __int64 a2)
{
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  unsigned __int8 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( (a1[18] & 0x40000) != 0 )
  {
    v4 = a1[42];
    if ( v4 )
      *(_DWORD *)(a2 + 228) = GetD3dFormatFromGdiBitsPerPixel(v4);
  }
  v5 = a1[18];
  if ( (v5 & 0x400000) != 0 && (v5 & 0x200000) != 0 )
  {
    v6 = a1[45];
    v10 = 0;
    v7 = DmmMapVSyncFromRationalToInteger(
           (const struct _D3DDDI_RATIONAL *)(a2 + 220),
           (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)(((v6 & 2) != 0) + 1),
           &v10);
    v8 = a1[46];
    if ( v7 != v8 && (v7 + 1 != v8 || !v10) )
    {
      *(_DWORD *)(a2 + 220) = v8;
      *(_DWORD *)(a2 + 224) = 1;
    }
  }
  return 0LL;
}
