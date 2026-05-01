/*
 * XREFs of ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x18047C900
 * Callers:
 *     ?TryInvokeBack@WindowArrangementView@@UEAAJXZ @ 0x180480420 (-TryInvokeBack@WindowArrangementView@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F4340 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_1801F4340.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801F46B0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_____lambda_fe1ba1d2764f4f2a02d8a9be58f012f2__&_ @ 0x18047B6A8 (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f01.c)
 *     _lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_::operator() @ 0x18047C2E4 (_lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_--operator().c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18047CC88 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18047E130 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowArrangementView::CancelPlacement(WindowArrangementView *this, volatile int *a2)
{
  WindowArrangementView *v3; // rbx
  WindowArrangementView **v4; // rdi
  int v5; // esi
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  char *v11; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF
  WindowArrangementView *v14; // [rsp+68h] [rbp+38h] BYREF
  WindowArrangementView *v15; // [rsp+70h] [rbp+40h] BYREF
  WindowArrangementView **v16; // [rsp+78h] [rbp+48h] BYREF

  if ( !*((_BYTE *)this + 268) && !*((_BYTE *)this + 266) )
  {
    v3 = (WindowArrangementView *)((char *)this - 48);
    v11 = (char *)this - 48;
    if ( this != (WindowArrangementView *)48 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
        (__int64)this - 48,
        a2);
    v15 = v3;
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)v3);
    v13 = 0LL;
    v16 = &v14;
    v14 = v3;
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    v13 = 0LL;
    Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_____lambda_fe1ba1d2764f4f2a02d8a9be58f012f2____(
      &v16,
      (__int64)&v14);
    v4 = v16;
    if ( v16 )
    {
      v5 = (*(__int64 (__fastcall **)(WindowArrangementView **, GUID *, __int64 *))*v16)(
             v16,
             &GUID_53204493_9170_4f30_be0e_211392a4618e,
             &v13);
      (*((void (__fastcall **)(WindowArrangementView **))*v4 + 2))(v4);
    }
    else
    {
      v5 = -2147024882;
    }
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v14);
    if ( v5 < 0 )
    {
      v6 = (unsigned int)v5;
      v7 = 554LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)v6);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v15);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v11);
      return (unsigned int)v5;
    }
    v8 = WindowArrangementView::EnablePlaceModeDropFeedback(v3, 3LL, 0LL, v13, v11);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), 0LL, 0LL);
      *((_BYTE *)this + 268) = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x22B,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v8);
      v9 = lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_::operator()(&v15);
      v5 = v9;
      if ( v9 < 0 )
      {
        v6 = (unsigned int)v9;
        v7 = 562LL;
        goto LABEL_17;
      }
    }
    v5 = 0;
    goto LABEL_20;
  }
  return 0LL;
}
