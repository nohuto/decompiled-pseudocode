/*
 * XREFs of CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa___ @ 0x18005A024
 * Callers:
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180058D80 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 * Callees:
 *     _lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator() @ 0x18005A0CC (_lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_--operator().c)
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x18005A20C (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 *     CClassicWindowManager::ForEachWindow__lambda_46f7271c5c6893b3d3a15b7b7af716b5___ @ 0x18005A32C (CClassicWindowManager--ForEachWindow__lambda_46f7271c5c6893b3d3a15b7b7af716b5___.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v4; // di
  __int64 v5; // rbx
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v8; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+80h] [rbp+30h] BYREF
  __int64 v11; // [rsp+88h] [rbp+38h] BYREF

  v10 = a3;
  CClassicWindowManager::GetRootOwner(a1, &v11, a2);
  v4 = lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()(&v10, &v11);
  if ( v4 )
  {
    v5 = v11;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 128LL))(v11) )
    {
      v8 = &v10;
      v7 = v5;
      v9[0] = a1;
      v9[1] = &v7;
      v9[2] = &v8;
      v4 = CClassicWindowManager::ForEachWindow__lambda_46f7271c5c6893b3d3a15b7b7af716b5___(a1, v9);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v11);
  return v4;
}
