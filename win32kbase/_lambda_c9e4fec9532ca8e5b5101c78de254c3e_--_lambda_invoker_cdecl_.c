void __fastcall lambda_c9e4fec9532ca8e5b5101c78de254c3e_::_lambda_invoker_cdecl_(void *a1)
{
  ULONG v1; // edx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02CA7E0, (unsigned __int8 *)dword_1C029CD89, 0LL, 0LL, v1, &v2);
  CCompositionRefreshRateBooster::HandleRefreshRateUnboostTimer((CCompositionRefreshRateBooster *)((char *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
                                                                                                 + 96));
}
