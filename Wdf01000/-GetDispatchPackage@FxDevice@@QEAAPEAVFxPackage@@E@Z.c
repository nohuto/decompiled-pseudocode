/*
 * XREFs of ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x1C000CF60
 * Callers:
 *     ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C000EB40 (-Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z.c)
 *     ?DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z @ 0x1C003DF94 (-DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00B9D10 (Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     <none>
 */

FxDefaultIrpHandler *__fastcall FxDevice::GetDispatchPackage(FxDevice *this, unsigned __int8 MajorFunction)
{
  FxDefaultIrpHandler *result; // rax

  if ( MajorFunction > 0xFu )
  {
    if ( MajorFunction != 16 && MajorFunction != 18 )
    {
      if ( MajorFunction != 22 )
      {
        if ( MajorFunction == 23 )
          return (FxDefaultIrpHandler *)this->m_PkgWmi;
        if ( MajorFunction != 27 )
          return this->m_PkgDefault;
      }
      result = (FxDefaultIrpHandler *)this->m_PkgPnp;
      if ( result )
        return result;
      return this->m_PkgDefault;
    }
  }
  else
  {
    if ( MajorFunction == 15 )
      return (FxDefaultIrpHandler *)this->m_PkgIo;
    if ( MajorFunction && MajorFunction != 2 )
    {
      if ( MajorFunction == 3 || MajorFunction == 4 || MajorFunction == 14 )
        return (FxDefaultIrpHandler *)this->m_PkgIo;
      return this->m_PkgDefault;
    }
  }
  return (FxDefaultIrpHandler *)this->m_PkgGeneral;
}
