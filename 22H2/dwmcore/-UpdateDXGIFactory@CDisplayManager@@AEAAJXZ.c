/*
 * XREFs of ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x1800CE198
 * Callers:
 *     ?Initialize@CDisplayManager@@IEAAJXZ @ 0x1800AF510 (-Initialize@CDisplayManager@@IEAAJXZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800CEC6C (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034CA4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800895E0 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x1800CE2F0 (-ResetTokenThread@CComposition@@QEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CEACC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FC824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_dwmcore_DXGIFactoryLeak@@@details@wil@@QEAA_NXZ @ 0x18011A848 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_dwmcore_DXGIFactoryLeak@@@details.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x18012DF20 (McTemplateU0qqq_EventWriteTransfer.c)
 *     ??$ReleaseInterface@UIDXGIFactory5@@@@YAXAEAPEAUIDXGIFactory5@@@Z @ 0x18028615C (--$ReleaseInterface@UIDXGIFactory5@@@@YAXAEAPEAUIDXGIFactory5@@@Z.c)
 */

__int64 __fastcall CDisplayManager::UpdateDXGIFactory(CDisplayManager *this)
{
  int CurrentFrameId; // eax
  int v2; // ecx
  HRESULT v3; // eax
  unsigned int v4; // ebx
  CDisplayManager *v5; // rax
  CComposition *v6; // rcx
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppFactory; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+48h] [rbp+10h] BYREF

  ppFactory = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    CurrentFrameId = GetCurrentFrameId();
    McTemplateU0qqq_EventWriteTransfer(v2, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, CurrentFrameId, 0);
  }
  ppFactory = 0LL;
  v3 = CreateDXGIFactory1(&GUID_7632e1f5_ee65_4dca_87fd_84cd75f8838d, &ppFactory);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v11 = &g_DisplayManager;
    EnterCriticalSection(&g_DisplayManager);
    if ( qword_1803EA1A8 && (unsigned __int64)(qword_1803EA1B0 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !byte_1803EA1BD )
    {
      (*(void (__fastcall **)(CDisplayManager *, _QWORD))(*(_QWORD *)qword_1803EA1A8 + 184LL))(
        qword_1803EA1A8,
        (unsigned int)dword_1803EA1B8);
      dword_1803EA1B8 = 0;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &qword_1803EA1B0,
      0LL);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_dwmcore_DXGIFactoryLeak>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_dwmcore_DXGIFactoryLeak>::GetImpl'::`2'::impl) )
      ReleaseInterface<IDXGIFactory5>(&qword_1803EA1A8);
    v5 = (CDisplayManager *)ppFactory;
    ppFactory = 0LL;
    qword_1803EA1A8 = v5;
    byte_1803EA1BD = GetSystemMetrics(4096) != 0;
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
    CComposition::ResetTokenThread(v6);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x152,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
      (const char *)(unsigned int)v3,
      v8);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&ppFactory);
  return v4;
}
