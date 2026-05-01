/*
 * XREFs of ??$PTPGestureActionCompleted@AEAI@MultitaskingViewTelemetry@@SAXAEAI@Z @ 0x1803F906C
 * Callers:
 *     _lambda_f68706b3a633395346cf80930ff89e4f_::operator() @ 0x1803F21D8 (_lambda_f68706b3a633395346cf80930ff89e4f_--operator().c)
 * Callees:
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x1803F6474 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x1803F6AC4 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ?PTPGestureActionCompleted_@MultitaskingViewTelemetry@@QEBAXI@Z @ 0x1803F90A0 (-PTPGestureActionCompleted_@MultitaskingViewTelemetry@@QEBAXI@Z.c)
 */

void __fastcall MultitaskingViewTelemetry::PTPGestureActionCompleted<unsigned int &>(unsigned int *a1)
{
  __int64 v2; // rcx
  MultitaskingViewTelemetry *v3; // rcx

  if ( MultitaskingViewTelemetry::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<MultitaskingViewTelemetry>::get(
      v2,
      _lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
    MultitaskingViewTelemetry::PTPGestureActionCompleted_(v3, *a1);
  }
}
