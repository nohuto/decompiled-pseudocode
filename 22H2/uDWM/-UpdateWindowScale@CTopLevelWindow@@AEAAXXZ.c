/*
 * XREFs of ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180021C6C
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180019884 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001C0C0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18000BE34 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180021BF8 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?NeedsCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CA_NPEAVCWindowData@@@Z @ 0x18002AAF8 (-NeedsCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CA_NPEAVCWindowData@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x1800523B8 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     fmodf_0 @ 0x180057E42 (fmodf_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z @ 0x180094724 (-GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z.c)
 */

void __fastcall CTopLevelWindow::UpdateWindowScale(CTopLevelWindow *this)
{
  CVisual *v2; // rcx
  __int64 v3; // rdi
  _DWORD *v4; // rcx
  int v5; // eax
  CVisual *v6; // rcx
  struct CWindowData *v7; // rcx
  float CorrectionScaleForUniformSpaceWindow; // xmm0_4

  *((_DWORD *)this + 172) = -1;
  v2 = (CVisual *)*((_QWORD *)this + 68);
  if ( v2 )
  {
    CVisual::SetScale(v2, *(float *)(*((_QWORD *)this + 91) + 172LL), *(float *)(*((_QWORD *)this + 91) + 176LL));
    v3 = *((_QWORD *)this + 91);
    if ( fmodf_0(*(float *)(v3 + 172), 1.0) == 0.0 && fmodf_0(*(float *)(v3 + 176), 1.0) == 0.0 )
    {
      v4 = (_DWORD *)*((_QWORD *)this + 68);
      v5 = v4[49];
      if ( (v5 & 2) == 0 || v4[50] )
      {
        v4[50] = 0;
        v4[49] = v5 | 2;
        (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 64LL);
      }
    }
    else if ( *(float *)(v3 + 172) < 1.0 || *(float *)(v3 + 176) < 1.0 )
    {
      CVisual::SetInterpolationMode(*((unsigned int **)this + 68), 6u);
    }
    else
    {
      CVisual::ClearInterpolationMode(*((CVisual **)this + 68));
    }
  }
  v6 = (CVisual *)*((_QWORD *)this + 37);
  if ( v6 )
    CVisual::SetScale(v6, *(float *)(*((_QWORD *)this + 91) + 172LL), *(float *)(*((_QWORD *)this + 91) + 176LL));
  if ( CTopLevelWindow::NeedsCorrectionScaleForUniformSpaceWindow(*((struct CWindowData **)this + 91)) )
  {
    CorrectionScaleForUniformSpaceWindow = CTopLevelWindow::GetCorrectionScaleForUniformSpaceWindow(v7);
    CVisual::SetScale(
      *((CVisual **)this + 33),
      CorrectionScaleForUniformSpaceWindow,
      CorrectionScaleForUniformSpaceWindow);
  }
}
