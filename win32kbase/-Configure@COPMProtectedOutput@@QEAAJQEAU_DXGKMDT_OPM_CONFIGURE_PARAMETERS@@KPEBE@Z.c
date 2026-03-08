/*
 * XREFs of ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C0187FD4
 * Callers:
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C01880F8 (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00B0000 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     CallMonitor @ 0x1C017EE60 (CallMonitor.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?OPMFreeMemory@OPM@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C0187DB4 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-OPMFreeMemory@OPM@@YAX0@ZU-$integral_c.c)
 */

__int64 __fastcall COPMProtectedOutput::Configure(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *const a2,
        unsigned int a3,
        const unsigned __int8 *a4)
{
  void **v4; // rdi
  size_t v6; // rbp
  unsigned int v9; // ebx
  ULONG v10; // esi
  void *v11; // rdx
  OPM *v12; // rbx
  OPM *Pool2; // [rsp+60h] [rbp+8h] BYREF

  v4 = (void **)*((_QWORD *)this + 1);
  v6 = a3;
  OPM::CMutex::Lock(v4);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v9 = -1071774438;
  }
  else
  {
    v10 = v6 + 4112;
    if ( (unsigned int)v6 >= 0xFFFFEFF0 )
    {
      v9 = -1071774453;
    }
    else
    {
      Pool2 = (OPM *)ExAllocatePool2(258LL, v10, 1297108807LL);
      v12 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)Pool2 = *((_QWORD *)this + 9);
        memmove((char *)v12 + 8, a2, 0x1000uLL);
        *((_DWORD *)v12 + 1026) = v6;
        memmove((char *)v12 + 4108, a4, v6);
        v9 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x23249Fu, v12, v10, 0LL, 0);
      }
      else
      {
        v9 = -1073741801;
      }
      wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        &Pool2,
        v11);
    }
  }
  if ( *v4 )
    KeReleaseMutex((PRKMUTEX)*v4, 0);
  return v9;
}
