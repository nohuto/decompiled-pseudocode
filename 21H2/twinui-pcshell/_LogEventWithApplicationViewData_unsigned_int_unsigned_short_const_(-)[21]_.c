/*
 * XREFs of _LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(&)[21]_ @ 0x1802ADE34
 * Callers:
 *     ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x1802B405C (-_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$Win32SlateViewConsideredForOwnership@PEBGIAEAY0BF@$$CBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG$$QEAIAEAY0BF@$$CBG@Z @ 0x1802AD6E8 (--$Win32SlateViewConsideredForOwnership@PEBGIAEAY0BF@$$CBG@HolographicPositionerTelemetry@@SAX$$.c)
 */

__int64 __fastcall LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_____21__(
        __int64 a1,
        LPVOID a2,
        _DWORD *a3)
{
  __int64 (__fastcall *v5)(__int64, LPVOID *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPVOID v10; // [rsp+38h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+48h] [rbp+20h] BYREF

  v10 = a2;
  pv = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a1 + 136LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v6 = v5(a1, &pv);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = pv;
    HolographicPositionerTelemetry::Win32SlateViewConsideredForOwnership<unsigned short const *,unsigned int,unsigned short const (&)[21]>(
      (__int64 *)&v10,
      a3,
      (__int64)L"Win32 activation log");
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\TelemetryHelpers.h",
      (const char *)(unsigned int)v6);
  }
  if ( pv )
    CoTaskMemFree(pv);
  return v7;
}
