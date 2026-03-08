/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1C0197A80
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C0198420 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     _CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO @ 0x1C031EBE0 (_CapturePresentMultiPlaneOverlayArgs3_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall CapturePresentMultiPlaneOverlayArgs3(
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct _D3DKMT_MULTIPLANE_OVERLAY3 ***a3,
        struct _D3DKMT_MULTIPLANE_OVERLAY3 **a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **a5,
        struct tagRECT ***a6,
        unsigned int **a7,
        unsigned int **a8,
        unsigned __int8 **a9,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION **a10)
{
  __m128i v10; // xmm6
  __m128i v11; // xmm7
  unsigned __int64 v12; // xmm0_8
  unsigned __int64 v13; // rcx
  unsigned int v14; // edi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  char *v18; // r12
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v21; // r13
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned int v24; // esi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  const void *v27; // r15
  char *v28; // r14
  const void *v29; // rdx
  char *v30; // rax
  size_t v31; // r8
  const void *v32; // rdx
  unsigned int v33; // ebx
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v34; // r15
  __int64 v35; // r15
  _OWORD *v36; // rcx
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 DirtyRectCount; // kr00_8
  __int64 v42; // rax
  size_t v43; // r8
  char *v44; // rdx
  struct tagRECT *v45; // r9
  unsigned int v46; // eax
  size_t v47; // r8
  char *v48; // rdx
  ULONG64 v49; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int *v55; // r9
  char *v56; // rdx
  __int64 v57; // rax
  unsigned int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 CurrentProcess; // rax
  __int64 v62; // rcx
  __int64 v63; // [rsp+28h] [rbp-180h]
  __int64 v64; // [rsp+30h] [rbp-178h]
  unsigned int v65; // [rsp+50h] [rbp-158h]
  unsigned int Size; // [rsp+58h] [rbp-150h]
  size_t Sizea; // [rsp+58h] [rbp-150h]
  void *v68; // [rsp+60h] [rbp-148h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *v69; // [rsp+68h] [rbp-140h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v70; // [rsp+78h] [rbp-130h]
  __int64 v71; // [rsp+80h] [rbp-128h]
  struct tagRECT **v72; // [rsp+88h] [rbp-120h]
  unsigned int *v73; // [rsp+90h] [rbp-118h]
  char *v74; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v75; // [rsp+A8h] [rbp-100h]
  __int128 v76; // [rsp+B0h] [rbp-F8h]
  __int128 v77; // [rsp+C0h] [rbp-E8h]
  __int128 v78; // [rsp+D0h] [rbp-D8h]
  int v79; // [rsp+E0h] [rbp-C8h]
  void *v80; // [rsp+F0h] [rbp-B8h]
  void *v81[2]; // [rsp+100h] [rbp-A8h]
  __m128i v82; // [rsp+110h] [rbp-98h]
  void *Src[2]; // [rsp+120h] [rbp-88h]
  __m128i v84; // [rsp+130h] [rbp-78h]
  void *v85[2]; // [rsp+140h] [rbp-68h]

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)MmUserProbeAddress;
  *(_OWORD *)v81 = *(_OWORD *)&a1->hAdapter;
  v82 = *(__m128i *)&a1->VidPnSourceId;
  v10 = v82;
  *(_OWORD *)Src = *(_OWORD *)&a1->ppPresentPlanes;
  v11 = *(__m128i *)&a1->Duration;
  v84 = v11;
  *(_OWORD *)v85 = *(_OWORD *)&a1->pHDRMetaData;
  v12 = _mm_srli_si128(v82, 8).m128i_u64[0];
  v13 = HIDWORD(v12);
  if ( (unsigned int)(HIDWORD(v12) - 1) > 9 )
  {
    CurrentProcess = PsGetCurrentProcess(v13);
    WdLogSingleEntry3(2LL, v82.m128i_u32[3], -1073741811LL, CurrentProcess);
    v64 = PsGetCurrentProcess(v62);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v82.m128i_u32[3],
      -1073741811LL,
      v64,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (unsigned int)(HIDWORD(v81[0]) - 1) > 0x3F )
  {
    v59 = PsGetCurrentProcess(v13);
    WdLogSingleEntry2(2LL, -1073741811LL, v59);
    v63 = PsGetCurrentProcess(v60);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid ContextCount, returing 0x%I64x at 0x%I64x",
      -1073741811LL,
      v63,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v14 = 0;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = HIDWORD(v12);
  v15 = HIDWORD(v12);
  v16 = 8 * v13;
  if ( !is_mul_ok(v13, 8uLL) )
    v16 = -1LL;
  v18 = (char *)operator new[](v16, 0x4B677844u, 256LL);
  v74 = v18;
  if ( !v18 )
    goto LABEL_74;
  v19 = 80 * v15;
  if ( !is_mul_ok(v15, 0x50uLL) )
    v19 = -1LL;
  v71 = operator new[](v19, 0x4B677844u, 256LL);
  v75 = v71;
  if ( !v71 )
    goto LABEL_74;
  v20 = 88 * v15;
  if ( !is_mul_ok(v15, 0x58uLL) )
    v20 = -1LL;
  v21 = (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)operator new[](v20, 0x4B677844u, 256LL);
  v70 = v21;
  *(_QWORD *)&v76 = v21;
  if ( !v21 )
    goto LABEL_74;
  v22 = 8 * v15;
  if ( !is_mul_ok(v15, 8uLL) )
    v22 = -1LL;
  v72 = (struct tagRECT **)operator new[](v22, 0x4B677844u, 256LL);
  *(_QWORD *)&v78 = v72;
  if ( !v72 )
    goto LABEL_74;
  v65 = HIDWORD(v81[0]);
  v23 = 4LL * HIDWORD(v81[0]);
  if ( !is_mul_ok(HIDWORD(v81[0]), 4uLL) )
    v23 = -1LL;
  v80 = (void *)operator new[](v23, 0x4B677844u, 256LL);
  *((_QWORD *)&v76 + 1) = v80;
  if ( !v80 )
    goto LABEL_74;
  v24 = _mm_cvtsi128_si32(_mm_srli_si128(v82, 12));
  v25 = v24 * HIDWORD(v81[0]);
  v26 = 4 * v25;
  if ( !is_mul_ok(v25, 4uLL) )
    v26 = -1LL;
  v73 = (unsigned int *)operator new[](v26, 0x4B677844u, 256LL);
  *(_QWORD *)&v77 = v73;
  if ( !v73 )
    goto LABEL_74;
  v27 = v85[0];
  if ( !v85[0] )
  {
    Size = v84.m128i_u32[2];
LABEL_25:
    v68 = (void *)*((_QWORD *)&v77 + 1);
    goto LABEL_26;
  }
  v58 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
  Size = v58;
  if ( !v58 )
    goto LABEL_25;
  v68 = (void *)operator new[](v58, 0x4B677844u, 256LL);
  *((_QWORD *)&v77 + 1) = v68;
  if ( !v68 )
    goto LABEL_74;
LABEL_26:
  v28 = (char *)Src[1];
  if ( Src[1] )
  {
    v69 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *)operator new[](0x28uLL, 0x4B677844u, 256LL);
    *((_QWORD *)&v78 + 1) = v69;
    if ( v69 )
      goto LABEL_28;
LABEL_74:
    v57 = PsGetCurrentProcess(v17);
    WdLogSingleEntry2(3LL, -1073741801LL, v57);
    CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v74);
    return 3221225495LL;
  }
  v69 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *)*((_QWORD *)&v78 + 1);
LABEL_28:
  v29 = Src[0];
  v30 = (char *)Src[0] + 8 * v15;
  if ( v30 < Src[0] || (unsigned __int64)v30 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v18, v29, 8 * v15);
  v31 = 4LL * v65;
  v32 = v81[1];
  if ( (char *)v81[1] + v31 < v81[1] || (char *)v81[1] + v31 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v80, v32, v31);
  if ( v27 && Size )
  {
    v49 = (ULONG64)v27 + Size;
    if ( v49 < (unsigned __int64)v27 || v49 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v68, v27, Size);
  }
  if ( v28 )
  {
    if ( v28 + 40 < v28 || (unsigned __int64)(v28 + 40) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&v69->Flags.0 = *(_OWORD *)v28;
    *(_OWORD *)&v69->SrcRect.bottom = *((_OWORD *)v28 + 1);
    *(_QWORD *)&v69->DstRect.bottom = *((_QWORD *)v28 + 4);
  }
  v33 = 0;
  v34 = (struct _D3DKMT_MULTIPLANE_OVERLAY3 *)v71;
  while ( v33 < v24 )
  {
    v35 = v33;
    v36 = *(_OWORD **)&v18[v35 * 8];
    if ( v36 + 5 < v36 || (unsigned __int64)(v36 + 5) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)(v71 + 80LL * v33) = *v36;
    *(_OWORD *)(v71 + 80LL * v33 + 16) = v36[1];
    *(_OWORD *)(v71 + 80LL * v33 + 32) = v36[2];
    *(_OWORD *)(v71 + 80LL * v33 + 48) = v36[3];
    *(_OWORD *)(v71 + 80LL * v33 + 64) = v36[4];
    v37 = *(_QWORD *)(v71 + 80LL * v33 + 48);
    v38 = v33;
    Sizea = v38 * 88;
    if ( v37 + 88 < v37 || v37 + 88 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&v21[v38].Flags = *(_OWORD *)v37;
    *(_OWORD *)&v21[v38].SrcRect.bottom = *(_OWORD *)(v37 + 16);
    *(_OWORD *)&v21[v38].DstRect.bottom = *(_OWORD *)(v37 + 32);
    *(_OWORD *)&v21[v38].ClipRect.bottom = *(_OWORD *)(v37 + 48);
    *(_OWORD *)&v21[v38].pDirtyRects = *(_OWORD *)(v37 + 64);
    *(_QWORD *)&v21[v38].SDRWhiteLevel = *(_QWORD *)(v37 + 80);
    v39 = v33;
    if ( v70[v38].DirtyRectCount > 0xFFF )
    {
      WdLogSingleEntry3(2LL, v70[v39].DirtyRectCount, v33, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid DirtyRectCount:%u on plane %u, returing 0x%I64x",
        *(unsigned int *)((char *)&v70->DirtyRectCount + Sizea),
        v33,
        -1073741811LL,
        0LL,
        0LL);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v74);
      return 3221225485LL;
    }
    DirtyRectCount = v70[v39].DirtyRectCount;
    v40 = 16 * DirtyRectCount;
    if ( !is_mul_ok(DirtyRectCount, 0x10uLL) )
      v40 = -1LL;
    v42 = operator new[](v40, 0x4B677844u, 256LL);
    v72[v33] = (struct tagRECT *)v42;
    if ( !v42 )
    {
      v51 = PsGetCurrentProcess(v72);
      WdLogSingleEntry2(3LL, -1073741801LL, v51);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v74);
      return 3221225495LL;
    }
    v21 = v70;
    v43 = 16LL * *(unsigned int *)((char *)&v70->DirtyRectCount + Sizea);
    v44 = *(char **)((char *)&v70->pDirtyRects + Sizea);
    v45 = v72[v35];
    if ( &v44[v43] < v44 || (unsigned __int64)&v44[v43] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v45, v44, v43);
    *(RECT **)((char *)&v70->pDirtyRects + Sizea) = v72[v35];
    v34 = (struct _D3DKMT_MULTIPLANE_OVERLAY3 *)v71;
    v46 = *(_DWORD *)(v71 + 80LL * v33 + 16);
    if ( v46 > v65 )
    {
      v52 = PsGetCurrentProcess(v65);
      WdLogSingleEntry2(2LL, -1073741811LL, v52);
      v54 = PsGetCurrentProcess(v53);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid AllocationCount, returing 0x%I64x at 0x%I64x",
        -1073741811LL,
        v54,
        0LL,
        0LL,
        0LL);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v74);
      return 3221225485LL;
    }
    if ( v46 )
    {
      v47 = 4LL * v46;
      v48 = *(char **)(v71 + 80LL * v33 + 24);
      if ( &v48[v47] < v48 || (unsigned __int64)&v48[v47] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(&v73[v65 * v33], v48, v47);
    }
    ++v33;
  }
  Src[0] = v18;
  v55 = (unsigned int *)v80;
  v81[1] = v80;
  v85[0] = v68;
  Src[1] = v69;
  while ( v14 < v24 )
  {
    v56 = (char *)v34 + 80 * v14;
    *(_QWORD *)&v18[8 * v14] = v56;
    *((_QWORD *)v56 + 6) = &v21[v14];
    *((_QWORD *)v56 + 3) = &v73[v65 * v14++];
  }
  *(_OWORD *)&a2->hAdapter = *(_OWORD *)v81;
  *(__m128i *)&a2->VidPnSourceId = v10;
  *(_OWORD *)&a2->ppPresentPlanes = *(_OWORD *)Src;
  *(__m128i *)&a2->Duration = v11;
  *(_OWORD *)&a2->pHDRMetaData = *(_OWORD *)v85;
  *a3 = (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)v18;
  *a4 = v34;
  *a5 = v21;
  *a6 = v72;
  *a7 = v55;
  *a8 = v73;
  *a9 = (unsigned __int8 *)v68;
  *a10 = v69;
  operator delete(0LL);
  operator delete(0LL);
  operator delete(0LL);
  operator delete(0LL);
  operator delete(0LL);
  operator delete(0LL);
  operator delete(0LL);
  operator delete(0LL);
  return 0LL;
}
