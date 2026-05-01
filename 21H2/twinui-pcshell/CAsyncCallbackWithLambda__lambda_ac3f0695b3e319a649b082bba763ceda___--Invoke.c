/*
 * XREFs of CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___::Invoke @ 0x1801EE710
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___::Invoke(__int64 a1)
{
  __int64 v1; // rdi
  int (__fastcall *v2)(__int64, __int64 *); // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 144LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  if ( v2(v1, &v4) >= 0 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 88LL))(v4, 64LL, 64LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  return 0LL;
}
