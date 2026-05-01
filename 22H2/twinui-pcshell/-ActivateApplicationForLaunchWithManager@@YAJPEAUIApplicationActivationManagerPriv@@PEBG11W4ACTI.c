/*
 * XREFs of ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1804E1B6C
 * Callers:
 *     ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x18043DCC0 (-ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z.c)
 *     ?ActivateApplicationForLaunch@@YAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAK@Z @ 0x1804E1AB8 (-ActivateApplicationForLaunch@@YAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAK@Z.c)
 * Callees:
 *     ??$Make@VCImmersiveWindowFactory@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveWindowFactory@@@12@XZ @ 0x180079120 (--$Make@VCImmersiveWindowFactory@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveWindowFact.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x1804E2040 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 *     ?SetExistingSplashScreen@CImmersiveWindowFactoryBase@@QEAAXPEAUISplashScreen@@@Z @ 0x1804F5B00 (-SetExistingSplashScreen@CImmersiveWindowFactoryBase@@QEAAXPEAUISplashScreen@@@Z.c)
 */

__int64 __fastcall ActivateApplicationForLaunchWithManager(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        struct ISplashScreen *a6,
        __int64 a7,
        CImmersiveWindowFactory *a8)
{
  CImmersiveWindowFactory *v8; // r14
  CImmersiveWindowFactoryBase *v9; // rbx
  CImmersiveWindowFactory **v13; // rax
  CImmersiveWindowFactoryBase *v14; // rdi
  CImmersiveWindowFactory *v15; // rcx
  unsigned int v16; // edi
  char v18; // [rsp+40h] [rbp-38h] BYREF

  v8 = a8;
  v9 = 0LL;
  *(_DWORD *)a8 = 0;
  if ( !a6 || (a5 & 0x10001) != 0 )
    goto LABEL_9;
  v13 = Microsoft::WRL::Details::Make<CImmersiveWindowFactory,>(&a8);
  v14 = 0LL;
  if ( &v18 != (char *)v13 )
  {
    v9 = *v13;
    *v13 = 0LL;
    v14 = v9;
  }
  v15 = a8;
  if ( a8 )
  {
    a8 = 0LL;
    (*(void (__fastcall **)(CImmersiveWindowFactory *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( v9 )
  {
    CImmersiveWindowFactoryBase::SetExistingSplashScreen(v14, a6);
LABEL_9:
    v16 = _ActivateApplicationForLaunchHelperWithWindowFactory(a1, a2, a3, a4, a5, a7, v9, v8);
    goto LABEL_10;
  }
  v16 = -2147024882;
LABEL_10:
  if ( v9 )
    (*(void (__fastcall **)(CImmersiveWindowFactoryBase *))(*(_QWORD *)v9 + 16LL))(v9);
  return v16;
}
