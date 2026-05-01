/*
 * XREFs of ?AddUnghostWindowCallbackTrigger@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUHWND__@@PEAUIAsyncCallback@@@Z @ 0x1801D81C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x1800145B4 (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::AddUnghostWindowCallbackTrigger(
        CAppViewManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, __int64 *),
        __int64 a3,
        struct IAsyncCallback *a4)
{
  RTL_SRWLOCK *v8; // rbx
  __int64 (__fastcall *v9)(struct IImmersiveApplication *, GUID *, __int64 *); // rdi
  int v10; // edi
  __int64 v12[5]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF

  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  v12[1] = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12[0] = 0LL;
  v9 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  v10 = v9((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v12);
  if ( v10 >= 0 )
  {
    v10 = -2147019873;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12[0] + 472LL))(v12[0]) )
      v10 = CAppViewManager::_AddPresentedWindowCallbackTrigger(
              (__int64)this - 40,
              1,
              (__int64 (__fastcall ***)(_QWORD, GUID *, _DWORD *))v12[0],
              a3,
              (__int64)a4,
              &v13);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return (unsigned int)v10;
}
