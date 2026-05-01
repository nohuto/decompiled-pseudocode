/*
 * XREFs of ?SetSplashScreenRect@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBURect@Foundation@Windows@@@Z @ 0x180331EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$ChangeSplashScreenRect@PEAUIShellView@Server@Navigation@@AEAHAEAHAEAHAEAH@ViewManagerInteropTraceLogging@@SAX$$QEAPEAUIShellView@Server@Navigation@@AEAH111@Z @ 0x18032AA00 (--$ChangeSplashScreenRect@PEAUIShellView@Server@Navigation@@AEAHAEAHAEAHAEAH@ViewManagerInteropT.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetSplashScreenRect(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        const struct Windows::Foundation::Rect *a3)
{
  float v4; // xmm0_4
  int v5; // r15d
  float v6; // xmm1_4
  int v7; // r14d
  float v8; // xmm0_4
  float v9; // xmm1_4
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 v11; // rax
  int v12; // eax
  int v13; // [rsp+30h] [rbp-10h] BYREF
  int v14; // [rsp+34h] [rbp-Ch] BYREF
  int v15; // [rsp+38h] [rbp-8h] BYREF
  int v16; // [rsp+3Ch] [rbp-4h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  _QWORD *v18; // [rsp+70h] [rbp+30h] BYREF
  _QWORD *v19; // [rsp+88h] [rbp+48h] BYREF

  if ( !*((_BYTE *)this + 145) )
  {
    v4 = *(float *)a3;
    v5 = (int)*(float *)a3;
    v13 = v5;
    v6 = *((float *)a3 + 1);
    v7 = (int)v6;
    v14 = (int)v6;
    v8 = v4 + *((float *)a3 + 2);
    v15 = (int)v8;
    v9 = v6 + *((float *)a3 + 3);
    v16 = (int)v9;
    v18 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    ((void (__fastcall *)(struct IUnknown *, GUID *, _QWORD **))QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v18);
    v19 = v18;
    ViewManagerInteropTraceLogging::ChangeSplashScreenRect<Navigation::Server::IShellView *,int &,int &,int &,int &>(
      (__int64 *)&v19,
      &v13,
      &v14,
      &v15,
      &v16);
    v11 = *v18;
    v13 = v5;
    v14 = v7;
    v15 = (int)v8;
    v16 = (int)v9;
    v12 = (*(__int64 (__fastcall **)(_QWORD *, int *))(v11 + 216))(v18, &v13);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1FD,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
}
