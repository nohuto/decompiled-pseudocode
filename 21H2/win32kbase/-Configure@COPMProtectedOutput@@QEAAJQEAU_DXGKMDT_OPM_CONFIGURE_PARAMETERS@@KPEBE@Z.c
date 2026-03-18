/*
 * XREFs of ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C016C918
 * Callers:
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C016CA24 (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 * Callees:
 *     ??0CAutoMutex@OPM@@QEAA@PEAVCMutex@1@@Z @ 0x1C009AB70 (--0CAutoMutex@OPM@@QEAA@PEAVCMutex@1@@Z.c)
 *     ??1CAutoMutex@OPM@@QEAA@XZ @ 0x1C00ADB50 (--1CAutoMutex@OPM@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?OPMFreeMemory@OPM@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C00CED9C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-OPMFreeMemory@OPM@@YAX0@ZU-$integral_c.c)
 *     CallMonitor @ 0x1C00CFF40 (CallMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?OPMAllocateMemory@OPM@@YAPEAX_K0@Z @ 0x1C016CED0 (-OPMAllocateMemory@OPM@@YAPEAX_K0@Z.c)
 */

__int64 __fastcall COPMProtectedOutput::Configure(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *const a2,
        unsigned int a3,
        const unsigned __int8 *a4)
{
  size_t v5; // rsi
  unsigned __int64 v8; // r8
  unsigned int v9; // ebx
  ULONG v10; // edi
  void *v11; // rdx
  OPM *v12; // rbx
  struct _KMUTANT **v14[5]; // [rsp+30h] [rbp-28h] BYREF
  OPM *v15; // [rsp+60h] [rbp+8h] BYREF

  v5 = a3;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v14, *((struct OPM::CMutex **)this + 1));
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v9 = -1071774438;
  }
  else
  {
    v10 = v5 + 4112;
    if ( (unsigned int)v5 >= 0xFFFFEFF0 )
    {
      v9 = -1071774453;
    }
    else
    {
      v15 = (OPM *)OPM::OPMAllocateMemory((OPM *)v10, 0x100uLL, v8);
      v12 = v15;
      if ( v15 )
      {
        *(_QWORD *)v15 = *((_QWORD *)this + 9);
        memmove((char *)v12 + 8, a2, 0x1000uLL);
        *((_DWORD *)v12 + 1026) = v5;
        memmove((char *)v12 + 4108, a4, v5);
        v9 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x23249Fu, v12, v10, 0LL, 0);
      }
      else
      {
        v9 = -1073741801;
      }
      wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        &v15,
        v11);
    }
  }
  OPM::CAutoMutex::~CAutoMutex(v14);
  return v9;
}
