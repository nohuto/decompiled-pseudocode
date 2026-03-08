/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x140587740
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x14058779C (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x14059EA34 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x14059EB40 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
