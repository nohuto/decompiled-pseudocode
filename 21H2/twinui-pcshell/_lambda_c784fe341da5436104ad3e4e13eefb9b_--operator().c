/*
 * XREFs of _lambda_c784fe341da5436104ad3e4e13eefb9b_::operator() @ 0x1801B7EC0
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___::operator() @ 0x1801B8090 (CDelayIAMOperations--CDelayedOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180085384 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1801C8E38 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_c784fe341da5436104ad3e4e13eefb9b_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  int v3; // ebx
  __int64 v4; // [rsp+30h] [rbp-10h] BYREF
  int v5; // [rsp+38h] [rbp-8h]
  unsigned int v6; // [rsp+60h] [rbp+20h] BYREF
  __int64 v7; // [rsp+68h] [rbp+28h] BYREF
  __int64 v8; // [rsp+70h] [rbp+30h] BYREF
  LPVOID pv; // [rsp+78h] [rbp+38h] BYREF

  if ( (int)CoreEnumWindowServices(a1[1], &v6, &pv) >= 0 )
  {
    if ( v6 )
    {
      v7 = 0LL;
      v2 = *a1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
      v4 = a1[1];
      v5 = 2;
      CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(v2, &v4, &v7, 0LL);
      v3 = 5;
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 384LL))(v7) == a1[1] )
        v3 = 7;
      v8 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v7)(v7, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v8);
      CApplicationManager::_SendServiceAvailabilityChangedNotification(*a1, v8, v6, pv, v3);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    }
    CoTaskMemFree(pv);
  }
}
