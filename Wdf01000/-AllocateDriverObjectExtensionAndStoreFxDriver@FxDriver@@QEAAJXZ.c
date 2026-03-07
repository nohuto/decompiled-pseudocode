NTSTATUS __fastcall FxDriver::AllocateDriverObjectExtensionAndStoreFxDriver(FxDriver *this)
{
  NTSTATUS result; // eax
  FxDriver **ppDriver; // [rsp+30h] [rbp+8h] BYREF

  ppDriver = 0LL;
  result = IoAllocateDriverObjectExtension(
             this->m_DriverObject.m_DriverObject,
             FxDriver::GetFxDriver,
             8u,
             (PVOID *)&ppDriver);
  if ( result >= 0 )
  {
    *ppDriver = this;
    return 0;
  }
  return result;
}
