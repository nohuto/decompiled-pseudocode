/*
 * XREFs of HUBPSM30_IssuingAttachDeviceWithResetToDsm @ 0x1C00132D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_AttachDevice @ 0x1C00310F4 (HUBMISC_AttachDevice.c)
 */

__int64 __fastcall HUBPSM30_IssuingAttachDeviceWithResetToDsm(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 1328) + 1636LL), 8u);
  *(_DWORD *)(*(_QWORD *)(v1 + 1328) + 1456LL) |= 0x20800u;
  return HUBMISC_AttachDevice();
}
