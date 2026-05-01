/*
 * XREFs of _lambda_43e2ea7707e3cc3476f49dcfffc6812f_::__lambda_43e2ea7707e3cc3476f49dcfffc6812f_ @ 0x1800CE960
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_43e2ea7707e3cc3476f49dcfffc6812f___::_scalar_deleting_destructor_ @ 0x1800CFFA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_43e2ea7707e3cc3476f49dcfffc6812f___--_scala.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803BEA80 (-PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B7264 (--1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

void __fastcall lambda_43e2ea7707e3cc3476f49dcfffc6812f_::__lambda_43e2ea7707e3cc3476f49dcfffc6812f_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)(a1 + 16));
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a1 + 8));
}
