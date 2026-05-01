/*
 * XREFs of ?GetFullScreenView@FullScreenPositioner@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1802156F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall FullScreenPositioner::GetFullScreenView(FullScreenPositioner *this, struct IApplicationView **a2)
{
  struct IApplicationView **v2; // rbx

  *a2 = 0LL;
  v2 = (struct IApplicationView **)((char *)this + 136);
  if ( !*((_QWORD *)this + 17) )
    return 2147943568LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 17);
  *a2 = *v2;
  return 0LL;
}
