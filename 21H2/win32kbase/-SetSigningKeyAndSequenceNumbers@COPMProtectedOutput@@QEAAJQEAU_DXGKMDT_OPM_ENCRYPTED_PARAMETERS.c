/*
 * XREFs of ?SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00CE7F4
 * Callers:
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00CE75C (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C009ABA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?OPMFreeMemory@OPM@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C00CED9C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-OPMFreeMemory@OPM@@YAX0@ZU-$integral_c.c)
 *     CallMonitor @ 0x1C00CFF40 (CallMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COPMProtectedOutput::SetSigningKeyAndSequenceNumbers(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const a2)
{
  void **v2; // rbx
  _QWORD *Pool2; // rax
  __int64 v6; // rdx
  _OWORD *v7; // rcx
  __int128 v8; // xmm1
  unsigned int v9; // edi
  _QWORD *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (void **)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v2);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v9 = -1071774438;
  }
  else
  {
    Pool2 = (_QWORD *)ExAllocatePool2(258LL, 264LL);
    v11 = Pool2;
    if ( Pool2 )
    {
      v6 = 2LL;
      *Pool2 = *((_QWORD *)this + 9);
      v7 = Pool2 + 1;
      do
      {
        *v7 = *(_OWORD *)a2->abEncryptedParameters;
        v7[1] = *(_OWORD *)&a2->abEncryptedParameters[16];
        v7[2] = *(_OWORD *)&a2->abEncryptedParameters[32];
        v7[3] = *(_OWORD *)&a2->abEncryptedParameters[48];
        v7[4] = *(_OWORD *)&a2->abEncryptedParameters[64];
        v7[5] = *(_OWORD *)&a2->abEncryptedParameters[80];
        v7[6] = *(_OWORD *)&a2->abEncryptedParameters[96];
        v7 += 8;
        v8 = *(_OWORD *)&a2->abEncryptedParameters[112];
        a2 = (struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const)((char *)a2 + 128);
        *(v7 - 1) = v8;
        --v6;
      }
      while ( v6 );
      v9 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x232493u, Pool2, 0x108u, 0LL, 0);
    }
    else
    {
      v9 = -1073741801;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v11);
  }
  if ( *v2 )
    KeReleaseMutex((PRKMUTEX)*v2, 0);
  return v9;
}
