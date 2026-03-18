/*
 * XREFs of ?CompositionRefreshRateBoost@Win32k@InputTraceLogging@@SAXI@Z @ 0x1C01FC75C
 * Callers:
 *     ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x1C01FC68C (-BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Win32k::CompositionRefreshRateBoost()
{
  int v0; // r8d
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 512LL) )
  {
    v5 = 0;
    v3 = &v1;
    v1 = v0;
    v4 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0289810, (unsigned __int8 *)dword_1C025F5E6, 0LL, 0LL, 3u, &v2);
  }
}
