/*
 * XREFs of ?RuntimeClassInitialize@CScrollButtonContainer@@QEAAJAEBUScrollViewerHostMetrics@@W4ScrollButtonContainerFlags@@PEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@@Z @ 0x180429FA0
 * Callers:
 *     ??$MakeAndInitialize@VCScrollButtonContainer@@V1@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonContainerFlags@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollButtonContainer@@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonContainerFlags@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x180429A60 (--$MakeAndInitialize@VCScrollButtonContainer@@V1@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x1801E9CA8 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemGrid@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@AEAPEAVCSwitchItemGrid@@@Z @ 0x18040FCFC (--$MakeAndInitialize@V-$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemG.c)
 *     ?CGlyphButtonElement_CreateInstance@@YAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1804224A4 (-CGlyphButtonElement_CreateInstance@@YAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakR.c)
 */

__int64 __fastcall CScrollButtonContainer::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // r13
  int v9; // ebx
  __int64 v10; // rdx
  int v12; // eax
  __int64 v13; // rbx
  int v14; // edi
  int Instance; // eax
  unsigned int v16; // edi
  __int64 v17; // rdx
  int v18; // edi
  __int64 v19; // [rsp+38h] [rbp-40h]
  __int64 v20; // [rsp+38h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *(_OWORD *)(a1 + 240) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 256) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 272) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 288) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 304) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 320) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 336) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 352) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 368) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(a1 + 384) = *(_OWORD *)(a2 + 144);
  v7 = *(_QWORD *)(a2 + 160);
  *(_DWORD *)(a1 + 232) = a3;
  *(_QWORD *)(a1 + 400) = v7;
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)(a1 + 424), a4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 88));
  v8 = a6;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64))(*(_QWORD *)a6 + 112LL))(
         a6,
         0LL,
         0x100000001LL,
         &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
         a1 + 88);
  if ( v9 < 0 )
  {
    v10 = 57LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollbuttoncontainerelement.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  a6 = a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 432));
  v12 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CSwitchItemGrid>,WeakReference::CWeakReference<CSwitchItemGrid>,CSwitchItemGrid * &>(
          (_QWORD *)(a1 + 432),
          &a6);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
      (const char *)(unsigned int)v12);
    v10 = 58LL;
    goto LABEL_3;
  }
  a6 = *(_QWORD *)(a1 + 432);
  v13 = a6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&a6);
  v14 = *(_DWORD *)(a1 + 232) & 1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 408));
  Instance = CGlyphButtonElement_CreateInstance(
               v14 != 0 ? -6293 : -6386,
               1u,
               a1 + 280,
               2 * v14 + 13018,
               v13,
               a5,
               v8,
               v19,
               (CGlyphButtonElement *)(a1 + 408));
  v16 = Instance;
  if ( Instance >= 0 )
  {
    v18 = *(_DWORD *)(a1 + 232) & 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 416));
    Instance = CGlyphButtonElement_CreateInstance(
                 v18 != 0 ? -6292 : -6387,
                 1u,
                 a1 + 280,
                 2 * v18 + 13019,
                 v13,
                 a5,
                 v8,
                 v20,
                 (CGlyphButtonElement *)(a1 + 416));
    v16 = Instance;
    if ( Instance >= 0 )
    {
      Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, *(_QWORD *)(a1 + 408));
      v16 = Instance;
      if ( Instance >= 0 )
      {
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, *(_QWORD *)(a1 + 416));
        v16 = Instance;
        if ( Instance >= 0 )
        {
          v16 = 0;
          goto LABEL_16;
        }
        v17 = 88LL;
      }
      else
      {
        v17 = 87LL;
      }
    }
    else
    {
      v17 = 85LL;
    }
  }
  else
  {
    v17 = 75LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollbuttoncontainerelement.cpp",
    (const char *)(unsigned int)Instance);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a6);
  return v16;
}
