/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x140589C70
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x140589CCC (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x1405A0F54 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x1405A1060 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceCommon(PVOID *P, int a2)
{
  _m_prefetchw(P + 29);
  if ( _InterlockedAnd((volatile signed __int32 *)P + 58, ~a2) == a2 )
  {
    ExFreePoolWithTag(P[28], 0x4D584650u);
    ExFreePoolWithTag(P, 0x4D584650u);
  }
}
