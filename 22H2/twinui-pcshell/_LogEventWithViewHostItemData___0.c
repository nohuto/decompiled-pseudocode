/*
 * XREFs of _LogEventWithViewHostItemData___0 @ 0x1802B7858
 * Callers:
 *     ?GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1802B8010 (-GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@In.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$GetLastActiveItem@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x1802B7650 (--$GetLastActiveItem@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LogEventWithViewHostItemData___0(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  PCWSTR StringRawBuffer; // [rsp+40h] [rbp+18h] BYREF

  v8 = a2;
  string = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 48LL))(a1, &string);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 64LL))(a1, &v8);
    if ( v4 >= 0 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      HolographicPositionerTelemetry::GetLastActiveItem<unsigned short const *,unsigned int &>(
        (__int64 *)&StringRawBuffer,
        &v8);
      v4 = 0;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\TelemetryHelpers.h",
      (const char *)(unsigned int)v3);
  }
  if ( string )
    WindowsDeleteString(string);
  return (unsigned int)v4;
}
