/*
 * XREFs of ?GetImmersiveMonitorForNavigate@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@IPEAPEAU2@@Z @ 0x1803719DC
 * Callers:
 *     ?HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x180371FF0 (-HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::GetImmersiveMonitorForNavigate(
        XamlAllUpViewHost *this,
        struct IImmersiveMonitor *a2,
        int a3,
        struct IImmersiveMonitor **a4)
{
  struct IImmersiveMonitor **v8; // rbx
  __int64 v9; // r14
  int (__fastcall *v10)(__int64, bool, struct IImmersiveMonitor *, struct IImmersiveMonitor **); // rbx
  struct IImmersiveMonitor *v12; // [rsp+50h] [rbp+8h] BYREF

  v8 = (struct IImmersiveMonitor **)((char *)this + 240);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 30);
  *a4 = *v8;
  v9 = *((_QWORD *)this + 29);
  if ( v9 && (unsigned __int64)((__int64)(*((_QWORD *)this + 42) - *((_QWORD *)this + 41)) >> 3) > 1 )
  {
    v12 = 0LL;
    v10 = *(int (__fastcall **)(__int64, bool, struct IImmersiveMonitor *, struct IImmersiveMonitor **))(*(_QWORD *)v9 + 104LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    if ( v10(v9, a3 == 5, a2, &v12) >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
      *a4 = v12;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
  return 0LL;
}
