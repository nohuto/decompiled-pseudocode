/*
 * XREFs of CarDeleteTelemetryData @ 0x1405D3B74
 * Callers:
 *     CarCreateTelemetryData @ 0x1405D3ACC (CarCreateTelemetryData.c)
 *     CarDeregisterRuleClassConfiguration @ 0x1405D3C10 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x1405D3CB0 (CarDeregisterRuleOverride.c)
 *     CarReportRuleViolationForTriage @ 0x1405D4450 (CarReportRuleViolationForTriage.c)
 *     CarLiveDump @ 0x1405D5B20 (CarLiveDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
