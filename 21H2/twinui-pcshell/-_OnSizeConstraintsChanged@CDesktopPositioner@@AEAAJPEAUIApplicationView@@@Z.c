/*
 * XREFs of ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18004FA6C
 * Callers:
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18004A8C0 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 * Callees:
 *     ?_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x18004A6A8 (-_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x18045CDE0 (-ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_OnSizeConstraintsChanged(CDesktopPositioner *this, struct IApplicationView *a2)
{
  int IsViewManaged; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(struct IApplicationView *, __int64 *); // rbx
  int v7; // eax
  __int64 (__fastcall *v8)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v9; // eax
  LONG v10; // edx
  LONG v11; // eax
  LONG v12; // r8d
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-60h]
  bool v17; // [rsp+30h] [rbp-50h] BYREF
  LONG v18; // [rsp+38h] [rbp-48h] BYREF
  LONG v19; // [rsp+3Ch] [rbp-44h]
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h] BYREF
  struct tagSIZE v22; // [rsp+50h] [rbp-30h]
  char v23[8]; // [rsp+58h] [rbp-28h] BYREF
  int v24; // [rsp+60h] [rbp-20h] BYREF
  int v25; // [rsp+64h] [rbp-1Ch]
  int v26; // [rsp+68h] [rbp-18h]
  int v27; // [rsp+6Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  IsViewManaged = CDesktopPositioner::_IsViewManaged(this, a2, &v17);
  v5 = IsViewManaged;
  if ( IsViewManaged < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x925,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)IsViewManaged,
      v16);
    return v5;
  }
  if ( v17 )
  {
    v21 = 0LL;
    v6 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v7 = v6(a2, &v21);
    v5 = v7;
    if ( v7 < 0 )
    {
      v14 = 2345LL;
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, LONG *, char *))(*(_QWORD *)a2 + 280LL))(
             a2,
             v21,
             &v18,
             v23);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v20 = 0LL;
        v8 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
        v9 = v8(a2, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &v20);
        v5 = v9;
        if ( v9 < 0 )
        {
          v15 = 2352LL;
        }
        else
        {
          v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 24LL))(v20, &v24);
          v5 = v9;
          if ( v9 < 0 )
          {
            v15 = 2355LL;
          }
          else
          {
            v10 = v27 - v25;
            v11 = v26 - v24;
            if ( v18 > v26 - v24 )
              v11 = v18;
            v22.cx = v11;
            v12 = v27 - v25;
            if ( v19 > v10 )
              v12 = v19;
            v22.cy = v12;
            if ( v11 == v26 - v24 && v12 == v10
              || (v9 = CDesktopPositioner::ResizeView((CDesktopPositioner *)((char *)this + 104), a2, v22, v22),
                  v5 = v9,
                  v9 >= 0) )
            {
              v5 = 0;
LABEL_14:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
LABEL_15:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
              return v5;
            }
            v15 = 2363LL;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v9,
          v16);
        goto LABEL_14;
      }
      v14 = 2349LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v7,
      v16);
    goto LABEL_15;
  }
  return 0LL;
}
