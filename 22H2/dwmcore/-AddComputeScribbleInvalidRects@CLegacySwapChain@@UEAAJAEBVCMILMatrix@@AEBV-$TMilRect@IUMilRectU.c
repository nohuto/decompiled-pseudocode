/*
 * XREFs of ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800C17A4
 * Callers:
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@$4PPPPPPPM@A@EAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800F6C50 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@$4PPPPPPPM@A@EAAJAEBVCMILMatrix@@AEBV-$TMilRec.c)
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@$4PPPPPPPM@BI@EAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800F7110 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@$4PPPPPPPM@BI@EAAJAEBVCMILMatrix@@AEBV-$TMilRe.c)
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800F73E0 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJAEBVCMILMatrix@@AEBV-$TMilR.c)
 * Callees:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18003A708 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180098C7C (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B594 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18009B858 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     wil::details::lambda_call__lambda_c306f654859c1e62202ed28910883a59___::_lambda_call__lambda_c306f654859c1e62202ed28910883a59___ @ 0x1800F1C90 (wil--details--lambda_call__lambda_c306f654859c1e62202ed28910883a59___--_lambda_call__lambda_c306.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180152914 (McTemplateU0xq_EventWriteTransfer.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1801A56DC (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?FenceRenderAfterScribble@CComputeScribbleFramebuffer@@QEAAJXZ @ 0x1801A5FF0 (-FenceRenderAfterScribble@CComputeScribbleFramebuffer@@QEAAJXZ.c)
 *     ?GetAndClearDirtyRegion@CComputeScribbleFramebuffer@@QEAAXPEAVCRegion@@@Z @ 0x1801A6050 (-GetAndClearDirtyRegion@CComputeScribbleFramebuffer@@QEAAXPEAVCRegion@@@Z.c)
 *     ?HasScribbleStarted@CComputeScribbleFramebuffer@@QEAAXPEA_NPEAVCRegion@@@Z @ 0x1801A60D0 (-HasScribbleStarted@CComputeScribbleFramebuffer@@QEAAXPEA_NPEAVCRegion@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 *     ContributeRegionToDirty @ 0x1802495EC (ContributeRegionToDirty.c)
 */

__int64 __fastcall CLegacySwapChain::AddComputeScribbleInvalidRects(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v8; // r9
  CComputeScribbleFramebuffer *v10; // r11
  int v11; // r8d
  __int64 v12; // rax
  int v13; // r9d
  int v14; // edx
  __int64 v15; // r14
  int v16; // eax
  int v17; // esp
  unsigned int v18; // edi
  int v20; // eax
  int v21; // eax
  RTL_SRWLOCK *v22; // rbx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // [rsp+20h] [rbp-E0h] BYREF
  RTL_SRWLOCK *v32; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+30h] [rbp-D0h] BYREF
  char v34; // [rsp+38h] [rbp-C8h]
  void *lpMem; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v36[3]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v37[2]; // [rsp+54h] [rbp-ACh] BYREF
  _DWORD v38[13]; // [rsp+5Ch] [rbp-A4h] BYREF
  int *v39; // [rsp+90h] [rbp-70h] BYREF
  int v40; // [rsp+98h] [rbp-68h] BYREF
  int *v41; // [rsp+E0h] [rbp-20h] BYREF
  int v42; // [rsp+E8h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v6 = *(unsigned int *)(a1 - 224);
  v8 = *(_QWORD *)(a1 - 248);
  v10 = *(CComputeScribbleFramebuffer **)(*(_QWORD *)(v8 + 8 * v6) + 96LL);
  v11 = *a3;
  v12 = *(_QWORD *)(v8 + 8LL * ((unsigned int)(*(_DWORD *)(a1 - 176) + v6 - 1) % *(_DWORD *)(a1 - 176)));
  v13 = a3[2];
  v14 = a3[3];
  v15 = *(_QWORD *)(v12 + 96);
  v16 = a3[1];
  lpMem = v36;
  if ( v11 >= v13 || v16 >= v14 )
  {
    v36[0] = 0;
  }
  else
  {
    v37[0] = v16;
    v36[0] = 2;
    v36[1] = v11;
    v36[2] = v13;
    v37[1] = v17 + 100 - (unsigned int)v37;
    v38[2] = v11;
    v38[3] = v13;
    v38[1] = v17 + 100 - (unsigned int)v38 + 8;
    v38[0] = v14;
  }
  if ( v10 )
  {
    v42 = 0;
    v41 = &v42;
    CComputeScribbleFramebuffer::GetAndClearDirtyRegion(v10, (struct CRegion *)&v41);
    v20 = FastRegion::CRegion::Intersect(
            (const struct FastRegion::Internal::CRgnData **)&v41,
            (const struct FastRegion::Internal::CRgnData **)&lpMem);
    if ( v20 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v20, retaddr);
    v21 = FastRegion::CRegion::Union(
            (void **)(*(_QWORD *)(*(_QWORD *)(a1 - 248) + 8LL * *(unsigned int *)(a1 - 224)) + 16LL),
            (const struct FastRegion::Internal::CRgnData **)&v41);
    if ( v21 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v21, retaddr);
    FastRegion::CRegion::FreeMemory((void **)&v41);
  }
  if ( !v15 )
  {
    v18 = 0;
    goto LABEL_7;
  }
  v22 = (RTL_SRWLOCK *)(v15 + 224);
  AcquireSRWLockExclusive((PSRWLOCK)(v15 + 224));
  v40 = 0;
  v39 = &v40;
  v32 = (RTL_SRWLOCK *)(v15 + 224);
  CComputeScribbleFramebuffer::HasScribbleStarted(
    (CComputeScribbleFramebuffer *)v15,
    (bool *)&v31,
    (struct CRegion *)&v39);
  if ( (_BYTE)v31 && *v39 )
  {
    v23 = FastRegion::CRegion::Intersect(
            (const struct FastRegion::Internal::CRgnData **)&v39,
            (const struct FastRegion::Internal::CRgnData **)&lpMem);
    if ( v23 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v23, retaddr);
    v24 = ContributeRegionToDirty(&v39, a4, a2);
    v18 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3EB,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\legacyswapchain.cpp",
        (const char *)(unsigned int)v24,
        v31);
      goto LABEL_37;
    }
    v25 = FastRegion::CRegion::Subtract(
            (const struct FastRegion::Internal::CRgnData **)(*(_QWORD *)(*(_QWORD *)(a1 - 248)
                                                                       + 8LL * *(unsigned int *)(a1 - 224))
                                                           + 16LL),
            (const struct FastRegion::Internal::CRgnData **)&v39);
    if ( v25 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v25, retaddr);
  }
  v26 = *(_QWORD *)(a1 - 80);
  if ( v26
    && *(_BYTE *)(v26 + 52)
    && **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 - 248) + 8LL * *(unsigned int *)(a1 - 224)) + 16LL) )
  {
    *(_BYTE *)(v15 + 232) = 1;
    v33 = v15;
    v34 = 1;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      &v32,
      0LL);
    if ( (_BYTE)v31 )
    {
      v28 = CComputeScribbleFramebuffer::FenceRenderAfterScribble((CComputeScribbleFramebuffer *)v15);
      v18 = v28;
      if ( v28 < 0 )
      {
        v29 = 1036LL;
LABEL_34:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v29,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\legacyswapchain.cpp",
          (const char *)(unsigned int)v28,
          v31);
        wil::details::lambda_call__lambda_c306f654859c1e62202ed28910883a59___::_lambda_call__lambda_c306f654859c1e62202ed28910883a59___(&v33);
        v22 = v32;
        goto LABEL_37;
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      McTemplateU0xq_EventWriteTransfer(
        v27,
        &EVTDESC_COMPUTESCRIBBLE_EARLYCOPY,
        *(_QWORD *)(*(_QWORD *)(a1 - 80) + 32LL),
        *(unsigned int *)(a1 - 224));
    v30 = a1 + *(int *)(*(_QWORD *)(a1 - 328) + 16LL) - 328LL;
    v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 24LL))(v30);
    v18 = v28;
    if ( v28 < 0 )
    {
      v29 = 1041LL;
      goto LABEL_34;
    }
    wil::details::lambda_call__lambda_c306f654859c1e62202ed28910883a59___::_lambda_call__lambda_c306f654859c1e62202ed28910883a59___(&v33);
    v22 = v32;
  }
  v18 = 0;
LABEL_37:
  FastRegion::CRegion::FreeMemory((void **)&v39);
  if ( v22 )
    ReleaseSRWLockExclusive(v22);
LABEL_7:
  if ( v36 != lpMem )
    operator delete(lpMem);
  return v18;
}
