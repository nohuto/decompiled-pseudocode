/*
 * XREFs of ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000CAAC
 * Callers:
 *     ?Draw@CPrimitiveGroup@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801181B0 (-Draw@CPrimitiveGroup@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 * Callees:
 *     ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x18000D500 (-EtwLogCurrentState@CDrawingContext@@QEBAXXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078E40 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800B2368 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800D4E90 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x180129252 (McTemplateU0pq_EventWriteTransfer.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801292C6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x18012A118 (McTemplateU0ffff_EventWriteTransfer.c)
 *     McTemplateU0ppffff_EventWriteTransfer @ 0x1802452CC (McTemplateU0ppffff_EventWriteTransfer.c)
 */

__int64 __fastcall CPrimitiveGroup::Draw(
        CPrimitiveGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  struct CDrawListCache *v4; // r14
  char *v8; // rbx
  int v9; // edi
  int v10; // edx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v14; // r14d
  __int64 v15; // rax
  struct IBitmapRealization *v16; // rbx
  __int64 v17; // rax
  int (__fastcall *v18)(struct IBitmapRealization *, __int64, __int64 *); // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // eax
  int v22; // r8d
  int v23; // r9d
  unsigned int v24; // eax
  __int64 v25; // [rsp+40h] [rbp-79h] BYREF
  struct IBitmapRealization *v26[2]; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v27[64]; // [rsp+60h] [rbp-59h] BYREF
  int v28; // [rsp+A0h] [rbp-19h]
  __int128 v29; // [rsp+B0h] [rbp-9h]

  *(_QWORD *)&v29 = a4;
  v4 = a4;
  if ( g_LockAndReadPrimitiveGroupBitmaps )
  {
    v14 = 0;
    if ( *((_DWORD *)this - 130) )
    {
      do
      {
        v15 = *((_QWORD *)this - 68);
        v26[0] = 0LL;
        if ( (int)CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                    (CCompositionSurfaceBitmap *)(*(_QWORD *)(v15 + 8LL * v14) + 72LL),
                    v26) >= 0 )
        {
          v16 = v26[0];
          v17 = *(_QWORD *)v26[0];
          v25 = 0LL;
          v18 = *(int (__fastcall **)(struct IBitmapRealization *, __int64, __int64 *))(v17 + 48);
          v19 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 40LL))((char *)a2 + 24);
          if ( v18(v16, v19, &v25) >= 0 )
          {
            v20 = *(int *)(*(_QWORD *)(v25 + 8) + 16LL) + v25 + 8;
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v20 + 24LL))(
              v20,
              ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v25);
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v26);
        ++v14;
      }
      while ( v14 < *((_DWORD *)this - 130) );
      v4 = (struct CDrawListCache *)v29;
    }
    else
    {
      v4 = a4;
    }
  }
  if ( *((_QWORD *)this - 26) )
  {
    v8 = (char *)a2 + 24;
    v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
    CDrawingContext::EtwLogCurrentState(a2);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
      McTemplateU0ppffff_EventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        v10,
        v9,
        (_DWORD)this - 680,
        *((_DWORD *)this - 143),
        *((_DWORD *)this - 142),
        *((_DWORD *)this - 141),
        *((_DWORD *)this - 140));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v21 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v8 + 24LL))((char *)a2 + 24);
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        18LL,
        v21);
    }
    v28 = 0;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 400), (struct CMILMatrix *)v27);
    if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
    {
      v29 = 0LL;
      *(_OWORD *)v26 = *(_OWORD *)((char *)this - 572);
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v27, (struct MilRectF *)v26);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0ffff_EventWriteTransfer(
          (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
          v22,
          v23,
          SBYTE8(v29),
          SBYTE12(v29));
    }
    v11 = CContent::Draw((CPrimitiveGroup *)((char *)this - 584), a2, a3, v4);
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x67u, 0LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
      McTemplateU0pq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_PRIMITIVE_GROUP_SELF_OCCLUSION_INFO,
        (char *)this - 680,
        0xFFFFFFFFLL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v24 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v8 + 24LL))((char *)a2 + 24);
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        18LL,
        v24);
    }
  }
  return 0LL;
}
