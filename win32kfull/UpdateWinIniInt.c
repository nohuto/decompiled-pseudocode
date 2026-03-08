/*
 * XREFs of UpdateWinIniInt @ 0x1C01C9800
 * Callers:
 *     ?xxxSetIMEShowStatus@@YAHHHPEAH@Z @ 0x1C00F3FC4 (-xxxSetIMEShowStatus@@YAHHHPEAH@Z.c)
 *     _anonymous_namespace_::UpdateThresholdFromMetric @ 0x1C01027F0 (_anonymous_namespace_--UpdateThresholdFromMetric.c)
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x1C0102EC8 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01C921C (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C1278 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateWinIniInt(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int16 v7[16]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v8[80]; // [rsp+40h] [rbp-78h] BYREF

  RtlStringCchPrintfW(v7, 0x10uLL, (size_t *)L"%d");
  RtlLoadStringOrError(a3, v8, 40LL);
  return FastWriteProfileStringW(a1, a2, v8, v7);
}
