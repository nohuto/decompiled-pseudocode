/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x1403DCBDC
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x1403DCAD0 (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x1405DDFFC (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x1405DE108 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
