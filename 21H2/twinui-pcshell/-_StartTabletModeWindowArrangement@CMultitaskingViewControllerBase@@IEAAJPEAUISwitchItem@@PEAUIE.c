/*
 * XREFs of ?_StartTabletModeWindowArrangement@CMultitaskingViewControllerBase@@IEAAJPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x180415564
 * Callers:
 *     ?DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x180414A80 (-DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800691E4 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180082968 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1ExternalDragHandoff@MultitaskingViewTelemetry@@QEAA@XZ @ 0x180414860 (--1ExternalDragHandoff@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@QEAAXXZ @ 0x180414DFC (-StartActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z @ 0x180426930 (-DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CMultitaskingViewControllerBase::_StartTabletModeWindowArrangement(
        CMultitaskingViewControllerBase *this,
        struct ISwitchItem *a2,
        struct IExternalDragCallback *a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  const struct _GUID *v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  char v15; // si
  __int64 (__fastcall *v16)(struct IExternalDragCallback *, __int128 *, _DWORD *); // rax
  int v17; // eax
  int v18; // eax
  void *v20; // [rsp+30h] [rbp-D0h] BYREF
  struct IExternalDragHost *v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v23[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v25; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v26[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v26,
    (__int64)"ExternalDragHandoff");
  v26[0] = &MultitaskingViewTelemetry::ExternalDragHandoff::`vftable';
  MultitaskingViewTelemetry::ExternalDragHandoff::StartActivity((MultitaskingViewTelemetry::ExternalDragHandoff *)v26);
  if ( *((_QWORD *)this + 8) )
  {
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v7 = (**(__int64 (__fastcall ***)(struct ISwitchItem *, GUID *, __int64 *))a2)(
           a2,
           &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb,
           &v22);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11A,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
        (const char *)(unsigned int)v7);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      goto LABEL_22;
    }
    v21 = 0LL;
    v8 = *((_QWORD *)this + 5);
    if ( !v8 )
    {
      v6 = -2147019873;
      v9 = 288LL;
      v10 = 2147947423LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
        (const char *)v10);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      goto LABEL_21;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    v11 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IExternalDragHost **))(*(_QWORD *)v8 + 24LL))(
            v8,
            &GUID_51575f72_33a0_4be2_b5ad_5ecac31260f4,
            &v21);
    v6 = v11;
    if ( v11 < 0 )
    {
      v10 = (unsigned int)v11;
      v9 = 289LL;
      goto LABEL_9;
    }
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    v13 = DragInputHandler_CreateInstance(v21, v12, &v20);
    v6 = v13;
    if ( v13 >= 0 )
    {
      v14 = *(_QWORD *)a3;
      v23[0] = 0;
      v23[1] = 0;
      v15 = 1;
      v16 = *(__int64 (__fastcall **)(struct IExternalDragCallback *, __int128 *, _DWORD *))(v14 + 24);
      v25 = 0LL;
      v17 = v16(a3, &v25, v23);
      v6 = v17;
      if ( v17 >= 0 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 24LL))(v22, &v24);
        v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *, _DWORD *, void *))(**((_QWORD **)this + 8) + 40LL))(
                *((_QWORD *)this + 8),
                v24,
                &v25,
                v23,
                v20);
        v6 = v18;
        if ( v18 >= 0 )
        {
          v15 = 0;
          (*(void (__fastcall **)(struct IExternalDragCallback *))(*(_QWORD *)a3 + 32LL))(a3);
          wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v26);
          v6 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x12F,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
            (const char *)(unsigned int)v18);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
        if ( !v15 )
          goto LABEL_19;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x12C,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
          (const char *)(unsigned int)v17);
      }
      (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 32LL))(v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x124,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
        (const char *)(unsigned int)v13);
    }
LABEL_19:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    goto LABEL_20;
  }
  v6 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x117,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
    (const char *)0x8007139FLL);
LABEL_22:
  MultitaskingViewTelemetry::ExternalDragHandoff::~ExternalDragHandoff((MultitaskingViewTelemetry::ExternalDragHandoff *)v26);
  return v6;
}
