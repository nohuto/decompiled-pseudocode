__int64 __fastcall COPMProtectedOutput::SetSigningKeyAndSequenceNumbers(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const a2)
{
  void **v2; // rbx
  unsigned int v5; // edi
  OPM *Pool2; // rax
  void *v7; // rdx
  __int64 v8; // rdx
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  OPM *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (void **)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v2);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v5 = -1071774438;
  }
  else
  {
    Pool2 = (OPM *)ExAllocatePool2(258LL, 264LL, 1297108807LL);
    v12 = Pool2;
    if ( Pool2 )
    {
      v8 = 2LL;
      *(_QWORD *)Pool2 = *((_QWORD *)this + 9);
      v9 = (_OWORD *)((char *)Pool2 + 8);
      do
      {
        *v9 = *(_OWORD *)a2->abEncryptedParameters;
        v9[1] = *(_OWORD *)&a2->abEncryptedParameters[16];
        v9[2] = *(_OWORD *)&a2->abEncryptedParameters[32];
        v9[3] = *(_OWORD *)&a2->abEncryptedParameters[48];
        v9[4] = *(_OWORD *)&a2->abEncryptedParameters[64];
        v9[5] = *(_OWORD *)&a2->abEncryptedParameters[80];
        v9[6] = *(_OWORD *)&a2->abEncryptedParameters[96];
        v9 += 8;
        v10 = *(_OWORD *)&a2->abEncryptedParameters[112];
        a2 = (struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const)((char *)a2 + 128);
        *(v9 - 1) = v10;
        --v8;
      }
      while ( v8 );
      v5 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x232493u, Pool2, 0x108u, 0LL, 0);
    }
    else
    {
      v5 = -1073741801;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
      &v12,
      v7);
  }
  if ( *v2 )
    KeReleaseMutex((PRKMUTEX)*v2, 0);
  return v5;
}
