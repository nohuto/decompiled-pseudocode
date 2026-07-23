/*
 * XREFs of PopInitVideoWnfState @ 0x140A74124
 * Callers:
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PopInitVideoWnfState()
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  ZwUpdateWnfStateData(&WNF_PO_VIDEO_INITIALIALIZED, &PopVideoInitialized, 1u, 0LL, 0LL, 0, 0);
  ZwUpdateWnfStateData(
    &WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
    &PopVideoHighPrecisionBrightnessEnabled,
    1u,
    0LL,
    0LL,
    0,
    0);
  Buffer = 100;
  return ZwUpdateWnfStateData(&WNF_PO_BRIGHTNESS_ALS_OFFSET, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
