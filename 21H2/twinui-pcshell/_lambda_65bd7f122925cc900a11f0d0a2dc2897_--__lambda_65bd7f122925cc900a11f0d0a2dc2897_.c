/*
 * XREFs of _lambda_65bd7f122925cc900a11f0d0a2dc2897_::__lambda_65bd7f122925cc900a11f0d0a2dc2897_ @ 0x18014EDC4
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180085BAC (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65bd7f122925cc900a11f0d0a2dc2897___::_scalar_deleting_destructor_ @ 0x18014F340 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_65bd7f122925cc900a11f0d0a2dc2897___--_scala.c)
 * Callees:
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180016798 (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_65bd7f122925cc900a11f0d0a2dc2897_::__lambda_65bd7f122925cc900a11f0d0a2dc2897_(HSTRING *this)
{
  SingleViewExperienceTelemetry::Launch::~Launch((SingleViewExperienceTelemetry::Launch *)(this + 4));
  WindowsDeleteString(this[2]);
  this[2] = 0LL;
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)this);
}
