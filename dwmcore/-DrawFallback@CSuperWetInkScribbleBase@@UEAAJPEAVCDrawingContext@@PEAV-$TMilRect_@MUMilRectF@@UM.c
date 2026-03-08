/*
 * XREFs of ?DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802B56B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18001C268 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180047D5C (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800618D4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180073854 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x18012A118 (McTemplateU0ffff_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 *     ?AddTransientDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x1801D0050 (-AddTransientDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z.c)
 *     ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801D01D8 (-CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     wil::details::lambda_call__lambda_347d3ebbea5fda7dd84efb17ad2ffc68___::_lambda_call__lambda_347d3ebbea5fda7dd84efb17ad2ffc68___ @ 0x1802B54B8 (wil--details--lambda_call__lambda_347d3ebbea5fda7dd84efb17ad2ffc68___--_lambda_call__lambda_347d.c)
 */

__int64 __fastcall CSuperWetInkScribbleBase::DrawFallback(__int64 *a1, ULONGLONG a2, struct _EVENT_DATA_DESCRIPTOR *a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _DWORD *, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  const struct tagRECT *v18; // rax
  __int64 v19; // r8
  __int64 v20; // [rsp+30h] [rbp-99h] BYREF
  int v21; // [rsp+38h] [rbp-91h] BYREF
  int v22[2]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v23; // [rsp+48h] [rbp-81h] BYREF
  __int64 v24; // [rsp+50h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+58h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+68h] [rbp-61h] BYREF
  _DWORD v27[4]; // [rsp+78h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+88h] [rbp-41h] BYREF
  void *v29[10]; // [rsp+A0h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_DRAWASWETINK_Start,
      (__int64)a3,
      1u,
      &v26);
  a3->Reserved = 0;
  a3->Size = 0;
  HIDWORD(a3->Ptr) = 0;
  LODWORD(a3->Ptr) = 0;
  v6 = *a1;
  v21 = 0;
  v24 = 0LL;
  v23 = 0LL;
  *(_QWORD *)v22 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, int *, __int64 *, __int64 *, int *))(v6 + 88))(a1, &v21, &v24, &v23, v22);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1[2] + 96LL))(a1[2]) <= 1 )
      return 0LL;
    v10 = a1[2];
    v20 = 0LL;
    v11 = *(__int64 (__fastcall **)(__int64, _DWORD *, __int64 *))(*(_QWORD *)v10 + 88LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v20);
    v12 = v11(v10, v27, &v20);
    v8 = v12;
    if ( v12 >= 0 )
    {
      *(float *)&v25.Ptr = (float)v27[0];
      *((float *)&v25.Ptr + 1) = (float)v27[1];
      *(float *)&v25.Size = (float)v27[2];
      *(float *)&v25.Reserved = (float)v27[3];
      v26 = v25;
      v12 = CDrawingContext::PushGpuClipRectInternal(a2, 0LL, (__int64)&v26, D2D1_ANTIALIAS_MODE_ALIASED, 1);
      v8 = v12;
      if ( v12 >= 0 )
      {
        v26.Ptr = a2;
        v15 = *(_QWORD *)(a2 + 16);
        LOBYTE(v26.Size) = 1;
        LOBYTE(v14) = 1;
        v16 = (*(__int64 (__fastcall **)(ULONGLONG, __int64, __int64))(v15 + 64))(a2 + 16, v20, v14);
        v8 = v16;
        if ( v16 >= 0 )
        {
          v16 = (*(__int64 (__fastcall **)(__int64, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)v20 + 32LL))(v20, &v28);
          v8 = v16;
          if ( v16 >= 0 )
          {
            v25 = 0LL;
            v26 = v28;
            CDrawingContext::CalcLocalSpaceClippedBounds(a2, &v26, (float *)&v25);
            v18 = (const struct tagRECT *)PixelAlign((int *)&v26, (float *)&v25);
            FastRegion::CRegion::CRegion((FastRegion::CRegion *)v29, v18);
            CDrawingContext::AddTransientDirtyRegion(
              (struct FastRegion::Internal::CRgnData **)a2,
              (FastRegion::Internal::CRgnData **)v29);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
              McTemplateU0ffff_EventWriteTransfer(
                (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
                (__int64)&EVTDESC_COMPUTESCRIBBLE_DRAWASWETINK_Stop,
                v19,
                *((float *)&v25.Ptr + 1),
                v25.Size,
                v25.Type);
            *a3 = v25;
            FastRegion::CRegion::FreeMemory(v29);
            CDrawingContext::PopGpuClipRectInternal((CDrawingContext *)a2, 0);
            v8 = 0;
            goto LABEL_20;
          }
          v17 = 200LL;
        }
        else
        {
          v17 = 197LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
          (const char *)(unsigned int)v16);
        wil::details::lambda_call__lambda_347d3ebbea5fda7dd84efb17ad2ffc68___::_lambda_call__lambda_347d3ebbea5fda7dd84efb17ad2ffc68___((__int64)&v26);
LABEL_20:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
        return v8;
      }
      v13 = 192LL;
    }
    else
    {
      v13 = 187LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB0,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
