/*
 * XREFs of _lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_ @ 0x1C01EBEC0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x1C01E7880 (ChildProcessRootSynthesizedMouseInput.c)
 */

void __fastcall lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_(void *a1)
{
  ULONG v1; // edx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 2LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C028EE70, (unsigned __int8 *)dword_1C02633AB, 0LL, 0LL, v1, &v2);
  ChildProcessRootSynthesizedMouseInput();
}
