/*
 * XREFs of ?RuntimeClassInitialize@CWindowIconLoader@@QEAAJPEAUIWin32ApplicationView@@AEBUtagSIZE@@PEAUIApplicationViewIconLoaderNotifications@@PEAUIIconLoadingFunctions@@@Z @ 0x1803F95F0
 * Callers:
 *     ??$MakeAndInitialize@VCWindowIconLoader@@V1@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIApplicationViewIconLoaderNotifications@@AEAPEAUIIconLoadingFunctions@@@Details@WRL@Microsoft@@YAJPEAPEAVCWindowIconLoader@@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIApplicationViewIconLoaderNotifications@@AEAPEAUIIconLoadingFunctions@@@Z @ 0x1803F94A8 (--$MakeAndInitialize@VCWindowIconLoader@@V1@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z @ 0x1803F9850 (-_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z.c)
 */

__int64 __fastcall CWindowIconLoader::RuntimeClassInitialize(
        CWindowIconLoader *this,
        struct IWin32ApplicationView *a2,
        const struct tagSIZE *a3,
        struct IApplicationViewIconLoaderNotifications *a4,
        struct IIconLoadingFunctions *a5)
{
  struct IApplicationViewIconLoaderNotifications *v5; // rax
  struct IIconLoadingFunctions *v10; // rax
  struct IIconLoadingFunctions *v11; // rdi
  _QWORD *v12; // rsi
  int v13; // eax
  unsigned int v14; // edi
  __int64 v16; // rax
  int v17; // edi
  int v18; // eax
  __int64 v19; // r10
  int v20; // eax
  __int64 v21; // r10
  int v22; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF
  struct IApplicationViewIconLoaderNotifications *v25; // [rsp+58h] [rbp+10h] BYREF

  v5 = (struct IApplicationViewIconLoaderNotifications *)*((_QWORD *)this + 3);
  if ( v5 != a4 )
  {
    if ( a4 )
    {
      (*(void (__fastcall **)(struct IApplicationViewIconLoaderNotifications *))(*(_QWORD *)a4 + 8LL))(a4);
      v5 = (struct IApplicationViewIconLoaderNotifications *)*((_QWORD *)this + 3);
    }
    v25 = v5;
    *((_QWORD *)this + 3) = a4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
  }
  v10 = (struct IIconLoadingFunctions *)*((_QWORD *)this + 4);
  v11 = a5;
  if ( v10 != a5 )
  {
    if ( a5 )
    {
      (*(void (__fastcall **)(struct IIconLoadingFunctions *))(*(_QWORD *)a5 + 8LL))(a5);
      v10 = (struct IIconLoadingFunctions *)*((_QWORD *)this + 4);
    }
    a5 = v10;
    *((_QWORD *)this + 4) = v11;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  }
  *(struct tagSIZE *)((char *)this + 44) = *a3;
  v12 = (_QWORD *)((char *)this + 16);
  v13 = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, char *))(*(_QWORD *)a2 + 24LL))(
          a2,
          (char *)this + 16);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 4) + 32LL))(
            *((_QWORD *)this + 4),
            *v12,
            4294967282LL);
    v24 = 0LL;
    v17 = 0;
    if ( v16 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64 *))(**((_QWORD **)this + 4) + 48LL))(
              *((_QWORD *)this + 4),
              v16,
              (char *)this + 44,
              &v24);
      if ( v18 >= 0 )
        v17 = 3;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x43,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\windowiconloader.cpp",
          (const char *)(unsigned int)v18);
      if ( v24 )
        goto LABEL_26;
    }
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 4) + 32LL))(
            *((_QWORD *)this + 4),
            *v12,
            4294967262LL);
    if ( v19 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64 *))(**((_QWORD **)this + 4) + 48LL))(
              *((_QWORD *)this + 4),
              v19,
              (char *)this + 44,
              &v24);
      if ( v20 >= 0 )
        v17 = 2;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4F,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\windowiconloader.cpp",
          (const char *)(unsigned int)v20);
    }
    if ( v24 )
      goto LABEL_26;
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 4) + 40LL))(
            *((_QWORD *)this + 4),
            0LL,
            32517LL);
    if ( v21 )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64 *))(**((_QWORD **)this + 4) + 48LL))(
              *((_QWORD *)this + 4),
              v21,
              (char *)this + 44,
              &v24);
      if ( v22 >= 0 )
        v17 = 1;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5C,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\windowiconloader.cpp",
          (const char *)(unsigned int)v22);
    }
    if ( v24 )
    {
LABEL_26:
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
      *((_DWORD *)this + 10) = v17;
    }
    CWindowIconLoader::_LoadAsyncIcon(this, 1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\windowiconloader.cpp",
      (const char *)(unsigned int)v13);
    return v14;
  }
}
