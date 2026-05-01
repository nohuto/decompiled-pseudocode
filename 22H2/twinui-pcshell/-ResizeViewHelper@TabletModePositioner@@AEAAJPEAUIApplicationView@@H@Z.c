/*
 * XREFs of ?ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x180469E28
 * Callers:
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180470180 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180463894 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180467E54 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::ResizeViewHelper(
        IUnknown *punkSite,
        struct IApplicationView *a2,
        unsigned int a3)
{
  int inited; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  inited = TabletModePositioner::InitLayoutOperationHelper(
             punkSite,
             &CLSID_TabletModePositionerOperation,
             &GUID_ef9dff78_5b41_4081_a5aa_407c9421d1b6,
             (void **)&v11);
  v7 = inited;
  if ( inited >= 0 )
  {
    inited = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *, _QWORD))v11->lpVtbl[3].QueryInterface)(
               v11,
               a2,
               a3);
    v7 = inited;
    if ( inited >= 0 )
    {
      inited = TabletModePositioner::ApplyLayoutOperationHelper(punkSite, v11);
      v7 = inited;
      if ( inited >= 0 )
      {
        v7 = 0;
        goto LABEL_9;
      }
      v8 = 2963LL;
    }
    else
    {
      v8 = 2962LL;
    }
  }
  else
  {
    v8 = 2961LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)inited);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v7;
}
