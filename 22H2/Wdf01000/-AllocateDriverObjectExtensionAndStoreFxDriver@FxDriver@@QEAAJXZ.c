/*
 * XREFs of ?AllocateDriverObjectExtensionAndStoreFxDriver@FxDriver@@QEAAJXZ @ 0x1C005564C
 * Callers:
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0053CA0 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 * Callees:
 *     <none>
 */

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
