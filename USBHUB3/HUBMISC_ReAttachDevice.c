/*
 * XREFs of HUBMISC_ReAttachDevice @ 0x1C00311C8
 * Callers:
 *     HUBPSM30_IssuingReAttachDeviceToBootDevice @ 0x1C00121B0 (HUBPSM30_IssuingReAttachDeviceToBootDevice.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBMISC_ReAttachDevice(__int64 a1)
{
  __int64 result; // rax

  result = HUBSM_AddEvent(*(_QWORD *)(a1 + 1328) + 504LL, 4050);
  _InterlockedOr((volatile signed __int32 *)(a1 + 1336), 1u);
  *(_DWORD *)(a1 + 1424) = 9;
  return result;
}
