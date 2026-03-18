/*
 * XREFs of NVMeDisableThrottling @ 0x1C001967C
 * Callers:
 *     NVMeControllerRemove @ 0x1C0018DF8 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C00195A8 (NVMeControllerStop.c)
 * Callees:
 *     NVMeDeRegisterThrottling @ 0x1C001CB00 (NVMeDeRegisterThrottling.c)
 */

__int64 __fastcall NVMeDisableThrottling(__int64 a1)
{
  NVMeDeRegisterThrottling(a1, 0LL);
  NVMeDeRegisterThrottling(a1, 1LL);
  NVMeDeRegisterThrottling(a1, 2LL);
  NVMeDeRegisterThrottling(a1, 3LL);
  NVMeDeRegisterThrottling(a1, 4LL);
  NVMeDeRegisterThrottling(a1, 5LL);
  NVMeDeRegisterThrottling(a1, 6LL);
  return NVMeDeRegisterThrottling(a1, 7LL);
}
