/*
 * XREFs of _lambda_41d3d8e444f2107bdec37176a1b6496a_::_lambda_invoker_cdecl_ @ 0x1C00E9170
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x1C00E8B10 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 */

void __fastcall lambda_41d3d8e444f2107bdec37176a1b6496a_::_lambda_invoker_cdecl_(void *a1)
{
  ULONG v1; // edx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 2LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C028EE70, (unsigned __int8 *)dword_1C02633CD, 0LL, 0LL, v1, &v2);
  CPTPProcessor::ProcessMouseQueue();
}
