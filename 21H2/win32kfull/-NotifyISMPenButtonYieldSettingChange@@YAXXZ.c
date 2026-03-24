/*
 * XREFs of ?NotifyISMPenButtonYieldSettingChange@@YAXXZ @ 0x1C01D65E0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

void NotifyISMPenButtonYieldSettingChange(void)
{
  int v0; // [rsp+30h] [rbp+8h] BYREF
  BOOL v1; // [rsp+34h] [rbp+Ch]

  v0 = 2;
  v1 = (HIDWORD(gpdwCPUserPreferencesMask) & 0x200) == 0;
  SendMessageTo(17LL, &v0);
}
