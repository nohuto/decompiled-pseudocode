/*
 * XREFs of ?RegisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJPEAUIHolographicCoreExperienceExecutor@Holographic@Shell@Internal@Windows@@@Z @ 0x180234B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802305A4 (--0-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1EM_RegisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180230D50 (--1EM_RegisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEA.c)
 *     ?OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ @ 0x180232DA0 (-OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@EM_RegisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180236460 (-StartActivity@EM_RegisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITe.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180236910 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CToastCenterExperienceManager::RegisterHolographicExecutor(
        CToastCenterExperienceManager *this,
        struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor *a2)
{
  struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor *v4; // rax
  HRESULT v5; // eax
  unsigned int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  LPVOID v9; // rbx
  __int64 (__fastcall *v10)(LPVOID, GUID *, GUID *, char *); // rsi
  int v11; // eax
  CToastCenterExperienceManager *v12; // r14
  int v13; // eax
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v14; // rdx
  LPVOID ppv; // [rsp+40h] [rbp-C0h] BYREF
  struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor *v17; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v18[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v18,
    (__int64)"EM_RegisterHolographicExecutor");
  v18[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RegisterHolographicExecutor::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RegisterHolographicExecutor::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RegisterHolographicExecutor *)v18);
  v4 = (struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor *)*((_QWORD *)this + 80);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = (struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor *)*((_QWORD *)this + 80);
    }
    v17 = v4;
    *((_QWORD *)this + 80) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  }
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v5 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 0x404u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = ppv;
    v10 = *(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, char *))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 82);
    v11 = v10(
            v9,
            &GUID_f33ef83f_9d1b_4603_914d_abc4895248b5,
            &GUID_f33ef83f_9d1b_4603_914d_abc4895248b5,
            (char *)this + 656);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v12 = (CToastCenterExperienceManager *)((char *)this - 56);
      v13 = RtlSubscribeWnfStateChangeNotification(
              (char *)v12 + 408,
              WNF_HOLO_USER_DISPLAY_CONTEXT,
              0LL,
              CToastCenterExperienceManager::DisplayContextChangedCallback);
      v6 = v13 | 0x10000000;
      if ( v13 >= 0 )
      {
        CToastCenterExperienceManager::OnDisplayContextChanged(v12, v14);
        wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v18);
        v6 = 0;
        goto LABEL_13;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3BA,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)v6);
      v7 = v6;
      v8 = 1542LL;
    }
    else
    {
      v7 = (unsigned int)v11;
      v8 = 1540LL;
    }
  }
  else
  {
    v7 = (unsigned int)v5;
    v8 = 1539LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)v7);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RegisterHolographicExecutor::~EM_RegisterHolographicExecutor((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RegisterHolographicExecutor *)v18);
  return v6;
}
