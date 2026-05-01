/*
 * XREFs of _lambda_ab9f828b40129b4f40202efbf92da624_::operator() @ 0x1802AEFD0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ab9f828b40129b4f40202efbf92da624___::Run @ 0x1802B25D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ab9f828b40129b4f40202efbf92da624___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIHolographicViewTransitionNotification@@V?$ComPtr@UIHolographicViewTransitionNotification@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802AE86C (--0Iterator@-$ObjectArrayAdapterImpl@UIHolographicViewTransitionNotification@@V-$ComPtr@UIHologr.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIHolographicViewTransitionNotification@@V?$ComPtr@UIHolographicViewTransitionNotification@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802B08E4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIHolographicViewTransitionNotification@@V-$.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_ab9f828b40129b4f40202efbf92da624_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+28h] [rbp-38h] BYREF
  int v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11[2]; // [rsp+38h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-18h] BYREF
  __int64 v13[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v15; // [rsp+70h] [rbp+10h] BYREF

  v8 = *(_QWORD *)a1;
  v2 = v8;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
  v9 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 24LL))(v2, &v9);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10,
      (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)v3);
  details::ObjectArrayAdapterImpl<IHolographicViewTransitionNotification,Microsoft::WRL::ComPtr<IHolographicViewTransitionNotification>>::Iterator::Iterator(
    (__int64)&v10,
    (__int64)&v8,
    0);
  details::ObjectArrayAdapterImpl<IHolographicViewTransitionNotification,Microsoft::WRL::ComPtr<IHolographicViewTransitionNotification>>::Iterator::Iterator(
    (__int64)&v12,
    (__int64)&v8,
    v9);
  while ( v10 != v12 || v11[1] != v13[1] )
  {
    v4 = (__int64 *)v11[0];
    v15 = v11[0];
    if ( v11[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11[0] + 8LL))(v11[0]);
    v5 = *v4;
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(a1 + 16) == 1 )
      (*(void (__fastcall **)(__int64 *, __int64))(v5 + 32))(v4, v6);
    else
      (*(void (__fastcall **)(__int64 *, __int64))(v5 + 24))(v4, v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    ++v10;
    details::ObjectArrayAdapterImpl<IHolographicViewTransitionNotification,Microsoft::WRL::ComPtr<IHolographicViewTransitionNotification>>::Iterator::GetCurrentObject(&v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
}
