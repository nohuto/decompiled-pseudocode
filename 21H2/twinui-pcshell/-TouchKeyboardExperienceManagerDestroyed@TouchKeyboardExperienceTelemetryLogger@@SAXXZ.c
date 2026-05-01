/*
 * XREFs of ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1803C3970
 * Callers:
 *     _lambda_13e7c7d1bbe76ddb28a4a415717d5504_::operator() @ 0x1800CEBC4 (_lambda_13e7c7d1bbe76ddb28a4a415717d5504_--operator().c)
 *     _lambda_43e2ea7707e3cc3476f49dcfffc6812f_::operator() @ 0x1800CEE98 (_lambda_43e2ea7707e3cc3476f49dcfffc6812f_--operator().c)
 *     _lambda_4d10a89d0d66f2982df1f6a73309b1fb_::operator() @ 0x1800CEFA8 (_lambda_4d10a89d0d66f2982df1f6a73309b1fb_--operator().c)
 *     _lambda_51d6f8f9b06e99048dd25aff80a12ac0_::operator() @ 0x1800CF2E8 (_lambda_51d6f8f9b06e99048dd25aff80a12ac0_--operator().c)
 *     _lambda_536d29ca497f1a4a88268fb5f9ff4d76_::operator() @ 0x1800CF4C0 (_lambda_536d29ca497f1a4a88268fb5f9ff4d76_--operator().c)
 *     _lambda_5fc35d1030d0241eeb48d222f7d22fe1_::operator() @ 0x1800CF6FC (_lambda_5fc35d1030d0241eeb48d222f7d22fe1_--operator().c)
 *     _lambda_f61fa834658c673f1bf417ab36d33a49_::operator() @ 0x1800CFB3C (_lambda_f61fa834658c673f1bf417ab36d33a49_--operator().c)
 *     _lambda_f68384705a080bb04b4187854264e75d_::operator() @ 0x1800CFD78 (_lambda_f68384705a080bb04b4187854264e75d_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1803C6800 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v1 = *(_DWORD **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      a1,
                      _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = 0x1000000LL;
      v6 = 8;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_180592DAF, 0LL, 0LL, 3u, &v4);
    }
  }
}
