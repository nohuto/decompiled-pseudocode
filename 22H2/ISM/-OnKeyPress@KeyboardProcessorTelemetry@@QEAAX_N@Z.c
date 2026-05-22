/*
 * XREFs of ?OnKeyPress@KeyboardProcessorTelemetry@@QEAAX_N@Z @ 0x1801359C8
 * Callers:
 *     ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180135650 (-OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

void __fastcall KeyboardProcessorTelemetry::OnKeyPress(KeyboardProcessorTelemetry *this)
{
  int v2; // eax
  int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1802063F0 > 5 && tlgKeywordOn((__int64)&dword_1802063F0, 0x200000000000LL) )
  {
    v2 = *(_DWORD *)this;
    v7 = 0;
    v3 = v2;
    v6 = 4;
    v5 = &v3;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1802063F0,
      (unsigned __int8 *)dword_1801CF460,
      0LL,
      0LL,
      3u,
      &v4);
  }
  *(_DWORD *)this = 0;
}
