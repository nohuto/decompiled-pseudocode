/*
 * XREFs of CarDeleteTelemetryData @ 0x1405D16C4
 * Callers:
 *     CarCreateTelemetryData @ 0x1405D161C (CarCreateTelemetryData.c)
 *     CarDeregisterRuleClassConfiguration @ 0x1405D1760 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x1405D1800 (CarDeregisterRuleOverride.c)
 *     CarReportRuleViolationForTriage @ 0x1405D1FA0 (CarReportRuleViolationForTriage.c)
 *     CarLiveDump @ 0x1405D3670 (CarLiveDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CarDeleteTelemetryData(void **a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x4E726143u);
      *a1 = 0LL;
    }
  }
}
