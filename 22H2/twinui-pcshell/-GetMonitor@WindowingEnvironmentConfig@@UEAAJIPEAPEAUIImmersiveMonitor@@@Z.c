/*
 * XREFs of ?GetMonitor@WindowingEnvironmentConfig@@UEAAJIPEAPEAUIImmersiveMonitor@@@Z @ 0x180356F70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x1800AB33C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$com_ptr_t@UIWindowGroup@@Uerr_exception_.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowingEnvironmentConfig::GetMonitor(IUnknown **this, int a2, struct IImmersiveMonitor **a3)
{
  HRESULT v6; // eax
  struct IUnknownVtbl *lpVtbl; // rax
  int v8; // eax
  ULONG (__stdcall *Release)(IUnknown *); // rcx
  ULONG (__stdcall *i)(IUnknown *); // rcx
  const char *v11; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  ppvOut = 0LL;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&ppvOut);
  v6 = IUnknown_QueryService(
         this[6],
         (const GUID *const)&SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         &ppvOut);
  try
  {
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        320LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v6);
    ((void (__fastcall *)(IUnknown *, PSRWLOCK *))this[6]->lpVtbl[2].AddRef)(this[6], &SRWLock);
    lpVtbl = this[9]->lpVtbl;
    while ( lpVtbl != (struct IUnknownVtbl *)this[9] )
    {
      if ( LODWORD(lpVtbl[1].AddRef) == a2 )
      {
        v8 = (*(__int64 (__fastcall **)(void *, _QWORD, struct IImmersiveMonitor **))(*(_QWORD *)ppvOut + 56LL))(
               ppvOut,
               HIDWORD(lpVtbl[1].AddRef),
               a3);
        if ( v8 >= 0 )
          break;
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          327LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v8);
      }
      Release = lpVtbl->Release;
      if ( *((_BYTE *)Release + 25) )
      {
        for ( i = lpVtbl->AddRef;
              !*((_BYTE *)i + 25) && lpVtbl == *((struct IUnknownVtbl **)i + 2);
              i = (ULONG (__stdcall *)(IUnknown *))*((_QWORD *)i + 1) )
        {
          lpVtbl = (struct IUnknownVtbl *)i;
        }
        lpVtbl = (struct IUnknownVtbl *)i;
      }
      else
      {
        lpVtbl = (struct IUnknownVtbl *)std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>>::_Min(Release);
      }
    }
    if ( *a3 )
    {
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppvOut);
      result = 0LL;
    }
    else
    {
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppvOut);
      result = 2147943568LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x14F,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v11);
  }
  return result;
}
