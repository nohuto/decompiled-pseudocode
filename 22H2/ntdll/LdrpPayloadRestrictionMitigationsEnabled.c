/*
 * XREFs of LdrpPayloadRestrictionMitigationsEnabled @ 0x1800D43FC
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D0F1C (LdrpInitializeExecutionOptions.c)
 *     AVrfInitializeVerifier @ 0x1800D97D8 (AVrfInitializeVerifier.c)
 * Callees:
 *     <none>
 */

char LdrpPayloadRestrictionMitigationsEnabled()
{
  char v0; // dl
  char v1; // r8
  char v2; // al

  v0 = 0;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 20) & 3) == 1
    || (BYTE2(LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]) & 3) == 1
    || (BYTE3(LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]) & 3) == 1
    || ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 28) & 3) == 1
    || (BYTE4(LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]) & 3) == 1
    || (v1 = 0, (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]) & 3) == 1) )
  {
    v1 = 1;
  }
  if ( ((LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[1] >> 20) & 3) == 1
    || (BYTE2(LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[1]) & 3) == 1
    || (BYTE3(LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[1]) & 3) == 1
    || ((LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[1] >> 28) & 3) == 1
    || (BYTE4(LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[1]) & 3) == 1
    || (v2 = 0, (BYTE5(LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[1]) & 3) == 1) )
  {
    v2 = 1;
  }
  if ( v1 || v2 )
    return 1;
  return v0;
}
