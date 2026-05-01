/*
 * XREFs of ?ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z @ 0x180319620
 * Callers:
 *     ?OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z @ 0x18032FE00 (-OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Delete_this @ 0x1800AAF30 (std--_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___--_Dele.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x18031D7E8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ViewEventDispatcher::ViewNavigationLevelChanged(RTL_SRWLOCK *a1, unsigned int a2, int a3)
{
  struct IViewWrapperInternal *v5; // rbx
  int v6; // eax
  struct IViewWrapperInternal *v7[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 (__fastcall **v8)(); // [rsp+30h] [rbp-50h] BYREF
  int v9; // [rsp+38h] [rbp-48h]
  __int64 (__fastcall ***v10)(); // [rsp+68h] [rbp-18h]

  if ( a3 == 1 )
  {
    v5 = (struct IViewWrapperInternal *)&a1[35];
    AcquireSRWLockExclusive(a1 + 35);
    v7[1] = v5;
    v7[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v7);
    if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)a1, a2, v7) >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v7[0] + 936LL))(v7[0]);
      v8 = off_180522B20;
      v9 = v6;
      v10 = &v8;
      std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Delete_this(&v8, 0);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v7);
    if ( v5 )
      ReleaseSRWLockExclusive((PSRWLOCK)v5);
  }
}
