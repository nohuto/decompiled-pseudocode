/*
 * XREFs of ?UnsubscribeFromServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801C4410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801B15A0 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::UnsubscribeFromServices(CApplicationManager *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v5; // rcx
  HRESULT (__stdcall *v6)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+20h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  v13[0] = 0LL;
  if ( *((_DWORD *)this + 176) )
  {
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))QueryService)(
           a2,
           &SID_ImmersiveShellHookService,
           &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
           v13) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13[0] + 32LL))(v13[0], *((unsigned int *)this + 176));
  }
  v5 = *((_QWORD *)this + 62);
  if ( v5 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 88LL))(v5, *((unsigned int *)this + 181));
  if ( *((_DWORD *)this + 183) )
  {
    v14 = 0LL;
    v6 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v6)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           &v14) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 32LL))(v14, *((unsigned int *)this + 183));
      *((_DWORD *)this + 183) = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  if ( *((_QWORD *)this + 92) )
  {
    v15 = 0LL;
    v7 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v7)(
           a2,
           &SID_ViewEventDispatcher,
           &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e,
           &v15) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 56LL))(v15, *((_QWORD *)this + 92));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  v16 = 0LL;
  if ( *((_DWORD *)this + 182) )
  {
    v8 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v8)(
           a2,
           &IID_IImmersiveSessionIdleDetector,
           &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
           &v16) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 40LL))(v16, *((unsigned int *)this + 182));
      *((_DWORD *)this + 182) = 0;
    }
  }
  v9 = *((_QWORD *)this + 58);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
  if ( *((_QWORD *)this + 59) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 60) + 32LL))(*((_QWORD *)this + 60));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 55) + 32LL))(
      *((_QWORD *)this + 55),
      *((_QWORD *)this + 59));
  }
  v10 = *((_QWORD *)this + 57);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
  v11 = *((_QWORD *)this + 64);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 104LL))(v11);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v14 = *((_QWORD *)this + 87);
  *((_QWORD *)this + 87) = 0LL;
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  SmartCookie::Unregister((CApplicationManager *)((char *)this + 744));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  return 0LL;
}
