/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ae32e13828e5ee4f6a411d44b960e49___::Run @ 0x1800A98E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@QEAA@AEBV01@@Z @ 0x1800A0EB8 (--0-$tip_test@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@QEAA@AEB.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FF8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ae32e13828e5ee4f6a411d44b960e49___::Run(
        __int64 a1)
{
  const WCHAR *v1; // rbx
  __int64 *v2; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (const WCHAR *)(a1 + 16);
  v2 = tip::tip_test<tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::tip_test<tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>(
         &v4,
         a1 + 80);
  return InstallWebSearchPackage(v1, v1 + 16, (struct IUnknownVtbl *)v2);
}
