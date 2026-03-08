/*
 * XREFs of ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801B3300
 * Callers:
 *     <none>
 * Callees:
 *     ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18000FDA0 (-FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x18001303C (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800733C4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800748A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800B2368 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800DB874 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUM.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801292C6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x18012A118 (McTemplateU0ffff_EventWriteTransfer.c)
 *     ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z @ 0x1801D384C (-RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x1801D3998 (-RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z.c)
 *     ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x1802174DC (-GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180283D20 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 */

__int64 __fastcall CGlobalDrawingContext::DrawMesh2D(__m128 *this, struct CGeometry2D *a2, struct CImageSource *a3)
{
  int v3; // edi
  struct ID2D1Effect *v4; // rsi
  int v8; // ebx
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  float v15; // xmm15_4
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  struct IBitmapRealization *v21; // rbx
  char *v22; // rcx
  char v23; // di
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rcx
  int MeshData; // eax
  __int64 v28; // rcx
  unsigned int v29; // r14d
  __int64 v30; // rdi
  LPVOID v31; // rax
  __int64 v32; // rcx
  void *v33; // rbx
  unsigned int *v34; // r8
  _OWORD *v35; // rcx
  struct MilVertexXYZDUV2 *v36; // r9
  __int64 v37; // rax
  __int128 v38; // xmm1
  int CachedEffectNoRef; // eax
  __int64 v40; // rcx
  float v41; // xmm6_4
  float v42; // xmm13_4
  float v43; // xmm14_4
  float v44; // xmm12_4
  float v45; // xmm7_4
  float v46; // xmm6_4
  float v47; // xmm7_4
  float v48; // xmm8_4
  float v49; // xmm9_4
  float v50; // xmm10_4
  float v51; // xmm11_4
  int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rcx
  enum D2D1_COMPOSITE_MODE v58; // r8d
  int v59; // eax
  __int64 v60; // rcx
  unsigned int v62[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct IBitmapRealization *v63; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+58h] [rbp-B0h] BYREF
  CDrawingContext *v65; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v66[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct ID2D1Effect *v67; // [rsp+70h] [rbp-98h] BYREF
  unsigned int *v68; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v69[16]; // [rsp+88h] [rbp-80h] BYREF
  int v70; // [rsp+C8h] [rbp-40h]
  struct MilVertexXYZDUV2 *v71[2]; // [rsp+D8h] [rbp-30h] BYREF
  float v72; // [rsp+E8h] [rbp-20h]
  float v73; // [rsp+ECh] [rbp-1Ch]
  __int128 v74; // [rsp+F0h] [rbp-18h] BYREF
  _OWORD v75[4]; // [rsp+108h] [rbp+0h] BYREF

  v3 = 0;
  v4 = 0LL;
  v62[0] = 0;
  v67 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_DRAWEVENT_Start,
      7,
      this[504].m128_i32[2]);
  if ( a2 )
  {
    if ( a3 )
    {
      v8 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 184LL))(a2);
      v9 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 192LL))(a2);
      if ( v8 )
      {
        if ( v9 )
        {
          CDrawingContext::RecordBitmapResourceInfo(
            (CDrawingContext *)&this[-1],
            (struct CImageSource *)((char *)a3 + *(int *)(*((_QWORD *)a3 + 8) + 8LL) + 64));
          v10 = (__int64 *)((char *)a3 + *(int *)(*((_QWORD *)a3 + 8) + 8LL) + 64);
          v11 = *v10;
          v63 = 0LL;
          v12 = (*(__int64 (__fastcall **)(__int64 *, struct IBitmapRealization **))(v11 + 64))(v10, &v63);
          v62[0] = v12;
          v3 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC8u, 0LL);
          }
          else
          {
            v14 = *(_QWORD *)a2;
            v74 = 0LL;
            (*(void (__fastcall **)(struct CGeometry2D *, __int128 *))(v14 + 200))(a2, &v74);
            v72 = 0.0;
            v73 = 0.0;
            v65 = 0LL;
            v15 = 0.0;
            *(_OWORD *)v71 = v74;
            v16 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(
                    (__int64 *)&v65,
                    (__int64)&this[-1],
                    (__int64)v71,
                    0LL);
            v62[0] = v16;
            v3 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xD0u, 0LL);
            }
            else
            {
              v18 = CDrawingContext::ApplyRenderStateInternal(this - 1, 0);
              v62[0] = v18;
              v3 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xD1u, 0LL);
              }
              else
              {
                CDrawingContext::RecordBitmapRealizationInfo((CDrawingContext *)&this[-1], v63);
                if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
                {
                  v70 = 0;
                  *(_OWORD *)v71 = 0LL;
                  CMatrixStack::Top((CMatrixStack *)&this[24], (struct CMILMatrix *)v69);
                  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v69, (struct MilRectF *)&v74, (float *)v71);
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
                    McTemplateU0ffff_EventWriteTransfer(
                      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
                      (__int64)&EVTDESC_ETWGUID_DRAWEVENT,
                      v20,
                      *((float *)v71 + 1),
                      (char)v71[1],
                      SBYTE4(v71[1]));
                }
                v64 = 0LL;
                v21 = v63;
                v71[0] = *(struct MilVertexXYZDUV2 **)(*(_QWORD *)v63 + 56LL);
                v22 = (char *)a3 + *(int *)(*((_QWORD *)a3 + 8) + 8LL) + 64;
                v23 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v22 + 16LL))(v22);
                if ( v64 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
                LOBYTE(v24) = v23;
                v25 = ((__int64 (__fastcall *)(struct IBitmapRealization *, unsigned __int16 *, __int64 *, __int64))v71[0])(
                        v21,
                        &this[2].m128_u16[4],
                        &v64,
                        v24);
                v62[0] = v25;
                v3 = v25;
                if ( v25 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xE6u, 0LL);
                }
                else
                {
                  v71[0] = 0LL;
                  v62[0] = 0;
                  v68 = 0LL;
                  v66[0] = 0;
                  MeshData = CGeometry2D::GetMeshData(a2, v71, v62, (const unsigned int **const)&v68, v66);
                  v62[0] = MeshData;
                  v3 = MeshData;
                  if ( MeshData < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, MeshData, 0xF1u, 0LL);
                  }
                  else
                  {
                    v29 = v66[0];
                    v30 = v66[0];
                    v31 = DefaultHeap::Alloc(saturated_mul(v66[0], 0x20uLL));
                    v33 = v31;
                    if ( v31 )
                    {
                      if ( v29 )
                      {
                        v34 = v68;
                        v35 = v31;
                        v36 = v71[0];
                        do
                        {
                          v37 = *v34++;
                          v37 *= 32LL;
                          v38 = *(_OWORD *)((char *)v36 + v37 + 16);
                          *v35 = *(_OWORD *)((char *)v36 + v37);
                          v35[1] = v38;
                          v35 += 2;
                          --v30;
                        }
                        while ( v30 );
                      }
                      CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(this[1].m128_u64[1] + 16, 4LL, &v67);
                      v62[0] = CachedEffectNoRef;
                      v3 = CachedEffectNoRef;
                      if ( CachedEffectNoRef < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, CachedEffectNoRef, 0xFCu, 0LL);
                        operator delete(v33);
                        wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v64);
                        CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope(&v65);
                        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v63);
                        v4 = v67;
                        goto LABEL_45;
                      }
                      v41 = 0.0;
                      v42 = 0.0;
                      v43 = 0.0;
                      LODWORD(v44) = (_DWORD)FLOAT_1_0;
                      v75[0] = _xmm;
                      LODWORD(v45) = (_DWORD)FLOAT_1_0;
                      v75[1] = _xmm;
                      v75[2] = _xmm;
                      v75[3] = _xmm;
                      v70 = 0;
                      if ( (*(unsigned __int8 (__fastcall **)(struct IBitmapRealization *, _DWORD *, _QWORD))(*(_QWORD *)v63 + 8LL))(
                             v63,
                             v69,
                             0LL) )
                      {
                        v46 = *(float *)v69;
                        v47 = *(float *)&v69[1];
                        v48 = *(float *)&v69[4];
                        v49 = *(float *)&v69[5];
                        v50 = *(float *)&v69[12];
                        v51 = *(float *)&v69[13];
                        (**(void (__fastcall ***)(struct IBitmapRealization *, struct MilVertexXYZDUV2 **))v63)(
                          v63,
                          v71);
                        v15 = (float)SHIDWORD(v71[0]) * v47;
                        v45 = (float)SHIDWORD(v71[0]) * v49;
                        v44 = (float)SLODWORD(v71[0]) * v46;
                        v41 = (float)SLODWORD(v71[0]) * v48;
                        v42 = (float)SLODWORD(v71[0]) * v50;
                        v43 = (float)SHIDWORD(v71[0]) * v51;
                      }
                      v4 = v67;
                      v52 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, _OWORD *, int))(*(_QWORD *)v67 + 72LL))(
                              v67,
                              0LL,
                              0LL,
                              v75,
                              64);
                      v62[0] = v52;
                      v3 = v52;
                      if ( v52 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x113u, 0LL);
                      }
                      else
                      {
                        v71[0] = (struct MilVertexXYZDUV2 *)__PAIR64__(LODWORD(v15), LODWORD(v44));
                        v71[1] = (struct MilVertexXYZDUV2 *)__PAIR64__(LODWORD(v45), LODWORD(v41));
                        v72 = v42;
                        v73 = v43;
                        v54 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct MilVertexXYZDUV2 **, int))(*(_QWORD *)v4 + 72LL))(
                                v4,
                                1LL,
                                0LL,
                                v71,
                                24);
                        v62[0] = v54;
                        v3 = v54;
                        if ( v54 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x116u, 0LL);
                        }
                        else
                        {
                          (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v4 + 112LL))(
                            v4,
                            0LL,
                            v64,
                            1LL);
                          v56 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, const wchar_t *, _QWORD, void *, unsigned int))(*(_QWORD *)v4 + 64LL))(
                                  v4,
                                  L"vertices",
                                  0LL,
                                  v33,
                                  32 * v29);
                          v62[0] = v56;
                          v3 = v56;
                          if ( v56 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x11Du, 0LL);
                          }
                          else
                          {
                            v58 = D2D1_COMPOSITE_MODE_MASK_INVERT;
                            if ( this[21].m128_i32[2] != 2 )
                              v58 = D2D1_COMPOSITE_MODE_SOURCE_OVER;
                            v59 = CD2DContext::FillEffect(
                                    (ID2D1DeviceContext **)(this[1].m128_u64[1] + 16),
                                    (const struct ID2DContextOwner *)((unsigned __int64)&this->m128_u64[1] & -(__int64)(this != (__m128 *)16)),
                                    v4,
                                    0LL,
                                    0LL,
                                    D2D1_INTERPOLATION_MODE_LINEAR,
                                    v58);
                            v62[0] = v59;
                            v3 = v59;
                            if ( v59 < 0 )
                              MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x124u, 0LL);
                          }
                        }
                      }
                      operator delete(v33);
                    }
                    else
                    {
                      v3 = -2147024882;
                      v62[0] = -2147024882;
                      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, -2147024882, 0xF4u, 0LL);
                    }
                  }
                }
                wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v64);
              }
            }
            CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope(&v65);
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v63);
        }
      }
    }
  }
LABEL_45:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_DRAWEVENT_Stop,
      7,
      this[504].m128_i32[2]);
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v4 + 112LL))(v4, 0LL, 0LL, 1LL);
  TranslateDXGIorD3DErrorInContext(v3, 0, v62);
  return v62[0];
}
