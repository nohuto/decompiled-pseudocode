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
