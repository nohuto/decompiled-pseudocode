/*
 * XREFs of ??$MakeAndInitialize@VTabletModePositionerHandoffContext@@V1@AEAPEAUIAppLayout@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVTabletModePositionerHandoffContext@@AEAPEAUIAppLayout@@AEA_N@Z @ 0x180474DB8
 * Callers:
 *     ?TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z @ 0x180475048 (-TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A21F0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1803CD57C (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0TabletModePositionerHandoffContext@@QEAA@XZ @ 0x180474E68 (--0TabletModePositionerHandoffContext@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TabletModePositionerHandoffContext@@QEAAJPEAUIAppLayout@@_N@Z @ 0x180474FBC (-RuntimeClassInitialize@TabletModePositionerHandoffContext@@QEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModePositionerHandoffContext,TabletModePositionerHandoffContext,IAppLayout * &,bool &>(
        volatile int **a1,
        struct IAppLayout **a2,
        bool *a3)
{
  TabletModePositionerHandoffContext *v6; // rax
  int v7; // ebx
  volatile int *v8; // rdi
  volatile int *v9; // rdx
  volatile int *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (TabletModePositionerHandoffContext *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = (volatile int *)TabletModePositionerHandoffContext::TabletModePositionerHandoffContext(v6);
    v11 = v8;
    v12 = 0LL;
    v7 = TabletModePositionerHandoffContext::RuntimeClassInitialize((TabletModePositionerHandoffContext *)v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
          (__int64)v8,
          v9);
      *a1 = v8;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
