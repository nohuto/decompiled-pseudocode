/*
 * XREFs of ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800E61F8
 * Callers:
 *     wil_details_RecordCachedUsage @ 0x1800E9648 (wil_details_RecordCachedUsage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApi_RecordFeatureUsage(wil::details *this)
{
  void (__fastcall *v1)(wil::details *); // rax

  v1 = (void (__fastcall *)(wil::details *))g_wil_details_internalRecordFeatureUsage;
  if ( g_wil_details_internalRecordFeatureUsage
    || (v1 = (void (__fastcall *)(wil::details *))g_wil_details_apiRecordFeatureUsage) != 0LL )
  {
    v1(this);
  }
}
