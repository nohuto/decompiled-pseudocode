/*
 * XREFs of ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x180076964
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180041184 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007A778 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x180091458 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18018CA3C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 * Callees:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18002C4C0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResource@@@Z @ 0x180040F68 (--4-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResourc.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005FFF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180060020 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006BF9C (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x180077430 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8944 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BFE98 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C5554 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x1800D4D30 (-UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     memmove_0 @ 0x1800F4017 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ @ 0x18018E5A8 (-ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18021669C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CDrawingContext::PushRenderTarget(CDrawingContext *this, struct IDeviceTarget *a2)
{
  __int64 *v2; // r15
  unsigned int v3; // r12d
  __int64 v4; // rbx
  __int64 v7; // rax
  __int64 (__fastcall ***v8)(_QWORD); // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edi
  unsigned int v12; // r14d
  char *v13; // r15
  __int64 v14; // rcx
  __int64 *v15; // rdi
  int v16; // r8d
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm9_4
  float v20; // xmm8_4
  __int64 v21; // rax
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdi
  char *v26; // rcx
  char *v27; // rcx
  __int64 v28; // rax
  CD3DDevice *v29; // r14
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r9
  struct IDeviceTarget *v33; // r8
  int v34; // eax
  __int64 v35; // rcx
  __int64 v37; // rcx
  int v38; // r8d
  __int64 v39; // rax
  float v40; // xmm0_4
  float v41; // xmm0_4
  float v42; // xmm0_4
  float v43; // xmm0_4
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rcx
  unsigned int v48; // r12d
  unsigned int v49; // r12d
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  int v54; // ebx
  BOOL v55; // eax
  CHAR v56; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  CHAR Response[8]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+70h] [rbp-98h]
  __int128 v61; // [rsp+78h] [rbp-90h] BYREF
  __int128 v62; // [rsp+88h] [rbp-80h]
  __int128 v63; // [rsp+98h] [rbp-70h]
  __int128 v64; // [rsp+A8h] [rbp-60h]
  __int128 v65; // [rsp+B8h] [rbp-50h]
  int v66; // [rsp+C8h] [rbp-40h]
  _BYTE v67[24]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v68; // [rsp+F0h] [rbp-18h] BYREF

  v2 = (__int64 *)((char *)this + 32);
  v3 = 0;
  v4 = *((_QWORD *)this + 4);
  v60 = v4;
  if ( v4 )
  {
    v37 = v4 + *(int *)(*(_QWORD *)(v4 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
  }
  v7 = *((_QWORD *)a2 + 1);
  v68 = 0LL;
  v8 = (__int64 (__fastcall ***)(_QWORD))((char *)a2 + *(int *)(v7 + 8) + 8);
  v9 = (**v8)(v8);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x75u, 0LL);
LABEL_91:
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=(v2, v4);
    if ( *v2 )
      CDrawingContext::UpdateRenderTargetInfo(this);
    else
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((CD3DDevice **)this + 5);
    goto LABEL_27;
  }
  v11 = 0;
  *((_BYTE *)this + 5954) = 1;
  v12 = 0;
  if ( *((_DWORD *)this + 140) )
  {
    v13 = (char *)this + 536;
    while ( 1 )
    {
      v46 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v13 + 8LL * v3), this);
      v11 = v46;
      if ( v46 < 0 )
        break;
      ++v12;
      if ( ++v3 >= *((_DWORD *)this + 140) )
        goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0xFDBu, 0LL);
  }
  else
  {
LABEL_5:
    v13 = (char *)this + 536;
    *((_DWORD *)this + 140) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 536, 8LL);
  }
  if ( v12 < *((_DWORD *)this + 140) && v12 )
  {
    v48 = *((_DWORD *)v13 + 6);
    if ( v12 > v48 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024809, 0x23Du, 0LL);
    }
    else
    {
      v49 = v48 - v12;
      if ( v49 )
        memmove_0(*(void **)v13, (const void *)(*(_QWORD *)v13 + 8LL * v12), 8LL * v49);
      *((_DWORD *)v13 + 6) = v49;
    }
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v11, 0xFC6u, 0LL);
  }
  else if ( *((_BYTE *)this + 5955) )
  {
    *((_WORD *)this + 2977) = 1;
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v11, 0xB5Bu, 0LL);
  }
  else
  {
    *(_QWORD *)&v61 = 0LL;
    v15 = (__int64 *)((char *)this + 936);
    v16 = *((_DWORD *)this + 240);
    v17 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v18 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v19 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v20 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    DWORD2(v61) = 0;
    HIDWORD(v65) = 0;
    LOBYTE(v66) = 0;
    if ( v16 && (v14 = (unsigned int)(v16 - 1), *(_DWORD *)(84 * v14 + *v15)) )
    {
      CBaseClipStack::Top((_DWORD *)this + 800, &v68);
      v16 = *((_DWORD *)this + 240);
      v20 = *((float *)&v68 + 3);
      v19 = *((float *)&v68 + 2);
      v18 = *((float *)&v68 + 1);
      v17 = *(float *)&v68;
    }
    else
    {
      v68 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    if ( v16 )
    {
      v14 = (unsigned int)(v16 - 1);
      if ( *(_DWORD *)(84 * v14 + *v15 + 4) )
      {
        if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(136LL * (unsigned int)(*((_DWORD *)this + 458) - 1) + *((_QWORD *)this + 226) + 112LL) )
        {
          CScopedClipStack::ComputeCpuClipBoundsInScope((CDrawingContext *)((char *)this + 936));
          v38 = *((_DWORD *)this + 458);
        }
        v39 = 136LL * (unsigned int)(v38 - 1);
        v14 = *((_QWORD *)this + 226);
        v40 = *(float *)(v39 + v14 + 112);
        if ( v40 > v17 )
        {
          LODWORD(v68) = *(_DWORD *)(v39 + v14 + 112);
          v17 = v40;
        }
        v41 = *(float *)(v39 + v14 + 116);
        if ( v41 > v18 )
        {
          DWORD1(v68) = *(_DWORD *)(v39 + v14 + 116);
          v18 = v41;
        }
        v42 = *(float *)(v39 + v14 + 120);
        if ( v19 > v42 )
        {
          DWORD2(v68) = *(_DWORD *)(v39 + v14 + 120);
          v19 = v42;
        }
        v43 = *(float *)(v39 + v14 + 124);
        if ( v20 > v43 )
        {
          HIDWORD(v68) = *(_DWORD *)(v39 + v14 + 124);
          v20 = v43;
        }
        if ( v19 <= v17 || v20 <= v18 )
          v68 = 0uLL;
      }
    }
    v21 = *((unsigned int *)this + 240);
    *(_QWORD *)&v65 = 0LL;
    v22 = v21 + 1;
    v62 = 0LL;
    HIDWORD(v61) = 1065353216;
    v63 = _xmm;
    v64 = _xmm;
    DWORD2(v65) = 1065353216;
    WORD6(v65) = 32085;
    if ( (int)v21 + 1 < (unsigned int)v21 )
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v22 <= *((_DWORD *)this + 239) )
      {
        v23 = *v15;
        v24 = 84 * v21;
        *(_OWORD *)(v24 + v23) = v61;
        *(_OWORD *)(v24 + v23 + 16) = v62;
        *(_OWORD *)(v24 + v23 + 32) = v63;
        *(_OWORD *)(v24 + v23 + 48) = v64;
        *(_OWORD *)(v24 + v23 + 64) = v65;
        *(_DWORD *)(v24 + v23 + 80) = v66;
        *((_DWORD *)this + 240) = v22;
        v11 = 0;
        goto LABEL_17;
      }
      v51 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 936, 84LL, 1LL, &v61);
      v11 = v51;
      if ( v51 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v51, 0xC0u, 0LL);
    }
    if ( v11 >= 0 )
      goto LABEL_18;
    MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v11, 0x41u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v11, 0xB66u, 0LL);
  }
LABEL_17:
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v11, 0x80u, 0LL);
    v2 = (__int64 *)((char *)this + 32);
    goto LABEL_91;
  }
LABEL_18:
  v2 = (__int64 *)((char *)this + 32);
  v25 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = a2;
  v26 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v26 + 8LL))(v26);
  if ( v25 )
  {
    v44 = v25 + *(int *)(*(_QWORD *)(v25 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
  if ( *((_QWORD *)this + 5) )
    goto LABEL_26;
  v27 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 8LL) + 8;
  v28 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v27 + 8LL))(v27);
  v29 = (CD3DDevice *)*((_QWORD *)this + 5);
  v30 = v28;
  *((_QWORD *)this + 5) = v28;
  if ( !v28 )
    goto LABEL_24;
  if ( *(int *)(v28 + 8) >= 0 )
    goto LABEL_23;
  while ( 1 )
  {
    while ( 1 )
    {
      v53 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v54 = v53;
      if ( !v53 )
      {
        v55 = IsDebuggerPresent();
        v56 = Response[0];
        if ( v55 )
          v56 = 103;
        Response[0] = v56;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        word_1802CE8C0,
        word_1802CE8C0,
        "Function: ",
        L"CMILCOMBase::InternalAddRef",
        ", ",
        L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
        25);
      if ( v54 )
      {
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
      }
      else
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          Response,
          Response);
        __debugbreak();
      }
      if ( Response[0] <= 98 )
        break;
      if ( Response[0] == 103 )
        goto LABEL_23;
      if ( Response[0] == 105 )
        goto LABEL_86;
      if ( Response[0] != 112 )
      {
        if ( Response[0] != 116 )
          goto LABEL_85;
        goto LABEL_83;
      }
LABEL_84:
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_85:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
    if ( Response[0] == 98 || Response[0] == 66 )
      break;
    if ( Response[0] == 71 )
      goto LABEL_23;
    if ( Response[0] != 73 )
    {
      if ( Response[0] != 80 )
      {
        if ( Response[0] != 84 )
          goto LABEL_85;
LABEL_83:
        CurrentThread = GetCurrentThread();
        TerminateThread(CurrentThread, 0xC0000001);
        goto LABEL_85;
      }
      goto LABEL_84;
    }
LABEL_86:
    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
  }
  __debugbreak();
LABEL_23:
  _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
  v4 = v60;
LABEL_24:
  if ( v29 )
    CD3DDevice::Release(v29);
LABEL_26:
  v31 = (**(__int64 (__fastcall ***)(__int64, _BYTE *))*v2)(*v2, v67);
  v32 = *((_QWORD *)this + 5);
  v33 = (struct IDeviceTarget *)*v2;
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)v31;
  *((_QWORD *)this + 9) = *(_QWORD *)(v31 + 16);
  v34 = CD2DContext::PushTarget(
          (CD2DContext *)(v32 + 16),
          (struct ID2DContextOwner *)(((unsigned __int64)this + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
          v33);
  v11 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x98u, 0LL);
    --*((_DWORD *)this + 240);
    goto LABEL_91;
  }
LABEL_27:
  if ( v4 )
  {
    v45 = v4 + *(int *)(*(_QWORD *)(v4 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  }
  return (unsigned int)v11;
}
