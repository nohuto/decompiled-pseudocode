/*
 * XREFs of ?UpdateLightweightFullScreenMode@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180081300
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180216160 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::UpdateLightweightFullScreenMode(
        FullScreenPositioner *this,
        struct IApplicationView *a2)
{
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL))(a2, &v5) >= 0
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5) == 3 )
  {
    FullScreenPositioner::PositionView((char *)this - 104, a2, 0LL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  return 0LL;
}
