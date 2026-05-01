/*
 * XREFs of ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1802803A4
 * Callers:
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1802802E8 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExp.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800C1E20 (--4-$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEA.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA?AV?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@XZ @ 0x180260CC0 (--$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA-AV-$unique_ptr@VA.c)
 *     ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x180278788 (-reset@-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Co.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1804BD7CC (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaDesktopExperienceView::RuntimeClassInitialize(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  void *v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  TwinUI::Lighting::AssistantLightManager *v11; // rbx
  _QWORD *v12; // rbx
  TwinUI::Lighting::AssistantLightManager *v13; // rsi
  bool v14; // al
  float v15; // xmm0_4
  float v16; // xmm1_4
  __int64 (__fastcall *v17)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 (__fastcall *v21)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // r8
  __int64 v27; // [rsp+30h] [rbp-10h] BYREF
  void *v28; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  int v30; // [rsp+80h] [rbp+40h] BYREF
  __int64 v31; // [rsp+88h] [rbp+48h] BYREF
  void **v32; // [rsp+98h] [rbp+58h]

  v32 = a4;
  Microsoft::WRL::ComPtr<TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification>::operator=(
    (__int64 *)(a1 + 96),
    a3);
  v7 = *a4;
  *a4 = 0LL;
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    (void **)(a1 + 104),
    v7);
  v8 = wil::make_unique_nothrow<TwinUI::Lighting::AssistantLightWNFListener,>((__int64 *)&v28);
  v9 = *v8;
  *v8 = 0LL;
  v10 = *(_QWORD **)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v9;
  if ( v10 )
  {
    v11 = (TwinUI::Lighting::AssistantLightManager *)v10[1];
    v10[1] = 0LL;
    if ( v11 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v11);
      operator delete(v11, (const struct std::nothrow_t *)0x70);
    }
    operator delete(v10, (const struct std::nothrow_t *)0x10);
  }
  v12 = v28;
  v28 = 0LL;
  if ( v12 )
  {
    v13 = (TwinUI::Lighting::AssistantLightManager *)v12[1];
    v12[1] = 0LL;
    if ( v13 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v13);
      operator delete(v13, (const struct std::nothrow_t *)0x70);
    }
    operator delete(v12, (const struct std::nothrow_t *)0x10);
  }
  v14 = IsPPIEdition();
  *(_BYTE *)(a1 + 296) = v14;
  if ( v14 )
  {
    v15 = FLOAT_492_0;
    v16 = FLOAT_428_0;
  }
  else
  {
    v15 = FLOAT_656_0;
    v16 = FLOAT_320_0;
  }
  *(float *)(a1 + 212) = v16;
  *(float *)(a1 + 216) = v15;
  v27 = 0LL;
  v17 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  v18 = v17(a2, &IID_IImmersiveWindowMessageService, &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca, &v27);
  v19 = v18;
  if ( v18 < 0 )
  {
    v20 = 388LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_29;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v27 + 24LL))(
          v27,
          26LL,
          a1 + 40,
          a1 + 260);
  v19 = v18;
  if ( v18 < 0 )
  {
    v20 = 389LL;
    goto LABEL_16;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v27 + 24LL))(
          v27,
          1025LL,
          a1 + 40,
          a1 + 264);
  v19 = v18;
  if ( v18 < 0 )
  {
    v20 = 390LL;
    goto LABEL_16;
  }
  v31 = 0LL;
  v21 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  v22 = v21(a2, &IID_IImmersiveSessionIdleDetector, &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29, &v31);
  v19 = v22;
  if ( v22 >= 0 )
  {
    v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v31 + 32LL))(v31, a1 + 64, a1 + 276);
    v19 = v22;
    if ( v22 >= 0 )
    {
      v30 = 0;
      v24 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 24LL))(v31, &v30);
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x18D,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v24);
      *(_BYTE *)(a1 + 254) = v30 != 0;
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 120), a2);
      LOBYTE(v25) = *(_BYTE *)(a1 + 296);
      v22 = (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64))(a1 + 104))(*(_QWORD *)(a1 + 104), a1 + 72, v25);
      v19 = v22;
      if ( v22 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
        v19 = 0;
        goto LABEL_29;
      }
      v23 = 404LL;
    }
    else
    {
      v23 = 395LL;
    }
  }
  else
  {
    v23 = 394LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
LABEL_29:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    a4,
    0LL);
  return v19;
}
