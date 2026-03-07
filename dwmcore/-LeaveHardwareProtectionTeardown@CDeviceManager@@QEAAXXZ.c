void __fastcall CDeviceManager::LeaveHardwareProtectionTeardown(CDeviceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = &stru_1803E7020;
  EnterCriticalSection(&stru_1803E7020);
  byte_1803E7060 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0q_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE,
      0LL);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v1);
}
