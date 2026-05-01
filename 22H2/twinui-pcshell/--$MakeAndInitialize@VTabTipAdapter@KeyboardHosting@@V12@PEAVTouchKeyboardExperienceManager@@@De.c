/*
 * XREFs of ??$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapter@KeyboardHosting@@$$QEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x1803B41AC
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803BE670 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TabTipAdapter@KeyboardHosting@@QEAA@XZ @ 0x1803C9924 (--0TabTipAdapter@KeyboardHosting@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x1803D1FC4 (-RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::TabTipAdapter,KeyboardHosting::TabTipAdapter,TouchKeyboardExperienceManager *>(
        KeyboardHosting::TabTipAdapter **a1,
        struct TouchKeyboardExperienceManager **a2)
{
  KeyboardHosting::TabTipAdapter *v4; // rax
  int v5; // ebx
  KeyboardHosting::TabTipAdapter *v6; // rsi
  KeyboardHosting::TabTipAdapter *v8; // [rsp+40h] [rbp+8h] BYREF
  KeyboardHosting::TabTipAdapter *v9; // [rsp+50h] [rbp+18h]
  KeyboardHosting::TabTipAdapter *v10; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = (KeyboardHosting::TabTipAdapter *)operator new(0x218uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  v8 = v4;
  if ( v4 )
  {
    v10 = v4;
    v6 = (KeyboardHosting::TabTipAdapter *)KeyboardHosting::TabTipAdapter::TabTipAdapter(v4);
    v8 = v6;
    v9 = 0LL;
    v5 = KeyboardHosting::TabTipAdapter::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
