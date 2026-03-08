/*
 * XREFs of HvlpRegisterPowerPolicyCallbacks @ 0x140544DF4
 * Callers:
 *     HvlPhase2Initialize @ 0x1403AF870 (HvlPhase2Initialize.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x14073B960 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS HvlpRegisterPowerPolicyCallbacks()
{
  GUID **v0; // rbx
  __int64 v1; // rdi
  NTSTATUS result; // eax

  if ( (HvlpEnlightenments & 0x400) != 0 )
  {
    v0 = &HvlpPowerSettingList;
    v1 = 6LL;
    do
    {
      result = PoRegisterPowerSettingCallback(
                 0LL,
                 *v0,
                 (PPOWER_SETTING_CALLBACK)HvlpPowerPolicySettingCallback,
                 (PVOID)*((int *)v0 + 2),
                 0LL);
      v0 += 2;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
