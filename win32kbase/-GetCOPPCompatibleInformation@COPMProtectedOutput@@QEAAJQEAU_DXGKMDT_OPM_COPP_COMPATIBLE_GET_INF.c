/*
 * XREFs of ?GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C0188514
 * Callers:
 *     ?GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C0188480 (-GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETER.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00B0000 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     CallMonitor @ 0x1C017EE60 (CallMonitor.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?OPMFreeMemory@OPM@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C0187DB4 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-OPMFreeMemory@OPM@@YAX0@ZU-$integral_c.c)
 */

__int64 __fastcall COPMProtectedOutput::GetCOPPCompatibleInformation(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *const a2,
        struct _DXGKMDT_OPM_REQUESTED_INFORMATION *a3)
{
  void **v3; // rdi
  unsigned int v7; // ebx
  void *v8; // rdx
  OPM *v9; // rbx
  OPM *Pool2; // [rsp+50h] [rbp+8h] BYREF

  v3 = (void **)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v3);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v7 = -1071774438;
  }
  else
  {
    Pool2 = (OPM *)ExAllocatePool2(258LL, 4104LL, 1297108807LL);
    v9 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = *((_QWORD *)this + 9);
      memmove((char *)v9 + 8, a2, 0x1000uLL);
      v7 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x23249Bu, v9, 0x1008u, a3, 0x1000u);
    }
    else
    {
      v7 = -1073741801;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
      &Pool2,
      v8);
  }
  if ( *v3 )
    KeReleaseMutex((PRKMUTEX)*v3, 0);
  return v7;
}
