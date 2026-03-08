/*
 * XREFs of HUBMISC_DetachDevice @ 0x1C0031170
 * Callers:
 *     HUBPSM30_DetachingDeviceFromPortOnOverCurrent @ 0x1C0011C30 (HUBPSM30_DetachingDeviceFromPortOnOverCurrent.c)
 *     HUBPSM20_DetachingDeviceFromPortOnDisconnectWithTimer @ 0x1C0011C60 (HUBPSM20_DetachingDeviceFromPortOnDisconnectWithTimer.c)
 *     HUBPSM20_DetachingDeviceFromPortOnOverCurrentClearWithTimer @ 0x1C0011C90 (HUBPSM20_DetachingDeviceFromPortOnOverCurrentClearWithTimer.c)
 *     HUBPSM20_DetachingDeviceOnCleanup @ 0x1C0011CC0 (HUBPSM20_DetachingDeviceOnCleanup.c)
 *     HUBPSM30_DisablingSuperSpeedOnPortOnDeviceRequest @ 0x1C0012FB0 (HUBPSM30_DisablingSuperSpeedOnPortOnDeviceRequest.c)
 *     HUBPSM30_ReleasingResetReferenceOnDeviceRemoval @ 0x1C0013620 (HUBPSM30_ReleasingResetReferenceOnDeviceRemoval.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_DetachDevice(unsigned __int16 *a1)
{
  __int64 result; // rax

  HUBSM_AddEvent(*((_QWORD *)a1 + 166) + 504LL, 4038);
  result = *((unsigned int *)a1 + 334);
  if ( (result & 2) == 0 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1 + 416LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 248LL),
             a1[100]);
  return result;
}
