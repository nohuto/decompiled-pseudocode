/*
 * XREFs of ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x1800454D8
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x1800443C0 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x18009AAF0 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x18004560C (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x180045780 (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?IsWindowTab@CWindowData@@QEAA_NXZ @ 0x180056A08 (-IsWindowTab@CWindowData@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAA_NXZ @ 0x180056D4C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEA.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x180089AA8 (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::RegisterIconicRepresentation(
        CIconicBitmapRegistry *this,
        struct CWindowIconic *a2,
        enum IconicRepresentationType *a3)
{
  __int64 v4; // rdi
  bool v6; // r13
  struct CWindowIconic *v8; // rax
  struct CWindowIconic *v9; // rcx
  char v10; // r14
  char v11; // r15
  char v12; // bp
  bool CanAcceptBitmap; // bl
  char v14; // r14
  HWND v16; // [rsp+88h] [rbp+10h]

  v4 = *((_QWORD *)a2 + 9);
  v6 = *((_DWORD *)a2 + 4) == 2;
  v16 = *(HWND *)(v4 + 40);
  if ( *((_BYTE *)a2 + 20) )
  {
    v8 = (struct CWindowIconic *)*((_QWORD *)this + 12);
    v9 = v8;
    if ( v8 && v8 != a2 )
    {
      CIconicBitmapRegistry::OnLivePreviewDismissed(this);
      v9 = (struct CWindowIconic *)*((_QWORD *)this + 12);
    }
    if ( !v9 )
    {
      *((_QWORD *)this + 12) = a2;
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    }
    v10 = *((_BYTE *)this + 90);
    v11 = *((_BYTE *)this + 88);
    v12 = *((_BYTE *)this + 89);
    CanAcceptBitmap = (*(_BYTE *)(v4 + 610) & 4) != 0;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl) )
      v4 = -(__int64)CWindowData::IsWindowTab((CWindowData *)v4) - 1;
    else
      v4 = -1LL;
  }
  else
  {
    CanAcceptBitmap = CIconicBitmapRegistry::CanAcceptBitmap(this, (struct CWindowData *)v4);
    v14 = *(_BYTE *)(v4 + 610);
    v12 = (v14 & 0x10) != 0;
    v10 = (v14 & 0x20) != 0;
    v11 = *(_QWORD *)(v4 + 376) != 0LL;
  }
  return CIconicBitmapRegistry::_RegisterIconicRepresentation(
           this,
           (struct CWindowData *)v4,
           v16,
           CanAcceptBitmap,
           v10,
           v11,
           v12,
           v6,
           a3);
}
