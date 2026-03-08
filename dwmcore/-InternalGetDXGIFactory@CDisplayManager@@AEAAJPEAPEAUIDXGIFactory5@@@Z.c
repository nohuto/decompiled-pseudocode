/*
 * XREFs of ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800CE1BC
 * Callers:
 *     ?InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x1800CC63C (-InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x1800CD110 (-InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800CE090 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x1800CE0BC (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ @ 0x180282A1C (-DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ.c)
 *     ?GetWarpAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180282B5C (-GetWarpAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x1800CD738 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::InternalGetDXGIFactory(
        struct _RTL_CRITICAL_SECTION *this,
        struct IDXGIFactory5 **a2)
{
  unsigned int v3; // ebx
  CDisplayManager *v4; // rcx
  CDisplayManager *v5; // rcx
  CDisplayManager *v6; // rcx
  int updated; // eax
  unsigned int v9; // edi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = this;
  v3 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 82) + 40LL))(*((_QWORD *)g_pComposition
                                                                                               + 82)) )
  {
    v5 = qword_1803E7098;
    if ( qword_1803E7098
      && (*(unsigned int (__fastcall **)(CDisplayManager *))(*(_QWORD *)qword_1803E7098 + 104LL))(qword_1803E7098)
      || (updated = CDisplayManager::UpdateDXGIFactory(v5), v9 = updated, updated >= 0) )
    {
      v6 = qword_1803E7098;
      *a2 = (struct IDXGIFactory5 *)qword_1803E7098;
      (*(void (__fastcall **)(CDisplayManager *))(*(_QWORD *)v6 + 8LL))(v6);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x112,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
        (const char *)(unsigned int)updated,
        v10);
      return v9;
    }
  }
  else
  {
    v12 = &g_DisplayManager;
    EnterCriticalSection(&g_DisplayManager);
    v4 = qword_1803E7098;
    if ( qword_1803E7098 )
    {
      *a2 = (struct IDXGIFactory5 *)qword_1803E7098;
      (*(void (__fastcall **)(CDisplayManager *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    else
    {
      v3 = -2003304291;
    }
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
    return v3;
  }
}
