/*
 * XREFs of ?RecordSRUMFeatureUsage@details@wil@@YAXIII@Z @ 0x180196390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil::details::RecordSRUMFeatureUsage(
        wil::details *this,
        int a2,
        unsigned int a3,
        __int64 a4,
        const char *a5)
{
  wil::details::WilApi_RecordFeatureUsage(this, a2 | 0x40000000, a3, 0, a5);
}
