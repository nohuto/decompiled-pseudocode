/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__&_::Run @ 0x180014760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180081740 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd____::Run(
        __int64 a1)
{
  unsigned int *v1; // rbx
  void *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (unsigned int *)(a1 + 16);
  v3 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
  if ( CMarshaledInterface::_Unmarshal((CMarshaledInterface *)v1, &GUID_ea8a389b_437d_4791_aa14_5dca004bc92a, &v3, 0) >= 0 )
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, v1[2]);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
}
