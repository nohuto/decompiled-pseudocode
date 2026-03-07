__int64 __fastcall VIDPN_MGR::PopulateGdiDisplayModeFromPath(
        const struct DMMVIDPNPRESENTPATH *a1,
        struct _CDD_DEVMODE *a2)
{
  DMMVIDPNTARGET *v4; // rdi
  struct DMMVIDPNTARGETMODESET *v5; // rdi
  DMMVIDPNSOURCEMODE *v6; // r15
  struct DMMVIDPNTARGETMODESET *v7; // rbp
  __int64 v8; // rbp
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v10; // edi
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v11; // r12
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v12; // esi
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v13; // ebx
  unsigned int v14; // eax
  int v15; // esi
  __int64 v17; // rdi
  __int64 v18; // rbx
  unsigned int BitsPerPixel; // eax
  struct DMMVIDPNTARGETMODESET *v20; // [rsp+70h] [rbp+8h] BYREF

  if ( !a1 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = (DMMVIDPNTARGET *)*((_QWORD *)a1 + 11);
  if ( !v4 )
    WdLogSingleEntry0(1LL);
  v20 = 0LL;
  v5 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v4);
  if ( !v5 )
    WdLogSingleEntry0(1LL);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v20, (__int64)v5);
  v6 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v20 + 18);
  if ( !v6 )
    WdLogSingleEntry0(1LL);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v20, 0LL);
  v7 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)a1 + 12));
  if ( !v7 )
    WdLogSingleEntry0(1LL);
  v20 = v7;
  v8 = *((_QWORD *)v7 + 18);
  if ( !v8 )
    WdLogSingleEntry0(1LL);
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v20, 0LL);
  GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v6);
  *(_QWORD *)((char *)a2 + 220) = *(_QWORD *)(v8 + 152);
  v10 = *((_DWORD *)a1 + 28);
  v11 = GraphicsInfo;
  v12 = *((_DWORD *)a1 + 29);
  v13 = (int)(*(_DWORD *)(v8 + 120) << 29) >> 29;
  v14 = DmmMapVSyncFromRationalToInteger((const struct _D3DDDI_RATIONAL *)((char *)a2 + 220), v13, 0LL);
  v15 = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
          0x20uLL,
          v11->PrimSurfSize.cx,
          v11->PrimSurfSize.cy,
          v14,
          v13,
          v12,
          v10,
          (struct _devicemodeW *const)a2);
  if ( v15 < 0 )
  {
    v17 = (int)(*(_DWORD *)(v8 + 120) << 29) >> 29;
    v18 = (unsigned int)DMMVIDEOSIGNALMODE::DivideAndRound(*(unsigned int *)(v8 + 152), *(unsigned int *)(v8 + 156));
    BitsPerPixel = DMMVIDPNSOURCEMODE::GetBitsPerPixel(v6);
    WdLogSingleEntry5(3LL, v11->PrimSurfSize.cx, v11->PrimSurfSize.cy, BitsPerPixel, v18, v17);
    return (unsigned int)v15;
  }
  else
  {
    *((_DWORD *)a2 + 57) = 21;
    return 0LL;
  }
}
