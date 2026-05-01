/*
 * XREFs of ?_OnSizeConstraintsChanged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180448444
 * Callers:
 *     ?OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007D3C0 (-OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180447BA0 (-ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180448378 (-_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::_OnSizeConstraintsChanged(
        SurfaceHubPositioner *this,
        struct IApplicationView *a2)
{
  int IsViewManaged; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v7)(struct IApplicationView *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  LONG v13; // edx
  LONG v14; // eax
  LONG v15; // r8d
  bool v16; // [rsp+30h] [rbp-50h] BYREF
  LONG v17; // [rsp+38h] [rbp-48h] BYREF
  LONG v18; // [rsp+3Ch] [rbp-44h]
  __int64 v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h] BYREF
  struct tagSIZE v21; // [rsp+50h] [rbp-30h]
  char v22[8]; // [rsp+58h] [rbp-28h] BYREF
  int v23; // [rsp+60h] [rbp-20h] BYREF
  int v24; // [rsp+64h] [rbp-1Ch]
  int v25; // [rsp+68h] [rbp-18h]
  int v26; // [rsp+6Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  IsViewManaged = SurfaceHubPositioner::_IsViewManaged(this, a2, &v16);
  v5 = IsViewManaged;
  if ( IsViewManaged >= 0 )
  {
    if ( !v16 )
      return 0LL;
    v20 = 0LL;
    v7 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v8 = v7(a2, &v20);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 604LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        (const char *)(unsigned int)v8);
LABEL_25:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      return v5;
    }
    v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, LONG *, char *))(*(_QWORD *)a2 + 280LL))(
           a2,
           v20,
           &v17,
           v22);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 608LL;
      goto LABEL_9;
    }
    v19 = 0LL;
    v10 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v11 = v10(a2, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &v19);
    v5 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 24LL))(v19, &v23);
      v5 = v11;
      if ( v11 >= 0 )
      {
        v13 = v26 - v24;
        v14 = v25 - v23;
        if ( v17 > v25 - v23 )
          v14 = v17;
        v21.cx = v14;
        v15 = v26 - v24;
        if ( v18 > v13 )
          v15 = v18;
        v21.cy = v15;
        if ( v14 == v25 - v23 && v15 == v13
          || (v11 = SurfaceHubPositioner::ResizeView((SurfaceHubPositioner *)((char *)this + 104), a2, v21, v21),
              v5 = v11,
              v11 >= 0) )
        {
          v5 = 0;
          goto LABEL_24;
        }
        v12 = 622LL;
      }
      else
      {
        v12 = 614LL;
      }
    }
    else
    {
      v12 = 611LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)v11);
LABEL_24:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x258,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)IsViewManaged);
  return v5;
}
