/*
 * XREFs of ?RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180260338
 * Callers:
 *     ??$MakeAndInitialize@VCInsightsExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18025DFAC (--$MakeAndInitialize@VCInsightsExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ?RegisterForMonitorNotification@CInsightsExperienceManager@@AEAAJXZ @ 0x18026015C (-RegisterForMonitorNotification@CInsightsExperienceManager@@AEAAJXZ.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1804E3A64 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1804E4954 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CInsightsExperienceManager::RuntimeClassInitialize(
        CInsightsExperienceManager *this,
        struct IServiceProvider *a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v5; // rcx
  HSTRING v6; // rbx
  int v7; // ebx
  __int64 v8; // rdx
  WINBOOL fPending; // [rsp+30h] [rbp-19h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-9h] BYREF
  HSTRING v13; // [rsp+58h] [rbp+Fh]
  HSTRING_HEADER v14; // [rsp+60h] [rbp+17h] BYREF
  HSTRING v15; // [rsp+78h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180650690;
    qword_180650690[0] = &ShellScreenClippingLogging::`vftable';
    qword_1806506A8 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650690, qword_1806506A8, v4);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180650690);
  }
  v5 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v5 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v5,
      (unsigned __int8 *)dword_18057D293,
      0LL,
      0LL,
      2u,
      (PEVENT_DATA_DESCRIPTOR)&v14);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 34, (__int64)a2);
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.Insights",
    0x2Au,
    0x29u);
  v6 = v13;
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v14,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v7 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CInsightsExperienceManager *)((char *)this + 64),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v15,
         v6);
  if ( v7 < 0 )
  {
    v8 = 205LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v14,
    L"InsightsExperienceHostVS_ccv6fwk6gx0xp!App",
    0x2Bu,
    0x2Au);
  v7 = CSingleViewShellExperience::AddTestAumid((CInsightsExperienceManager *)((char *)this + 64), v15);
  if ( v7 < 0 )
  {
    v8 = 207LL;
    goto LABEL_8;
  }
  v7 = CInsightsExperienceManager::RegisterForMonitorNotification(this);
  if ( v7 < 0 )
  {
    v8 = 209LL;
    goto LABEL_8;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 41, (__int64)this);
  return 0LL;
}
