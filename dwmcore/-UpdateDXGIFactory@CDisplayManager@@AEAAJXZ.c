/*
 * XREFs of ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x1800CD738
 * Callers:
 *     ?Initialize@CDisplayManager@@IEAAJXZ @ 0x1800AEDB0 (-Initialize@CDisplayManager@@IEAAJXZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800CE1BC (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x1800CD840 (-ResetTokenThread@CComposition@@QEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CE01C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180129D70 (McTemplateU0qqq_EventWriteTransfer.c)
 */

__int64 __fastcall CDisplayManager::UpdateDXGIFactory(CDisplayManager *this)
{
  HRESULT v1; // eax
  unsigned int v2; // ebx
  CDisplayManager *v3; // rax
  CComposition *v4; // rcx
  int CurrentFrameId; // eax
  int v7; // ecx
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppFactory; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+48h] [rbp+10h] BYREF

  ppFactory = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    CurrentFrameId = GetCurrentFrameId();
    McTemplateU0qqq_EventWriteTransfer(v7, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, CurrentFrameId, 0);
  }
  ppFactory = 0LL;
  v1 = CreateDXGIFactory1(&GUID_7632e1f5_ee65_4dca_87fd_84cd75f8838d, &ppFactory);
  v2 = v1;
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x152,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
      (const char *)(unsigned int)v1,
      v8);
  }
  else
  {
    v11 = &g_DisplayManager;
    EnterCriticalSection(&g_DisplayManager);
    if ( qword_1803E7098 && !byte_1803E70AD && (unsigned __int64)(qword_1803E70A0 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      (*(void (__fastcall **)(CDisplayManager *, _QWORD))(*(_QWORD *)qword_1803E7098 + 184LL))(
        qword_1803E7098,
        (unsigned int)dword_1803E70A8);
      dword_1803E70A8 = 0;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &qword_1803E70A0,
      0LL);
    v3 = (CDisplayManager *)ppFactory;
    ppFactory = 0LL;
    qword_1803E7098 = v3;
    byte_1803E70AD = GetSystemMetrics(4096) != 0;
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
    CComposition::ResetTokenThread(v4);
    v2 = 0;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&ppFactory);
  return v2;
}
