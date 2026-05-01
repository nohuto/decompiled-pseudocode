/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1312c5eca8584d5a6e8e07620abebaca___::Run @ 0x18007F590
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1312c5eca8584d5a6e8e07620abebaca___::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0LL;
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v1 + 48LL))(v1, *(_QWORD *)(a1 + 24), &v3) >= 0 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v1 + 168LL))(v1, v3, 14LL);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
}
