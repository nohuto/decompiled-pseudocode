__int64 __fastcall COPMProtectedOutput::GetInformation(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *const a2,
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
    Pool2 = (OPM *)ExAllocatePool2(258LL, 4120LL, 1297108807LL);
    v9 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = *((_QWORD *)this + 9);
      memmove((char *)v9 + 8, a2, 0x1010uLL);
      v7 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x232497u, v9, 0x1018u, a3, 0x1000u);
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
