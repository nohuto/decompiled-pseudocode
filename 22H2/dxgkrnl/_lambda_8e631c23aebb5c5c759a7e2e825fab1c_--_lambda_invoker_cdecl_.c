/*
 * XREFs of _lambda_8e631c23aebb5c5c759a7e2e825fab1c_::_lambda_invoker_cdecl_ @ 0x1C02FCDB0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C02AD11C (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

LONG_PTR __fastcall lambda_8e631c23aebb5c5c759a7e2e825fab1c_::_lambda_invoker_cdecl_(struct DXGSWAPCHAIN **Object)
{
  struct DXGSWAPCHAIN *v2; // rcx
  __int64 v3; // rdi
  LONG_PTR result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _D3DKMT_RELEASESWAPCHAIN v8; // [rsp+30h] [rbp-48h] BYREF

  memset(&v8, 0, 0x40uLL);
  v2 = *Object;
  v8.bProducer = 1;
  v3 = (int)SwapChainReleaseInternal(v2, &v8, 0LL, 0);
  result = ObfDereferenceObject(Object);
  if ( (int)v3 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v7 + 24) = v3;
    return WdLogEvent5_WdError(v7);
  }
  return result;
}
