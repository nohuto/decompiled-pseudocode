/*
 * XREFs of ?GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z @ 0x180466AC0
 * Callers:
 *     ?GetAppLayoutData@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAUAppLayoutData@1@@Z @ 0x1804669D0 (-GetAppLayoutData@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAUAppLayoutData@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x180466B48 (-GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z.c)
 */

__int64 __fastcall TabletModeTraceLogging::GetAppLayoutItemData(
        struct IAppLayoutItem *a1,
        struct TabletModeTraceLogging::AppLayoutItemData *a2)
{
  int AppLayoutItemName; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)a2);
  *((_QWORD *)a2 + 1) = -1LL;
  *((_QWORD *)a2 + 2) = -1LL;
  AppLayoutItemName = TabletModeTraceLogging::GetAppLayoutItemName(a1, (unsigned __int16 **)a2);
  v5 = AppLayoutItemName;
  if ( AppLayoutItemName >= 0 )
  {
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, char *))(*(_QWORD *)a1 + 56LL))(a1, 0LL, (char *)a2 + 24);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EC,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
      (const char *)(unsigned int)AppLayoutItemName);
    return v5;
  }
}
