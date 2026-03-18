/*
 * XREFs of ?GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00CECB4
 * Callers:
 *     ?GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00CEC18 (-GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C009ABA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?OPMFreeMemory@OPM@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C00CED9C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-OPMFreeMemory@OPM@@YAX0@ZU-$integral_c.c)
 *     CallMonitor @ 0x1C00CFF40 (CallMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall COPMProtectedOutput::GetInformation(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *const a2,
        struct _DXGKMDT_OPM_REQUESTED_INFORMATION *a3)
{
  void **v3; // rdi
  _QWORD *v7; // rbx
  unsigned int v8; // ebx
  _QWORD *Pool2; // [rsp+50h] [rbp+8h] BYREF

  v3 = (void **)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v3);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v8 = -1071774438;
  }
  else
  {
    Pool2 = (_QWORD *)ExAllocatePool2(258LL, 4120LL);
    v7 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = *((_QWORD *)this + 9);
      memmove(v7 + 1, a2, 0x1010uLL);
      v8 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x232497u, v7, 0x1018u, a3, 0x1000u);
    }
    else
    {
      v8 = -1073741801;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Pool2);
  }
  if ( *v3 )
    KeReleaseMutex((PRKMUTEX)*v3, 0);
  return v8;
}
