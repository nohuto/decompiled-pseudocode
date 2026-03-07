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
