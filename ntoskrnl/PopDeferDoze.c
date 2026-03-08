/*
 * XREFs of PopDeferDoze @ 0x140988614
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopPrintEx @ 0x1402BDCD4 (PopPrintEx.c)
 *     PopIsDozeSupported @ 0x14097DB04 (PopIsDozeSupported.c)
 *     PopIsWakeTimerImmanent @ 0x140988900 (PopIsWakeTimerImmanent.c)
 *     PopQueryPowerSettingUlong @ 0x140988ACC (PopQueryPowerSettingUlong.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x14098B938 (PopDiagTraceDozeDeferralDecision.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall PopDeferDoze(int a1, int a2, _BYTE *a3)
{
  int v3; // ebx
  char v4; // si
  char IsDozeSupported; // al
  int v9; // r9d
  int v10; // edx
  int v11; // r12d
  int v12; // eax
  int v13; // ebx
  int v14; // edi
  int v15; // ecx
  int v16; // ebx
  int v17; // r9d
  PVOID v18; // rdi
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  int v21; // [rsp+90h] [rbp+40h] BYREF
  int v22; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+58h] BYREF

  P[0] = 0LL;
  v3 = 0;
  v21 = 0;
  v22 = 0;
  v4 = 0;
  v23 = 0LL;
  IsDozeSupported = PopIsDozeSupported(&PopCapabilities);
  v10 = v9 | 0x10;
  if ( IsDozeSupported )
    v10 = v9;
  v11 = v10 | 0x20;
  if ( *((_DWORD *)PopPolicy + 22) )
    v11 = v10;
  if ( (unsigned __int8)PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, &v21, &v22) )
  {
    v3 = v21;
    if ( !*a3 )
      v3 = v22;
  }
  v12 = v11 | 0x40;
  if ( v3 )
    v12 = v11;
  v13 = v12;
  if ( a3[3] && *a3 && v21 == 1 && !v22 )
    v13 = v12 | 0x100;
  v14 = MEMORY[0xFFFFF78000000008];
  if ( !(unsigned __int8)PopIsWakeTimerImmanent(MEMORY[0xFFFFF78000000008], a1, a2, (unsigned int)&v23, (__int64)P) )
    v13 |= 0x80u;
  v16 = ~PopDozeDeferralChecksToIgnore & v13;
  if ( !v16 )
  {
    v4 = 1;
    PopPrintEx(3LL, (__int64)"Deferring doze to S4\n");
  }
  v17 = v14;
  v18 = P[0];
  LOBYTE(v15) = v4;
  PopDiagTraceDozeDeferralDecision(v15, v16, P[0], v17, v23, a1, a2);
  if ( v18 )
    ExFreePoolWithTag(v18, 0x53577254u);
  return v4;
}
