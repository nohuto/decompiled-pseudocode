__int64 __fastcall CDeviceManager::GetExistingDevice(CDeviceManager *this, struct _LUID a2, struct CD3DDevice **a3)
{
  unsigned int v3; // esi
  unsigned int v6; // ecx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v8 = &stru_1803E7020;
  EnterCriticalSection(&stru_1803E7020);
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CDeviceManager::GetAvailableDevice)(
                       &g_DeviceManager,
                       a2,
                       a3) != 1 )
  {
    v3 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802EB290, 2u, -2003304307, 0xEEu, 0LL);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v3;
}
