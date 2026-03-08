/*
 * XREFs of ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x1801D9B38
 * Callers:
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x180052DC0 (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z @ 0x180087264 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1801177DC (memcmp_0.c)
 */

void __fastcall COverlayContext::ComparePlaneAttributes(
        const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *a1,
        const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *a2,
        bool *a3,
        bool *a4)
{
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __m256i Buf1; // [rsp+20h] [rbp-98h] BYREF
  __int128 v17; // [rsp+40h] [rbp-78h]
  __int128 v18; // [rsp+50h] [rbp-68h]
  __int128 v19; // [rsp+60h] [rbp-58h]
  __int128 v20; // [rsp+70h] [rbp-48h]
  __int128 v21; // [rsp+80h] [rbp-38h]

  *a3 = memcmp_0(a1, a2, 0x70uLL) != 0;
  *a4 = 0;
  if ( *a3 )
  {
    v8 = *((_DWORD *)a2 + 19);
    v9 = *((_OWORD *)a1 + 1);
    *(_OWORD *)Buf1.m256i_i8 = *(_OWORD *)a1;
    v10 = *((_OWORD *)a1 + 2);
    *(_OWORD *)&Buf1.m256i_u64[2] = v9;
    v11 = *((_OWORD *)a1 + 3);
    v17 = v10;
    v12 = *((_OWORD *)a1 + 4);
    v18 = v11;
    v13 = *((_OWORD *)a1 + 5);
    v19 = v12;
    v14 = *((_OWORD *)a1 + 6);
    HIDWORD(v19) = v8;
    v20 = v13;
    v15 = *(_OWORD *)((char *)a2 + 4);
    v21 = v14;
    *(_OWORD *)((char *)Buf1.m256i_i64 + 4) = v15;
    *a4 = memcmp_0(&Buf1, a2, 0x70uLL) == 0;
  }
}
