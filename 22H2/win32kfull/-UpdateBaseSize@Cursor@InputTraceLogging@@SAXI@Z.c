/*
 * XREFs of ?UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z @ 0x1C01A89D4
 * Callers:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C0024A88 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0040C00 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Cursor::UpdateBaseSize()
{
  int v0; // r9d
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C0359080 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0359080, 8LL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0359080,
        (unsigned __int8 *)dword_1C0319D72,
        0LL,
        0LL,
        3u,
        &v2);
    }
  }
}
