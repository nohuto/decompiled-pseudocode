__int64 __fastcall CDeviceManager::GetDevice(CDeviceManager *this, struct _LUID a2, struct CD3DDevice **a3)
{
  int AvailableDevice; // eax
  unsigned int v7; // ebx
  int NewDevice; // eax
  unsigned int v10; // ecx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  AvailableDevice = CDeviceManager::GetAvailableDevice(this, a2, a3);
  if ( AvailableDevice )
  {
    v7 = -2003304307;
    if ( AvailableDevice != 2 )
      v7 = 0;
  }
  else
  {
    NewDevice = CDeviceManager::CreateNewDevice(this, a2, a3);
    v7 = NewDevice;
    if ( NewDevice < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802EB290, 2u, NewDevice, 0xC5u, 0LL);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v7;
}
