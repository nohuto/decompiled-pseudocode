/*
 * XREFs of ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x180466B48
 * Callers:
 *     ?GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z @ 0x180466AC0 (-GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z.c)
 * Callees:
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x180038C60 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180467AE4 (-GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeTraceLogging::GetAppLayoutItemName(struct IAppLayoutItem *a1, unsigned __int16 **a2)
{
  int ViewName; // eax
  unsigned __int16 **v5; // r8
  unsigned int v6; // edi
  __int64 v7; // rdx
  char *v8; // r14
  __int64 v9; // rsi
  _WORD *v10; // rax
  _WORD *v11; // rcx
  __int16 v12; // dx
  int v13; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  _WORD *v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h]
  __int64 v19; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  ApplicationViewTraceLoggingHelpers *v21; // [rsp+60h] [rbp+20h] BYREF

  if ( (*(unsigned int (__fastcall **)(struct IAppLayoutItem *))(*(_QWORD *)a1 + 24LL))(a1) != 1 )
  {
    v8 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v9 = 7LL;
    if ( is_mul_ok(7uLL, 2uLL) )
    {
      v6 = 0;
      v10 = CoTaskMemAlloc(0xEuLL);
      v11 = v10;
      if ( v10 )
      {
        v19 = 7LL;
        v8 = (char *)v10;
        v17 = v10;
        *v10 = 0;
      }
      else
      {
        v6 = -2147024882;
        v11 = 0LL;
      }
      if ( (v6 & 0x80000000) == 0 )
      {
        while ( --v9 )
        {
          v12 = *(_WORD *)((char *)v11 + (char *)L"Buffer" - v8);
          if ( !v12 )
            break;
          *v11++ = v12;
        }
        *v11 = 0;
        v18 = 6LL;
        v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(
                (__int64 *)&v17,
                a2);
        v6 = v13;
        if ( v13 >= 0 )
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
          return 0LL;
        }
        v14 = (unsigned int)v13;
        v15 = 511LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
          (const char *)v14);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
        return v6;
      }
    }
    else
    {
      v6 = -2147024362;
    }
    v14 = v6;
    v15 = 510LL;
    goto LABEL_22;
  }
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  ViewName = (*(__int64 (__fastcall **)(struct IAppLayoutItem *, GUID *, ApplicationViewTraceLoggingHelpers **))(*(_QWORD *)a1 + 48LL))(
               a1,
               &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
               &v21);
  v6 = ViewName;
  if ( ViewName >= 0 )
  {
    ViewName = ApplicationViewTraceLoggingHelpers::GetViewName(v21, (struct IApplicationView *)a2, v5);
    v6 = ViewName;
    if ( ViewName < 0 )
    {
      v7 = 503LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    return 0LL;
  }
  v7 = 502LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
    (const char *)(unsigned int)ViewName);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  return v6;
}
