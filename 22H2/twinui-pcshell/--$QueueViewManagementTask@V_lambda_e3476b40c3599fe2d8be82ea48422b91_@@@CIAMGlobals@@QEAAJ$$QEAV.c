/*
 * XREFs of ??$QueueViewManagementTask@V_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@CIAMGlobals@@QEAAJ$$QEAV_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@Z @ 0x1800610A4
 * Callers:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180060BE0 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005CD40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??$Make@V?$CTaskWrapper@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_e02303751d4e49a7e603e0304fd9978e_@@@Z @ 0x1800611AC (--$Make@V-$CTaskWrapper@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask<_lambda_e3476b40c3599fe2d8be82ea48422b91_>(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rdi
  __int64 *Ptr; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 *v10; // rax
  volatile int *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // edi
  PVOID v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+60h] [rbp+10h] BYREF

  v19 = a1;
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = (__int64 *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( !Ptr )
    return 2147943568LL;
  v5 = *Ptr;
  v16 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  (*(void (**)(void))(v5 + 8))();
  v17 = 0LL;
  if ( &v17 != a2 )
  {
    v6 = *a2;
    *a2 = 0LL;
    v17 = v6;
  }
  v18[0] = 0LL;
  v7 = a2 + 1;
  if ( v18 != v7 )
  {
    v8 = *v7;
    *v7 = 0LL;
    v18[0] = v8;
  }
  v9 = (unsigned int)v2[15].Ptr;
  v10 = (__int64 *)Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e02303751d4e49a7e603e0304fd9978e_>,_lambda_e02303751d4e49a7e603e0304fd9978e_>(
                     &v19,
                     &v16);
  v12 = *v10;
  *v10 = 0LL;
  v13 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v13,
      v11);
  }
  v14 = SHTaskPoolQueueTask(3LL, 2LL, v9, 0LL, v12, 0LL);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return v14;
}
