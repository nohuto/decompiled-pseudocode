/*
 * XREFs of RtlRecordFeatureUsage @ 0x140410F50
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerRecordFeatureUsage @ 0x1404193A8 (CmFcManagerRecordFeatureUsage.c)
 */

__int64 __fastcall RtlRecordFeatureUsage(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return CmFcManagerRecordFeatureUsage(a1, a1, a2);
  return result;
}
