/*
 * XREFs of ?AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags@@JAEBU_GUID@@PEAPEAX@Z @ 0x180422D14
 * Callers:
 *     ?v_InitAccessibleObject@CSwitchItemElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180411630 (-v_InitAccessibleObject@CSwitchItemElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PE.c)
 *     ?v_InitAccessibleObject@CMultitaskingViewElementBase@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804142B0 (-v_InitAccessibleObject@CMultitaskingViewElementBase@@MEAAJPEAUIWeakReference@WeakReference@@AEB.c)
 *     ?v_InitAccessibleObject@CSwitchItemGrid@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180417E40 (-v_InitAccessibleObject@CSwitchItemGrid@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPE.c)
 *     ?v_InitAccessibleObject@CMultitaskingViewFrameElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18041B9B0 (-v_InitAccessibleObject@CMultitaskingViewFrameElement@@MEAAJPEAUIWeakReference@WeakReference@@AE.c)
 *     ?v_InitAccessibleObject@CGlyphButtonElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180422720 (-v_InitAccessibleObject@CGlyphButtonElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@P.c)
 *     ?v_InitAccessibleObject@SwitchItemThumbnailElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804260E0 (-v_InitAccessibleObject@SwitchItemThumbnailElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_.c)
 *     ?v_InitAccessibleObject@CScrollViewer@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18042B9D0 (-v_InitAccessibleObject@CScrollViewer@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX.c)
 *     ?v_InitAccessibleObject@LightDismissElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18042BF00 (-v_InitAccessibleObject@LightDismissElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@P.c)
 *     ?v_InitAccessibleObject@CVirtualDesktopContainerElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180430810 (-v_InitAccessibleObject@CVirtualDesktopContainerElement@@MEAAJPEAUIWeakReference@WeakReference@@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ @ 0x1803FF078 (-InternalRelease@-$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VAccessibleElement@@V1@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Details@WRL@Microsoft@@YAJPEAPEAVAccessibleElement@@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Z @ 0x180422944 (--$MakeAndInitialize@VAccessibleElement@@V1@AEAPEAUIWeakReference@WeakReference@@AEAW4Accessible.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIRawElementProviderSimple2@@UIRawElementProviderSimple@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIInvokeProvider@@UISelectionProvider@@UISelectionItemProvider@@UIScrollProvider@@UIScrollItemProvider@@@WRL@Microsoft@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGridProvider@@UIGridItemProvider@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180422E54 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@U-$.c)
 */

__int64 __fastcall AccessibleElement_CreateInstance(__int64 a1, int a2, int a3, _DWORD *a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  int v7; // eax
  int CanCastTo; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  BOOL IsEqualGUID; // eax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v15; // [rsp+40h] [rbp+20h] BYREF
  int v16; // [rsp+48h] [rbp+28h] BYREF
  int v17; // [rsp+50h] [rbp+30h] BYREF

  v17 = a3;
  v16 = a2;
  v15 = a1;
  v5 = a5;
  a5 = 0LL;
  *v5 = 0LL;
  Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease((__int64 *)&a5);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<AccessibleElement,AccessibleElement,WeakReference::IWeakReference * &,enum AccessibleElementFlags &,long &>(
         (__int64 *)&a5,
         &v15,
         &v16,
         &v17);
  CanCastTo = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 802LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)v9);
    goto LABEL_12;
  }
  *v5 = 0LL;
  IsEqualGUID = InlineIsEqualGUID(a4, &GUID_00000000_0000_0000_c000_000000000046);
  v12 = (__int64)a5;
  if ( IsEqualGUID )
  {
    *v5 = a5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    CanCastTo = 0;
    goto LABEL_12;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IRawElementProviderSimple2,IRawElementProviderSimple,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IInvokeProvider,ISelectionProvider,ISelectionItemProvider,IScrollProvider,IScrollItemProvider>>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IGridProvider,IGridItemProvider>>::CanCastTo(
                a5,
                a4,
                v5);
  if ( CanCastTo == -2147467262 )
    CanCastTo = -2147467262;
  if ( CanCastTo < 0 )
  {
    v9 = (unsigned int)CanCastTo;
    v10 = 803LL;
    goto LABEL_11;
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
LABEL_12:
  Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease((__int64 *)&a5);
  return (unsigned int)CanCastTo;
}
