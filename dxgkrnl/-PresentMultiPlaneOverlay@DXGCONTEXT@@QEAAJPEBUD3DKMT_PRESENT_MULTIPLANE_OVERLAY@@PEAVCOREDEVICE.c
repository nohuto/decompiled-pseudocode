/*
 * XREFs of ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0320004
 * Callers:
 *     DxgkPresentMultiPlaneOverlay @ 0x1C0320670 (DxgkPresentMultiPlaneOverlay.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C017DA78 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C019A6A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay(
        DXGCONTEXT *this,
        const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // ecx
  __int64 PresentPlaneCount; // r12
  char **v9; // r15
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // r13d
  char *v11; // r14
  D3DKMT_HANDLE *p_hAllocation; // rdi
  char *v13; // rbx
  int v14; // eax
  bool v15; // zf
  D3DKMT_HANDLE v16; // eax
  _BYTE v19[80]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v20[64]; // [rsp+B0h] [rbp-50h] BYREF
  char v21; // [rsp+F0h] [rbp-10h] BYREF
  char v22; // [rsp+370h] [rbp+270h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 688LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      688LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
  {
    WdLogSingleEntry1(1LL, 689LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDisplayAdapter() == GetRenderAdapter()",
      689LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry2(3LL, -1073741811LL, this);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
    return 3221225485LL;
  memset(v19, 0, sizeof(v19));
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  PresentPlaneCount = a2->PresentPlaneCount;
  *(_DWORD *)&v19[16] = a2->VidPnSourceId;
  *(_DWORD *)&v19[20] = a2->PresentCount;
  *(_DWORD *)&v19[48] = a2->Duration;
  *(_DWORD *)&v19[4] = a2->BroadcastContextCount + 1;
  *(_DWORD *)&v19[28] = PresentPlaneCount;
  *(_DWORD *)&v19[52] = 0;
  *(_DWORD *)&v19[24] = *(_DWORD *)&v19[24] & 0xFFFFFF87 | *(_BYTE *)&Value & 0x20 | (2 * (*(_BYTE *)&Value & 8)) | ((*(_BYTE *)&Value & 0x10 | (*(unsigned int *)&Value >> 20) & 0x80) >> 1);
  memset(v20, 0, sizeof(v20));
  if ( (_DWORD)PresentPlaneCount )
  {
    v9 = (char **)v20;
    FlipInterval = a2->FlipInterval;
    v11 = &v22;
    p_hAllocation = &a2->pPresentPlanes->hAllocation;
    v13 = &v21;
    do
    {
      memset(v13, 0, 0x50uLL);
      *(_DWORD *)v13 = *(p_hAllocation - 2);
      if ( *p_hAllocation )
      {
        *((_DWORD *)v13 + 4) = 1;
        *((_QWORD *)v13 + 3) = p_hAllocation;
      }
      v14 = *((_DWORD *)v13 + 1);
      *((_DWORD *)v13 + 3) = -1;
      *((_DWORD *)v13 + 2) = FlipInterval;
      v15 = *(p_hAllocation - 1) == 0;
      *((_QWORD *)v13 + 6) = v11;
      *((_DWORD *)v13 + 1) = v14 & 0xFFFFFFFE | !v15;
      memset(v11, 0, 0x58uLL);
      *(_DWORD *)v11 = p_hAllocation[2];
      *(_OWORD *)(v11 + 4) = *(_OWORD *)(p_hAllocation + 3);
      *(_OWORD *)(v11 + 20) = *(_OWORD *)(p_hAllocation + 7);
      *(_OWORD *)(v11 + 36) = *(_OWORD *)(p_hAllocation + 11);
      *((_DWORD *)v11 + 13) = p_hAllocation[15];
      *((_DWORD *)v11 + 14) = p_hAllocation[16];
      *((_DWORD *)v11 + 19) = p_hAllocation[26];
      v16 = p_hAllocation[21];
      if ( v16 )
      {
        if ( (v16 & 1) != 0 )
          *((_DWORD *)v11 + 18) = (v16 & 2) != 0 ? 8 : 6;
      }
      *v9 = v13;
      p_hAllocation += 30;
      v13 += 80;
      ++v9;
      v11 += 88;
      --PresentPlaneCount;
    }
    while ( PresentPlaneCount );
  }
  *(_QWORD *)&v19[32] = v20;
  return DXGCONTEXT::PresentMultiPlaneOverlay3(this, (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)v19, a3, a4);
}
