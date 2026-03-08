/*
 * XREFs of HalpInterruptIsMsiSupported @ 0x14037D4DC
 * Callers:
 *     HalpTimerConfigureInterrupt @ 0x140379C34 (HalpTimerConfigureInterrupt.c)
 *     HalGetInterruptTargetInformation @ 0x14037D3A0 (HalGetInterruptTargetInformation.c)
 *     HalpIommuConfigureInterrupt @ 0x1403A4968 (HalpIommuConfigureInterrupt.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x14037D1F0 (HalpGetCpuInfo.c)
 *     EmClientQueryRuleState @ 0x140A85190 (EmClientQueryRuleState.c)
 */

char __fastcall HalpInterruptIsMsiSupported(char a1)
{
  char result; // al
  char CpuInfo; // al
  char v4; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  char CpuType; // dl
  bool v7; // cc
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  if ( HalpInterruptMsiSupportDetermined )
  {
    result = HalpInterruptMsiSupported;
    goto LABEL_3;
  }
  if ( HalpInterruptController && !*(_QWORD *)(HalpInterruptController + 136) )
  {
    result = 0;
    goto LABEL_3;
  }
  if ( a1 || (int)EmClientQueryRuleState(&GUID_EM_DISABLE_MSI_RULE, &v8) >= 0 && v8 != 2 )
  {
    LOBYTE(v8) = 0;
    CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, (unsigned __int8 *)&v8);
    v4 = CpuInfo != 0 ? v8 : 0;
    if ( v4 != 2 && v4 != 1 )
    {
      result = 0;
      if ( v4 != 3 )
        goto LABEL_13;
      CurrentPrcb = KeGetCurrentPrcb();
      CpuType = CurrentPrcb->CpuType;
      v7 = (unsigned __int8)CpuType <= 6u;
      if ( CpuType != 6 )
        goto LABEL_25;
      if ( CurrentPrcb->CpuModel < 0xAu )
      {
        v7 = 1;
LABEL_25:
        if ( v7 )
          goto LABEL_13;
      }
    }
    result = 1;
LABEL_13:
    if ( (HalpInterruptMsiOverrideFlags & 1) != 0 )
      result = 1;
    if ( (HalpInterruptMsiOverrideFlags & 2) != 0 )
      result = 0;
LABEL_3:
    if ( a1 )
      return result;
    goto LABEL_4;
  }
  result = 0;
LABEL_4:
  HalpInterruptMsiSupported = result;
  HalpInterruptMsiSupportDetermined = 1;
  return result;
}
