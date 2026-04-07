/*
 * XREFs of ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180039BEC
 * Callers:
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180009934 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x1800372A4 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180038C48 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180039B6C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     wistd::__function::__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl(void)_::operator() @ 0x180080B00 (wistd--__function--__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl(void)_--operato.c)
 *     wistd::__function::__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_::operator() @ 0x180080B20 (wistd--__function--__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_--operato.c)
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x1800810F0 (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 * Callees:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x18004EDA0 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 *     atexit @ 0x180053C8C (atexit.c)
 *     _Init_thread_footer @ 0x180053CBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180053D2C (_Init_thread_header.c)
 */

struct CAnalogCompositorManager *CAnalogCompositorManager::GetInstance(void)
{
  CAnalogCompositorManager *v1; // rcx

  if ( dword_1800E69E0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800E69E0);
    if ( dword_1800E69E0 == -1 )
    {
      CAnalogCompositorManager::CAnalogCompositorManager(v1);
      atexit(CAnalogCompositorManager::GetInstance_::_2_::_dynamic_atexit_destructor_for__singletonAnalogCompositorManager__);
      Init_thread_footer(&dword_1800E69E0);
    }
  }
  return (struct CAnalogCompositorManager *)&qword_1800E6CB0;
}
